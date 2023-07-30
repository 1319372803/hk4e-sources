// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigScheduler.cpp

// Line 19: range 00000000120B73D1-00000000120B76C7
const char *__cdecl data::enumValToStr(data::ConfigSchedulePlatform e)
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
    case DEFAULT_HIGHT:
      result = "DEFAULT_HIGHT";
      break;
    case DEFAULT_LOWEST:
      result = "DEFAULT_LOWEST";
      break;
    case PC_3:
      result = "PC";
      break;
    case PS4_HIGH:
      result = "PS4_HIGH";
      break;
    case PS4_LOW:
      result = "PS4_LOW";
      break;
    case SWITCH_0:
      result = "SWITCH";
      break;
    case IOS_HIGH:
      result = "IOS_HIGH";
      break;
    case IOS_MEDIUM:
      result = "IOS_MEDIUM";
      break;
    case IOS_LOW:
      result = "IOS_LOW";
      break;
    case ANDROID_HIGH:
      result = "ANDROID_HIGH";
      break;
    case ANDROID_MEDIUM:
      result = "ANDROID_MEDIUM";
      break;
    case ANDROID_LOW:
      result = "ANDROID_LOW";
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "enumValToStr",
        47);
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

// Line 53: range 00000000120B76C8-00000000120B854D
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigSchedulePlatform *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigSchedulePlatform> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulePlatform> >::pointer v10; // rax
  data::ConfigSchedulePlatform second; // ecx
  char v12; // dl
  data::ConfigSchedulePlatform *ea; // [rsp+10h] [rbp-420h]
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
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 5 it:74 288 8 9 <unknown> 320 32"
                        " 9 <unknown> 384 32 9 <unknown> 448 480 9 <unknown>";
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "enumStrToVal",
      56);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[14],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 448),
        (const char (*)[14])"DEFAULT_HIGHT",
        (data::ConfigSchedulePlatform *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "DEFAULT_HIGHT");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[15],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 488),
        (const char (*)[15])"DEFAULT_LOWEST",
        (data::ConfigSchedulePlatform *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "DEFAULT_LOWEST");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[3],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 528),
        (const char (*)[3])"PC",
        (data::ConfigSchedulePlatform *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "PC");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[9],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 568),
        (const char (*)[9])"PS4_HIGH",
        (data::ConfigSchedulePlatform *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "PS4_HIGH");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[8],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 608),
        (const char (*)[8])"PS4_LOW",
        (data::ConfigSchedulePlatform *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "PS4_LOW");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[7],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 648),
        (const char (*)[7])"SWITCH",
        (data::ConfigSchedulePlatform *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "SWITCH");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[9],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 688),
        (const char (*)[9])"IOS_HIGH",
        (data::ConfigSchedulePlatform *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "IOS_HIGH");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[11],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 728),
        (const char (*)[11])"IOS_MEDIUM",
        (data::ConfigSchedulePlatform *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "IOS_MEDIUM");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[8],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 768),
        (const char (*)[8])"IOS_LOW",
        (data::ConfigSchedulePlatform *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "IOS_LOW");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[13],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 808),
        (const char (*)[13])"ANDROID_HIGH",
        (data::ConfigSchedulePlatform *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ANDROID_HIGH");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[15],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 848),
        (const char (*)[15])"ANDROID_MEDIUM",
        (data::ConfigSchedulePlatform *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "ANDROID_MEDIUM");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::ConfigSchedulePlatform>::pair<char const(&)[12],data::ConfigSchedulePlatform,true>(
        (std::pair<const std::string,data::ConfigSchedulePlatform> *const)(v2 + 888),
        (const char (*)[12])"ANDROID_LOW",
        (data::ConfigSchedulePlatform *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::ConfigSchedulePlatform>>::allocator((std::allocator<std::pair<const std::string,data::ConfigSchedulePlatform> > *const)(v2 + 48));
      std::map<std::string,data::ConfigSchedulePlatform>::map(
        &data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigSchedulePlatform> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ConfigSchedulePlatform>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigSchedulePlatform>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigSchedulePlatform>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigSchedulePlatform> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigSchedulePlatform> *)(v2 + 928);
            i != (std::pair<const std::string,data::ConfigSchedulePlatform> *)(v2 + 448);
            std::pair<std::string const,data::ConfigSchedulePlatform>::~pair(i) )
      {
        --i;
      }
      e = (data::ConfigSchedulePlatform *)480;
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
    *(std::map<std::string,data::ConfigSchedulePlatform>::iterator *)(v2 + 256) = std::map<std::string,data::ConfigSchedulePlatform>::find(
                                                                                    &data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m,
                                                                                    s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::ConfigSchedulePlatform>::iterator *)(v2 + 288) = std::map<std::string,data::ConfigSchedulePlatform>::end(&data::enumStrToVal(std::string const&,data::ConfigSchedulePlatform &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulePlatform> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulePlatform> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "enumStrToVal",
        77);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigSchedulePlatform>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulePlatform> > *const)(v2 + 256));
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

// Line 85: range 00000000120B854E-00000000120B85F6
const char *__cdecl data::getDescription(data::ConfigSchedulePlatform e)
{
  const char *result; // rax

  switch ( e )
  {
    case DEFAULT_HIGHT:
      result = (const char *)&unk_1A8FD5C0;
      break;
    case DEFAULT_LOWEST:
      result = (const char *)&unk_1A8FD600;
      break;
    case PC_3:
      result = "PC";
      break;
    case PS4_HIGH:
      result = "PS4_PRO_OTHER";
      break;
    case PS4_LOW:
      result = "PS4_BASE";
      break;
    case SWITCH_0:
      result = "SWITCH";
      break;
    case IOS_HIGH:
      result = "IOS_HIGH";
      break;
    case IOS_MEDIUM:
      result = "IOS_MEDIUM";
      break;
    case IOS_LOW:
      result = "IOS_LOW";
      break;
    case ANDROID_HIGH:
      result = "ANDROID_HIGH";
      break;
    case ANDROID_MEDIUM:
      result = "ANDROID_MEDIUM";
      break;
    case ANDROID_LOW:
      result = "ANDROID_LOW";
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 118: range 00000000120B85F7-00000000120B8856
const char *__cdecl data::enumValToStr(data::ConfigScheduleJobType e)
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
    if ( e == LOSE )
    {
      result = "LOSE";
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "enumValToStr",
        126);
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
    result = "Default";
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

// Line 132: range 00000000120B8857-00000000120B908E
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigScheduleJobType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigScheduleJobType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigScheduleJobType> >::pointer v11; // rax
  data::ConfigScheduleJobType second; // ecx
  char v13; // dl
  data::ConfigScheduleJobType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:143 144 8 9 <un"
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "enumStrToVal",
      135);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::ConfigScheduleJobType>::pair<char const(&)[8],data::ConfigScheduleJobType,true>(
        (std::pair<const std::string,data::ConfigScheduleJobType> *const)(v2 + 304),
        (const char (*)[8])"Default",
        (data::ConfigScheduleJobType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Default");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::ConfigScheduleJobType>::pair<char const(&)[5],data::ConfigScheduleJobType,true>(
        (std::pair<const std::string,data::ConfigScheduleJobType> *const)(v2 + 344),
        (const char (*)[5])"LOSE",
        (data::ConfigScheduleJobType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::ConfigScheduleJobType>>::allocator((std::allocator<std::pair<const std::string,data::ConfigScheduleJobType> > *const)(v2 + 64));
      std::map<std::string,data::ConfigScheduleJobType>::map(
        &data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigScheduleJobType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::ConfigScheduleJobType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m);
      e = (data::ConfigScheduleJobType *)&data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigScheduleJobType>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigScheduleJobType>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigScheduleJobType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigScheduleJobType> *)(v2 + 384);
            i != (std::pair<const std::string,data::ConfigScheduleJobType> *)(v2 + 304);
            std::pair<std::string const,data::ConfigScheduleJobType>::~pair(i) )
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
    *(std::map<std::string,data::ConfigScheduleJobType>::iterator *)(v2 + 112) = std::map<std::string,data::ConfigScheduleJobType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::ConfigScheduleJobType>::iterator *)(v2 + 144) = std::map<std::string,data::ConfigScheduleJobType>::end(&data::enumStrToVal(std::string const&,data::ConfigScheduleJobType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigScheduleJobType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigScheduleJobType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "enumStrToVal",
        146);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigScheduleJobType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigScheduleJobType> > *const)(v2 + 112));
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

// Line 154: range 00000000120B908F-00000000120B90BE
const char *__cdecl data::getDescription(data::ConfigScheduleJobType e)
{
  if ( e == Default_18 )
    return (const char *)&unk_1A8ACA80;
  if ( e == LOSE )
    return (const char *)&unk_1A8FD7E0;
  return "unknown enum value!";
};

// Line 167: range 00000000120B90BF-00000000120B93DD
const char *__cdecl data::enumValToStr(data::ConfigSchedulerType e)
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
  if ( e > I_AFTER_LATE_UPDATE_POST )
  {
    if ( e == G_RENDER_TO_NEXT_BEFORE_LATE_UPDATE )
    {
      result = "G_RENDER_TO_NEXT_BEFORE_LATE_UPDATE";
      goto LABEL_26;
    }
    goto LABEL_21;
  }
  if ( e < I_UPDATE )
  {
LABEL_21:
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "enumValToStr",
      195);
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
    goto LABEL_26;
  }
  switch ( e )
  {
    case I_UPDATE:
      result = "I_UPDATE";
      break;
    case I_LATE_PRE_UPDATE:
      result = "I_LATE_PRE_UPDATE";
      break;
    case I_LATE_POST_UPDATE:
      result = "I_LATE_POST_UPDATE";
      break;
    case I_AFTER_RES_TO_UPDATE_END:
      result = "I_AFTER_RES_TO_UPDATE_END";
      break;
    case I_LATE_POST_UPDATE_TO_NEXT_BEFORE_LATE_UPDATE:
      result = "I_LATE_POST_UPDATE_TO_NEXT_BEFORE_LATE_UPDATE";
      break;
    case I_RENDER_TO_NEXT_BEFORE_RES:
      result = "I_RENDER_TO_NEXT_BEFORE_RES";
      break;
    case I_RENDER_TO_NEXT_BEFORE_LATE_UPDATE:
      result = "I_RENDER_TO_NEXT_BEFORE_LATE_UPDATE";
      break;
    case I_RENDER_TO_NEXT_BEFORE_NETWORK:
      result = "I_RENDER_TO_NEXT_BEFORE_NETWORK";
      break;
    case I_AFTER_NETWORK_TO_RENDER:
      result = "I_AFTER_NETWORK_TO_RENDER";
      break;
    case I_AFTER_ENTITY_TO_EFFECT_END:
      result = "I_AFTER_ENTITY_TO_EFFECT_END";
      break;
    case I_AFTER_LATE_UPDATE_POST:
      result = "I_AFTER_LATE_UPDATE_POST";
      break;
    default:
      goto LABEL_21;
  }
LABEL_26:
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

// Line 201: range 00000000120B93DE-00000000120BA263
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigSchedulerType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigSchedulerType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulerType> >::pointer v10; // rax
  data::ConfigSchedulerType second; // ecx
  char v12; // dl
  data::ConfigSchedulerType *ea; // [rsp+10h] [rbp-420h]
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
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:222 288 8 9 <unknown> 320 3"
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "enumStrToVal",
      204);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[9],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 448),
        (const char (*)[9])"I_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "I_UPDATE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[18],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 488),
        (const char (*)[18])"I_LATE_PRE_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "I_LATE_PRE_UPDATE");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[19],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 528),
        (const char (*)[19])"I_LATE_POST_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "I_LATE_POST_UPDATE");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[26],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 568),
        (const char (*)[26])"I_AFTER_RES_TO_UPDATE_END",
        (data::ConfigSchedulerType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "I_AFTER_RES_TO_UPDATE_END");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[46],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 608),
        (const char (*)[46])"I_LATE_POST_UPDATE_TO_NEXT_BEFORE_LATE_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "I_LATE_POST_UPDATE_TO_NEXT_BEFORE_LATE_UPDATE");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[28],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 648),
        (const char (*)[28])"I_RENDER_TO_NEXT_BEFORE_RES",
        (data::ConfigSchedulerType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "I_RENDER_TO_NEXT_BEFORE_RES");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[36],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 688),
        (const char (*)[36])"I_RENDER_TO_NEXT_BEFORE_LATE_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "I_RENDER_TO_NEXT_BEFORE_LATE_UPDATE");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[32],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 728),
        (const char (*)[32])"I_RENDER_TO_NEXT_BEFORE_NETWORK",
        (data::ConfigSchedulerType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "I_RENDER_TO_NEXT_BEFORE_NETWORK");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[26],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 768),
        (const char (*)[26])"I_AFTER_NETWORK_TO_RENDER",
        (data::ConfigSchedulerType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "I_AFTER_NETWORK_TO_RENDER");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[29],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 808),
        (const char (*)[29])"I_AFTER_ENTITY_TO_EFFECT_END",
        (data::ConfigSchedulerType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "I_AFTER_ENTITY_TO_EFFECT_END");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[25],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 848),
        (const char (*)[25])"I_AFTER_LATE_UPDATE_POST",
        (data::ConfigSchedulerType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "I_AFTER_LATE_UPDATE_POST");
      *(_DWORD *)(v2 + 240) = 100;
      std::pair<std::string const,data::ConfigSchedulerType>::pair<char const(&)[36],data::ConfigSchedulerType,true>(
        (std::pair<const std::string,data::ConfigSchedulerType> *const)(v2 + 888),
        (const char (*)[36])"G_RENDER_TO_NEXT_BEFORE_LATE_UPDATE",
        (data::ConfigSchedulerType *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::ConfigSchedulerType>>::allocator((std::allocator<std::pair<const std::string,data::ConfigSchedulerType> > *const)(v2 + 48));
      std::map<std::string,data::ConfigSchedulerType>::map(
        &data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigSchedulerType> >)__PAIR128__(12LL, v2 + 448),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ConfigSchedulerType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigSchedulerType>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigSchedulerType>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigSchedulerType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigSchedulerType> *)(v2 + 928);
            i != (std::pair<const std::string,data::ConfigSchedulerType> *)(v2 + 448);
            std::pair<std::string const,data::ConfigSchedulerType>::~pair(i) )
      {
        --i;
      }
      e = (data::ConfigSchedulerType *)480;
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
    *(std::map<std::string,data::ConfigSchedulerType>::iterator *)(v2 + 256) = std::map<std::string,data::ConfigSchedulerType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::ConfigSchedulerType>::iterator *)(v2 + 288) = std::map<std::string,data::ConfigSchedulerType>::end(&data::enumStrToVal(std::string const&,data::ConfigSchedulerType &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulerType> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulerType> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "enumStrToVal",
        225);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigSchedulerType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigSchedulerType> > *const)(v2 + 256));
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

// Line 233: range 00000000120BA264-00000000120BA324
const char *__cdecl data::getDescription(data::ConfigSchedulerType e)
{
  const char *result; // rax

  if ( e > I_AFTER_LATE_UPDATE_POST )
  {
    if ( e == G_RENDER_TO_NEXT_BEFORE_LATE_UPDATE )
      return (const char *)&unk_1A8FE120;
    return "unknown enum value!";
  }
  if ( e < I_UPDATE )
    return "unknown enum value!";
  switch ( e )
  {
    case I_UPDATE:
      result = (const char *)&unk_1A8FDD20;
      break;
    case I_LATE_PRE_UPDATE:
      result = (const char *)&unk_1A8FDD60;
      break;
    case I_LATE_POST_UPDATE:
      result = (const char *)&unk_1A8FDDA0;
      break;
    case I_AFTER_RES_TO_UPDATE_END:
      result = (const char *)&unk_1A8FDDE0;
      break;
    case I_LATE_POST_UPDATE_TO_NEXT_BEFORE_LATE_UPDATE:
      result = (const char *)&unk_1A8FDE20;
      break;
    case I_RENDER_TO_NEXT_BEFORE_RES:
      result = (const char *)&unk_1A8FDE80;
      break;
    case I_RENDER_TO_NEXT_BEFORE_LATE_UPDATE:
      result = (const char *)&unk_1A8FDF00;
      break;
    case I_RENDER_TO_NEXT_BEFORE_NETWORK:
      result = (const char *)&unk_1A8FDF80;
      break;
    case I_AFTER_NETWORK_TO_RENDER:
      result = (const char *)&unk_1A8FE000;
      break;
    case I_AFTER_ENTITY_TO_EFFECT_END:
      result = (const char *)&unk_1A8FE060;
      break;
    case I_AFTER_LATE_UPDATE_POST:
      result = (const char *)&unk_1A8FE0C0;
      break;
    default:
      return "unknown enum value!";
  }
  return result;
};

// Line 267: range 00000000120BA326-00000000120BB2D2
bool __cdecl data::ConfigJob::fromJson(data::ConfigJob *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  bool v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  const Json::Value *is_force_main_thread_ptr; // [rsp+18h] [rbp-3D8h]
  Json::Value *schedule_job_type_ptr; // [rsp+20h] [rbp-3D0h]
  Json::Value *schedule_type_ptr; // [rsp+28h] [rbp-3C8h]
  const Json::Value *max_node_num_ptr; // [rsp+30h] [rbp-3C0h]
  const Json::Value *group_id_ptr; // [rsp+38h] [rbp-3B8h]
  char v15[944]; // [rsp+40h] [rbp-3B0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(896LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 "
                        "<unknown> 832 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigJob::fromJson;
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
  v4[536862745] = -218959118;
  v4[536862747] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "isForceMainThread",
    (const std::allocator<char> *)(v2 + 48));
  is_force_main_thread_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( is_force_main_thread_ptr && !fromJson<bool>(is_force_main_thread_ptr, &this->is_force_main_thread) )
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "fromJson",
      277);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[39])"fromJson for: isForceMainThread fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 256),
      "scheduleJobType",
      (const std::allocator<char> *)(v2 + 64));
    schedule_job_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !schedule_job_type_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 320, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 320), (Json::Value_0 *)schedule_job_type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 320), &this->schedule_job_type);
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ConfigScheduler.cpp",
        "fromJson",
        289);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[37])"fromJson for: scheduleJobType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "scheduleType",
        (const std::allocator<char> *)(v2 + 80));
      schedule_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !schedule_type_ptr )
        goto LABEL_23;
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 512), (Json::Value_0 *)schedule_type_ptr);
      v7 = !data::enumStrToVal((const std::string *)(v2 + 512), &this->schedule_type);
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
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
          "./src/json_data_auto/ConfigScheduler.cpp",
          "fromJson",
          301);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[34])"fromJson for: scheduleType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        result = 0;
      }
      else
      {
LABEL_23:
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          "maxNodeNum",
          (const std::allocator<char> *)(v2 + 96));
        max_node_num_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( max_node_num_ptr && !fromJson<int>(max_node_num_ptr, &this->max_node_num) )
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
            "./src/json_data_auto/ConfigScheduler.cpp",
            "fromJson",
            313);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[32])"fromJson for: maxNodeNum fails!");
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
            "groupId",
            (const std::allocator<char> *)(v2 + 112));
          group_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( group_id_ptr && !fromJson<int>(group_id_ptr, &this->group_id) )
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
              "./src/json_data_auto/ConfigScheduler.cpp",
              "fromJson",
              325);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 832),
              (const char (*)[29])"fromJson for: groupId fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            result = 0;
          }
          else
          {
            v8 = ((_BYTE)this + 20) & 7;
            v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v9 )
              __asan_report_store1(&this->is_json_loaded, v8, v9);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
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

// Line 333: range 00000000120BB2D4-00000000120BB582
int32_t __cdecl data::ConfigJob::getHashValue(const data::ConfigJob *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:334";
  *(_QWORD *)(v2 + 16) = data::ConfigJob::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->is_force_main_thread, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_job_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_job_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_job_type);
  }
  common::tools::HashUtils::appendHash(this->schedule_job_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->schedule_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->schedule_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->schedule_type);
  }
  common::tools::HashUtils::appendHash(this->schedule_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_node_num >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_node_num >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_node_num);
  }
  common::tools::HashUtils::appendHash(this->max_node_num, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->group_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->group_id);
  }
  common::tools::HashUtils::appendHash(this->group_id, (int32_t *)(v2 + 32));
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

// Line 344: range 00000000120BB583-00000000120BC478
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigJobMap *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rsi
  unsigned __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rdx
  data::ConfigJob *v18; // r8
  common::milog::MiLogStream *v19; // rax
  int v20; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,data::ConfigJob>,false,false>,bool> v21; // rax
  common::milog::MiLogStream *v22; // rax
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // edx
  char v29[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 7 key:349 48 16 7 cit:346 80 16 9 <unknown> 112 24 9 value:362 176 32 11 key_str:350 240"
                        " 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 "
                        "40 12 tmp_jval:345 640 40 12 key_jval:348 720 40 14 value_jval:361";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -234881024;
  v5[536862739] = -218959118;
  v5[536862741] = -218959360;
  v5[536862742] = 62194;
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 560), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 560));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 560));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 89) & 7) >= *(_BYTE *)(((v3 + 679) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 640, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 640));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 640), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigScheduler.cpp",
        "mapFromJson",
        353);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 640));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 176), (int *)(v3 + 32), 1) )
    {
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 368),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigScheduler.cpp",
        "mapFromJson",
        358);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 176));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 720) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 720), v12);
      v13 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 112, v12, v3 + 112);
      *(_BYTE *)(v3 + 112) = 0;
      v14 = (((_BYTE)v3 + 116) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 116) & 7) + 3) >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 116, v14);
      }
      *(_DWORD *)(v3 + 116) = 0;
      if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 120, v14);
      *(_DWORD *)(v3 + 120) = 0;
      v15 = (((_BYTE)v3 + 124) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 124) & 7) + 3) >= *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 124, v15);
      }
      *(_DWORD *)(v3 + 124) = 10;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 128, v15);
      *(_DWORD *)(v3 + 128) = 0;
      v16 = ((_BYTE)v3 - 124) & 7;
      v17 = (*(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v17 )
        __asan_report_store1(v3 + 132, v16, v17);
      *(_BYTE *)(v3 + 132) = 0;
      if ( !data::ConfigJob::fromJson((data::ConfigJob *const)(v3 + 112), (const Json::Value *)(v3 + 720)) )
      {
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigScheduler.cpp",
          "mapFromJson",
          365);
        v19 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v19, (const int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v20 = 0;
      }
      else
      {
        v21 = std::unordered_map<int,data::ConfigJob>::emplace<int &,data::ConfigJob&>(
                m,
                (int *)(v3 + 32),
                (data::ConfigJob *)(v3 + 112),
                (int *)(v3 + 32),
                v18);
        if ( !v21.second )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigScheduler.cpp",
            "mapFromJson",
            370);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v22, (const int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v20 = 0;
        }
        else
        {
          v20 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v9 = v20 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
    v23 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_BYTE *)(v23 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v24 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v24 = -117901064;
    *(_BYTE *)(v24 + 4) = -8;
    v25 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v25 = -1800;
    *(_BYTE *)(v25 + 2) = -8;
    if ( !v9 )
    {
      v26 = 0;
      goto LABEL_48;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v26 = 1;
LABEL_48:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v26 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 560));
  if ( v29 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 379: range 00000000120BC479-00000000120BC749
int32_t __cdecl data::getMapHashValue(const data::ConfigJobMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigJob>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,data::ConfigJob> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:380 64 8 15 __for_begin:381 96 8 13 __for_end:381";
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
  *(std::unordered_map<int,data::ConfigJob>::const_iterator *)(v2 + 64) = std::unordered_map<int,data::ConfigJob>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,data::ConfigJob>::const_iterator *)(v2 + 96) = std::unordered_map<int,data::ConfigJob>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,data::ConfigJob>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigJob>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,data::ConfigJob>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigJob>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigJob>,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,data::ConfigJob>(v7);
    val = (std::tuple_element<1,const std::pair<int const,data::ConfigJob> >::type *)std::get<1ul,int const,data::ConfigJob>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigJob::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigJob>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,data::ConfigJob>,false,false> *const)(v2 + 64));
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

// Line 392: range 00000000120BC74A-00000000120BD511
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigJobMapData *m)
{
  bool v2; // r15
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  bool v6; // al
  unsigned __int64 v7; // rax
  common::milog::MiLogStream *v8; // r14
  _BOOL4 v9; // r14d
  common::milog::MiLogStream *v10; // rax
  unsigned __int64 v11; // rax
  const Json::Value *v12; // rax
  unsigned __int64 v13; // rax
  std::unordered_map<int,data::ConfigJob> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[880]; // [rsp+20h] [rbp-370h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(832LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 7 key:397 48 16 7 cit:394 80 16 9 <unknown> 112 32 11 key_str:398 176 32 9 <unknown> 240"
                        " 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 12 tmp_jval:393 "
                        "576 40 12 key_jval:396 656 40 14 value_jval:409 736 56 9 value:410";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862744] = -218103808;
  v5[536862745] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 112);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 112)) )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigScheduler.cpp",
        "mapFromJson",
        401);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 240), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 240));
      std::string::~string((void *)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 112), (int *)(v3 + 32), 1) )
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigScheduler.cpp",
        "mapFromJson",
        406);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 304),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 112));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v12);
      v13 = ((v3 + 736) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_WORD *)(v13 + 4) = 0;
      *(_BYTE *)(v13 + 6) = 0;
      std::unordered_map<int,data::ConfigJob>::unordered_map((std::unordered_map<int,data::ConfigJob> *const)(v3 + 736));
      if ( !data::mapFromJson((const Json::Value *)(v3 + 656), (data::ConfigJobMap *)(v3 + 736)) )
      {
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigScheduler.cpp",
          "mapFromJson",
          413);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<int,std::unordered_map<int,data::ConfigJob>>::emplace<int &,std::unordered_map<int,data::ConfigJob>&>(
                m,
                (int *)(v3 + 32),
                (std::unordered_map<int,data::ConfigJob> *)(v3 + 736),
                (int *)(v3 + 32),
                v14);
        if ( !v17.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigScheduler.cpp",
            "mapFromJson",
            418);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      std::unordered_map<int,data::ConfigJob>::~unordered_map((std::unordered_map<int,data::ConfigJob> *const)(v3 + 736));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v19 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_WORD *)(v21 + 4) = -1800;
    *(_BYTE *)(v21 + 6) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 427: range 00000000120BD512-00000000120BD7E2
int32_t __cdecl data::getMapHashValue(const data::ConfigJobMapData *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t MapHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,std::unordered_map<int,data::ConfigJob> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:428 64 8 15 __for_begin:429 96 8 13 __for_end:429";
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
  *(std::unordered_map<int,std::unordered_map<int,data::ConfigJob>>::const_iterator *)(v2 + 64) = std::unordered_map<int,std::unordered_map<int,data::ConfigJob>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,std::unordered_map<int,data::ConfigJob>>::const_iterator *)(v2 + 96) = std::unordered_map<int,std::unordered_map<int,data::ConfigJob>>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,std::unordered_map<int,data::ConfigJob>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,std::unordered_map<int,data::ConfigJob>>(v7);
    val = (std::tuple_element<1,const std::pair<int const,std::unordered_map<int,data::ConfigJob> > >::type *)std::get<1ul,int const,std::unordered_map<int,data::ConfigJob>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    MapHashValue = data::getMapHashValue(val);
    common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,std::unordered_map<int,data::ConfigJob> >,false,false> *const)(v2 + 64));
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

// Line 441: range 00000000120BD7E4-00000000120BDB39
bool __cdecl data::ConfigJobData::fromJson(data::ConfigJobData *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigJobData *v5; // rsi
  bool result; // al
  const Json::Value *job_map_data_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigJobData::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "jobMapData",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (data::ConfigJobData *)(v2 + 64);
  job_map_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( job_map_data_ptr && (v5 = this, !data::mapFromJson(job_map_data_ptr, &this->job_map_data)) )
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
      "./src/json_data_auto/ConfigScheduler.cpp",
      "fromJson",
      451);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[32])"fromJson for: jobMapData fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 459: range 00000000120BDB3A-00000000120BDC74
int32_t __cdecl data::ConfigJobData::getHashValue(const data::ConfigJobData *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:460";
  *(_QWORD *)(v2 + 16) = data::ConfigJobData::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  MapHashValue = data::getMapHashValue(&this->job_map_data);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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
