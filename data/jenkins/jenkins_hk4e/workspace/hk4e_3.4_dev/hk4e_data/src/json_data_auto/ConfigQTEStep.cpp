// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigQTEStep.cpp

// Line 19: range 0000000011A25313-0000000011A25572
const char *__cdecl data::enumValToStr(data::QTEStepButtonInputType e)
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
    if ( e == QTE_STEP_BUTTON_INPUT_LEFT_MOVE )
    {
      result = "QTE_STEP_BUTTON_INPUT_LEFT_MOVE";
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
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
      result = (const char *)&unk_1A83C4E0;
    }
  }
  else
  {
    result = "QTE_STEP_BUTTON_INPUT_JUMP";
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

// Line 33: range 0000000011A25573-0000000011A25DAA
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepButtonInputType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepButtonInputType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonInputType> >::pointer v11; // rax
  data::QTEStepButtonInputType second; // ecx
  char v13; // dl
  data::QTEStepButtonInputType *ea; // [rsp+10h] [rbp-1E0h]
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QTEStepButtonInputType>::pair<char const(&)[27],data::QTEStepButtonInputType,true>(
        (std::pair<const std::string,data::QTEStepButtonInputType> *const)(v2 + 304),
        (const char (*)[27])"QTE_STEP_BUTTON_INPUT_JUMP",
        (data::QTEStepButtonInputType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_STEP_BUTTON_INPUT_JUMP");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QTEStepButtonInputType>::pair<char const(&)[32],data::QTEStepButtonInputType,true>(
        (std::pair<const std::string,data::QTEStepButtonInputType> *const)(v2 + 344),
        (const char (*)[32])"QTE_STEP_BUTTON_INPUT_LEFT_MOVE",
        (data::QTEStepButtonInputType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::QTEStepButtonInputType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonInputType> > *const)(v2 + 64));
      std::map<std::string,data::QTEStepButtonInputType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepButtonInputType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QTEStepButtonInputType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m);
      e = (data::QTEStepButtonInputType *)&data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepButtonInputType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepButtonInputType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonInputType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepButtonInputType> *)(v2 + 384);
            i != (std::pair<const std::string,data::QTEStepButtonInputType> *)(v2 + 304);
            std::pair<std::string const,data::QTEStepButtonInputType>::~pair(i) )
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
    *(std::map<std::string,data::QTEStepButtonInputType>::iterator *)(v2 + 112) = std::map<std::string,data::QTEStepButtonInputType>::find(
                                                                                    &data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m,
                                                                                    s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::QTEStepButtonInputType>::iterator *)(v2 + 144) = std::map<std::string,data::QTEStepButtonInputType>::end(&data::enumStrToVal(std::string const&,data::QTEStepButtonInputType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonInputType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonInputType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
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
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepButtonInputType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonInputType> > *const)(v2 + 112));
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

// Line 55: range 0000000011A25DAB-0000000011A25DDA
const char *__cdecl data::getDescription(data::QTEStepButtonInputType e)
{
  if ( e == QTE_STEP_BUTTON_INPUT_JUMP )
    return (const char *)&unk_1A8701A0;
  if ( e == QTE_STEP_BUTTON_INPUT_LEFT_MOVE )
    return (const char *)&unk_1A8701E0;
  return "unknown enum value!";
};

// Line 68: range 0000000011A25DDB-0000000011A26058
const char *__cdecl data::enumValToStr(data::QTEStepCameraPosType e)
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
  if ( e == QTE_CAMERA_POS_RELATIVE_TO_AVATAR )
  {
    result = "QTE_CAMERA_POS_RELATIVE_TO_AVATAR";
  }
  else
  {
    if ( e > QTE_CAMERA_POS_RELATIVE_TO_AVATAR )
      goto LABEL_22;
    if ( e == QTE_CAMERA_POS_NONE )
    {
      result = "QTE_CAMERA_POS_NONE";
      goto LABEL_17;
    }
    if ( e == QTE_CAMERA_POS_EXIT )
    {
      result = "QTE_CAMERA_POS_EXIT";
    }
    else
    {
LABEL_22:
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumValToStr",
        78);
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
      result = (const char *)&unk_1A83C4E0;
    }
  }
LABEL_17:
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

// Line 84: range 0000000011A26059-0000000011A2693A
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepCameraPosType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepCameraPosType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraPosType> >::pointer v11; // rax
  data::QTEStepCameraPosType second; // ecx
  char v13; // dl
  data::QTEStepCameraPosType *ea; // [rsp+10h] [rbp-220h]
  char v15[528]; // [rsp+20h] [rbp-210h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 5"
                        " it:96 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      87);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QTEStepCameraPosType>::pair<char const(&)[20],data::QTEStepCameraPosType,true>(
        (std::pair<const std::string,data::QTEStepCameraPosType> *const)(v2 + 320),
        (const char (*)[20])"QTE_CAMERA_POS_NONE",
        (data::QTEStepCameraPosType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_CAMERA_POS_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QTEStepCameraPosType>::pair<char const(&)[20],data::QTEStepCameraPosType,true>(
        (std::pair<const std::string,data::QTEStepCameraPosType> *const)(v2 + 360),
        (const char (*)[20])"QTE_CAMERA_POS_EXIT",
        (data::QTEStepCameraPosType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QTE_CAMERA_POS_EXIT");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QTEStepCameraPosType>::pair<char const(&)[34],data::QTEStepCameraPosType,true>(
        (std::pair<const std::string,data::QTEStepCameraPosType> *const)(v2 + 400),
        (const char (*)[34])"QTE_CAMERA_POS_RELATIVE_TO_AVATAR",
        (data::QTEStepCameraPosType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QTEStepCameraPosType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepCameraPosType> > *const)(v2 + 64));
      std::map<std::string,data::QTEStepCameraPosType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepCameraPosType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QTEStepCameraPosType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m);
      e = (data::QTEStepCameraPosType *)&data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepCameraPosType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepCameraPosType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepCameraPosType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepCameraPosType> *)(v2 + 440);
            i != (std::pair<const std::string,data::QTEStepCameraPosType> *)(v2 + 320);
            std::pair<std::string const,data::QTEStepCameraPosType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 320) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::QTEStepCameraPosType>::iterator *)(v2 + 128) = std::map<std::string,data::QTEStepCameraPosType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QTEStepCameraPosType>::iterator *)(v2 + 160) = std::map<std::string,data::QTEStepCameraPosType>::end(&data::enumStrToVal(std::string const&,data::QTEStepCameraPosType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraPosType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraPosType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        99);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepCameraPosType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraPosType> > *const)(v2 + 128));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 107: range 0000000011A2693B-0000000011A2697F
const char *__cdecl data::getDescription(data::QTEStepCameraPosType e)
{
  if ( e == QTE_CAMERA_POS_RELATIVE_TO_AVATAR )
    return (const char *)&unk_1A870400;
  if ( e > QTE_CAMERA_POS_RELATIVE_TO_AVATAR )
    return "unknown enum value!";
  if ( e == QTE_CAMERA_POS_NONE )
    return (const char *)&unk_1A8490A0;
  if ( e == QTE_CAMERA_POS_EXIT )
    return (const char *)&unk_1A8703C0;
  else
    return "unknown enum value!";
};

// Line 122: range 0000000011A26980-0000000011A26BDF
const char *__cdecl data::enumValToStr(data::QTEStepCameraTargetType e)
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
    if ( e == QTE_CAMERA_TAR_RELATIVE_TO_AVATAR )
    {
      result = "QTE_CAMERA_TAR_RELATIVE_TO_AVATAR";
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumValToStr",
        130);
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
      result = (const char *)&unk_1A83C4E0;
    }
  }
  else
  {
    result = "QTE_CAMERA_TAR_NONE";
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

// Line 136: range 0000000011A26BE0-0000000011A27417
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepCameraTargetType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepCameraTargetType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraTargetType> >::pointer v11; // rax
  data::QTEStepCameraTargetType second; // ecx
  char v13; // dl
  data::QTEStepCameraTargetType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:147 144 8 9 <un"
                        "known> 176 32 9 <unknown> 240 32 9 <unknown> 304 80 9 <unknown>";
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      139);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QTEStepCameraTargetType>::pair<char const(&)[20],data::QTEStepCameraTargetType,true>(
        (std::pair<const std::string,data::QTEStepCameraTargetType> *const)(v2 + 304),
        (const char (*)[20])"QTE_CAMERA_TAR_NONE",
        (data::QTEStepCameraTargetType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_CAMERA_TAR_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QTEStepCameraTargetType>::pair<char const(&)[34],data::QTEStepCameraTargetType,true>(
        (std::pair<const std::string,data::QTEStepCameraTargetType> *const)(v2 + 344),
        (const char (*)[34])"QTE_CAMERA_TAR_RELATIVE_TO_AVATAR",
        (data::QTEStepCameraTargetType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::QTEStepCameraTargetType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepCameraTargetType> > *const)(v2 + 64));
      std::map<std::string,data::QTEStepCameraTargetType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepCameraTargetType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QTEStepCameraTargetType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m);
      e = (data::QTEStepCameraTargetType *)&data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepCameraTargetType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepCameraTargetType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepCameraTargetType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepCameraTargetType> *)(v2 + 384);
            i != (std::pair<const std::string,data::QTEStepCameraTargetType> *)(v2 + 304);
            std::pair<std::string const,data::QTEStepCameraTargetType>::~pair(i) )
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
    *(std::map<std::string,data::QTEStepCameraTargetType>::iterator *)(v2 + 112) = std::map<std::string,data::QTEStepCameraTargetType>::find(
                                                                                     &data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m,
                                                                                     s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::QTEStepCameraTargetType>::iterator *)(v2 + 144) = std::map<std::string,data::QTEStepCameraTargetType>::end(&data::enumStrToVal(std::string const&,data::QTEStepCameraTargetType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraTargetType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraTargetType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        150);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepCameraTargetType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCameraTargetType> > *const)(v2 + 112));
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

// Line 158: range 0000000011A27418-0000000011A27447
const char *__cdecl data::getDescription(data::QTEStepCameraTargetType e)
{
  if ( e == QTE_CAMERA_TAR_NONE )
    return (const char *)&unk_1A8490A0;
  if ( e == QTE_CAMERA_TAR_RELATIVE_TO_AVATAR )
    return (const char *)&unk_1A870580;
  return "unknown enum value!";
};

// Line 171: range 0000000011A27448-0000000011A276C5
const char *__cdecl data::enumValToStr(data::QTEStepCondType e)
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
  if ( e == QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE )
  {
    result = "QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE";
  }
  else
  {
    if ( e > QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE )
      goto LABEL_22;
    if ( e == QTE_STEP_COND_NONE )
    {
      result = "QTE_STEP_COND_NONE";
      goto LABEL_17;
    }
    if ( e == QTE_STEP_COND_POWER_BAR_VALUE )
    {
      result = "QTE_STEP_COND_POWER_BAR_VALUE";
    }
    else
    {
LABEL_22:
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumValToStr",
        181);
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
      result = (const char *)&unk_1A83C4E0;
    }
  }
LABEL_17:
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

// Line 187: range 0000000011A276C6-0000000011A27FA7
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepCondType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepCondType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCondType> >::pointer v11; // rax
  data::QTEStepCondType second; // ecx
  char v13; // dl
  data::QTEStepCondType *ea; // [rsp+10h] [rbp-220h]
  char v15[528]; // [rsp+20h] [rbp-210h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 6"
                        " it:199 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      190);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QTEStepCondType>::pair<char const(&)[19],data::QTEStepCondType,true>(
        (std::pair<const std::string,data::QTEStepCondType> *const)(v2 + 320),
        (const char (*)[19])"QTE_STEP_COND_NONE",
        (data::QTEStepCondType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_STEP_COND_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QTEStepCondType>::pair<char const(&)[30],data::QTEStepCondType,true>(
        (std::pair<const std::string,data::QTEStepCondType> *const)(v2 + 360),
        (const char (*)[30])"QTE_STEP_COND_POWER_BAR_VALUE",
        (data::QTEStepCondType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QTE_STEP_COND_POWER_BAR_VALUE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QTEStepCondType>::pair<char const(&)[38],data::QTEStepCondType,true>(
        (std::pair<const std::string,data::QTEStepCondType> *const)(v2 + 400),
        (const char (*)[38])"QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE",
        (data::QTEStepCondType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QTEStepCondType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepCondType> > *const)(v2 + 64));
      std::map<std::string,data::QTEStepCondType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepCondType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QTEStepCondType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m);
      e = (data::QTEStepCondType *)&data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepCondType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepCondType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepCondType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepCondType> *)(v2 + 440);
            i != (std::pair<const std::string,data::QTEStepCondType> *)(v2 + 320);
            std::pair<std::string const,data::QTEStepCondType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 320) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::QTEStepCondType>::iterator *)(v2 + 128) = std::map<std::string,data::QTEStepCondType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QTEStepCondType>::iterator *)(v2 + 160) = std::map<std::string,data::QTEStepCondType>::end(&data::enumStrToVal(std::string const&,data::QTEStepCondType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCondType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCondType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        202);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepCondType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepCondType> > *const)(v2 + 128));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 210: range 0000000011A27FA8-0000000011A27FEC
const char *__cdecl data::getDescription(data::QTEStepCondType e)
{
  if ( e == QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE )
    return (const char *)&unk_1A870800;
  if ( e > QTE_STEP_COND_BUTTON_COUNT_DOWN_VALUE )
    return "unknown enum value!";
  if ( e == QTE_STEP_COND_NONE )
    return (const char *)&unk_1A870780;
  if ( e == QTE_STEP_COND_POWER_BAR_VALUE )
    return (const char *)&unk_1A8707C0;
  else
    return "unknown enum value!";
};

// Line 225: range 0000000011A27FED-0000000011A282E3
const char *__cdecl data::enumValToStr(data::QTEStepActionType e)
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
  switch ( e )
  {
    case QTE_STEP_ACTION_NONE:
      result = "QTE_STEP_ACTION_NONE";
      break;
    case QTE_STEP_ACTION_SUCCESS:
      result = "QTE_STEP_ACTION_SUCCESS";
      break;
    case QTE_STEP_ACTION_FAIL:
      result = "QTE_STEP_ACTION_FAIL";
      break;
    case QTE_STEP_ACTION_POWER_BAR_VALUE_CHANGE:
      result = "QTE_STEP_ACTION_POWER_BAR_VALUE_CHANGE";
      break;
    case QTE_STEP_ACTION_POWER_BAR_PRESS_DOWN:
      result = "QTE_STEP_ACTION_POWER_BAR_PRESS_DOWN";
      break;
    case QTE_STEP_ACTION_AVATAR_SHAKE_HEAD:
      result = "QTE_STEP_ACTION_AVATAR_SHAKE_HEAD";
      break;
    case QTE_STEP_ACTION_PLAY_AUDIO:
      result = "QTE_STEP_ACTION_PLAY_AUDIO";
      break;
    case QTE_STEP_ACTION_CAMERA_MOVE:
      result = "QTE_STEP_ACTION_CAMERA_MOVE";
      break;
    case QTE_STEP_ACTION_EMOTION:
      result = "QTE_STEP_ACTION_EMOTION";
      break;
    case QTE_STEP_ACTION_CUTSCENE_FAILED_BLACK_SCREEN:
      result = "QTE_STEP_ACTION_CUTSCENE_FAILED_BLACK_SCREEN";
      break;
    case QTE_STEP_ACTION_CUTSCENE_TIME_SCALE_RESET:
      result = "QTE_STEP_ACTION_CUTSCENE_TIME_SCALE_RESET";
      break;
    case QTE_STEP_ACTION_CUTSCENE_JUMP_POINT:
      result = "QTE_STEP_ACTION_CUTSCENE_JUMP_POINT";
      break;
    default:
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumValToStr",
        253);
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
      result = (const char *)&unk_1A83C4E0;
      break;
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

// Line 259: range 0000000011A282E4-0000000011A29169
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepActionType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepActionType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepActionType> >::pointer v10; // rax
  data::QTEStepActionType second; // ecx
  char v12; // dl
  data::QTEStepActionType *ea; // [rsp+10h] [rbp-420h]
  char v14[1040]; // [rsp+20h] [rbp-410h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(992LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "19 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:280 288 8 9 <unknown> 320 3"
                        "2 9 <unknown> 384 32 9 <unknown> 448 480 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862749] = -202116109;
  v4[536862750] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 127) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 320),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      262);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[21],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 448),
        (const char (*)[21])"QTE_STEP_ACTION_NONE",
        (data::QTEStepActionType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QTE_STEP_ACTION_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[24],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 488),
        (const char (*)[24])"QTE_STEP_ACTION_SUCCESS",
        (data::QTEStepActionType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_STEP_ACTION_SUCCESS");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[21],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 528),
        (const char (*)[21])"QTE_STEP_ACTION_FAIL",
        (data::QTEStepActionType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QTE_STEP_ACTION_FAIL");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[39],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 568),
        (const char (*)[39])"QTE_STEP_ACTION_POWER_BAR_VALUE_CHANGE",
        (data::QTEStepActionType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "QTE_STEP_ACTION_POWER_BAR_VALUE_CHANGE");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[37],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 608),
        (const char (*)[37])"QTE_STEP_ACTION_POWER_BAR_PRESS_DOWN",
        (data::QTEStepActionType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "QTE_STEP_ACTION_POWER_BAR_PRESS_DOWN");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[34],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 648),
        (const char (*)[34])"QTE_STEP_ACTION_AVATAR_SHAKE_HEAD",
        (data::QTEStepActionType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "QTE_STEP_ACTION_AVATAR_SHAKE_HEAD");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[27],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 688),
        (const char (*)[27])"QTE_STEP_ACTION_PLAY_AUDIO",
        (data::QTEStepActionType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "QTE_STEP_ACTION_PLAY_AUDIO");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[28],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 728),
        (const char (*)[28])"QTE_STEP_ACTION_CAMERA_MOVE",
        (data::QTEStepActionType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "QTE_STEP_ACTION_CAMERA_MOVE");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[24],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 768),
        (const char (*)[24])"QTE_STEP_ACTION_EMOTION",
        (data::QTEStepActionType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "QTE_STEP_ACTION_EMOTION");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[45],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 808),
        (const char (*)[45])"QTE_STEP_ACTION_CUTSCENE_FAILED_BLACK_SCREEN",
        (data::QTEStepActionType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "QTE_STEP_ACTION_CUTSCENE_FAILED_BLACK_SCREEN");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[42],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 848),
        (const char (*)[42])"QTE_STEP_ACTION_CUTSCENE_TIME_SCALE_RESET",
        (data::QTEStepActionType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "QTE_STEP_ACTION_CUTSCENE_TIME_SCALE_RESET");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::QTEStepActionType>::pair<char const(&)[36],data::QTEStepActionType,true>(
        (std::pair<const std::string,data::QTEStepActionType> *const)(v2 + 888),
        (const char (*)[36])"QTE_STEP_ACTION_CUTSCENE_JUMP_POINT",
        (data::QTEStepActionType *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::QTEStepActionType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepActionType> > *const)(v2 + 48));
      std::map<std::string,data::QTEStepActionType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepActionType> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QTEStepActionType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepActionType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepActionType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepActionType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepActionType> *)(v2 + 928);
            i != (std::pair<const std::string,data::QTEStepActionType> *)(v2 + 448);
            std::pair<std::string const,data::QTEStepActionType>::~pair(i) )
      {
        --i;
      }
      e = (data::QTEStepActionType *)480;
      __asan_poison_stack_memory(v2 + 448, 480LL);
      *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, e);
    *(std::map<std::string,data::QTEStepActionType>::iterator *)(v2 + 256) = std::map<std::string,data::QTEStepActionType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::QTEStepActionType>::iterator *)(v2 + 288) = std::map<std::string,data::QTEStepActionType>::end(&data::enumStrToVal(std::string const&,data::QTEStepActionType &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepActionType> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepActionType> >::_Self *)(v2 + 288));
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        283);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepActionType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepActionType> > *const)(v2 + 256));
      if ( *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v10->second >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v10->second);
      }
      second = v10->second;
      v12 = *(_BYTE *)(((unsigned __int64)ea >> 3) + 0x7FFF8000);
      if ( v12 != 0 && (char)(((unsigned __int8)ea & 7) + 3) >= v12 )
      {
        LOBYTE(v7) = v12 != 0;
        __asan_report_store4(ea, v7);
      }
      *ea = second;
      result = 1;
    }
  }
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = -168430091;
  }
  return result;
};

// Line 291: range 0000000011A2916A-0000000011A29212
const char *__cdecl data::getDescription(data::QTEStepActionType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QTE_STEP_ACTION_NONE:
      result = (const char *)&unk_1A870780;
      break;
    case QTE_STEP_ACTION_SUCCESS:
      result = (const char *)&unk_1A870DA0;
      break;
    case QTE_STEP_ACTION_FAIL:
      result = (const char *)&unk_1A870DE0;
      break;
    case QTE_STEP_ACTION_POWER_BAR_VALUE_CHANGE:
      result = (const char *)&unk_1A870E20;
      break;
    case QTE_STEP_ACTION_POWER_BAR_PRESS_DOWN:
      result = (const char *)&unk_1A870E60;
      break;
    case QTE_STEP_ACTION_AVATAR_SHAKE_HEAD:
      result = (const char *)&unk_1A870EA0;
      break;
    case QTE_STEP_ACTION_PLAY_AUDIO:
      result = (const char *)&unk_1A870EE0;
      break;
    case QTE_STEP_ACTION_CAMERA_MOVE:
      result = (const char *)&unk_1A870F20;
      break;
    case QTE_STEP_ACTION_EMOTION:
      result = (const char *)&unk_1A870F60;
      break;
    case QTE_STEP_ACTION_CUTSCENE_FAILED_BLACK_SCREEN:
      result = (const char *)&unk_1A870FA0;
      break;
    case QTE_STEP_ACTION_CUTSCENE_TIME_SCALE_RESET:
      result = (const char *)&unk_1A870FE0;
      break;
    case QTE_STEP_ACTION_CUTSCENE_JUMP_POINT:
      result = (const char *)&unk_1A871020;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 325: range 0000000011A29213-0000000011A29448
data::ConfigQTEStepBaseCondPtr __cdecl data::createConfigQTEStepBaseCond(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigQTEStepBaseCondPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::_Base_ptr)"2 32 8 6 it:326 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::_Base_ptr)data::createConfigQTEStepBaseCond;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::find(
                    &data::g_ConfigQTEStepBaseCondMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::end(&data::g_ConfigQTEStepBaseCondMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseCond>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 332: range 0000000011A2944A-0000000011A29556
void __cdecl data::ConfigQTEStepBaseCond::foreachMember(
        data::ConfigQTEStepBaseCond *const this,
        std::function<void(std::any&)> *p_func)
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
  *(_QWORD *)(v2 + 8) = "1 32 16 17 cond_type_any:333";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseCond::foreachMember;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  std::any::any<data::QTEStepCondType &,data::QTEStepCondType,std::any::_Manager_internal<data::QTEStepCondType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->cond_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::~any((std::any *const)(v2 + 32));
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

// Line 338: range 0000000011A29558-0000000011A295A2
std::shared_ptr<data::ConfigQTEStepBaseCond> __cdecl data::ConfigQTEStepBaseCond::clone(
        data::ConfigQTEStepBaseCond *const this)
{
  data::ConfigQTEStepBaseCond *v1; // rsi
  std::shared_ptr<data::ConfigQTEStepBaseCond> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepBaseCond,data::ConfigQTEStepBaseCond&>(
    (common::tools::perf::allocator<data::ConfigQTEStepBaseCond,data::ConfigQTEStepBaseCond> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 342: range 0000000011A295A4-0000000011A29A06
bool __cdecl data::ConfigQTEStepBaseCond::fromJson(data::ConfigQTEStepBaseCond *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *cond_type_ptr; // [rsp+18h] [rbp-138h]
  char v10[304]; // [rsp+20h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseCond::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "condType",
    (const std::allocator<char> *)(v2 + 48));
  cond_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !cond_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)cond_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->cond_type);
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      352);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[30])"fromJson for: condType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
LABEL_11:
    v7 = ((_BYTE)this + 28) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_store1(&this->is_json_loaded, v7, v8);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 359: range 0000000011A29A08-0000000011A2A364
data::ConfigQTEStepBaseCondPtr __cdecl data::ConfigQTEStepBaseCond::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepBaseCondPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:372 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:366 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseCond::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        369);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[49])"fromJson for: ConfigQTEStepBaseCond $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseCond((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseCond>(
             (const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          375);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[47])"create ConfigQTEStepBaseCond fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            380);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)jval,
            0LL);
        }
        else
        {
          v10 = std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
          if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
          {
            LOBYTE(v1) = v11 != 0;
            __asan_report_store1(&v10->is_json_loaded, v1, v10);
          }
          v10->is_json_loaded = 1;
          std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)jval,
            (std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigQTEStepBaseCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseCond> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      363);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[54])"jsonValueFind for: ConfigQTEStepBaseCond $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 388: range 0000000011A2A366-0000000011A2A4CC
int32_t __cdecl data::ConfigQTEStepBaseCond::getHashValue(const data::ConfigQTEStepBaseCond *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:389";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseCond::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cond_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cond_type);
  }
  common::tools::HashUtils::appendHash(this->cond_type, (int32_t *)(v2 + 32));
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

// Line 398: range 0000000011A7C722-0000000011A7C963
void __cdecl data::ConfigQTEStepPowerBarCondRegister::ConfigQTEStepPowerBarCondRegister(
        data::ConfigQTEStepPowerBarCondRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseCond> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarCondRegister::ConfigQTEStepPowerBarCondRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarCond>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepPowerBarCond",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::operator[](
         &data::g_ConfigQTEStepBaseCondMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseCond>::operator=<data::ConfigQTEStepPowerBarCond>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepPowerBarCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)(v1 + 64));
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

// Line 401: range 0000000011A2A4CE-0000000011A2A724
void __cdecl data::ConfigQTEStepPowerBarCond::foreachMember(
        data::ConfigQTEStepPowerBarCond *const this,
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
  *(_QWORD *)(v2 + 8) = "3 32 16 18 order_type_any:403 64 16 13 value_any:405 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarCond::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigQTEStepBaseCond::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::OrderingType &,data::OrderingType,std::any::_Manager_internal<data::OrderingType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->order_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 64),
    &this->value);
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

// Line 410: range 0000000011A2A726-0000000011A2A836
std::shared_ptr<data::ConfigQTEStepBaseCond> __cdecl data::ConfigQTEStepPowerBarCond::clone(
        data::ConfigQTEStepPowerBarCond *const this)
{
  data::ConfigQTEStepPowerBarCond *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseCond> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarCond::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarCond,data::ConfigQTEStepPowerBarCond&>(
    (common::tools::perf::allocator<data::ConfigQTEStepPowerBarCond,data::ConfigQTEStepPowerBarCond> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr<data::ConfigQTEStepPowerBarCond,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)this,
    (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepPowerBarCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)(v2 + 32));
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

// Line 414: range 0000000011A2A838-0000000011A2A87B
data::ConfigQTEStepPowerBarCondPtr __cdecl data::ConfigQTEStepPowerBarCondFactory::create(
        data::ConfigQTEStepPowerBarCondFactory *const this)
{
  data::ConfigQTEStepPowerBarCondPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepPowerBarCond>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 416: range 0000000011A2A87C-0000000011A2B09A
bool __cdecl data::ConfigQTEStepPowerBarCond::fromJson(
        data::ConfigQTEStepPowerBarCond *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *order_type_ptr; // [rsp+10h] [rbp-200h]
  const Json::Value *value_ptr; // [rsp+18h] [rbp-1F8h]
  char v11[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarCond::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  if ( !data::ConfigQTEStepBaseCond::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      419);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[43])"fromJson for: ConfigQTEStepBaseCond fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "orderType",
      (const std::allocator<char> *)(v2 + 32));
    order_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !order_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)order_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->order_type);
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        431);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: orderType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        "value",
        (const std::allocator<char> *)(v2 + 48));
      value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( value_ptr && !fromJson<unsigned int>(value_ptr, &this->value) )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          443);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 384),
          (const char (*)[27])"fromJson for: value fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        result = 0;
      }
      else
      {
        v7 = ((_BYTE)this + 28) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&this->is_json_loaded, v7, v8);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 450: range 0000000011A2B09C-0000000011A2BBE9
data::ConfigQTEStepPowerBarCondPtr __cdecl data::ConfigQTEStepPowerBarCond::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepPowerBarCondPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:463 96 16 7 ptr:469 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:457 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarCond::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        460);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigQTEStepPowerBarCond $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseCond((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseCond>(
             (const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          466);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigQTEStepBaseCond fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepPowerBarCond,data::ConfigQTEStepBaseCond>((const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepPowerBarCond>(
               (const std::shared_ptr<data::ConfigQTEStepPowerBarCond> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            472);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigQTEStepPowerBarCondPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              477);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepPowerBarCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseCond> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      454);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigQTEStepPowerBarCond $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepPowerBarCond>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepPowerBarCond> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarCond,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 485: range 0000000011A2BBEA-0000000011A2BDAC
int32_t __cdecl data::ConfigQTEStepPowerBarCond::getHashValue(const data::ConfigQTEStepPowerBarCond *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:486";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarCond::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseCond::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->order_type);
  }
  common::tools::HashUtils::appendHash(this->order_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->value);
  }
  common::tools::HashUtils::appendHash(this->value, (int32_t *)(v2 + 32));
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

// Line 496: range 0000000011A7C9DC-0000000011A7CC1D
void __cdecl data::ConfigQTEButtonCountDownValueCondRegister::ConfigQTEButtonCountDownValueCondRegister(
        data::ConfigQTEButtonCountDownValueCondRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseCond> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEButtonCountDownValueCondRegister::ConfigQTEButtonCountDownValueCondRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEButtonCountDownValueCond>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEButtonCountDownValueCond",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::operator[](
         &data::g_ConfigQTEStepBaseCondMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseCond>::operator=<data::ConfigQTEButtonCountDownValueCond>(
    v4,
    (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)(v1 + 64));
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

// Line 499: range 0000000011A2BDAE-0000000011A2C004
void __cdecl data::ConfigQTEButtonCountDownValueCond::foreachMember(
        data::ConfigQTEButtonCountDownValueCond *const this,
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
  *(_QWORD *)(v2 + 8) = "3 32 16 18 order_type_any:501 64 16 13 value_any:503 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEButtonCountDownValueCond::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 96), p_func);
  data::ConfigQTEStepBaseCond::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 96));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::OrderingType &,data::OrderingType,std::any::_Manager_internal<data::OrderingType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->order_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->value);
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

// Line 508: range 0000000011A2C006-0000000011A2C116
std::shared_ptr<data::ConfigQTEStepBaseCond> __cdecl data::ConfigQTEButtonCountDownValueCond::clone(
        data::ConfigQTEButtonCountDownValueCond *const this)
{
  data::ConfigQTEButtonCountDownValueCond *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseCond> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEButtonCountDownValueCond::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEButtonCountDownValueCond,data::ConfigQTEButtonCountDownValueCond&>(
    (common::tools::perf::allocator<data::ConfigQTEButtonCountDownValueCond,data::ConfigQTEButtonCountDownValueCond> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseCond>::shared_ptr<data::ConfigQTEButtonCountDownValueCond,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseCond> *const)this,
    (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)(v2 + 32));
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

// Line 512: range 0000000011A2C118-0000000011A2C15B
data::ConfigQTEButtonCountDownValueCondPtr __cdecl data::ConfigQTEButtonCountDownValueCondFactory::create(
        data::ConfigQTEButtonCountDownValueCondFactory *const this)
{
  data::ConfigQTEButtonCountDownValueCondPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEButtonCountDownValueCond>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 514: range 0000000011A2C15C-0000000011A2C97A
bool __cdecl data::ConfigQTEButtonCountDownValueCond::fromJson(
        data::ConfigQTEButtonCountDownValueCond *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *order_type_ptr; // [rsp+10h] [rbp-200h]
  const Json::Value *value_ptr; // [rsp+18h] [rbp-1F8h]
  char v11[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEButtonCountDownValueCond::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -202116109;
  if ( !data::ConfigQTEStepBaseCond::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      517);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[43])"fromJson for: ConfigQTEStepBaseCond fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "orderType",
      (const std::allocator<char> *)(v2 + 32));
    order_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !order_type_ptr )
      goto LABEL_15;
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 192), (Json::Value_0 *)order_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 192), &this->order_type);
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        529);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: orderType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
LABEL_15:
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        "value",
        (const std::allocator<char> *)(v2 + 48));
      value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( value_ptr && !fromJson<float>(value_ptr, &this->value) )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          541);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 384),
          (const char (*)[27])"fromJson for: value fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        result = 0;
      }
      else
      {
        v7 = ((_BYTE)this + 28) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&this->is_json_loaded, v7, v8);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF800C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 548: range 0000000011A2C97C-0000000011A2D4C9
data::ConfigQTEButtonCountDownValueCondPtr __cdecl data::ConfigQTEButtonCountDownValueCond::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEButtonCountDownValueCondPtr result; // rax
  common::milog::MiLogStream *v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  common::milog::MiLogStream *v9; // rax
  std::__shared_ptr_access<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:561 96 16 7 ptr:567 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:555 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEButtonCountDownValueCond::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        558);
      common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[61])"fromJson for: ConfigQTEButtonCountDownValueCond $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseCond((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseCond>(
             (const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          564);
        v6 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[47])"create ConfigQTEStepBaseCond fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEButtonCountDownValueCond,data::ConfigQTEStepBaseCond>((const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEButtonCountDownValueCond>(
               (const std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            570);
          common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[52])"cast to ConfigQTEButtonCountDownValueCondPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              575);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
              0LL);
          }
          else
          {
            v10 = std::__shared_ptr_access<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)&v10->is_json_loaded >> 3) + 0x7FFF8000);
            if ( v11 != 0 && (((unsigned __int8)v10 + 28) & 7) >= v11 )
            {
              LOBYTE(v1) = v11 != 0;
              __asan_report_store1(&v10->is_json_loaded, v1, v10);
            }
            v10->is_json_loaded = 1;
            std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
              (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseCond> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      552);
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[66])"jsonValueFind for: ConfigQTEButtonCountDownValueCond $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEButtonCountDownValueCond>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEButtonCountDownValueCond> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEButtonCountDownValueCond,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 583: range 0000000011A2D4CA-0000000011A2D68E
int32_t __cdecl data::ConfigQTEButtonCountDownValueCond::getHashValue(
        const data::ConfigQTEButtonCountDownValueCond *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:584";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEButtonCountDownValueCond::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseCond::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->order_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->order_type);
  }
  common::tools::HashUtils::appendHash(this->order_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->value);
  }
  common::tools::HashUtils::appendHash(this->value, (int32_t *)(v2 + 32));
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

// Line 591: range 0000000011A2D68F-0000000011A2D9F0
bool __cdecl data::vecFromJson(const Json::Value *jval, data::QTEStepCondList *v)
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
  *(_QWORD *)(v2 + 8) = "2 32 16 12 elem_ptr:597 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
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
      data::ConfigQTEStepBaseCond::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigQTEStepBaseCond>(
             (const std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v2 + 32),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "vecFromJson",
          600);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[37])"elem_ptr is nullptr: QTEStepCondList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigQTEStepBaseCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseCond> *const)(v2 + 32));
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

// Line 610: range 0000000011A2D9F1-0000000011A2DCAC
int32_t __cdecl data::getVecHashValue(const data::QTEStepCondList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigQTEStepBaseCond> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:611 64 8 15 __for_begin:612 96 8 13 __for_end:612";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
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
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigQTEStepBaseCond> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseCond>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseCond>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseCond> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseCond>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigQTEStepBaseCond>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseCond,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseCond> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseCond>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseCond>> > *const)(v2 + 64));
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

// Line 624: range 0000000011A2DCAE-0000000011A2E38E
bool __cdecl data::ConfigQTEStepCondGroup::fromJson(data::ConfigQTEStepCondGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  data::QTEStepCondList *p_step_cond_list; // rsi
  Json::Value *cond_comb_type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *step_cond_list_ptr; // [rsp+18h] [rbp-1B8h]
  char v11[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCondGroup::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "condCombType",
    (const std::allocator<char> *)(v2 + 32));
  cond_comb_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !cond_comb_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)cond_comb_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->cond_comb_type);
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      634);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[34])"fromJson for: condCombType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "stepCondList",
      (const std::allocator<char> *)(v2 + 48));
    p_step_cond_list = (data::QTEStepCondList *)(v2 + 256);
    step_cond_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( step_cond_list_ptr
      && (p_step_cond_list = &this->step_cond_list, !data::vecFromJson(step_cond_list_ptr, &this->step_cond_list)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        646);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[34])"fromJson for: stepCondList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_step_cond_list, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 654: range 0000000011A2E390-0000000011A2E514
int32_t __cdecl data::ConfigQTEStepCondGroup::getHashValue(const data::ConfigQTEStepCondGroup *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:655";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCondGroup::getHashValue;
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
  common::tools::HashUtils::appendHash(this->cond_comb_type, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->step_cond_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 663: range 0000000011A2E515-0000000011A2E74A
data::ConfigQTEStepBaseActionPtr __cdecl data::createConfigQTEStepBaseAction(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigQTEStepBaseActionPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::_Base_ptr)"2 32 8 6 it:664 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::_Base_ptr)data::createConfigQTEStepBaseAction;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::find(
                    &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::end(&data::g_ConfigQTEStepBaseActionMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseAction>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 670: range 0000000011A2E74C-0000000011A2E8D5
void __cdecl data::ConfigQTEStepBaseAction::foreachMember(
        data::ConfigQTEStepBaseAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 19 action_type_any:671 64 16 16 duration_any:673";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -202178560;
  std::any::any<data::QTEStepActionType &,data::QTEStepActionType,std::any::_Manager_internal<data::QTEStepActionType>,true,true>(
    (std::any *const)(v2 + 32),
    &this->action_type);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>((std::any *const)(v2 + 64), &this->duration);
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

// Line 678: range 0000000011A2E8D6-0000000011A2E920
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepBaseAction::clone(
        data::ConfigQTEStepBaseAction *const this)
{
  data::ConfigQTEStepBaseAction *v1; // rsi
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepBaseAction,data::ConfigQTEStepBaseAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepBaseAction,data::ConfigQTEStepBaseAction> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 682: range 0000000011A2E922-0000000011A2F006
bool __cdecl data::ConfigQTEStepBaseAction::fromJson(
        data::ConfigQTEStepBaseAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  float *p_duration; // rsi
  Json::Value *action_type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *duration_ptr; // [rsp+18h] [rbp-1B8h]
  char v11[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "actionType",
    (const std::allocator<char> *)(v2 + 32));
  action_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !action_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)action_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->action_type);
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      692);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[32])"fromJson for: actionType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "duration",
      (const std::allocator<char> *)(v2 + 48));
    p_duration = (float *)(v2 + 256);
    duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( duration_ptr && (p_duration = &this->duration, !fromJson<float>(duration_ptr, &this->duration)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        704);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[30])"fromJson for: duration fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_duration, &this->is_json_loaded);
      this->is_json_loaded = 1;
      result = 1;
    }
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 711: range 0000000011A2F008-0000000011A2F95D
data::ConfigQTEStepBaseActionPtr __cdecl data::ConfigQTEStepBaseAction::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepBaseActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 7 ptr:724 96 32 9 <unknown> 160 32 9 <unknown> 224 32 13 type_name:718 "
                        "288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        721);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[51])"fromJson for: ConfigQTEStepBaseAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          727);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            732);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 32, v1, v12);
          *(_BYTE *)(v10 + 32) = 1;
          std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)jval,
            (std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      715);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[56])"jsonValueFind for: ConfigQTEStepBaseAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 740: range 0000000011A2F95E-0000000011A2FB17
int32_t __cdecl data::ConfigQTEStepBaseAction::getHashValue(const data::ConfigQTEStepBaseAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:741";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->action_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->action_type);
  }
  common::tools::HashUtils::appendHash(this->action_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->duration >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->duration);
  }
  common::tools::HashUtils::appendHash(this->duration, (int32_t *)(v2 + 32));
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

// Line 751: range 0000000011A7CD1A-0000000011A7CF5B
void __cdecl data::ConfigQTEStepPowerBarActionRegister::ConfigQTEStepPowerBarActionRegister(
        data::ConfigQTEStepPowerBarActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarActionRegister::ConfigQTEStepPowerBarActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepPowerBarAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepPowerBarAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepPowerBarAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)(v1 + 64));
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

// Line 754: range 0000000011A2FB18-0000000011A2FCE8
void __cdecl data::ConfigQTEStepPowerBarAction::foreachMember(
        data::ConfigQTEStepPowerBarAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 20 change_value_any:756 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigQTEStepBaseAction::foreachMember(
    (data::ConfigQTEStepBaseAction *const)this,
    (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 32), &this->change_value);
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

// Line 761: range 0000000011A2FCEA-0000000011A2FDFA
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepPowerBarAction::clone(
        data::ConfigQTEStepPowerBarAction *const this)
{
  data::ConfigQTEStepPowerBarAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarAction,data::ConfigQTEStepPowerBarAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepPowerBarAction,data::ConfigQTEStepPowerBarAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepPowerBarAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepPowerBarAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 765: range 0000000011A2FDFC-0000000011A2FE3F
data::ConfigQTEStepPowerBarActionPtr __cdecl data::ConfigQTEStepPowerBarActionFactory::create(
        data::ConfigQTEStepPowerBarActionFactory *const this)
{
  data::ConfigQTEStepPowerBarActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepPowerBarAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 767: range 0000000011A2FE40-0000000011A302C4
bool __cdecl data::ConfigQTEStepPowerBarAction::fromJson(
        data::ConfigQTEStepPowerBarAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  int32_t *p_change_value; // rsi
  const Json::Value *change_value_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigQTEStepBaseAction::fromJson((data::ConfigQTEStepBaseAction *const)this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      770);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigQTEStepBaseAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "changeValue",
      (const std::allocator<char> *)(v2 + 48));
    p_change_value = (int32_t *)(v2 + 128);
    change_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( change_value_ptr
      && (p_change_value = &this->change_value, !fromJson<int>(change_value_ptr, &this->change_value)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        782);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[33])"fromJson for: changeValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_change_value, &this->is_json_loaded);
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

// Line 789: range 0000000011A302C6-0000000011A30E0C
data::ConfigQTEStepPowerBarActionPtr __cdecl data::ConfigQTEStepPowerBarAction::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepPowerBarActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:802 96 16 7 ptr:808 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:796 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        799);
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[55])"fromJson for: ConfigQTEStepPowerBarAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          805);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepPowerBarAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepPowerBarAction>(
               (const std::shared_ptr<data::ConfigQTEStepPowerBarAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            811);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[46])"cast to ConfigQTEStepPowerBarActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              816);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepPowerBarAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      793);
    common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[60])"jsonValueFind for: ConfigQTEStepPowerBarAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepPowerBarAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepPowerBarAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 824: range 0000000011A30E0E-0000000011A30F87
int32_t __cdecl data::ConfigQTEStepPowerBarAction::getHashValue(const data::ConfigQTEStepPowerBarAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:825";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseAction::getHashValue((const data::ConfigQTEStepBaseAction *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->change_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->change_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->change_value);
  }
  common::tools::HashUtils::appendHash(this->change_value, (int32_t *)(v2 + 32));
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

// Line 834: range 0000000011A7CFD4-0000000011A7D215
void __cdecl data::ConfigQTEStepPlayAudioActionRegister::ConfigQTEStepPlayAudioActionRegister(
        data::ConfigQTEStepPlayAudioActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPlayAudioActionRegister::ConfigQTEStepPlayAudioActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPlayAudioAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepPlayAudioAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepPlayAudioAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)(v1 + 64));
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

// Line 837: range 0000000011A30F88-0000000011A31158
void __cdecl data::ConfigQTEStepPlayAudioAction::foreachMember(
        data::ConfigQTEStepPlayAudioAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 18 audio_name_any:839 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPlayAudioAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigQTEStepBaseAction::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 32),
    &this->audio_name);
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

// Line 844: range 0000000011A3115A-0000000011A3126A
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepPlayAudioAction::clone(
        data::ConfigQTEStepPlayAudioAction *const this)
{
  data::ConfigQTEStepPlayAudioAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPlayAudioAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPlayAudioAction,data::ConfigQTEStepPlayAudioAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepPlayAudioAction,data::ConfigQTEStepPlayAudioAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepPlayAudioAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)(v2 + 32));
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

// Line 848: range 0000000011A3126C-0000000011A312AF
data::ConfigQTEStepPlayAudioActionPtr __cdecl data::ConfigQTEStepPlayAudioActionFactory::create(
        data::ConfigQTEStepPlayAudioActionFactory *const this)
{
  data::ConfigQTEStepPlayAudioActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepPlayAudioAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 850: range 0000000011A312B0-0000000011A31734
bool __cdecl data::ConfigQTEStepPlayAudioAction::fromJson(
        data::ConfigQTEStepPlayAudioAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_audio_name; // rsi
  const Json::Value *audio_name_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPlayAudioAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigQTEStepBaseAction::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      853);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigQTEStepBaseAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "audioName",
      (const std::allocator<char> *)(v2 + 48));
    p_audio_name = (std::string *)(v2 + 128);
    audio_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( audio_name_ptr && (p_audio_name = &this->audio_name, !fromJson<std::string>(audio_name_ptr, &this->audio_name)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        865);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[31])"fromJson for: audioName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_audio_name, &this->is_json_loaded);
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

// Line 872: range 0000000011A31736-0000000011A3227C
data::ConfigQTEStepPlayAudioActionPtr __cdecl data::ConfigQTEStepPlayAudioAction::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepPlayAudioActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 12 base_ptr:885 96 16 7 ptr:891 128 32 9 <unknown> 192 32 9 <unknown> "
                        "256 32 13 type_name:879 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPlayAudioAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        882);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[56])"fromJson for: ConfigQTEStepPlayAudioAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          888);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepPlayAudioAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepPlayAudioAction>(
               (const std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            894);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[47])"cast to ConfigQTEStepPlayAudioActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              899);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      876);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[61])"jsonValueFind for: ConfigQTEStepPlayAudioAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepPlayAudioAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepPlayAudioAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPlayAudioAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 907: range 0000000011A3227E-0000000011A323BE
int32_t __cdecl data::ConfigQTEStepPlayAudioAction::getHashValue(const data::ConfigQTEStepPlayAudioAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:908";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPlayAudioAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseAction::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  common::tools::HashUtils::appendHash(&this->audio_name, (int32_t *)(v2 + 32));
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

// Line 917: range 0000000011A7D28E-0000000011A7D4CF
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenActionRegister::ConfigQTEStepCutsceneFailedBlackScreenActionRegister(
        data::ConfigQTEStepCutsceneFailedBlackScreenActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenActionRegister::ConfigQTEStepCutsceneFailedBlackScreenActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCutsceneFailedBlackScreenAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepCutsceneFailedBlackScreenAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepCutsceneFailedBlackScreenAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)(v1 + 64));
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

// Line 920: range 0000000011A323C0-0000000011A32731
void __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::foreachMember(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[272]; // [rsp+10h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 16 29 restart_save_point_id_any:922 64 16 27 failed_sub_quest_id_any:924 96 16 18 textmap_i"
                        "d_any:926 128 16 24 show_immediately_any:928 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862726] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 160), p_func);
  data::ConfigQTEStepBaseAction::foreachMember(
    (data::ConfigQTEStepBaseAction *const)this,
    (std::function<void(std::any&)> *)(v2 + 160));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->restart_save_point_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 64),
    &this->failed_sub_quest_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::string &,std::string,std::any::_Manager_external<std::string>,true,true>(
    (std::any *const)(v2 + 96),
    &this->textmap_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 128),
    &this->show_immediately);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
};

// Line 933: range 0000000011A32732-0000000011A32842
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::clone(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
{
  data::ConfigQTEStepCutsceneFailedBlackScreenAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCutsceneFailedBlackScreenAction,data::ConfigQTEStepCutsceneFailedBlackScreenAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepCutsceneFailedBlackScreenAction,data::ConfigQTEStepCutsceneFailedBlackScreenAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 937: range 0000000011A32844-0000000011A32887
data::ConfigQTEStepCutsceneFailedBlackScreenActionPtr __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory::create(
        data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory *const this)
{
  data::ConfigQTEStepCutsceneFailedBlackScreenActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepCutsceneFailedBlackScreenAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 939: range 0000000011A32888-0000000011A334C5
bool __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::fromJson(
        data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool *p_show_immediately; // rsi
  const Json::Value *restart_save_point_id_ptr; // [rsp+10h] [rbp-2E0h]
  const Json::Value *failed_sub_quest_id_ptr; // [rsp+18h] [rbp-2D8h]
  const Json::Value *textmap_id_ptr; // [rsp+20h] [rbp-2D0h]
  const Json::Value *show_immediately_ptr; // [rsp+28h] [rbp-2C8h]
  char v12[704]; // [rsp+30h] [rbp-2C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "13 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  if ( !data::ConfigQTEStepBaseAction::fromJson((data::ConfigQTEStepBaseAction *const)this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      942);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 96),
      (const char (*)[45])"fromJson for: ConfigQTEStepBaseAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 32);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 160),
      "restartSavePointId",
      (const std::allocator<char> *)(v2 + 32));
    restart_save_point_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
    std::string::~string((void *)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 32);
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( restart_save_point_id_ptr && !fromJson<int>(restart_save_point_id_ptr, &this->restart_save_point_id) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        954);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 224),
        (const char (*)[40])"fromJson for: restartSavePointId fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        "failedSubQuestId",
        (const std::allocator<char> *)(v2 + 48));
      failed_sub_quest_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( failed_sub_quest_id_ptr && !fromJson<unsigned int>(failed_sub_quest_id_ptr, &this->failed_sub_quest_id) )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          966);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)(v2 + 352),
          (const char (*)[38])"fromJson for: failedSubQuestId fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 64);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 416),
          "textmapId",
          (const std::allocator<char> *)(v2 + 64));
        textmap_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
        std::string::~string((void *)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 64);
        *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( textmap_id_ptr && !fromJson<std::string>(textmap_id_ptr, &this->textmap_id) )
        {
          *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 480, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 480),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "fromJson",
            978);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 480),
            (const char (*)[31])"fromJson for: textmapId fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 80);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 544),
            "showImmediately",
            (const std::allocator<char> *)(v2 + 80));
          p_show_immediately = (bool *)(v2 + 544);
          show_immediately_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
          std::string::~string((void *)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 80);
          *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( show_immediately_ptr
            && (p_show_immediately = &this->show_immediately,
                !fromJson<bool>(show_immediately_ptr, &this->show_immediately)) )
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "fromJson",
              990);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[37])"fromJson for: showImmediately fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_show_immediately, &this->is_json_loaded);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
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

// Line 997: range 0000000011A334C6-0000000011A3400C
data::ConfigQTEStepCutsceneFailedBlackScreenActionPtr __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepCutsceneFailedBlackScreenActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1010 96 16 8 ptr:1016 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1004 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1007);
      common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[72])"fromJson for: ConfigQTEStepCutsceneFailedBlackScreenAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1013);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepCutsceneFailedBlackScreenAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepCutsceneFailedBlackScreenAction>(
               (const std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1019);
          common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[63])"cast to ConfigQTEStepCutsceneFailedBlackScreenActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1024);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1001);
    common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[77])"jsonValueFind for: ConfigQTEStepCutsceneFailedBlackScreenAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1032: range 0000000011A3400E-0000000011A34235
int32_t __cdecl data::ConfigQTEStepCutsceneFailedBlackScreenAction::getHashValue(
        const data::ConfigQTEStepCutsceneFailedBlackScreenAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1033";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneFailedBlackScreenAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseAction::getHashValue((const data::ConfigQTEStepBaseAction *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->restart_save_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->restart_save_point_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->restart_save_point_id);
  }
  common::tools::HashUtils::appendHash(this->restart_save_point_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->failed_sub_quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->failed_sub_quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->failed_sub_quest_id);
  }
  common::tools::HashUtils::appendHash(this->failed_sub_quest_id, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->textmap_id, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->show_immediately >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->show_immediately, v2 + 32, &this->show_immediately);
  common::tools::HashUtils::appendHash(this->show_immediately, (int32_t *)(v2 + 32));
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

// Line 1045: range 0000000011A7D548-0000000011A7D789
void __cdecl data::ConfigQTEStepCutsceneJumpPointActionRegister::ConfigQTEStepCutsceneJumpPointActionRegister(
        data::ConfigQTEStepCutsceneJumpPointActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCutsceneJumpPointActionRegister::ConfigQTEStepCutsceneJumpPointActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCutsceneJumpPointAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepCutsceneJumpPointAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepCutsceneJumpPointAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)(v1 + 64));
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

// Line 1048: range 0000000011A34236-0000000011A34406
void __cdecl data::ConfigQTEStepCutsceneJumpPointAction::foreachMember(
        data::ConfigQTEStepCutsceneJumpPointAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 17 point_id_any:1050 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigQTEStepBaseAction::foreachMember(
    (data::ConfigQTEStepBaseAction *const)this,
    (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<int &,int,std::any::_Manager_internal<int>,true,true>((std::any *const)(v2 + 32), &this->point_id);
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

// Line 1055: range 0000000011A34408-0000000011A34518
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepCutsceneJumpPointAction::clone(
        data::ConfigQTEStepCutsceneJumpPointAction *const this)
{
  data::ConfigQTEStepCutsceneJumpPointAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCutsceneJumpPointAction,data::ConfigQTEStepCutsceneJumpPointAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepCutsceneJumpPointAction,data::ConfigQTEStepCutsceneJumpPointAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1059: range 0000000011A3451A-0000000011A3455D
data::ConfigQTEStepCutsceneJumpPointActionPtr __cdecl data::ConfigQTEStepCutsceneJumpPointActionFactory::create(
        data::ConfigQTEStepCutsceneJumpPointActionFactory *const this)
{
  data::ConfigQTEStepCutsceneJumpPointActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepCutsceneJumpPointAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1061: range 0000000011A3455E-0000000011A349E2
bool __cdecl data::ConfigQTEStepCutsceneJumpPointAction::fromJson(
        data::ConfigQTEStepCutsceneJumpPointAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  int32_t *p_point_id; // rsi
  const Json::Value *point_id_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigQTEStepBaseAction::fromJson((data::ConfigQTEStepBaseAction *const)this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1064);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[45])"fromJson for: ConfigQTEStepBaseAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "pointId",
      (const std::allocator<char> *)(v2 + 48));
    p_point_id = (int32_t *)(v2 + 128);
    point_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( point_id_ptr && (p_point_id = &this->point_id, !fromJson<int>(point_id_ptr, &this->point_id)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1076);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[29])"fromJson for: pointId fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_point_id, &this->is_json_loaded);
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

// Line 1083: range 0000000011A349E4-0000000011A3552A
data::ConfigQTEStepCutsceneJumpPointActionPtr __cdecl data::ConfigQTEStepCutsceneJumpPointAction::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepCutsceneJumpPointActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1096 96 16 8 ptr:1102 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1090 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1093);
      common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[64])"fromJson for: ConfigQTEStepCutsceneJumpPointAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1099);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepCutsceneJumpPointAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepCutsceneJumpPointAction>(
               (const std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1105);
          common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[55])"cast to ConfigQTEStepCutsceneJumpPointActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1110);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1087);
    common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[69])"jsonValueFind for: ConfigQTEStepCutsceneJumpPointAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCutsceneJumpPointAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1118: range 0000000011A3552C-0000000011A356A5
int32_t __cdecl data::ConfigQTEStepCutsceneJumpPointAction::getHashValue(
        const data::ConfigQTEStepCutsceneJumpPointAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1119";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCutsceneJumpPointAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseAction::getHashValue((const data::ConfigQTEStepBaseAction *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->point_id);
  }
  common::tools::HashUtils::appendHash(this->point_id, (int32_t *)(v2 + 32));
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

// Line 1128: range 0000000011A7D802-0000000011A7DA43
void __cdecl data::ConfigQTEStepBaseInterActionRegister::ConfigQTEStepBaseInterActionRegister(
        data::ConfigQTEStepBaseInterActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepBaseInterActionRegister::ConfigQTEStepBaseInterActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepBaseInterAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepBaseInterAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepBaseInterAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepBaseInterAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)(v1 + 64));
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

// Line 1131: range 0000000011A356A6-0000000011A35876
void __cdecl data::ConfigQTEStepBaseInterAction::foreachMember(
        data::ConfigQTEStepBaseInterAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 21 inter_action_any:1133 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseInterAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigQTEStepBaseAction::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::shared_ptr<data::ConfigBaseInterAction> &,std::shared_ptr<data::ConfigBaseInterAction>,std::any::_Manager_external<std::shared_ptr<data::ConfigBaseInterAction>>,true,true>(
    (std::any *const)(v2 + 32),
    &this->inter_action);
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

// Line 1138: range 0000000011A35878-0000000011A35988
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepBaseInterAction::clone(
        data::ConfigQTEStepBaseInterAction *const this)
{
  data::ConfigQTEStepBaseInterAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseInterAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepBaseInterAction,data::ConfigQTEStepBaseInterAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepBaseInterAction,data::ConfigQTEStepBaseInterAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepBaseInterAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepBaseInterAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)(v2 + 32));
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

// Line 1142: range 0000000011A3598A-0000000011A35F6D
bool __cdecl data::ConfigQTEStepBaseInterAction::fromJson(
        data::ConfigQTEStepBaseInterAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  const char *v6; // rsi
  std::shared_ptr<data::ConfigBaseInterAction> *v7; // rax
  bool v8; // r14
  const Json::Value *inter_action_ptr; // [rsp+18h] [rbp-178h]
  char v10[368]; // [rsp+20h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 48 1 9 <unknown> 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseInterAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -202116109;
  if ( !data::ConfigQTEStepBaseAction::fromJson(this, jval) )
  {
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1145);
    common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[45])"fromJson for: ConfigQTEStepBaseAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "interAction",
      (const std::allocator<char> *)(v2 + 48));
    inter_action_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( inter_action_ptr )
    {
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::ConfigBaseInterAction::parseFromJson((const Json::Value *)(v2 + 96));
      v7 = std::shared_ptr<data::ConfigBaseInterAction>::operator=(
             &this->inter_action,
             (std::shared_ptr<data::ConfigBaseInterAction> *)(v2 + 96));
      v6 = 0LL;
      v8 = std::operator==<data::ConfigBaseInterAction>(v7, 0LL);
      std::shared_ptr<data::ConfigBaseInterAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseInterAction> *const)(v2 + 96));
      *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -1800;
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
          1u,
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          1159);
        v6 = "fromJson for: interAction fails!";
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 256),
          (const char (*)[33])"fromJson for: interAction fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBaseInterAction>();
      v6 = (const char *)(v2 + 64);
      std::shared_ptr<data::ConfigBaseInterAction>::operator=(
        &this->inter_action,
        (std::shared_ptr<data::ConfigBaseInterAction> *)(v2 + 64));
      std::shared_ptr<data::ConfigBaseInterAction>::~shared_ptr((std::shared_ptr<data::ConfigBaseInterAction> *const)(v2 + 64));
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    }
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v10 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
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

// Line 1165: range 0000000011A35F6E-0000000011A36AB4
data::ConfigQTEStepBaseInterActionPtr __cdecl data::ConfigQTEStepBaseInterAction::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepBaseInterActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1178 96 16 8 ptr:1184 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1172 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseInterAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1175);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[56])"fromJson for: ConfigQTEStepBaseInterAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1181);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepBaseInterAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepBaseInterAction>(
               (const std::shared_ptr<data::ConfigQTEStepBaseInterAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1187);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[47])"cast to ConfigQTEStepBaseInterActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1192);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepBaseInterAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1169);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[61])"jsonValueFind for: ConfigQTEStepBaseInterAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepBaseInterAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseInterAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseInterAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1200: range 0000000011A36AB6-0000000011A36C68
int32_t __cdecl data::ConfigQTEStepBaseInterAction::getHashValue(const data::ConfigQTEStepBaseInterAction *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  int32_t v9; // eax
  int32_t result; // eax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1201";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseInterAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseAction::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( std::operator!=<data::ConfigBaseInterAction>(0LL, &this->inter_action) )
  {
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBaseInterAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->inter_action);
    if ( *(_BYTE *)((v7 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(v7);
    v8 = *(_QWORD *)v7 + 56LL;
    if ( *(_BYTE *)((v8 >> 3) + 0x7FFF8000) )
      v7 = __asan_report_load8(*(_QWORD *)v7 + 56LL);
    v9 = (*(__int64 (__fastcall **)(unsigned __int64))v8)(v7);
    common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  }
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 1213: range 0000000011A7DA80-0000000011A7DCC1
void __cdecl data::ConfigQTEStepCameraMoveActionRegister::ConfigQTEStepCameraMoveActionRegister(
        data::ConfigQTEStepCameraMoveActionRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseAction> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepCameraMoveActionRegister::ConfigQTEStepCameraMoveActionRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCameraMoveAction>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepCameraMoveAction",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::operator[](
         &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseAction>::operator=<data::ConfigQTEStepCameraMoveAction>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)(v1 + 64));
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

// Line 1216: range 0000000011A36C6A-0000000011A36E3A
void __cdecl data::ConfigQTEStepCameraMoveAction::foreachMember(
        data::ConfigQTEStepCameraMoveAction *const this,
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
  *(_QWORD *)(v2 + 8) = "2 32 16 25 exit_return_back_any:1218 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCameraMoveAction::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 64), p_func);
  data::ConfigQTEStepBaseInterAction::foreachMember(this, (std::function<void(std::any&)> *)(v2 + 64));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<bool &,bool,std::any::_Manager_internal<bool>,true,true>(
    (std::any *const)(v2 + 32),
    &this->exit_return_back);
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

// Line 1223: range 0000000011A36E3C-0000000011A36F4C
std::shared_ptr<data::ConfigQTEStepBaseAction> __cdecl data::ConfigQTEStepCameraMoveAction::clone(
        data::ConfigQTEStepCameraMoveAction *const this)
{
  data::ConfigQTEStepCameraMoveAction *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseAction> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCameraMoveAction::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepCameraMoveAction,data::ConfigQTEStepCameraMoveAction&>(
    (common::tools::perf::allocator<data::ConfigQTEStepCameraMoveAction,data::ConfigQTEStepCameraMoveAction> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseAction>::shared_ptr<data::ConfigQTEStepCameraMoveAction,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseAction> *const)this,
    (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)(v2 + 32));
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

// Line 1227: range 0000000011A36F4E-0000000011A36F91
data::ConfigQTEStepCameraMoveActionPtr __cdecl data::ConfigQTEStepCameraMoveActionFactory::create(
        data::ConfigQTEStepCameraMoveActionFactory *const this)
{
  data::ConfigQTEStepCameraMoveActionPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepCameraMoveAction>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1229: range 0000000011A36F92-0000000011A37416
bool __cdecl data::ConfigQTEStepCameraMoveAction::fromJson(
        data::ConfigQTEStepCameraMoveAction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool *p_exit_return_back; // rsi
  const Json::Value *exit_return_back_ptr; // [rsp+18h] [rbp-128h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCameraMoveAction::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  if ( !data::ConfigQTEStepBaseInterAction::fromJson(this, jval) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1232);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 64),
      (const char (*)[50])"fromJson for: ConfigQTEStepBaseInterAction fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 128),
      "exitReturnBack",
      (const std::allocator<char> *)(v2 + 48));
    p_exit_return_back = (bool *)(v2 + 128);
    exit_return_back_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
    std::string::~string((void *)(v2 + 128));
    *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( exit_return_back_ptr
      && (p_exit_return_back = &this->exit_return_back, !fromJson<bool>(exit_return_back_ptr, &this->exit_return_back)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1244);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 192),
        (const char (*)[36])"fromJson for: exitReturnBack fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_exit_return_back, &this->is_json_loaded);
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

// Line 1251: range 0000000011A37418-0000000011A37F5E
data::ConfigQTEStepCameraMoveActionPtr __cdecl data::ConfigQTEStepCameraMoveAction::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepCameraMoveActionPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1264 96 16 8 ptr:1270 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1258 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCameraMoveAction::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1261);
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[57])"fromJson for: ConfigQTEStepCameraMoveAction $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseAction((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1267);
        v6 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[49])"create ConfigQTEStepBaseAction fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepCameraMoveAction,data::ConfigQTEStepBaseAction>((const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepCameraMoveAction>(
               (const std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1273);
          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[48])"cast to ConfigQTEStepCameraMoveActionPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1278);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 32) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 32, v1, v12);
            *(_BYTE *)(v10 + 32) = 1;
            std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1255);
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[62])"jsonValueFind for: ConfigQTEStepCameraMoveAction $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepCameraMoveAction>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepCameraMoveAction> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepCameraMoveAction,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1286: range 0000000011A37F60-0000000011A380D5
int32_t __cdecl data::ConfigQTEStepCameraMoveAction::getHashValue(
        const data::ConfigQTEStepCameraMoveAction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1287";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCameraMoveAction::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseInterAction::getHashValue(this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  LOBYTE(v1) = v6 != 0;
  if ( v6 != 0 && v6 <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(char *)(((unsigned __int64)&this->exit_return_back >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->exit_return_back, v1, &this->exit_return_back);
  common::tools::HashUtils::appendHash(this->exit_return_back, (int32_t *)(v2 + 32));
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

// Line 1293: range 0000000011A380D6-0000000011A38437
bool __cdecl data::vecFromJson(const Json::Value *jval, data::QTEStepActionList *v)
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 elem_ptr:1299 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
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
      data::ConfigQTEStepBaseAction::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigQTEStepBaseAction>(
             (const std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v2 + 32),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "vecFromJson",
          1302);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[39])"elem_ptr is nullptr: QTEStepActionList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v2 + 32));
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

// Line 1312: range 0000000011A38438-0000000011A386F3
int32_t __cdecl data::getVecHashValue(const data::QTEStepActionList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigQTEStepBaseAction> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1313 64 8 16 __for_begin:1314 96 8 14 __for_end:1314";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
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
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigQTEStepBaseAction> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseAction>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseAction>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseAction> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseAction>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigQTEStepBaseAction>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseAction,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseAction> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseAction>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseAction>> > *const)(v2 + 64));
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

// Line 1326: range 0000000011A386F4-0000000011A38CD7
bool __cdecl data::ConfigQTEStepCondActionGroup::fromJson(
        data::ConfigQTEStepCondActionGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::QTEStepActionList *p_actions; // rsi
  const Json::Value *cond_group_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *actions_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCondActionGroup::fromJson;
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
    "condGroup",
    (const std::allocator<char> *)(v2 + 32));
  cond_group_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( cond_group_ptr && !data::ConfigQTEStepCondGroup::fromJson(&this->cond_group, cond_group_ptr) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1336);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[31])"fromJson for: condGroup fails!");
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
      "actions",
      (const std::allocator<char> *)(v2 + 48));
    p_actions = (data::QTEStepActionList *)(v2 + 192);
    actions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( actions_ptr && (p_actions = &this->actions, !data::vecFromJson(actions_ptr, &this->actions)) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1348);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[29])"fromJson for: actions fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_actions, &this->is_json_loaded);
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

// Line 1356: range 0000000011A38CD8-0000000011A38E33
int32_t __cdecl data::ConfigQTEStepCondActionGroup::getHashValue(const data::ConfigQTEStepCondActionGroup *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1357";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepCondActionGroup::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigQTEStepCondGroup::getHashValue(&this->cond_group);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->actions);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 1364: range 0000000011A38E34-0000000011A3920D
bool __cdecl data::vecFromJson(const Json::Value *jval, data::QTEStepCondActionGroupList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigQTEStepCondActionGroup *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-140h]
  char v12; // [rsp+8h] [rbp-138h]
  bool v13; // [rsp+Fh] [rbp-131h]
  uint32_t i; // [rsp+24h] [rbp-11Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-118h]
  char v16[272]; // [rsp+30h] [rbp-110h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 72 9 elem:1370";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862725] = -218103808;
  v4[536862726] = -202116109;
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
      *(_DWORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 8) = 0;
      data::ConfigQTEStepCondActionGroup::ConfigQTEStepCondActionGroup((data::ConfigQTEStepCondActionGroup *const)(v2 + 112));
      if ( !data::ConfigQTEStepCondActionGroup::fromJson(
              (data::ConfigQTEStepCondActionGroup *const)(v2 + 112),
              elem_jval) )
      {
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 48) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 111) & 7) >= *(_BYTE *)(((v2 + 79) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 48, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 48),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "vecFromJson",
          1373);
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
        v8 = std::move<data::ConfigQTEStepCondActionGroup &>((data::ConfigQTEStepCondActionGroup *)(v2 + 112));
        std::vector<data::ConfigQTEStepCondActionGroup>::emplace_back<data::ConfigQTEStepCondActionGroup>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigQTEStepCondActionGroup::~ConfigQTEStepCondActionGroup((data::ConfigQTEStepCondActionGroup *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_BYTE *)(v9 + 8) = -8;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1383: range 0000000011A3920E-0000000011A3945A
int32_t __cdecl data::getVecHashValue(const data::QTEStepCondActionGroupList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigQTEStepCondActionGroup*,std::vector<data::ConfigQTEStepCondActionGroup> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1384 64 8 16 __for_begin:1385 96 8 14 __for_end:1385";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
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
  *(std::vector<data::ConfigQTEStepCondActionGroup>::const_iterator *)(v2 + 64) = std::vector<data::ConfigQTEStepCondActionGroup>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigQTEStepCondActionGroup>::const_iterator *)(v2 + 96) = std::vector<data::ConfigQTEStepCondActionGroup>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigQTEStepCondActionGroup const*,std::vector<data::ConfigQTEStepCondActionGroup>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigQTEStepCondActionGroup*,std::vector<data::ConfigQTEStepCondActionGroup> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigQTEStepCondActionGroup*,std::vector<data::ConfigQTEStepCondActionGroup> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigQTEStepCondActionGroup const*,std::vector<data::ConfigQTEStepCondActionGroup>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigQTEStepCondActionGroup*,std::vector<data::ConfigQTEStepCondActionGroup> > *const)(v2 + 64));
    HashValue = data::ConfigQTEStepCondActionGroup::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigQTEStepCondActionGroup const*,std::vector<data::ConfigQTEStepCondActionGroup>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigQTEStepCondActionGroup*,std::vector<data::ConfigQTEStepCondActionGroup> > *const)(v2 + 64));
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

// Line 1394: range 0000000011A3945B-0000000011A39690
data::ConfigQTEStepBaseComponentPtr __cdecl data::createConfigQTEStepBaseComponent(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigQTEStepBaseComponentPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::_Base_ptr)"2 32 8 7 it:1395 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::_Base_ptr)data::createConfigQTEStepBaseComponent;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::find(
                    &data::g_ConfigQTEStepBaseComponentMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::end(&data::g_ConfigQTEStepBaseComponentMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseComponent>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)name,
      0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 1401: range 0000000011A39692-0000000011A396A0
void __cdecl data::ConfigQTEStepBaseComponent::foreachMember(
        data::ConfigQTEStepBaseComponent *const this,
        std::function<void(std::any&)> *p_func)
{
  ;
};

// Line 1405: range 0000000011A396A2-0000000011A396EC
std::shared_ptr<data::ConfigQTEStepBaseComponent> __cdecl data::ConfigQTEStepBaseComponent::clone(
        data::ConfigQTEStepBaseComponent *const this)
{
  data::ConfigQTEStepBaseComponent *v1; // rsi
  std::shared_ptr<data::ConfigQTEStepBaseComponent> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepBaseComponent,data::ConfigQTEStepBaseComponent&>(
    (common::tools::perf::allocator<data::ConfigQTEStepBaseComponent,data::ConfigQTEStepBaseComponent> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 1409: range 0000000011A396EE-0000000011A3973F
bool __cdecl data::ConfigQTEStepBaseComponent::fromJson(
        data::ConfigQTEStepBaseComponent *const this,
        const Json::Value *jval)
{
  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
  this->is_json_loaded = 1;
  return 1;
};

// Line 1414: range 0000000011A39740-0000000011A3A095
data::ConfigQTEStepBaseComponentPtr __cdecl data::ConfigQTEStepBaseComponent::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepBaseComponentPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1427 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:142"
                        "1 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepBaseComponent::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1424);
      common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[54])"fromJson for: ConfigQTEStepBaseComponent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseComponent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseComponent>(
             (const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1430);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[52])"create ConfigQTEStepBaseComponent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)jval,
          0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1435);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 24, v1, v12);
          *(_BYTE *)(v10 + 24) = 1;
          std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)jval,
            (std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1418);
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[59])"jsonValueFind for: ConfigQTEStepBaseComponent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1443: range 0000000011A3A096-0000000011A3A0A9
int32_t __cdecl data::ConfigQTEStepBaseComponent::getHashValue(const data::ConfigQTEStepBaseComponent *const this)
{
  return 0;
};

// Line 1449: range 0000000011A3A0AA-0000000011A3A327
const char *__cdecl data::enumValToStr(data::QTEStepButtonStyleType e)
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
  if ( e == QTE_STEP_BUTTON_STYLE_DIRECT )
  {
    result = "QTE_STEP_BUTTON_STYLE_DIRECT";
  }
  else
  {
    if ( e > QTE_STEP_BUTTON_STYLE_DIRECT )
      goto LABEL_22;
    if ( e == QTE_STEP_BUTTON_STYLE_NORMAL )
    {
      result = "QTE_STEP_BUTTON_STYLE_NORMAL";
      goto LABEL_17;
    }
    if ( e == QTE_STEP_BUTTON_STYLE_SINGLE )
    {
      result = "QTE_STEP_BUTTON_STYLE_SINGLE";
    }
    else
    {
LABEL_22:
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumValToStr",
        1459);
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
      result = (const char *)&unk_1A83C4E0;
    }
  }
LABEL_17:
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

// Line 1465: range 0000000011A3A328-0000000011A3AC09
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepButtonStyleType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepButtonStyleType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonStyleType> >::pointer v11; // rax
  data::QTEStepButtonStyleType second; // ecx
  char v13; // dl
  data::QTEStepButtonStyleType *ea; // [rsp+10h] [rbp-220h]
  char v15[528]; // [rsp+20h] [rbp-210h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(480LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 8 7"
                        " it:1477 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 120 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862733] = -218103808;
  v4[536862734] = -202116109;
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      1468);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::QTEStepButtonStyleType>::pair<char const(&)[29],data::QTEStepButtonStyleType,true>(
        (std::pair<const std::string,data::QTEStepButtonStyleType> *const)(v2 + 320),
        (const char (*)[29])"QTE_STEP_BUTTON_STYLE_NORMAL",
        (data::QTEStepButtonStyleType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_STEP_BUTTON_STYLE_NORMAL");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::QTEStepButtonStyleType>::pair<char const(&)[29],data::QTEStepButtonStyleType,true>(
        (std::pair<const std::string,data::QTEStepButtonStyleType> *const)(v2 + 360),
        (const char (*)[29])"QTE_STEP_BUTTON_STYLE_SINGLE",
        (data::QTEStepButtonStyleType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QTE_STEP_BUTTON_STYLE_SINGLE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::QTEStepButtonStyleType>::pair<char const(&)[29],data::QTEStepButtonStyleType,true>(
        (std::pair<const std::string,data::QTEStepButtonStyleType> *const)(v2 + 400),
        (const char (*)[29])"QTE_STEP_BUTTON_STYLE_DIRECT",
        (data::QTEStepButtonStyleType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QTEStepButtonStyleType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonStyleType> > *const)(v2 + 64));
      std::map<std::string,data::QTEStepButtonStyleType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepButtonStyleType> >)__PAIR128__(3LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::QTEStepButtonStyleType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m);
      e = (data::QTEStepButtonStyleType *)&data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepButtonStyleType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepButtonStyleType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonStyleType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepButtonStyleType> *)(v2 + 440);
            i != (std::pair<const std::string,data::QTEStepButtonStyleType> *)(v2 + 320);
            std::pair<std::string const,data::QTEStepButtonStyleType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 320) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_WORD *)(v7 + 12) = -1800;
      *(_BYTE *)(v7 + 14) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::QTEStepButtonStyleType>::iterator *)(v2 + 128) = std::map<std::string,data::QTEStepButtonStyleType>::find(
                                                                                    &data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m,
                                                                                    s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QTEStepButtonStyleType>::iterator *)(v2 + 160) = std::map<std::string,data::QTEStepButtonStyleType>::end(&data::enumStrToVal(std::string const&,data::QTEStepButtonStyleType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonStyleType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonStyleType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 63) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        1480);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepButtonStyleType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonStyleType> > *const)(v2 + 128));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 1488: range 0000000011A3AC0A-0000000011A3AC4E
const char *__cdecl data::getDescription(data::QTEStepButtonStyleType e)
{
  if ( e == QTE_STEP_BUTTON_STYLE_DIRECT )
    return (const char *)&unk_1A873A00;
  if ( e > QTE_STEP_BUTTON_STYLE_DIRECT )
    return "unknown enum value!";
  if ( e == QTE_STEP_BUTTON_STYLE_NORMAL )
    return (const char *)&unk_1A873980;
  if ( e == QTE_STEP_BUTTON_STYLE_SINGLE )
    return (const char *)&unk_1A8739C0;
  else
    return "unknown enum value!";
};

// Line 1503: range 0000000011A3AC4F-0000000011A3AEEA
const char *__cdecl data::enumValToStr(data::QTEStepButtonSlideDirectType e)
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
  if ( e == QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT )
  {
    result = "QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT";
  }
  else
  {
    if ( e <= QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT )
    {
      switch ( e )
      {
        case QTE_STEP_BUTTON_SLIDE_DIRECT_LEFT:
          result = "QTE_STEP_BUTTON_SLIDE_DIRECT_LEFT";
          goto LABEL_19;
        case QTE_STEP_BUTTON_SLIDE_DIRECT_UP:
          result = "QTE_STEP_BUTTON_SLIDE_DIRECT_UP";
          goto LABEL_19;
        case QTE_STEP_BUTTON_SLIDE_DIRECT_DOWN:
          result = "QTE_STEP_BUTTON_SLIDE_DIRECT_DOWN";
          goto LABEL_19;
      }
    }
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumValToStr",
      1515);
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
    result = (const char *)&unk_1A83C4E0;
  }
LABEL_19:
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

// Line 1521: range 0000000011A3AEEB-0000000011A3B86F
bool __cdecl data::enumStrToVal(const std::string *s, data::QTEStepButtonSlideDirectType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::QTEStepButtonSlideDirectType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> >::pointer v11; // rax
  data::QTEStepButtonSlideDirectType second; // ecx
  char v13; // dl
  data::QTEStepButtonSlideDirectType *ea; // [rsp+10h] [rbp-260h]
  char v15[592]; // [rsp+20h] [rbp-250h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(544LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 8 7 it:1534 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "enumStrToVal",
      1524);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::QTEStepButtonSlideDirectType>::pair<char const(&)[32],data::QTEStepButtonSlideDirectType,true>(
        (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *const)(v2 + 320),
        (const char (*)[32])"QTE_STEP_BUTTON_SLIDE_DIRECT_UP",
        (data::QTEStepButtonSlideDirectType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QTE_STEP_BUTTON_SLIDE_DIRECT_UP");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::QTEStepButtonSlideDirectType>::pair<char const(&)[34],data::QTEStepButtonSlideDirectType,true>(
        (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *const)(v2 + 360),
        (const char (*)[34])"QTE_STEP_BUTTON_SLIDE_DIRECT_DOWN",
        (data::QTEStepButtonSlideDirectType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "QTE_STEP_BUTTON_SLIDE_DIRECT_DOWN");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::QTEStepButtonSlideDirectType>::pair<char const(&)[34],data::QTEStepButtonSlideDirectType,true>(
        (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *const)(v2 + 400),
        (const char (*)[34])"QTE_STEP_BUTTON_SLIDE_DIRECT_LEFT",
        (data::QTEStepButtonSlideDirectType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "QTE_STEP_BUTTON_SLIDE_DIRECT_LEFT");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::QTEStepButtonSlideDirectType>::pair<char const(&)[35],data::QTEStepButtonSlideDirectType,true>(
        (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *const)(v2 + 440),
        (const char (*)[35])"QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT",
        (data::QTEStepButtonSlideDirectType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::QTEStepButtonSlideDirectType>>::allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> > *const)(v2 + 48));
      std::map<std::string,data::QTEStepButtonSlideDirectType>::map(
        &data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m,
        (std::initializer_list<std::pair<const std::string,data::QTEStepButtonSlideDirectType> >)__PAIR128__(
                                                                                                   4LL,
                                                                                                   v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::QTEStepButtonSlideDirectType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m);
      e = (data::QTEStepButtonSlideDirectType *)&data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::QTEStepButtonSlideDirectType>::~map,
        &data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::QTEStepButtonSlideDirectType>>::~allocator((std::allocator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *)(v2 + 480);
            i != (std::pair<const std::string,data::QTEStepButtonSlideDirectType> *)(v2 + 320);
            std::pair<std::string const,data::QTEStepButtonSlideDirectType>::~pair(i) )
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
      __asan_report_store8(v2 + 128, e);
    *(std::map<std::string,data::QTEStepButtonSlideDirectType>::iterator *)(v2 + 128) = std::map<std::string,data::QTEStepButtonSlideDirectType>::find(
                                                                                          &data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m,
                                                                                          s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::QTEStepButtonSlideDirectType>::iterator *)(v2 + 160) = std::map<std::string,data::QTEStepButtonSlideDirectType>::end(&data::enumStrToVal(std::string const&,data::QTEStepButtonSlideDirectType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> >::_Self *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "enumStrToVal",
        1537);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::QTEStepButtonSlideDirectType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::QTEStepButtonSlideDirectType> > *const)(v2 + 128));
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

// Line 1545: range 0000000011A3B870-0000000011A3B8C9
const char *__cdecl data::getDescription(data::QTEStepButtonSlideDirectType e)
{
  if ( e == QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT )
    return (const char *)&off_1A873D40;
  if ( e <= QTE_STEP_BUTTON_SLIDE_DIRECT_RIGHT )
  {
    switch ( e )
    {
      case QTE_STEP_BUTTON_SLIDE_DIRECT_LEFT:
        return (const char *)&off_1A873D00;
      case QTE_STEP_BUTTON_SLIDE_DIRECT_UP:
        return (const char *)&off_1A873C80;
      case QTE_STEP_BUTTON_SLIDE_DIRECT_DOWN:
        return (const char *)&off_1A873CC0;
    }
  }
  return "unknown enum value!";
};

// Line 1565: range 0000000011A7E6F4-0000000011A7E935
void __cdecl data::ConfigQTEStepButtonComponentRegister::ConfigQTEStepButtonComponentRegister(
        data::ConfigQTEStepButtonComponentRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseComponent> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepButtonComponentRegister::ConfigQTEStepButtonComponentRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepButtonComponent>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepButtonComponent",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::operator[](
         &data::g_ConfigQTEStepBaseComponentMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseComponent>::operator=<data::ConfigQTEStepButtonComponent>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepButtonComponent> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepButtonComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)(v1 + 64));
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

// Line 1568: range 0000000011A3B8CA-0000000011A3BFD9
void __cdecl data::ConfigQTEStepButtonComponent::foreachMember(
        data::ConfigQTEStepButtonComponent *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[496]; // [rsp+10h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 16 20 position_id_any:1570 64 16 20 input_event_any:1572 96 16 22 click_trigger_any:1574 1"
                        "28 16 14 style_any:1576 160 16 24 count_down_time_any:1578 192 16 34 count_down_change_trigger_a"
                        "ny:1580 224 16 26 slide_dir_trigger_any:1582 256 16 18 slide_dir_any:1584 288 16 20 slide_angle_"
                        "any:1586 320 16 24 slide_touch_dis_any:1588 352 16 25 slide_joypad_dis_any:1590 384 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepButtonComponent::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862726] = -219021312;
  v4[536862727] = -219021312;
  v4[536862728] = -219021312;
  v4[536862729] = -219021312;
  v4[536862730] = -219021312;
  v4[536862731] = -219021312;
  v4[536862733] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 384), p_func);
  data::ConfigQTEStepBaseComponent::foreachMember(
    (data::ConfigQTEStepBaseComponent *const)this,
    (std::function<void(std::any&)> *)(v2 + 384));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 384));
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->position_id);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::QTEStepButtonInputType &,data::QTEStepButtonInputType,std::any::_Manager_internal<data::QTEStepButtonInputType>,true,true>(
    (std::any *const)(v2 + 64),
    &this->input_event);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigQTEStepCondActionGroup> &,std::vector<data::ConfigQTEStepCondActionGroup>,std::any::_Manager_external<std::vector<data::ConfigQTEStepCondActionGroup>>,true,true>(
    (std::any *const)(v2 + 96),
    &this->click_trigger);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::QTEStepButtonStyleType &,data::QTEStepButtonStyleType,std::any::_Manager_internal<data::QTEStepButtonStyleType>,true,true>(
    (std::any *const)(v2 + 128),
    &this->style);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 160),
    &this->count_down_time);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  *(_WORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigQTEStepCondActionGroup> &,std::vector<data::ConfigQTEStepCondActionGroup>,std::any::_Manager_external<std::vector<data::ConfigQTEStepCondActionGroup>>,true,true>(
    (std::any *const)(v2 + 192),
    &this->count_down_change_trigger);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 192));
  *(_WORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigQTEStepCondActionGroup> &,std::vector<data::ConfigQTEStepCondActionGroup>,std::any::_Manager_external<std::vector<data::ConfigQTEStepCondActionGroup>>,true,true>(
    (std::any *const)(v2 + 224),
    &this->slide_dir_trigger);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 224));
  *(_WORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  std::any::any<data::QTEStepButtonSlideDirectType &,data::QTEStepButtonSlideDirectType,std::any::_Manager_internal<data::QTEStepButtonSlideDirectType>,true,true>(
    (std::any *const)(v2 + 256),
    &this->slide_dir);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 256));
  *(_WORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 288),
    &this->slide_angle);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 288));
  *(_WORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 320),
    &this->slide_touch_dis);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 320));
  *(_WORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 352),
    &this->slide_joypad_dis);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 352));
  std::any::~any((std::any *const)(v2 + 320));
  std::any::~any((std::any *const)(v2 + 288));
  std::any::~any((std::any *const)(v2 + 256));
  std::any::~any((std::any *const)(v2 + 224));
  std::any::~any((std::any *const)(v2 + 192));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
};

// Line 1595: range 0000000011A3BFDA-0000000011A3C0EA
std::shared_ptr<data::ConfigQTEStepBaseComponent> __cdecl data::ConfigQTEStepButtonComponent::clone(
        data::ConfigQTEStepButtonComponent *const this)
{
  data::ConfigQTEStepButtonComponent *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseComponent> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepButtonComponent::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepButtonComponent,data::ConfigQTEStepButtonComponent&>(
    (common::tools::perf::allocator<data::ConfigQTEStepButtonComponent,data::ConfigQTEStepButtonComponent> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr<data::ConfigQTEStepButtonComponent,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)this,
    (std::shared_ptr<data::ConfigQTEStepButtonComponent> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepButtonComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1599: range 0000000011A3C0EC-0000000011A3C12F
data::ConfigQTEStepButtonComponentPtr __cdecl data::ConfigQTEStepButtonComponentFactory::create(
        data::ConfigQTEStepButtonComponentFactory *const this)
{
  data::ConfigQTEStepButtonComponentPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepButtonComponent>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1601: range 0000000011A3C130-0000000011A3E195
bool __cdecl data::ConfigQTEStepButtonComponent::fromJson(
        data::ConfigQTEStepButtonComponent *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  bool v8; // r15
  float *p_slide_joypad_dis; // rsi
  bool v10; // bl
  const Json::Value *position_id_ptr; // [rsp+18h] [rbp-7E8h]
  Json::Value *input_event_ptr; // [rsp+20h] [rbp-7E0h]
  const Json::Value *click_trigger_ptr; // [rsp+28h] [rbp-7D8h]
  Json::Value *style_ptr; // [rsp+30h] [rbp-7D0h]
  const Json::Value *count_down_time_ptr; // [rsp+38h] [rbp-7C8h]
  const Json::Value *count_down_change_trigger_ptr; // [rsp+40h] [rbp-7C0h]
  const Json::Value *slide_dir_trigger_ptr; // [rsp+48h] [rbp-7B8h]
  Json::Value *slide_dir_ptr; // [rsp+50h] [rbp-7B0h]
  const Json::Value *slide_angle_ptr; // [rsp+58h] [rbp-7A8h]
  const Json::Value *slide_touch_dis_ptr; // [rsp+60h] [rbp-7A0h]
  const Json::Value *slide_joypad_dis_ptr; // [rsp+68h] [rbp-798h]
  char v24[1936]; // [rsp+70h] [rbp-790h] BYREF

  v2 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1888LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "37 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 "
                        "9 <unknown> 1824 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepButtonComponent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -218959118;
  v4[536862776] = -218959118;
  v4[536862778] = -202116109;
  if ( !data::ConfigQTEStepBaseComponent::fromJson((data::ConfigQTEStepBaseComponent *const)this, jval) )
  {
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1604);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[48])"fromJson for: ConfigQTEStepBaseComponent fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "positionId",
      (const std::allocator<char> *)(v2 + 48));
    position_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( position_id_ptr && !fromJson<unsigned int>(position_id_ptr, &this->position_id) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1616);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[32])"fromJson for: positionId fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "inputEvent",
        (const std::allocator<char> *)(v2 + 64));
      input_event_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( !input_event_ptr )
        goto LABEL_20;
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 480, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 480), (Json::Value_0 *)input_event_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 480), &this->input_event);
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          1628);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[32])"fromJson for: inputEvent fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v5 = 0;
      }
      else
      {
LABEL_20:
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          "clickTrigger",
          (const std::allocator<char> *)(v2 + 80));
        click_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( click_trigger_ptr && !data::vecFromJson(click_trigger_ptr, &this->click_trigger) )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "fromJson",
            1640);
          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[34])"fromJson for: clickTrigger fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            "style",
            (const std::allocator<char> *)(v2 + 96));
          style_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( !style_ptr )
            goto LABEL_32;
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 800, 32LL);
          }
          Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 800), (Json::Value_0 *)style_ptr);
          v7 = !data::enumStrToVal((const std::string *)(v2 + 800), &this->style);
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          if ( v7 )
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "fromJson",
              1652);
            common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[27])"fromJson for: style fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
            v5 = 0;
          }
          else
          {
LABEL_32:
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 928),
              "countDownTime",
              (const std::allocator<char> *)(v2 + 112));
            count_down_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( count_down_time_ptr && !fromJson<float>(count_down_time_ptr, &this->count_down_time) )
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigQTEStep.cpp",
                "fromJson",
                1664);
              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[35])"fromJson for: countDownTime fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1056),
                "countDownChangeTrigger",
                (const std::allocator<char> *)(v2 + 128));
              count_down_change_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( count_down_change_trigger_ptr
                && !data::vecFromJson(count_down_change_trigger_ptr, &this->count_down_change_trigger) )
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1120) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1151) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1120, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1120),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigQTEStep.cpp",
                  "fromJson",
                  1676);
                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[44])"fromJson for: countDownChangeTrigger fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  "slideDirTrigger",
                  (const std::allocator<char> *)(v2 + 144));
                slide_dir_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( slide_dir_trigger_ptr && !data::vecFromJson(slide_dir_trigger_ptr, &this->slide_dir_trigger) )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigQTEStep.cpp",
                    "fromJson",
                    1688);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1248),
                    (const char (*)[37])"fromJson for: slideDirTrigger fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1312),
                    "slideDir",
                    (const std::allocator<char> *)(v2 + 160));
                  slide_dir_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1312));
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( !slide_dir_ptr )
                    goto LABEL_54;
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1376, 32LL);
                  }
                  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1376), (Json::Value_0 *)slide_dir_ptr);
                  v8 = !data::enumStrToVal((const std::string *)(v2 + 1376), &this->slide_dir);
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  if ( v8 )
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1440, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1440),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigQTEStep.cpp",
                      "fromJson",
                      1700);
                    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[30])"fromJson for: slideDir fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    v5 = 0;
                  }
                  else
                  {
LABEL_54:
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1504),
                      "slideAngle",
                      (const std::allocator<char> *)(v2 + 176));
                    slide_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                    std::string::~string((void *)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( slide_angle_ptr && !fromJson<float>(slide_angle_ptr, &this->slide_angle) )
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1568, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1568),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigQTEStep.cpp",
                        "fromJson",
                        1712);
                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        (common::milog::MiLogStream *const)(v2 + 1568),
                        (const char (*)[32])"fromJson for: slideAngle fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1632),
                        "slideTouchDis",
                        (const std::allocator<char> *)(v2 + 192));
                      slide_touch_dis_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                      std::string::~string((void *)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( slide_touch_dis_ptr && !fromJson<float>(slide_touch_dis_ptr, &this->slide_touch_dis) )
                      {
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1696, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1696),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigQTEStep.cpp",
                          "fromJson",
                          1724);
                        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                          (common::milog::MiLogStream *const)(v2 + 1696),
                          (const char (*)[35])"fromJson for: slideTouchDis fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1760),
                          "slideJoypadDis",
                          (const std::allocator<char> *)(v2 + 208));
                        p_slide_joypad_dis = (float *)(v2 + 1760);
                        slide_joypad_dis_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( slide_joypad_dis_ptr
                          && (p_slide_joypad_dis = &this->slide_joypad_dis,
                              !fromJson<float>(slide_joypad_dis_ptr, &this->slide_joypad_dis)) )
                        {
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1824, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1824),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ConfigQTEStep.cpp",
                            "fromJson",
                            1736);
                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                            (common::milog::MiLogStream *const)(v2 + 1824),
                            (const char (*)[36])"fromJson for: slideJoypadDis fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                          v5 = 0;
                        }
                        else
                        {
                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                            __asan_report_store1(&this->is_json_loaded, p_slide_joypad_dis, &this->is_json_loaded);
                          this->is_json_loaded = 1;
                          v5 = 1;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v10 = v5;
  if ( v24 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1888LL, v24);
  }
  return v10;
};

// Line 1743: range 0000000011A3E196-0000000011A3ECDC
data::ConfigQTEStepButtonComponentPtr __cdecl data::ConfigQTEStepButtonComponent::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepButtonComponentPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1756 96 16 8 ptr:1762 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1750 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepButtonComponent::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1753);
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[56])"fromJson for: ConfigQTEStepButtonComponent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseComponent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseComponent>(
             (const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1759);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[52])"create ConfigQTEStepBaseComponent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepButtonComponent,data::ConfigQTEStepBaseComponent>((const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepButtonComponent>(
               (const std::shared_ptr<data::ConfigQTEStepButtonComponent> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1765);
          common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[47])"cast to ConfigQTEStepButtonComponentPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1770);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepButtonComponent> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepButtonComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1747);
    common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[61])"jsonValueFind for: ConfigQTEStepButtonComponent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepButtonComponent>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepButtonComponent> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepButtonComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1778: range 0000000011A3ECDE-0000000011A3F0D5
int32_t __cdecl data::ConfigQTEStepButtonComponent::getHashValue(const data::ConfigQTEStepButtonComponent *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t VecHashValue; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t result; // eax
  char v11[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1779";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepButtonComponent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseComponent::getHashValue((const data::ConfigQTEStepBaseComponent *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->position_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->position_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->position_id);
  }
  common::tools::HashUtils::appendHash(this->position_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->input_event >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->input_event >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->input_event);
  }
  common::tools::HashUtils::appendHash(this->input_event, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->click_trigger);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->style);
  }
  common::tools::HashUtils::appendHash(this->style, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->count_down_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->count_down_time);
  }
  common::tools::HashUtils::appendHash(this->count_down_time, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->count_down_change_trigger);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->slide_dir_trigger);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_dir >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slide_dir >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->slide_dir);
  }
  common::tools::HashUtils::appendHash(this->slide_dir, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->slide_angle);
  }
  common::tools::HashUtils::appendHash(this->slide_angle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->slide_touch_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->slide_touch_dis);
  }
  common::tools::HashUtils::appendHash(this->slide_touch_dis, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->slide_joypad_dis >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->slide_joypad_dis);
  }
  common::tools::HashUtils::appendHash(this->slide_joypad_dis, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
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

// Line 1798: range 0000000011A7E9AE-0000000011A7EBEF
void __cdecl data::ConfigQTEStepPowerBarComponentRegister::ConfigQTEStepPowerBarComponentRegister(
        data::ConfigQTEStepPowerBarComponentRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigQTEStepBaseComponent> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigQTEStepPowerBarComponentRegister::ConfigQTEStepPowerBarComponentRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarComponent>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigQTEStepPowerBarComponent",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::operator[](
         &data::g_ConfigQTEStepBaseComponentMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigQTEStepBaseComponent>::operator=<data::ConfigQTEStepPowerBarComponent>(
    v4,
    (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)(v1 + 64));
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

// Line 1801: range 0000000011A3F0D6-0000000011A3F4B7
void __cdecl data::ConfigQTEStepPowerBarComponent::foreachMember(
        data::ConfigQTEStepPowerBarComponent *const this,
        std::function<void(std::any&)> *p_func)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5[304]; // [rsp+10h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v5;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 16 19 init_value_any:1803 64 16 18 max_value_any:1805 96 16 37 auto_change_value_per_second"
                        "_any:1807 128 16 38 no_input_auto_change_interval_any:1809 160 16 29 value_change_trigger_any:18"
                        "11 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarComponent::foreachMember;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -219021312;
  v4[536862724] = -219021312;
  v4[536862725] = -219021312;
  v4[536862727] = -202116109;
  std::function<void ()(std::any &)>::function((std::function<void(std::any&)> *const)(v2 + 192), p_func);
  data::ConfigQTEStepBaseComponent::foreachMember(
    (data::ConfigQTEStepBaseComponent *const)this,
    (std::function<void(std::any&)> *)(v2 + 192));
  std::function<void ()(std::any &)>::~function((std::function<void(std::any&)> *const)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 32),
    &this->init_value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 32));
  *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(
    (std::any *const)(v2 + 64),
    &this->max_value);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 64));
  *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 96),
    &this->auto_change_value_per_second);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 96));
  *(_WORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  std::any::any<float &,float,std::any::_Manager_internal<float>,true,true>(
    (std::any *const)(v2 + 128),
    &this->no_input_auto_change_interval);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 128));
  *(_WORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  std::any::any<std::vector<data::ConfigQTEStepCondActionGroup> &,std::vector<data::ConfigQTEStepCondActionGroup>,std::any::_Manager_external<std::vector<data::ConfigQTEStepCondActionGroup>>,true,true>(
    (std::any *const)(v2 + 160),
    &this->value_change_trigger);
  std::function<void ()(std::any &)>::operator()(p_func, (std::any *)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 160));
  std::any::~any((std::any *const)(v2 + 128));
  std::any::~any((std::any *const)(v2 + 96));
  std::any::~any((std::any *const)(v2 + 64));
  std::any::~any((std::any *const)(v2 + 32));
  if ( v5 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 1816: range 0000000011A3F4B8-0000000011A3F5C8
std::shared_ptr<data::ConfigQTEStepBaseComponent> __cdecl data::ConfigQTEStepPowerBarComponent::clone(
        data::ConfigQTEStepPowerBarComponent *const this)
{
  data::ConfigQTEStepPowerBarComponent *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigQTEStepBaseComponent> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarComponent::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigQTEStepPowerBarComponent,data::ConfigQTEStepPowerBarComponent&>(
    (common::tools::perf::allocator<data::ConfigQTEStepPowerBarComponent,data::ConfigQTEStepPowerBarComponent> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigQTEStepBaseComponent>::shared_ptr<data::ConfigQTEStepPowerBarComponent,void>(
    (std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)this,
    (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *)(v2 + 32));
  std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)(v2 + 32));
  if ( v6 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1820: range 0000000011A3F5CA-0000000011A3F60D
data::ConfigQTEStepPowerBarComponentPtr __cdecl data::ConfigQTEStepPowerBarComponentFactory::create(
        data::ConfigQTEStepPowerBarComponentFactory *const this)
{
  data::ConfigQTEStepPowerBarComponentPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigQTEStepPowerBarComponent>();
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1822: range 0000000011A3F60E-0000000011A404E4
bool __cdecl data::ConfigQTEStepPowerBarComponent::fromJson(
        data::ConfigQTEStepPowerBarComponent *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::QTEStepCondActionGroupList *p_value_change_trigger; // rsi
  const Json::Value *init_value_ptr; // [rsp+18h] [rbp-388h]
  const Json::Value *max_value_ptr; // [rsp+20h] [rbp-380h]
  const Json::Value *auto_change_value_per_second_ptr; // [rsp+28h] [rbp-378h]
  const Json::Value *no_input_auto_change_interval_ptr; // [rsp+30h] [rbp-370h]
  const Json::Value *value_change_trigger_ptr; // [rsp+38h] [rbp-368h]
  char v13[864]; // [rsp+40h] [rbp-360h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarComponent::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862745] = -202116109;
  if ( !data::ConfigQTEStepBaseComponent::fromJson((data::ConfigQTEStepBaseComponent *const)this, jval) )
  {
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1825);
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[48])"fromJson for: ConfigQTEStepBaseComponent fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      "initValue",
      (const std::allocator<char> *)(v2 + 48));
    init_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( init_value_ptr && !fromJson<unsigned int>(init_value_ptr, &this->init_value) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1837);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: initValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 320),
        "maxValue",
        (const std::allocator<char> *)(v2 + 64));
      max_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
      std::string::~string((void *)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( max_value_ptr && !fromJson<unsigned int>(max_value_ptr, &this->max_value) )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          1849);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 384),
          (const char (*)[30])"fromJson for: maxValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 448),
          "autoChangeValuePerSecond",
          (const std::allocator<char> *)(v2 + 80));
        auto_change_value_per_second_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
        std::string::~string((void *)(v2 + 448));
        *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( auto_change_value_per_second_ptr
          && !fromJson<float>(auto_change_value_per_second_ptr, &this->auto_change_value_per_second) )
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "fromJson",
            1861);
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            (common::milog::MiLogStream *const)(v2 + 512),
            (const char (*)[46])"fromJson for: autoChangeValuePerSecond fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 576),
            "noInputAutoChangeInterval",
            (const std::allocator<char> *)(v2 + 96));
          no_input_auto_change_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
          std::string::~string((void *)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( no_input_auto_change_interval_ptr
            && !fromJson<float>(no_input_auto_change_interval_ptr, &this->no_input_auto_change_interval) )
          {
            *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 640, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 640),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "fromJson",
              1873);
            common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
              (common::milog::MiLogStream *const)(v2 + 640),
              (const char (*)[47])"fromJson for: noInputAutoChangeInterval fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
            result = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 704),
              "valueChangeTrigger",
              (const std::allocator<char> *)(v2 + 112));
            p_value_change_trigger = (data::QTEStepCondActionGroupList *)(v2 + 704);
            value_change_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
            std::string::~string((void *)(v2 + 704));
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( value_change_trigger_ptr
              && (p_value_change_trigger = &this->value_change_trigger,
                  !data::vecFromJson(value_change_trigger_ptr, &this->value_change_trigger)) )
            {
              *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 768, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 768),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigQTEStep.cpp",
                "fromJson",
                1885);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[40])"fromJson for: valueChangeTrigger fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
              result = 0;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                __asan_report_store1(&this->is_json_loaded, p_value_change_trigger, &this->is_json_loaded);
              this->is_json_loaded = 1;
              result = 1;
            }
          }
        }
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
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
  }
  return result;
};

// Line 1892: range 0000000011A404E6-0000000011A4102C
data::ConfigQTEStepPowerBarComponentPtr __cdecl data::ConfigQTEStepPowerBarComponent::parseFromJson(
        const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigQTEStepPowerBarComponentPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1905 96 16 8 ptr:1911 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1899 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarComponent::parseFromJson;
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "parseFromJson",
        1902);
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[58])"fromJson for: ConfigQTEStepPowerBarComponent $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
        (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigQTEStepBaseComponent((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigQTEStepBaseComponent>(
             (const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 64),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "parseFromJson",
          1908);
        v6 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[52])"create ConfigQTEStepBaseComponent fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
          (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigQTEStepPowerBarComponent,data::ConfigQTEStepBaseComponent>((const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 96));
        if ( std::operator==<data::ConfigQTEStepPowerBarComponent>(
               (const std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *)(v2 + 96),
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "parseFromJson",
            1914);
          common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[49])"cast to ConfigQTEStepPowerBarComponentPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
            (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ConfigQTEStep.cpp",
              "parseFromJson",
              1919);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 24) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 24, v1, v12);
            *(_BYTE *)(v10 + 24) = 1;
            std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
              (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
              (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)(v2 + 64));
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "parseFromJson",
      1896);
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[63])"jsonValueFind for: ConfigQTEStepPowerBarComponent $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigQTEStepPowerBarComponent>::shared_ptr(
      (std::shared_ptr<data::ConfigQTEStepPowerBarComponent> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigQTEStepPowerBarComponent,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1927: range 0000000011A4102E-0000000011A412AF
int32_t __cdecl data::ConfigQTEStepPowerBarComponent::getHashValue(
        const data::ConfigQTEStepPowerBarComponent *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // edx
  char v6; // al
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1928";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepPowerBarComponent::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  HashValue = data::ConfigQTEStepBaseComponent::getHashValue((const data::ConfigQTEStepBaseComponent *const)this);
  v6 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
  if ( v6 != 0 && v6 <= 3 )
  {
    LOBYTE(v1) = v6 != 0;
    __asan_report_store4(v2 + 32, v1);
  }
  *(_DWORD *)(v2 + 32) = HashValue;
  if ( *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->init_value);
  }
  common::tools::HashUtils::appendHash(this->init_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_value);
  }
  common::tools::HashUtils::appendHash(this->max_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->auto_change_value_per_second >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->auto_change_value_per_second);
  }
  common::tools::HashUtils::appendHash(this->auto_change_value_per_second, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->no_input_auto_change_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->no_input_auto_change_interval);
  }
  common::tools::HashUtils::appendHash(this->no_input_auto_change_interval, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->value_change_trigger);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
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

// Line 1938: range 0000000011A412B0-0000000011A41611
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigQTEStepComList *v)
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
  *(_QWORD *)(v2 + 8) = "2 32 16 13 elem_ptr:1944 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
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
      data::ConfigQTEStepBaseComponent::parseFromJson((const Json::Value *)(v2 + 32));
      if ( std::operator==<data::ConfigQTEStepBaseComponent>(
             (const std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v2 + 32),
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "vecFromJson",
          1947);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[42])"elem_ptr is nullptr: ConfigQTEStepComList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v10 = 0;
        v6 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::value_type *)(v2 + 32));
        v6 = 1;
      }
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)(v2 + 32));
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

// Line 1957: range 0000000011A41612-0000000011A418CD
int32_t __cdecl data::getVecHashValue(const data::ConfigQTEStepComList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigQTEStepBaseComponent> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1958 64 8 16 __for_begin:1959 96 8 14 __for_end:1959";
  *(_QWORD *)(v2 + 16) = data::getVecHashValue;
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
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigQTEStepBaseComponent> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseComponent>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseComponent>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseComponent> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseComponent>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigQTEStepBaseComponent>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigQTEStepBaseComponent,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigQTEStepBaseComponent> const*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigQTEStepBaseComponent>*,std::vector<std::shared_ptr<data::ConfigQTEStepBaseComponent>> > *const)(v2 + 64));
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

// Line 1971: range 0000000011A418CE-0000000011A423E3
bool __cdecl data::ConfigQTEStepNode::fromJson(data::ConfigQTEStepNode *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::QTEStepCondActionGroupList *p_fail_trigger; // rsi
  const Json::Value *start_trigger_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *components_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *success_trigger_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *fail_trigger_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepNode::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "startTrigger",
    (const std::allocator<char> *)(v2 + 32));
  start_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( start_trigger_ptr && !data::vecFromJson(start_trigger_ptr, &this->start_trigger) )
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
      "./src/json_data_auto/ConfigQTEStep.cpp",
      "fromJson",
      1981);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[34])"fromJson for: startTrigger fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "components",
      (const std::allocator<char> *)(v2 + 48));
    components_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( components_ptr && !data::vecFromJson(components_ptr, &this->components) )
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
        "./src/json_data_auto/ConfigQTEStep.cpp",
        "fromJson",
        1993);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[32])"fromJson for: components fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "successTrigger",
        (const std::allocator<char> *)(v2 + 64));
      success_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( success_trigger_ptr && !data::vecFromJson(success_trigger_ptr, &this->success_trigger) )
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
          "./src/json_data_auto/ConfigQTEStep.cpp",
          "fromJson",
          2005);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[36])"fromJson for: successTrigger fails!");
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
          "failTrigger",
          (const std::allocator<char> *)(v2 + 80));
        p_fail_trigger = (data::QTEStepCondActionGroupList *)(v2 + 480);
        fail_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( fail_trigger_ptr
          && (p_fail_trigger = &this->fail_trigger, !data::vecFromJson(fail_trigger_ptr, &this->fail_trigger)) )
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
            "./src/json_data_auto/ConfigQTEStep.cpp",
            "fromJson",
            2017);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[33])"fromJson for: failTrigger fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_fail_trigger, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
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

// Line 2025: range 0000000011A423E4-0000000011A42581
int32_t __cdecl data::ConfigQTEStepNode::getHashValue(const data::ConfigQTEStepNode *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2026";
  *(_QWORD *)(v2 + 16) = data::ConfigQTEStepNode::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->start_trigger);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->components);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->success_trigger);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->fail_trigger);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
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

// Line 2034: range 0000000011A4707F-0000000011A47093
void __cdecl GLOBAL__sub_I_merge_single_ConfigMark_cpp()
{
  __static_initialization_and_destruction_0(1, 0xFFFF);
};

// Line 2034: range 0000000011A42582-0000000011A4707E
void __cdecl __static_initialization_and_destruction_0(int __initialize_p, int __priority)
{
  __int64 v2; // rax
  _DWORD *v3; // r12
  std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > *i; // rbx
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > *j; // rbx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMove> > *k; // rbx
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > *m; // rbx
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > *n; // rbx
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > *ii; // rbx
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > *jj; // rbx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > *kk; // rbx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > *mm; // rbx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > *nn; // rbx
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > *i1; // rbx
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > *i2; // rbx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > *i3; // rbx
  unsigned __int64 v41; // rax
  _BYTE *v42; // rcx
  char v43; // dl
  std::shared_ptr<data::ConfigQTEStepPowerBarComponentFactory> *v44; // rsi
  __int64 v45; // rdx
  _BYTE *v46; // rcx
  char v47; // dl
  __int64 v48; // rdx
  const char *v49; // rcx
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > __l; // [rsp+10h] [rbp-880h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMove> > > v51; // [rsp+20h] [rbp-870h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > > v52; // [rsp+30h] [rbp-860h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > > v53; // [rsp+40h] [rbp-850h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > > v54; // [rsp+50h] [rbp-840h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > > v55; // [rsp+60h] [rbp-830h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > > v56; // [rsp+70h] [rbp-820h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > > v57; // [rsp+80h] [rbp-810h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > > v58; // [rsp+90h] [rbp-800h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > v59; // [rsp+A0h] [rbp-7F0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > v60; // [rsp+B0h] [rbp-7E0h]
  std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > v61; // [rsp+C0h] [rbp-7D0h]
  unsigned __int64 v62; // [rsp+D0h] [rbp-7C0h]
  char v63[1968]; // [rsp+E0h] [rbp-7B0h] BYREF

  v62 = (unsigned __int64)v63;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_5(1920LL);
    if ( v2 )
      v62 = v2;
  }
  *(_QWORD *)v62 = 1102416563LL;
  *(_QWORD *)(v62 + 8) = "52 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                         "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <un"
                         "known> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown"
                         "> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384"
                         " 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 16 9"
                         " <unknown> 496 16 9 <unknown> 528 16 9 <unknown> 560 16 9 <unknown> 592 16 9 <unknown> 624 16 9"
                         " <unknown> 656 16 9 <unknown> 688 16 9 <unknown> 720 16 9 <unknown> 752 16 9 <unknown> 784 16 9"
                         " <unknown> 816 16 9 <unknown> 848 16 9 <unknown> 880 48 9 <unknown> 960 48 9 <unknown> 1040 48 "
                         "9 <unknown> 1120 48 9 <unknown> 1200 48 9 <unknown> 1280 48 9 <unknown> 1360 48 9 <unknown> 144"
                         "0 48 9 <unknown> 1520 48 9 <unknown> 1600 48 9 <unknown> 1680 48 9 <unknown> 1760 48 9 <unknown"
                         "> 1840 48 9 <unknown>";
  *(_QWORD *)(v62 + 16) = __static_initialization_and_destruction_0;
  v3 = (_DWORD *)(v62 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -234753535;
  v3[536862723] = -234753535;
  v3[536862724] = -234753535;
  v3[536862725] = -234753535;
  v3[536862726] = -234753535;
  v3[536862727] = -234753535;
  v3[536862728] = -234753535;
  v3[536862729] = -234753535;
  v3[536862730] = -234753535;
  v3[536862731] = -234753535;
  v3[536862732] = -234753535;
  v3[536862733] = -234753535;
  v3[536862734] = 61953;
  v3[536862735] = 62194;
  v3[536862736] = 62194;
  v3[536862737] = 62194;
  v3[536862738] = 62194;
  v3[536862739] = 62194;
  v3[536862740] = 62194;
  v3[536862741] = 62194;
  v3[536862742] = 62194;
  v3[536862743] = 62194;
  v3[536862744] = 62194;
  v3[536862745] = 62194;
  v3[536862746] = 62194;
  v3[536862747] = 62194;
  v3[536862749] = -218959118;
  v3[536862751] = -219021312;
  v3[536862752] = 62194;
  v3[536862754] = -218959118;
  v3[536862756] = -219021312;
  v3[536862757] = 62194;
  v3[536862759] = -218959118;
  v3[536862761] = -219021312;
  v3[536862762] = 62194;
  v3[536862764] = -218959118;
  v3[536862766] = -219021312;
  v3[536862767] = 62194;
  v3[536862769] = -218959118;
  v3[536862771] = -219021312;
  v3[536862772] = 62194;
  v3[536862774] = -218959118;
  v3[536862776] = -219021312;
  v3[536862777] = 62194;
  v3[536862779] = -202116109;
  if ( __initialize_p == 1 )
  {
    __asan_before_dynamic_init("src_merge/merge_single_ConfigMark.cpp");
    if ( __priority == 0xFFFF )
    {
      std::ios_base::Init::Init(&std::__ioinit);
      __cxa_atexit((void (__fastcall *)(void *))&std::ios_base::Init::~Init, &std::__ioinit, &_dso_handle);
      if ( *(_WORD *)(((v62 + 464) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLBaseMark>();
      std::pair<std::string const,std::shared_ptr<data::ConfigLBaseMark>>::pair<char const(&)[16],std::shared_ptr<data::ConfigLBaseMark>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > *const)(v62 + 880),
        (const char (*)[16])"ConfigLBaseMark",
        (std::shared_ptr<data::ConfigLBaseMark> *)(v62 + 464));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLBaseMark>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > > *const)(v62 + 64));
      std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::map(
        &data::g_ConfigLBaseMarkMap[abi:cxx11],
        (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > >)__PAIR128__(1LL, v62 + 880),
        (const std::less<std::string > *)(v62 + 48),
        (const std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::allocator_type *)(v62 + 64));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigLBaseMark>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > > *const)(v62 + 64));
      *(_BYTE *)(((v62 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > *)(v62 + 928);
            i != (std::pair<const std::string,std::shared_ptr<data::ConfigLBaseMark> > *)(v62 + 880);
            std::pair<std::string const,std::shared_ptr<data::ConfigLBaseMark>>::~pair(i) )
      {
        --i;
      }
      v5 = ((v62 + 880) >> 3) + 2147450880;
      *(_DWORD *)v5 = -117901064;
      *(_WORD *)(v5 + 4) = -1800;
      std::shared_ptr<data::ConfigLBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigLBaseMark> *const)(v62 + 464));
      *(_WORD *)(((v62 + 464) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigLBaseMark>>::~map,
        &data::g_ConfigLBaseMarkMap[abi:cxx11],
        &_dso_handle);
      data::ConfigLMapMarkRegister::ConfigLMapMarkRegister(&data::g_ConfigLMapMarkRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLMapMarkFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLMapMarkFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLMapMarkFactory>::~shared_ptr,
        &data::ConfigLMapMarkFactory::instance_ptr,
        &_dso_handle);
      v6 = ((v62 + 960) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_WORD *)(((v62 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 496) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVBaseMark>();
      std::pair<std::string const,std::shared_ptr<data::ConfigVBaseMark>>::pair<char const(&)[16],std::shared_ptr<data::ConfigVBaseMark>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > *const)(v62 + 960),
        (const char (*)[16])"ConfigVBaseMark",
        (std::shared_ptr<data::ConfigVBaseMark> *)(v62 + 496));
      __l._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > >::iterator)(v62 + 960);
      __l._M_len = 1LL;
      *(_BYTE *)(((v62 + 80) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 96) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVBaseMark>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > *const)(v62 + 96));
      std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::map(
        &data::g_ConfigVBaseMarkMap[abi:cxx11],
        __l,
        (const std::less<std::string > *)(v62 + 80),
        (const std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::allocator_type *)(v62 + 96));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigVBaseMark>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > > *const)(v62 + 96));
      *(_BYTE *)(((v62 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 80) >> 3) + 0x7FFF8000) = -8;
      for ( j = (std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > *)(v62 + 1008);
            j != (std::pair<const std::string,std::shared_ptr<data::ConfigVBaseMark> > *)(v62 + 960);
            std::pair<std::string const,std::shared_ptr<data::ConfigVBaseMark>>::~pair(j) )
      {
        --j;
      }
      v8 = ((v62 + 960) >> 3) + 2147450880;
      *(_DWORD *)v8 = -117901064;
      *(_WORD *)(v8 + 4) = -1800;
      std::shared_ptr<data::ConfigVBaseMark>::~shared_ptr((std::shared_ptr<data::ConfigVBaseMark> *const)(v62 + 496));
      *(_WORD *)(((v62 + 496) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigVBaseMark>>::~map,
        &data::g_ConfigVBaseMarkMap[abi:cxx11],
        &_dso_handle);
      data::ConfigVMapMarkRegister::ConfigVMapMarkRegister(&data::g_ConfigVMapMarkRegister);
      data::ConfigVCustomMapMarkRegister::ConfigVCustomMapMarkRegister(&data::g_ConfigVCustomMapMarkRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigVCustomMapMarkFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigVCustomMapMarkFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigVCustomMapMarkFactory>::~shared_ptr,
        &data::ConfigVCustomMapMarkFactory::instance_ptr,
        &_dso_handle);
      v9 = ((v62 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_WORD *)(v9 + 4) = 0;
      *(_WORD *)(((v62 + 528) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 528) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMove>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMove>>::pair<char const(&)[11],std::shared_ptr<data::ConfigMove>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMove> > *const)(v62 + 1040),
        (const char (*)[11])"ConfigMove",
        (std::shared_ptr<data::ConfigMove> *)(v62 + 528));
      v51._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMove> > >::iterator)(v62 + 1040);
      v51._M_len = 1LL;
      *(_BYTE *)(((v62 + 112) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 128) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMove>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMove> > > *const)(v62 + 128));
      std::map<std::string,std::shared_ptr<data::ConfigMove>>::map(
        &data::g_ConfigMoveMap[abi:cxx11],
        v51,
        (const std::less<std::string > *)(v62 + 112),
        (const std::map<std::string,std::shared_ptr<data::ConfigMove>>::allocator_type *)(v62 + 128));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMove>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMove> > > *const)(v62 + 128));
      *(_BYTE *)(((v62 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 112) >> 3) + 0x7FFF8000) = -8;
      for ( k = (std::pair<const std::string,std::shared_ptr<data::ConfigMove> > *)(v62 + 1088);
            k != (std::pair<const std::string,std::shared_ptr<data::ConfigMove> > *)(v62 + 1040);
            std::pair<std::string const,std::shared_ptr<data::ConfigMove>>::~pair(k) )
      {
        --k;
      }
      v11 = ((v62 + 1040) >> 3) + 2147450880;
      *(_DWORD *)v11 = -117901064;
      *(_WORD *)(v11 + 4) = -1800;
      std::shared_ptr<data::ConfigMove>::~shared_ptr((std::shared_ptr<data::ConfigMove> *const)(v62 + 528));
      *(_WORD *)(((v62 + 528) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMove>>::~map,
        &data::g_ConfigMoveMap[abi:cxx11],
        &_dso_handle);
      v12 = ((v62 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_WORD *)(((v62 + 560) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 560) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMoveCorrection>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMoveCorrection>>::pair<char const(&)[21],std::shared_ptr<data::ConfigMoveCorrection>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > *const)(v62 + 1120),
        (const char (*)[21])"ConfigMoveCorrection",
        (std::shared_ptr<data::ConfigMoveCorrection> *)(v62 + 560));
      v52._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > >::iterator)(v62 + 1120);
      v52._M_len = 1LL;
      *(_BYTE *)(((v62 + 144) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 160) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMoveCorrection>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > > *const)(v62 + 160));
      std::map<std::string,std::shared_ptr<data::ConfigMoveCorrection>>::map(
        &data::g_ConfigMoveCorrectionMap[abi:cxx11],
        v52,
        (const std::less<std::string > *)(v62 + 144),
        (const std::map<std::string,std::shared_ptr<data::ConfigMoveCorrection>>::allocator_type *)(v62 + 160));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMoveCorrection>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > > *const)(v62 + 160));
      *(_BYTE *)(((v62 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 144) >> 3) + 0x7FFF8000) = -8;
      for ( m = (std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > *)(v62 + 1168);
            m != (std::pair<const std::string,std::shared_ptr<data::ConfigMoveCorrection> > *)(v62 + 1120);
            std::pair<std::string const,std::shared_ptr<data::ConfigMoveCorrection>>::~pair(m) )
      {
        --m;
      }
      v14 = ((v62 + 1120) >> 3) + 2147450880;
      *(_DWORD *)v14 = -117901064;
      *(_WORD *)(v14 + 4) = -1800;
      std::shared_ptr<data::ConfigMoveCorrection>::~shared_ptr((std::shared_ptr<data::ConfigMoveCorrection> *const)(v62 + 560));
      *(_WORD *)(((v62 + 560) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMoveCorrection>>::~map,
        &data::g_ConfigMoveCorrectionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigSimpleMoveRegister::ConfigSimpleMoveRegister(&data::g_ConfigSimpleMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigSimpleMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSimpleMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigSimpleMoveFactory>::~shared_ptr,
        &data::ConfigSimpleMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigRigidbodyMoveRegister::ConfigRigidbodyMoveRegister(&data::g_ConfigRigidbodyMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigRigidbodyMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigRigidbodyMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigRigidbodyMoveFactory>::~shared_ptr,
        &data::ConfigRigidbodyMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMixinDriveMoveRegister::ConfigMixinDriveMoveRegister(&data::g_ConfigMixinDriveMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMixinDriveMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMixinDriveMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMixinDriveMoveFactory>::~shared_ptr,
        &data::ConfigMixinDriveMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigFormulaicMoveRegister::ConfigFormulaicMoveRegister(&data::g_ConfigFormulaicMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigFormulaicMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigFormulaicMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigFormulaicMoveFactory>::~shared_ptr,
        &data::ConfigFormulaicMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigVehicleMoveRegister::ConfigVehicleMoveRegister(&data::g_ConfigVehicleMoveRegister);
      data::ConfigBoatMoveRegister::ConfigBoatMoveRegister(&data::g_ConfigBoatMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBoatMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBoatMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBoatMoveFactory>::~shared_ptr,
        &data::ConfigBoatMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigSkiffMoveRegister::ConfigSkiffMoveRegister(&data::g_ConfigSkiffMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigSkiffMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSkiffMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigSkiffMoveFactory>::~shared_ptr,
        &data::ConfigSkiffMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigAnimatorMoveRegister::ConfigAnimatorMoveRegister(&data::g_ConfigAnimatorMoveRegister);
      data::ConfigNPCMoveRegister::ConfigNPCMoveRegister(&data::g_ConfigNPCMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigNPCMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigNPCMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigNPCMoveFactory>::~shared_ptr,
        &data::ConfigNPCMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigPlatformMoveRegister::ConfigPlatformMoveRegister(&data::g_ConfigPlatformMoveRegister);
      data::ConfigScenePropWayPointMoveRegister::ConfigScenePropWayPointMoveRegister(&data::g_ConfigScenePropWayPointMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigScenePropWayPointMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigScenePropWayPointMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigScenePropWayPointMoveFactory>::~shared_ptr,
        &data::ConfigScenePropWayPointMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigScenePropAnimatorMoveRegister::ConfigScenePropAnimatorMoveRegister(&data::g_ConfigScenePropAnimatorMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigScenePropAnimatorMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigScenePropAnimatorMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigScenePropAnimatorMoveFactory>::~shared_ptr,
        &data::ConfigScenePropAnimatorMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigScenePropColliderMoveRegister::ConfigScenePropColliderMoveRegister(&data::g_ConfigScenePropColliderMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigScenePropColliderMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigScenePropColliderMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigScenePropColliderMoveFactory>::~shared_ptr,
        &data::ConfigScenePropColliderMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigWindmillMoveRegister::ConfigWindmillMoveRegister(&data::g_ConfigWindmillMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigWindmillMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWindmillMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigWindmillMoveFactory>::~shared_ptr,
        &data::ConfigWindmillMoveFactory::instance_ptr,
        &_dso_handle);
      v15 = ((v62 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v15 = 0;
      *(_WORD *)(v15 + 4) = 0;
      *(_WORD *)(((v62 + 592) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 592) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBulletMoveAngle>();
      std::pair<std::string const,std::shared_ptr<data::ConfigBulletMoveAngle>>::pair<char const(&)[22],std::shared_ptr<data::ConfigBulletMoveAngle>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > *const)(v62 + 1200),
        (const char (*)[22])"ConfigBulletMoveAngle",
        (std::shared_ptr<data::ConfigBulletMoveAngle> *)(v62 + 592));
      v53._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > >::iterator)(v62 + 1200);
      v53._M_len = 1LL;
      *(_BYTE *)(((v62 + 176) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 192) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBulletMoveAngle>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > > *const)(v62 + 192));
      std::map<std::string,std::shared_ptr<data::ConfigBulletMoveAngle>>::map(
        &data::g_ConfigBulletMoveAngleMap[abi:cxx11],
        v53,
        (const std::less<std::string > *)(v62 + 176),
        (const std::map<std::string,std::shared_ptr<data::ConfigBulletMoveAngle>>::allocator_type *)(v62 + 192));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigBulletMoveAngle>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > > *const)(v62 + 192));
      *(_BYTE *)(((v62 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 176) >> 3) + 0x7FFF8000) = -8;
      for ( n = (std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > *)(v62 + 1248);
            n != (std::pair<const std::string,std::shared_ptr<data::ConfigBulletMoveAngle> > *)(v62 + 1200);
            std::pair<std::string const,std::shared_ptr<data::ConfigBulletMoveAngle>>::~pair(n) )
      {
        --n;
      }
      v17 = ((v62 + 1200) >> 3) + 2147450880;
      *(_DWORD *)v17 = -117901064;
      *(_WORD *)(v17 + 4) = -1800;
      std::shared_ptr<data::ConfigBulletMoveAngle>::~shared_ptr((std::shared_ptr<data::ConfigBulletMoveAngle> *const)(v62 + 592));
      *(_WORD *)(((v62 + 592) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigBulletMoveAngle>>::~map,
        &data::g_ConfigBulletMoveAngleMap[abi:cxx11],
        &_dso_handle);
      data::ConfigBulletMoveAngleByVelocityRegister::ConfigBulletMoveAngleByVelocityRegister(&data::g_ConfigBulletMoveAngleByVelocityRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBulletMoveAngleByVelocityFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBulletMoveAngleByVelocityFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBulletMoveAngleByVelocityFactory>::~shared_ptr,
        &data::ConfigBulletMoveAngleByVelocityFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBulletMoveAngleRotatingRegister::ConfigBulletMoveAngleRotatingRegister(&data::g_ConfigBulletMoveAngleRotatingRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBulletMoveAngleRotatingFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBulletMoveAngleRotatingFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBulletMoveAngleRotatingFactory>::~shared_ptr,
        &data::ConfigBulletMoveAngleRotatingFactory::instance_ptr,
        &_dso_handle);
      data::ConfigBulletMoveRegister::ConfigBulletMoveRegister(&data::g_ConfigBulletMoveRegister);
      data::ConfigLinerBulletMoveRegister::ConfigLinerBulletMoveRegister(&data::g_ConfigLinerBulletMoveRegister);
      data::ConfigAnimationBulletMoveRegister::ConfigAnimationBulletMoveRegister(&data::g_ConfigAnimationBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigAnimationBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigAnimationBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigAnimationBulletMoveFactory>::~shared_ptr,
        &data::ConfigAnimationBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigSurroundBulletMoveRegister::ConfigSurroundBulletMoveRegister(&data::g_ConfigSurroundBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigSurroundBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigSurroundBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigSurroundBulletMoveFactory>::~shared_ptr,
        &data::ConfigSurroundBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigPinballBulletMoveRegister::ConfigPinballBulletMoveRegister(&data::g_ConfigPinballBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigPinballBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigPinballBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigPinballBulletMoveFactory>::~shared_ptr,
        &data::ConfigPinballBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigParabolaBulletMoveCorrectionRegister::ConfigParabolaBulletMoveCorrectionRegister(&data::g_ConfigParabolaBulletMoveCorrectionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigParabolaBulletMoveCorrectionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigParabolaBulletMoveCorrectionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigParabolaBulletMoveCorrectionFactory>::~shared_ptr,
        &data::ConfigParabolaBulletMoveCorrectionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigParabolaBulletMoveRegister::ConfigParabolaBulletMoveRegister(&data::g_ConfigParabolaBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigParabolaBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigParabolaBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigParabolaBulletMoveFactory>::~shared_ptr,
        &data::ConfigParabolaBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigFishingAimParabolaBulletMoveRegister::ConfigFishingAimParabolaBulletMoveRegister(&data::g_ConfigFishingAimParabolaBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigFishingAimParabolaBulletMoveFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigFishingAimParabolaBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigFishingAimParabolaBulletMoveFactory>::~shared_ptr,
        &data::ConfigFishingAimParabolaBulletMoveFactory::instance_ptr,
        &_dso_handle);
      v18 = ((v62 + 1280) >> 3) + 2147450880;
      *(_DWORD *)v18 = 0;
      *(_WORD *)(v18 + 4) = 0;
      *(_WORD *)(((v62 + 624) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 624) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigWhenNoTarget>();
      std::pair<std::string const,std::shared_ptr<data::ConfigWhenNoTarget>>::pair<char const(&)[19],std::shared_ptr<data::ConfigWhenNoTarget>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > *const)(v62 + 1280),
        (const char (*)[19])"ConfigWhenNoTarget",
        (std::shared_ptr<data::ConfigWhenNoTarget> *)(v62 + 624));
      v54._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > >::iterator)(v62 + 1280);
      v54._M_len = 1LL;
      *(_BYTE *)(((v62 + 208) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 224) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWhenNoTarget>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > > *const)(v62 + 224));
      std::map<std::string,std::shared_ptr<data::ConfigWhenNoTarget>>::map(
        &data::g_ConfigWhenNoTargetMap[abi:cxx11],
        v54,
        (const std::less<std::string > *)(v62 + 208),
        (const std::map<std::string,std::shared_ptr<data::ConfigWhenNoTarget>>::allocator_type *)(v62 + 224));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigWhenNoTarget>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > > *const)(v62 + 224));
      *(_BYTE *)(((v62 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 208) >> 3) + 0x7FFF8000) = -8;
      for ( ii = (std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > *)(v62 + 1328);
            ii != (std::pair<const std::string,std::shared_ptr<data::ConfigWhenNoTarget> > *)(v62 + 1280);
            std::pair<std::string const,std::shared_ptr<data::ConfigWhenNoTarget>>::~pair(ii) )
      {
        --ii;
      }
      v20 = ((v62 + 1280) >> 3) + 2147450880;
      *(_DWORD *)v20 = -117901064;
      *(_WORD *)(v20 + 4) = -1800;
      std::shared_ptr<data::ConfigWhenNoTarget>::~shared_ptr((std::shared_ptr<data::ConfigWhenNoTarget> *const)(v62 + 624));
      *(_WORD *)(((v62 + 624) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigWhenNoTarget>>::~map,
        &data::g_ConfigWhenNoTargetMap[abi:cxx11],
        &_dso_handle);
      data::ConfigDestroyByTargetSphereRegister::ConfigDestroyByTargetSphereRegister(&data::g_ConfigDestroyByTargetSphereRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigDestroyByTargetSphereFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDestroyByTargetSphereFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigDestroyByTargetSphereFactory>::~shared_ptr,
        &data::ConfigDestroyByTargetSphereFactory::instance_ptr,
        &_dso_handle);
      data::ConfigDestroyAfterTimeRegister::ConfigDestroyAfterTimeRegister(&data::g_ConfigDestroyAfterTimeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigDestroyAfterTimeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigDestroyAfterTimeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigDestroyAfterTimeFactory>::~shared_ptr,
        &data::ConfigDestroyAfterTimeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigTrackBulletMoveRegister::ConfigTrackBulletMoveRegister(&data::g_ConfigTrackBulletMoveRegister);
      data::ConfigBoomerangBulletMoveRegister::ConfigBoomerangBulletMoveRegister(&data::g_ConfigBoomerangBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigBoomerangBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigBoomerangBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigBoomerangBulletMoveFactory>::~shared_ptr,
        &data::ConfigBoomerangBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigLinerParabolaBulletMoveRegister::ConfigLinerParabolaBulletMoveRegister(&data::g_ConfigLinerParabolaBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigLinerParabolaBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigLinerParabolaBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigLinerParabolaBulletMoveFactory>::~shared_ptr,
        &data::ConfigLinerParabolaBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigItanoCircusBulletMoveRegister::ConfigItanoCircusBulletMoveRegister(&data::g_ConfigItanoCircusBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigItanoCircusBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigItanoCircusBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigItanoCircusBulletMoveFactory>::~shared_ptr,
        &data::ConfigItanoCircusBulletMoveFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMultiBulletMoveRegister::ConfigMultiBulletMoveRegister(&data::g_ConfigMultiBulletMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMultiBulletMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMultiBulletMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMultiBulletMoveFactory>::~shared_ptr,
        &data::ConfigMultiBulletMoveFactory::instance_ptr,
        &_dso_handle);
      v21 = ((v62 + 1360) >> 3) + 2147450880;
      *(_DWORD *)v21 = 0;
      *(_WORD *)(v21 + 4) = 0;
      *(_WORD *)(((v62 + 656) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 656) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMoveFollowTarget>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMoveFollowTarget>>::pair<char const(&)[23],std::shared_ptr<data::ConfigMoveFollowTarget>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > *const)(v62 + 1360),
        (const char (*)[23])"ConfigMoveFollowTarget",
        (std::shared_ptr<data::ConfigMoveFollowTarget> *)(v62 + 656));
      v55._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > >::iterator)(v62 + 1360);
      v55._M_len = 1LL;
      *(_BYTE *)(((v62 + 240) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 256) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMoveFollowTarget>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > > *const)(v62 + 256));
      std::map<std::string,std::shared_ptr<data::ConfigMoveFollowTarget>>::map(
        &data::g_ConfigMoveFollowTargetMap[abi:cxx11],
        v55,
        (const std::less<std::string > *)(v62 + 240),
        (const std::map<std::string,std::shared_ptr<data::ConfigMoveFollowTarget>>::allocator_type *)(v62 + 256));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMoveFollowTarget>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > > *const)(v62 + 256));
      *(_BYTE *)(((v62 + 256) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 240) >> 3) + 0x7FFF8000) = -8;
      for ( jj = (std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > *)(v62 + 1408);
            jj != (std::pair<const std::string,std::shared_ptr<data::ConfigMoveFollowTarget> > *)(v62 + 1360);
            std::pair<std::string const,std::shared_ptr<data::ConfigMoveFollowTarget>>::~pair(jj) )
      {
        --jj;
      }
      v23 = ((v62 + 1360) >> 3) + 2147450880;
      *(_DWORD *)v23 = -117901064;
      *(_WORD *)(v23 + 4) = -1800;
      std::shared_ptr<data::ConfigMoveFollowTarget>::~shared_ptr((std::shared_ptr<data::ConfigMoveFollowTarget> *const)(v62 + 656));
      *(_WORD *)(((v62 + 656) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMoveFollowTarget>>::~map,
        &data::g_ConfigMoveFollowTargetMap[abi:cxx11],
        &_dso_handle);
      data::ConfigMoveFollowNpcRegister::ConfigMoveFollowNpcRegister(&data::g_ConfigMoveFollowNpcRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMoveFollowNpcFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMoveFollowNpcFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMoveFollowNpcFactory>::~shared_ptr,
        &data::ConfigMoveFollowNpcFactory::instance_ptr,
        &_dso_handle);
      data::ConfigFollowMoveRegister::ConfigFollowMoveRegister(&data::g_ConfigFollowMoveRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigFollowMoveFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigFollowMoveFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigFollowMoveFactory>::~shared_ptr,
        &data::ConfigFollowMoveFactory::instance_ptr,
        &_dso_handle);
      v24 = ((v62 + 1440) >> 3) + 2147450880;
      *(_DWORD *)v24 = 0;
      *(_WORD *)(v24 + 4) = 0;
      *(_WORD *)(((v62 + 688) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 688) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicCondition>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMusicCondition>>::pair<char const(&)[21],std::shared_ptr<data::ConfigMusicCondition>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > *const)(v62 + 1440),
        (const char (*)[21])"ConfigMusicCondition",
        (std::shared_ptr<data::ConfigMusicCondition> *)(v62 + 688));
      v56._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > >::iterator)(v62 + 1440);
      v56._M_len = 1LL;
      *(_BYTE *)(((v62 + 272) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 288) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMusicCondition>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > > *const)(v62 + 288));
      std::map<std::string,std::shared_ptr<data::ConfigMusicCondition>>::map(
        &data::g_ConfigMusicConditionMap[abi:cxx11],
        v56,
        (const std::less<std::string > *)(v62 + 272),
        (const std::map<std::string,std::shared_ptr<data::ConfigMusicCondition>>::allocator_type *)(v62 + 288));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMusicCondition>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > > *const)(v62 + 288));
      *(_BYTE *)(((v62 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 272) >> 3) + 0x7FFF8000) = -8;
      for ( kk = (std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > *)(v62 + 1488);
            kk != (std::pair<const std::string,std::shared_ptr<data::ConfigMusicCondition> > *)(v62 + 1440);
            std::pair<std::string const,std::shared_ptr<data::ConfigMusicCondition>>::~pair(kk) )
      {
        --kk;
      }
      v26 = ((v62 + 1440) >> 3) + 2147450880;
      *(_DWORD *)v26 = -117901064;
      *(_WORD *)(v26 + 4) = -1800;
      std::shared_ptr<data::ConfigMusicCondition>::~shared_ptr((std::shared_ptr<data::ConfigMusicCondition> *const)(v62 + 688));
      *(_WORD *)(((v62 + 688) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMusicCondition>>::~map,
        &data::g_ConfigMusicConditionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigMusicTrueConditionRegister::ConfigMusicTrueConditionRegister(&data::g_ConfigMusicTrueConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicTrueConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicTrueConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicTrueConditionFactory>::~shared_ptr,
        &data::ConfigMusicTrueConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicNegativeConditionRegister::ConfigMusicNegativeConditionRegister(&data::g_ConfigMusicNegativeConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicNegativeConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicNegativeConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicNegativeConditionFactory>::~shared_ptr,
        &data::ConfigMusicNegativeConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicBinaryConditionRegister::ConfigMusicBinaryConditionRegister(&data::g_ConfigMusicBinaryConditionRegister);
      data::ConfigMusicConjunctiveConditionRegister::ConfigMusicConjunctiveConditionRegister(&data::g_ConfigMusicConjunctiveConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicConjunctiveConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicConjunctiveConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicConjunctiveConditionFactory>::~shared_ptr,
        &data::ConfigMusicConjunctiveConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDisjunctiveConditionRegister::ConfigMusicDisjunctiveConditionRegister(&data::g_ConfigMusicDisjunctiveConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDisjunctiveConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDisjunctiveConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDisjunctiveConditionFactory>::~shared_ptr,
        &data::ConfigMusicDisjunctiveConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicParameterConditionRegister::ConfigMusicParameterConditionRegister(&data::g_ConfigMusicParameterConditionRegister);
      data::ConfigMusicInt32ConditionRegister::ConfigMusicInt32ConditionRegister(&data::g_ConfigMusicInt32ConditionRegister);
      data::ConfigMusicInt32EqualityConditionRegister::ConfigMusicInt32EqualityConditionRegister(&data::g_ConfigMusicInt32EqualityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32EqualityConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32EqualityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32EqualityConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32EqualityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicInt32InequalityConditionRegister::ConfigMusicInt32InequalityConditionRegister(&data::g_ConfigMusicInt32InequalityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32InequalityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32InequalityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32InequalityConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32InequalityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicInt32GreaterThanConditionRegister::ConfigMusicInt32GreaterThanConditionRegister(&data::g_ConfigMusicInt32GreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32GreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32GreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32GreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32GreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicInt32LessThanConditionRegister::ConfigMusicInt32LessThanConditionRegister(&data::g_ConfigMusicInt32LessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32LessThanConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32LessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32LessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32LessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicInt32NoGreaterThanConditionRegister::ConfigMusicInt32NoGreaterThanConditionRegister(&data::g_ConfigMusicInt32NoGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32NoGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32NoGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32NoGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32NoGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicInt32NoLessThanConditionRegister::ConfigMusicInt32NoLessThanConditionRegister(&data::g_ConfigMusicInt32NoLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicInt32NoLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicInt32NoLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicInt32NoLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicInt32NoLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ConditionRegister::ConfigMusicUInt32ConditionRegister(&data::g_ConfigMusicUInt32ConditionRegister);
      data::ConfigMusicUInt32EqualityConditionRegister::ConfigMusicUInt32EqualityConditionRegister(&data::g_ConfigMusicUInt32EqualityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32EqualityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32EqualityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32EqualityConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32EqualityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32InequalityConditionRegister::ConfigMusicUInt32InequalityConditionRegister(&data::g_ConfigMusicUInt32InequalityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32InequalityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32InequalityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32InequalityConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32InequalityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32GreaterThanConditionRegister::ConfigMusicUInt32GreaterThanConditionRegister(&data::g_ConfigMusicUInt32GreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32GreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32GreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32GreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32GreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32LessThanConditionRegister::ConfigMusicUInt32LessThanConditionRegister(&data::g_ConfigMusicUInt32LessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32LessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32LessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32LessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32LessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32NoGreaterThanConditionRegister::ConfigMusicUInt32NoGreaterThanConditionRegister(&data::g_ConfigMusicUInt32NoGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32NoGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32NoGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32NoGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32NoGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32NoLessThanConditionRegister::ConfigMusicUInt32NoLessThanConditionRegister(&data::g_ConfigMusicUInt32NoLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32NoLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32NoLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32NoLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32NoLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32MultiConditionRegister::ConfigMusicUInt32MultiConditionRegister(&data::g_ConfigMusicUInt32MultiConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32MultiConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32MultiConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32MultiConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32MultiConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleConditionRegister::ConfigMusicSingleConditionRegister(&data::g_ConfigMusicSingleConditionRegister);
      data::ConfigMusicSingleEqualityConditionRegister::ConfigMusicSingleEqualityConditionRegister(&data::g_ConfigMusicSingleEqualityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleEqualityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleEqualityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleEqualityConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleEqualityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleInequalityConditionRegister::ConfigMusicSingleInequalityConditionRegister(&data::g_ConfigMusicSingleInequalityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleInequalityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleInequalityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleInequalityConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleInequalityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleGreaterThanConditionRegister::ConfigMusicSingleGreaterThanConditionRegister(&data::g_ConfigMusicSingleGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleLessThanConditionRegister::ConfigMusicSingleLessThanConditionRegister(&data::g_ConfigMusicSingleLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleNoGreaterThanConditionRegister::ConfigMusicSingleNoGreaterThanConditionRegister(&data::g_ConfigMusicSingleNoGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleNoGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleNoGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleNoGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleNoGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicSingleNoLessThanConditionRegister::ConfigMusicSingleNoLessThanConditionRegister(&data::g_ConfigMusicSingleNoLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicSingleNoLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicSingleNoLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicSingleNoLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicSingleNoLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleConditionRegister::ConfigMusicDoubleConditionRegister(&data::g_ConfigMusicDoubleConditionRegister);
      data::ConfigMusicDoubleEqualityConditionRegister::ConfigMusicDoubleEqualityConditionRegister(&data::g_ConfigMusicDoubleEqualityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleEqualityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleEqualityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleEqualityConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleEqualityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleInequalityConditionRegister::ConfigMusicDoubleInequalityConditionRegister(&data::g_ConfigMusicDoubleInequalityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleInequalityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleInequalityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleInequalityConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleInequalityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleGreaterThanConditionRegister::ConfigMusicDoubleGreaterThanConditionRegister(&data::g_ConfigMusicDoubleGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleLessThanConditionRegister::ConfigMusicDoubleLessThanConditionRegister(&data::g_ConfigMusicDoubleLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleNoGreaterThanConditionRegister::ConfigMusicDoubleNoGreaterThanConditionRegister(&data::g_ConfigMusicDoubleNoGreaterThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleNoGreaterThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleNoGreaterThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleNoGreaterThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleNoGreaterThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicDoubleNoLessThanConditionRegister::ConfigMusicDoubleNoLessThanConditionRegister(&data::g_ConfigMusicDoubleNoLessThanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicDoubleNoLessThanConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicDoubleNoLessThanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicDoubleNoLessThanConditionFactory>::~shared_ptr,
        &data::ConfigMusicDoubleNoLessThanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicBooleanConditionRegister::ConfigMusicBooleanConditionRegister(&data::g_ConfigMusicBooleanConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicBooleanConditionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicBooleanConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicBooleanConditionFactory>::~shared_ptr,
        &data::ConfigMusicBooleanConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicStringConditionRegister::ConfigMusicStringConditionRegister(&data::g_ConfigMusicStringConditionRegister);
      data::ConfigMusicStringEqualityConditionRegister::ConfigMusicStringEqualityConditionRegister(&data::g_ConfigMusicStringEqualityConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicStringEqualityConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStringEqualityConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicStringEqualityConditionFactory>::~shared_ptr,
        &data::ConfigMusicStringEqualityConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicStringContainmentConditionRegister::ConfigMusicStringContainmentConditionRegister(&data::g_ConfigMusicStringContainmentConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicStringContainmentConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStringContainmentConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicStringContainmentConditionFactory>::~shared_ptr,
        &data::ConfigMusicStringContainmentConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListConditionRegister::ConfigMusicUInt32ListConditionRegister(&data::g_ConfigMusicUInt32ListConditionRegister);
      data::ConfigMusicUInt32ListEmptinessConditionRegister::ConfigMusicUInt32ListEmptinessConditionRegister(&data::g_ConfigMusicUInt32ListEmptinessConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListEmptinessConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListEmptinessConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListEmptinessConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListEmptinessConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListMemberConditionRegister::ConfigMusicUInt32ListMemberConditionRegister(&data::g_ConfigMusicUInt32ListMemberConditionRegister);
      data::ConfigMusicUInt32ListPresenceConditionRegister::ConfigMusicUInt32ListPresenceConditionRegister(&data::g_ConfigMusicUInt32ListPresenceConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListPresenceConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListPresenceConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListPresenceConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListPresenceConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListAbsenceConditionRegister::ConfigMusicUInt32ListAbsenceConditionRegister(&data::g_ConfigMusicUInt32ListAbsenceConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListAbsenceConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListAbsenceConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListAbsenceConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListAbsenceConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListMultiMemberConditionRegister::ConfigMusicUInt32ListMultiMemberConditionRegister(&data::g_ConfigMusicUInt32ListMultiMemberConditionRegister);
      data::ConfigMusicUInt32ListAllPresenceConditionRegister::ConfigMusicUInt32ListAllPresenceConditionRegister(&data::g_ConfigMusicUInt32ListAllPresenceConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListAllPresenceConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListAllPresenceConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListAllPresenceConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListAllPresenceConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListNonePresenceConditionRegister::ConfigMusicUInt32ListNonePresenceConditionRegister(&data::g_ConfigMusicUInt32ListNonePresenceConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListNonePresenceConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListNonePresenceConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListNonePresenceConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListNonePresenceConditionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUInt32ListPartialPresenceConditionRegister::ConfigMusicUInt32ListPartialPresenceConditionRegister(&data::g_ConfigMusicUInt32ListPartialPresenceConditionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUInt32ListPartialPresenceConditionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUInt32ListPartialPresenceConditionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUInt32ListPartialPresenceConditionFactory>::~shared_ptr,
        &data::ConfigMusicUInt32ListPartialPresenceConditionFactory::instance_ptr,
        &_dso_handle);
      v27 = ((v62 + 1520) >> 3) + 2147450880;
      *(_DWORD *)v27 = 0;
      *(_WORD *)(v27 + 4) = 0;
      *(_WORD *)(((v62 + 720) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 720) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStimulusHandler>();
      std::pair<std::string const,std::shared_ptr<data::ConfigMusicStimulusHandler>>::pair<char const(&)[27],std::shared_ptr<data::ConfigMusicStimulusHandler>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > *const)(v62 + 1520),
        (const char (*)[27])"ConfigMusicStimulusHandler",
        (std::shared_ptr<data::ConfigMusicStimulusHandler> *)(v62 + 720));
      v57._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > >::iterator)(v62 + 1520);
      v57._M_len = 1LL;
      *(_BYTE *)(((v62 + 304) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 320) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMusicStimulusHandler>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > > *const)(v62 + 320));
      std::map<std::string,std::shared_ptr<data::ConfigMusicStimulusHandler>>::map(
        &data::g_ConfigMusicStimulusHandlerMap[abi:cxx11],
        v57,
        (const std::less<std::string > *)(v62 + 304),
        (const std::map<std::string,std::shared_ptr<data::ConfigMusicStimulusHandler>>::allocator_type *)(v62 + 320));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigMusicStimulusHandler>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > > *const)(v62 + 320));
      *(_BYTE *)(((v62 + 320) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 304) >> 3) + 0x7FFF8000) = -8;
      for ( mm = (std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > *)(v62 + 1568);
            mm != (std::pair<const std::string,std::shared_ptr<data::ConfigMusicStimulusHandler> > *)(v62 + 1520);
            std::pair<std::string const,std::shared_ptr<data::ConfigMusicStimulusHandler>>::~pair(mm) )
      {
        --mm;
      }
      v29 = ((v62 + 1520) >> 3) + 2147450880;
      *(_DWORD *)v29 = -117901064;
      *(_WORD *)(v29 + 4) = -1800;
      std::shared_ptr<data::ConfigMusicStimulusHandler>::~shared_ptr((std::shared_ptr<data::ConfigMusicStimulusHandler> *const)(v62 + 720));
      *(_WORD *)(((v62 + 720) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigMusicStimulusHandler>>::~map,
        &data::g_ConfigMusicStimulusHandlerMap[abi:cxx11],
        &_dso_handle);
      data::ConfigMusicParameterizedStimulusHandlerRegister::ConfigMusicParameterizedStimulusHandlerRegister(&data::g_ConfigMusicParameterizedStimulusHandlerRegister);
      data::ConfigMusicIntStimulusHandlerRegister::ConfigMusicIntStimulusHandlerRegister(&data::g_ConfigMusicIntStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicIntStimulusHandlerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicIntStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicIntStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicIntStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUIntStimulusHandlerRegister::ConfigMusicUIntStimulusHandlerRegister(&data::g_ConfigMusicUIntStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUIntStimulusHandlerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUIntStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUIntStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicUIntStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicFloatStimulusHandlerRegister::ConfigMusicFloatStimulusHandlerRegister(&data::g_ConfigMusicFloatStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicFloatStimulusHandlerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicFloatStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicFloatStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicFloatStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicStringStimulusHandlerRegister::ConfigMusicStringStimulusHandlerRegister(&data::g_ConfigMusicStringStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicStringStimulusHandlerFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStringStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicStringStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicStringStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicMultiValueParameterizedStimulusHandlerRegister::ConfigMusicMultiValueParameterizedStimulusHandlerRegister(&data::g_ConfigMusicMultiValueParameterizedStimulusHandlerRegister);
      data::ConfigMusicUIntMultiValueStimulusHandlerRegister::ConfigMusicUIntMultiValueStimulusHandlerRegister(&data::g_ConfigMusicUIntMultiValueStimulusHandlerRegister);
      data::ConfigMusicUIntPresenceStimulusHandlerRegister::ConfigMusicUIntPresenceStimulusHandlerRegister(&data::g_ConfigMusicUIntPresenceStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUIntPresenceStimulusHandlerFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUIntPresenceStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUIntPresenceStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicUIntPresenceStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicUIntAbsenceStimulusHandlerRegister::ConfigMusicUIntAbsenceStimulusHandlerRegister(&data::g_ConfigMusicUIntAbsenceStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicUIntAbsenceStimulusHandlerFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicUIntAbsenceStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicUIntAbsenceStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicUIntAbsenceStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicStringMultiValueStimulusHandlerRegister::ConfigMusicStringMultiValueStimulusHandlerRegister(&data::g_ConfigMusicStringMultiValueStimulusHandlerRegister);
      data::ConfigMusicStringPresenceStimulusHandlerRegister::ConfigMusicStringPresenceStimulusHandlerRegister(&data::g_ConfigMusicStringPresenceStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicStringPresenceStimulusHandlerFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStringPresenceStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicStringPresenceStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicStringPresenceStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      data::ConfigMusicStringAbsenceStimulusHandlerRegister::ConfigMusicStringAbsenceStimulusHandlerRegister(&data::g_ConfigMusicStringAbsenceStimulusHandlerRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigMusicStringAbsenceStimulusHandlerFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigMusicStringAbsenceStimulusHandlerFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigMusicStringAbsenceStimulusHandlerFactory>::~shared_ptr,
        &data::ConfigMusicStringAbsenceStimulusHandlerFactory::instance_ptr,
        &_dso_handle);
      v30 = ((v62 + 1600) >> 3) + 2147450880;
      *(_DWORD *)v30 = 0;
      *(_WORD *)(v30 + 4) = 0;
      *(_WORD *)(((v62 + 752) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 752) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeNodeBase>();
      std::pair<std::string const,std::shared_ptr<data::ConfigJudgeNodeBase>>::pair<char const(&)[20],std::shared_ptr<data::ConfigJudgeNodeBase>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > *const)(v62 + 1600),
        (const char (*)[20])"ConfigJudgeNodeBase",
        (std::shared_ptr<data::ConfigJudgeNodeBase> *)(v62 + 752));
      v58._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > >::iterator)(v62 + 1600);
      v58._M_len = 1LL;
      *(_BYTE *)(((v62 + 336) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 352) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigJudgeNodeBase>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > > *const)(v62 + 352));
      std::map<std::string,std::shared_ptr<data::ConfigJudgeNodeBase>>::map(
        &data::g_ConfigJudgeNodeBaseMap[abi:cxx11],
        v58,
        (const std::less<std::string > *)(v62 + 336),
        (const std::map<std::string,std::shared_ptr<data::ConfigJudgeNodeBase>>::allocator_type *)(v62 + 352));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigJudgeNodeBase>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > > *const)(v62 + 352));
      *(_BYTE *)(((v62 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 336) >> 3) + 0x7FFF8000) = -8;
      for ( nn = (std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > *)(v62 + 1648);
            nn != (std::pair<const std::string,std::shared_ptr<data::ConfigJudgeNodeBase> > *)(v62 + 1600);
            std::pair<std::string const,std::shared_ptr<data::ConfigJudgeNodeBase>>::~pair(nn) )
      {
        --nn;
      }
      v32 = ((v62 + 1600) >> 3) + 2147450880;
      *(_DWORD *)v32 = -117901064;
      *(_WORD *)(v32 + 4) = -1800;
      std::shared_ptr<data::ConfigJudgeNodeBase>::~shared_ptr((std::shared_ptr<data::ConfigJudgeNodeBase> *const)(v62 + 752));
      *(_WORD *)(((v62 + 752) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigJudgeNodeBase>>::~map,
        &data::g_ConfigJudgeNodeBaseMap[abi:cxx11],
        &_dso_handle);
      data::ConfigJudgeGroupEntityInViewRegister::ConfigJudgeGroupEntityInViewRegister(&data::g_ConfigJudgeGroupEntityInViewRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeGroupEntityInViewFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeGroupEntityInViewFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeGroupEntityInViewFactory>::~shared_ptr,
        &data::ConfigJudgeGroupEntityInViewFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeCurrentTimeRegister::ConfigJudgeCurrentTimeRegister(&data::g_ConfigJudgeCurrentTimeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeCurrentTimeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeCurrentTimeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeCurrentTimeFactory>::~shared_ptr,
        &data::ConfigJudgeCurrentTimeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeMoonOrSunInCameraRegister::ConfigJudgeMoonOrSunInCameraRegister(&data::g_ConfigJudgeMoonOrSunInCameraRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeMoonOrSunInCameraFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeMoonOrSunInCameraFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeMoonOrSunInCameraFactory>::~shared_ptr,
        &data::ConfigJudgeMoonOrSunInCameraFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeEntityInViewByEntityConfigIDRegister::ConfigJudgeEntityInViewByEntityConfigIDRegister(&data::g_ConfigJudgeEntityInViewByEntityConfigIDRegister);
      data::ConfigJudgeCrowdInViewByCrowdTypeIDRegister::ConfigJudgeCrowdInViewByCrowdTypeIDRegister(&data::g_ConfigJudgeCrowdInViewByCrowdTypeIDRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory>::~shared_ptr,
        &data::ConfigJudgeCrowdInViewByCrowdTypeIDFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarElementTypeRegister::ConfigJudgeAvatarElementTypeRegister(&data::g_ConfigJudgeAvatarElementTypeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarElementTypeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarElementTypeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarElementTypeFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarElementTypeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarWeaponTypeRegister::ConfigJudgeAvatarWeaponTypeRegister(&data::g_ConfigJudgeAvatarWeaponTypeRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarWeaponTypeFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarWeaponTypeFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarWeaponTypeFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarWeaponTypeFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarFaceCameraRegister::ConfigJudgeAvatarFaceCameraRegister(&data::g_ConfigJudgeAvatarFaceCameraRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarFaceCameraFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarFaceCameraFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarFaceCameraFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarFaceCameraFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarFaceTarget2DRegister::ConfigJudgeAvatarFaceTarget2DRegister(&data::g_ConfigJudgeAvatarFaceTarget2DRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarFaceTarget2DFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarFaceTarget2DFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarFaceTarget2DFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarFaceTarget2DFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarAnimatorStateRegister::ConfigJudgeAvatarAnimatorStateRegister(&data::g_ConfigJudgeAvatarAnimatorStateRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarAnimatorStateFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarAnimatorStateFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarAnimatorStateFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarAnimatorStateFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeGroupEntityDirectionHasBlockRegister::ConfigJudgeGroupEntityDirectionHasBlockRegister(&data::g_ConfigJudgeGroupEntityDirectionHasBlockRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeGroupEntityDirectionHasBlockFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeGroupEntityDirectionHasBlockFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeGroupEntityDirectionHasBlockFactory>::~shared_ptr,
        &data::ConfigJudgeGroupEntityDirectionHasBlockFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAvatarConfigIDRegister::ConfigJudgeAvatarConfigIDRegister(&data::g_ConfigJudgeAvatarConfigIDRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAvatarConfigIDFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAvatarConfigIDFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAvatarConfigIDFactory>::~shared_ptr,
        &data::ConfigJudgeAvatarConfigIDFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeGrassStateRegister::ConfigJudgeGrassStateRegister(&data::g_ConfigJudgeGrassStateRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeGrassStateFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeGrassStateFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeGrassStateFactory>::~shared_ptr,
        &data::ConfigJudgeGrassStateFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeAnimStateRegister::ConfigJudgeAnimStateRegister(&data::g_ConfigJudgeAnimStateRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeAnimStateFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeAnimStateFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeAnimStateFactory>::~shared_ptr,
        &data::ConfigJudgeAnimStateFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeActivityPhotoAvatarInCameraViewRegister::ConfigJudgeActivityPhotoAvatarInCameraViewRegister(&data::g_ConfigJudgeActivityPhotoAvatarInCameraViewRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory>::~shared_ptr,
        &data::ConfigJudgeActivityPhotoAvatarInCameraViewFactory::instance_ptr,
        &_dso_handle);
      data::ConfigJudgeNodeContainerRegister::ConfigJudgeNodeContainerRegister(&data::g_ConfigJudgeNodeContainerRegister);
      data::ConfigJudgeNodeContainerWithGroupEntityInfoRegister::ConfigJudgeNodeContainerWithGroupEntityInfoRegister(&data::g_ConfigJudgeNodeContainerWithGroupEntityInfoRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory>::~shared_ptr,
        &data::ConfigJudgeNodeContainerWithGroupEntityInfoFactory::instance_ptr,
        &_dso_handle);
      v33 = ((v62 + 1680) >> 3) + 2147450880;
      *(_DWORD *)v33 = 0;
      *(_WORD *)(v33 + 4) = 0;
      *(_WORD *)(((v62 + 784) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 784) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepBaseCond>();
      std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseCond>>::pair<char const(&)[22],std::shared_ptr<data::ConfigQTEStepBaseCond>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > *const)(v62 + 1680),
        (const char (*)[22])"ConfigQTEStepBaseCond",
        (std::shared_ptr<data::ConfigQTEStepBaseCond> *)(v62 + 784));
      v59._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > >::iterator)(v62 + 1680);
      v59._M_len = 1LL;
      *(_BYTE *)(((v62 + 368) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 384) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseCond>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > *const)(v62 + 384));
      std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::map(
        &data::g_ConfigQTEStepBaseCondMap[abi:cxx11],
        v59,
        (const std::less<std::string > *)(v62 + 368),
        (const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::allocator_type *)(v62 + 384));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseCond>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > > *const)(v62 + 384));
      *(_BYTE *)(((v62 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 368) >> 3) + 0x7FFF8000) = -8;
      for ( i1 = (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > *)(v62 + 1728);
            i1 != (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseCond> > *)(v62 + 1680);
            std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseCond>>::~pair(i1) )
      {
        --i1;
      }
      v35 = ((v62 + 1680) >> 3) + 2147450880;
      *(_DWORD *)v35 = -117901064;
      *(_WORD *)(v35 + 4) = -1800;
      std::shared_ptr<data::ConfigQTEStepBaseCond>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseCond> *const)(v62 + 784));
      *(_WORD *)(((v62 + 784) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseCond>>::~map,
        &data::g_ConfigQTEStepBaseCondMap[abi:cxx11],
        &_dso_handle);
      data::ConfigQTEStepPowerBarCondRegister::ConfigQTEStepPowerBarCondRegister(&data::g_ConfigQTEStepPowerBarCondRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepPowerBarCondFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepPowerBarCondFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepPowerBarCondFactory>::~shared_ptr,
        &data::ConfigQTEStepPowerBarCondFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEButtonCountDownValueCondRegister::ConfigQTEButtonCountDownValueCondRegister(&data::g_ConfigQTEButtonCountDownValueCondRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEButtonCountDownValueCondFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEButtonCountDownValueCondFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEButtonCountDownValueCondFactory>::~shared_ptr,
        &data::ConfigQTEButtonCountDownValueCondFactory::instance_ptr,
        &_dso_handle);
      v36 = ((v62 + 1760) >> 3) + 2147450880;
      *(_DWORD *)v36 = 0;
      *(_WORD *)(v36 + 4) = 0;
      *(_WORD *)(((v62 + 816) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 816) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepBaseAction>();
      std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseAction>>::pair<char const(&)[24],std::shared_ptr<data::ConfigQTEStepBaseAction>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > *const)(v62 + 1760),
        (const char (*)[24])"ConfigQTEStepBaseAction",
        (std::shared_ptr<data::ConfigQTEStepBaseAction> *)(v62 + 816));
      v60._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > >::iterator)(v62 + 1760);
      v60._M_len = 1LL;
      *(_BYTE *)(((v62 + 400) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 416) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseAction>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > *const)(v62 + 416));
      std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::map(
        &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
        v60,
        (const std::less<std::string > *)(v62 + 400),
        (const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::allocator_type *)(v62 + 416));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseAction>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > > *const)(v62 + 416));
      *(_BYTE *)(((v62 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 400) >> 3) + 0x7FFF8000) = -8;
      for ( i2 = (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > *)(v62 + 1808);
            i2 != (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseAction> > *)(v62 + 1760);
            std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseAction>>::~pair(i2) )
      {
        --i2;
      }
      v38 = ((v62 + 1760) >> 3) + 2147450880;
      *(_DWORD *)v38 = -117901064;
      *(_WORD *)(v38 + 4) = -1800;
      std::shared_ptr<data::ConfigQTEStepBaseAction>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseAction> *const)(v62 + 816));
      *(_WORD *)(((v62 + 816) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseAction>>::~map,
        &data::g_ConfigQTEStepBaseActionMap[abi:cxx11],
        &_dso_handle);
      data::ConfigQTEStepPowerBarActionRegister::ConfigQTEStepPowerBarActionRegister(&data::g_ConfigQTEStepPowerBarActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepPowerBarActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepPowerBarActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepPowerBarActionFactory>::~shared_ptr,
        &data::ConfigQTEStepPowerBarActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEStepPlayAudioActionRegister::ConfigQTEStepPlayAudioActionRegister(&data::g_ConfigQTEStepPlayAudioActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepPlayAudioActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepPlayAudioActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepPlayAudioActionFactory>::~shared_ptr,
        &data::ConfigQTEStepPlayAudioActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEStepCutsceneFailedBlackScreenActionRegister::ConfigQTEStepCutsceneFailedBlackScreenActionRegister(&data::g_ConfigQTEStepCutsceneFailedBlackScreenActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory>::~shared_ptr,
        &data::ConfigQTEStepCutsceneFailedBlackScreenActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEStepCutsceneJumpPointActionRegister::ConfigQTEStepCutsceneJumpPointActionRegister(&data::g_ConfigQTEStepCutsceneJumpPointActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepCutsceneJumpPointActionFactory::instance_ptr >> 3)
                    + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepCutsceneJumpPointActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepCutsceneJumpPointActionFactory>::~shared_ptr,
        &data::ConfigQTEStepCutsceneJumpPointActionFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEStepBaseInterActionRegister::ConfigQTEStepBaseInterActionRegister(&data::g_ConfigQTEStepBaseInterActionRegister);
      data::ConfigQTEStepCameraMoveActionRegister::ConfigQTEStepCameraMoveActionRegister(&data::g_ConfigQTEStepCameraMoveActionRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepCameraMoveActionFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepCameraMoveActionFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepCameraMoveActionFactory>::~shared_ptr,
        &data::ConfigQTEStepCameraMoveActionFactory::instance_ptr,
        &_dso_handle);
      v39 = ((v62 + 1840) >> 3) + 2147450880;
      *(_DWORD *)v39 = 0;
      *(_WORD *)(v39 + 4) = 0;
      *(_WORD *)(((v62 + 848) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v62 + 848) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepBaseComponent>();
      std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::pair<char const(&)[27],std::shared_ptr<data::ConfigQTEStepBaseComponent>,true>(
        (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > *const)(v62 + 1840),
        (const char (*)[27])"ConfigQTEStepBaseComponent",
        (std::shared_ptr<data::ConfigQTEStepBaseComponent> *)(v62 + 848));
      v61._M_array = (std::initializer_list<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > >::iterator)(v62 + 1840);
      v61._M_len = 1LL;
      *(_BYTE *)(((v62 + 432) >> 3) + 0x7FFF8000) = 1;
      *(_BYTE *)(((v62 + 448) >> 3) + 0x7FFF8000) = 1;
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseComponent>>>::allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > *const)(v62 + 448));
      std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::map(
        &data::g_ConfigQTEStepBaseComponentMap[abi:cxx11],
        v61,
        (const std::less<std::string > *)(v62 + 432),
        (const std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::allocator_type *)(v62 + 448));
      std::allocator<std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseComponent>>>::~allocator((std::allocator<std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > > *const)(v62 + 448));
      *(_BYTE *)(((v62 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v62 + 432) >> 3) + 0x7FFF8000) = -8;
      for ( i3 = (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > *)(v62 + 1888);
            i3 != (std::pair<const std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent> > *)(v62 + 1840);
            std::pair<std::string const,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::~pair(i3) )
      {
        --i3;
      }
      v41 = ((v62 + 1840) >> 3) + 2147450880;
      *(_DWORD *)v41 = -117901064;
      *(_WORD *)(v41 + 4) = -1800;
      std::shared_ptr<data::ConfigQTEStepBaseComponent>::~shared_ptr((std::shared_ptr<data::ConfigQTEStepBaseComponent> *const)(v62 + 848));
      *(_WORD *)(((v62 + 848) >> 3) + 0x7FFF8000) = -1800;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,std::shared_ptr<data::ConfigQTEStepBaseComponent>>::~map,
        &data::g_ConfigQTEStepBaseComponentMap[abi:cxx11],
        &_dso_handle);
      data::ConfigQTEStepButtonComponentRegister::ConfigQTEStepButtonComponentRegister(&data::g_ConfigQTEStepButtonComponentRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepButtonComponentFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepButtonComponentFactory>();
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepButtonComponentFactory>::~shared_ptr,
        &data::ConfigQTEStepButtonComponentFactory::instance_ptr,
        &_dso_handle);
      data::ConfigQTEStepPowerBarComponentRegister::ConfigQTEStepPowerBarComponentRegister(&data::g_ConfigQTEStepPowerBarComponentRegister);
      if ( *(_WORD *)(((unsigned __int64)&data::ConfigQTEStepPowerBarComponentFactory::instance_ptr >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      common::tools::perf::make_shared<data::ConfigQTEStepPowerBarComponentFactory>();
      v44 = &data::ConfigQTEStepPowerBarComponentFactory::instance_ptr;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::shared_ptr<data::ConfigQTEStepPowerBarComponentFactory>::~shared_ptr,
        &data::ConfigQTEStepPowerBarComponentFactory::instance_ptr,
        &_dso_handle);
      v42 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
      v43 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                     + 0x7FFF8000);
      LOBYTE(v44) = v43 != 0;
      v45 = (v43 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v43);
      if ( (_BYTE)v45 )
        __asan_report_load1(
          &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
          v44,
          v45);
      if ( !*v42 )
      {
        v46 = &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero;
        v47 = *(_BYTE *)(((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                       + 0x7FFF8000);
        LOBYTE(v44) = v47 != 0;
        v48 = (v47 != 0) & (unsigned __int8)((char)((unsigned __int64)&`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero & 7) >= v47);
        if ( (_BYTE)v48 )
          __asan_report_store1(
            &`guard variable for'common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero,
            v44,
            v48);
        *v46 = 1;
        v49 = common::tools::StringStream<common::tools::FixedBuffer<16384>>::digits + 9;
        if ( *(_BYTE *)(((unsigned __int64)&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero >> 3)
                      + 0x7FFF8000) )
          __asan_report_store8(&common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero, v44);
        common::tools::StringStream<common::tools::FixedBuffer<16384>>::zero = v49;
      }
    }
    __asan_after_dynamic_init();
  }
  if ( v63 == (char *)v62 )
  {
    *(_QWORD *)((v62 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v62 >> 3) + 0x7FFF80E8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v3 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v3 + 2147450880 - (((_DWORD)v3 + 2147450888) & 0xFFFFFFF8) + 240) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v62 = 1172321806LL;
    __asan_stack_free_5(v62, 1920LL, v63);
  }
};
