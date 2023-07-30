// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp

// Line 19: range 0000000011F717FD-0000000011F71B23
const char *__cdecl data::enumValToStr(data::EnvironmentType e)
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
    case ENVIRONMENT_NONE:
      result = "ENVIRONMENT_NONE";
      break;
    case ENVIRONMENT_GENERAL:
      result = "ENVIRONMENT_GENERAL";
      break;
    case ENVIRONMENT_GRASS:
      result = "ENVIRONMENT_GRASS";
      break;
    case ENVIRONMENT_RIVERSIDE:
      result = "ENVIRONMENT_RIVERSIDE";
      break;
    case ENVIRONMENT_MOUNTAIN:
      result = "ENVIRONMENT_MOUNTAIN";
      break;
    case ENVIRONMENT_CRAB:
      result = "ENVIRONMENT_CRAB";
      break;
    case ENVIRONMENT_BUTTERFLY:
      result = "ENVIRONMENT_BUTTERFLY";
      break;
    case ENVIRONMENT_GRASSSHOPPER:
      result = "ENVIRONMENT_GRASSSHOPPER";
      break;
    case ENVIRONMENT_BUSH:
      result = "ENVIRONMENT_BUSH";
      break;
    case ENVIRONMENT_FIREFLY:
      result = "ENVIRONMENT_FIREFLY";
      break;
    case ENVIRONMENT_WOODS:
      result = "ENVIRONMENT_WOODS";
      break;
    case ENVIRONMENT_BUTTERFLY_INAZUMA_HIGH:
      result = "ENVIRONMENT_BUTTERFLY_INAZUMA_HIGH";
      break;
    case ENVIRONMENT_BUTTERFLY_INAZUMA_LOW:
      result = "ENVIRONMENT_BUTTERFLY_INAZUMA_LOW";
      break;
    case ENVIRONMENT_FIREFLY_INAZUMA:
      result = "ENVIRONMENT_FIREFLY_INAZUMA";
      break;
    case ENVIRONMENT_CRAB_INAZUMA:
      result = "ENVIRONMENT_CRAB_INAZUMA";
      break;
    case ENVIRONMENT_LIZARD_INAZUMA:
      result = "ENVIRONMENT_LIZARD_INAZUMA";
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumValToStr",
        55);
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

// Line 61: range 0000000011F71B24-0000000011F72B69
bool __cdecl data::enumStrToVal(const std::string *s, data::EnvironmentType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::EnvironmentType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EnvironmentType> >::pointer v10; // rax
  data::EnvironmentType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::EnvironmentType *ea; // [rsp+10h] [rbp-540h]
  char v16[1328]; // [rsp+20h] [rbp-530h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "23 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 28"
                        "8 4 9 <unknown> 304 4 9 <unknown> 320 8 5 it:86 352 8 9 <unknown> 384 32 9 <unknown> 448 32 9 <u"
                        "nknown> 512 640 9 <unknown>";
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
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862756] = -202116109;
  v4[536862757] = -202116109;
  v4[536862758] = -202116109;
  v4[536862759] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
      "enumStrToVal",
      64);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EnvironmentType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EnvironmentType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[17],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 512),
        (const char (*)[17])"ENVIRONMENT_NONE",
        (data::EnvironmentType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "ENVIRONMENT_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[20],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 552),
        (const char (*)[20])"ENVIRONMENT_GENERAL",
        (data::EnvironmentType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "ENVIRONMENT_GENERAL");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[18],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 592),
        (const char (*)[18])"ENVIRONMENT_GRASS",
        (data::EnvironmentType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "ENVIRONMENT_GRASS");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[22],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 632),
        (const char (*)[22])"ENVIRONMENT_RIVERSIDE",
        (data::EnvironmentType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "ENVIRONMENT_RIVERSIDE");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[21],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 672),
        (const char (*)[21])"ENVIRONMENT_MOUNTAIN",
        (data::EnvironmentType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "ENVIRONMENT_MOUNTAIN");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[17],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 712),
        (const char (*)[17])"ENVIRONMENT_CRAB",
        (data::EnvironmentType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "ENVIRONMENT_CRAB");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[22],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 752),
        (const char (*)[22])"ENVIRONMENT_BUTTERFLY",
        (data::EnvironmentType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "ENVIRONMENT_BUTTERFLY");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[25],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 792),
        (const char (*)[25])"ENVIRONMENT_GRASSSHOPPER",
        (data::EnvironmentType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "ENVIRONMENT_GRASSSHOPPER");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[17],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 832),
        (const char (*)[17])"ENVIRONMENT_BUSH",
        (data::EnvironmentType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "ENVIRONMENT_BUSH");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[20],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 872),
        (const char (*)[20])"ENVIRONMENT_FIREFLY",
        (data::EnvironmentType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "ENVIRONMENT_FIREFLY");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[18],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 912),
        (const char (*)[18])"ENVIRONMENT_WOODS",
        (data::EnvironmentType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "ENVIRONMENT_WOODS");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[35],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 952),
        (const char (*)[35])"ENVIRONMENT_BUTTERFLY_INAZUMA_HIGH",
        (data::EnvironmentType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "ENVIRONMENT_BUTTERFLY_INAZUMA_HIGH");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[34],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 992),
        (const char (*)[34])"ENVIRONMENT_BUTTERFLY_INAZUMA_LOW",
        (data::EnvironmentType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "ENVIRONMENT_BUTTERFLY_INAZUMA_LOW");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[28],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 1032),
        (const char (*)[28])"ENVIRONMENT_FIREFLY_INAZUMA",
        (data::EnvironmentType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "ENVIRONMENT_FIREFLY_INAZUMA");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[25],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 1072),
        (const char (*)[25])"ENVIRONMENT_CRAB_INAZUMA",
        (data::EnvironmentType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "ENVIRONMENT_CRAB_INAZUMA");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::EnvironmentType>::pair<char const(&)[27],data::EnvironmentType,true>(
        (std::pair<const std::string,data::EnvironmentType> *const)(v2 + 1112),
        (const char (*)[27])"ENVIRONMENT_LIZARD_INAZUMA",
        (data::EnvironmentType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::EnvironmentType>>::allocator((std::allocator<std::pair<const std::string,data::EnvironmentType> > *const)(v2 + 48));
      std::map<std::string,data::EnvironmentType>::map(
        &data::enumStrToVal(std::string const&,data::EnvironmentType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EnvironmentType> >)__PAIR128__(16LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::EnvironmentType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EnvironmentType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EnvironmentType>::~map,
        &data::enumStrToVal(std::string const&,data::EnvironmentType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EnvironmentType>>::~allocator((std::allocator<std::pair<const std::string,data::EnvironmentType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EnvironmentType> *)(v2 + 1152);
            i != (std::pair<const std::string,data::EnvironmentType> *)(v2 + 512);
            std::pair<std::string const,data::EnvironmentType>::~pair(i) )
      {
        --i;
      }
      e = (data::EnvironmentType *)640;
      __asan_poison_stack_memory(v2 + 512, 640LL);
      *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
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
    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 320, e);
    *(std::map<std::string,data::EnvironmentType>::iterator *)(v2 + 320) = std::map<std::string,data::EnvironmentType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::EnvironmentType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::EnvironmentType>::iterator *)(v2 + 352) = std::map<std::string,data::EnvironmentType>::end(&data::enumStrToVal(std::string const&,data::EnvironmentType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EnvironmentType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EnvironmentType> >::_Self *)(v2 + 352));
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumStrToVal",
        89);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 448),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::EnvironmentType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EnvironmentType> > *const)(v2 + 320));
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
      v5 = 1;
    }
  }
  v13 = v5;
  if ( v16 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862737) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450940 - (((_DWORD)v4 + 2147450948) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v16);
  }
  return v13;
};

// Line 97: range 0000000011F72B6A-0000000011F72C3C
const char *__cdecl data::getDescription(data::EnvironmentType e)
{
  const char *result; // rax

  switch ( e )
  {
    case ENVIRONMENT_NONE:
      result = (const char *)&unk_1A8C3620;
      break;
    case ENVIRONMENT_GENERAL:
      result = (const char *)&unk_1A8C3660;
      break;
    case ENVIRONMENT_GRASS:
      result = (const char *)&unk_1A8C36A0;
      break;
    case ENVIRONMENT_RIVERSIDE:
      result = (const char *)&unk_1A8C36E0;
      break;
    case ENVIRONMENT_MOUNTAIN:
      result = (const char *)&unk_1A8C3720;
      break;
    case ENVIRONMENT_CRAB:
      result = (const char *)&unk_1A8C3760;
      break;
    case ENVIRONMENT_BUTTERFLY:
      result = (const char *)&unk_1A8C37A0;
      break;
    case ENVIRONMENT_GRASSSHOPPER:
      result = (const char *)&unk_1A8C37E0;
      break;
    case ENVIRONMENT_BUSH:
      result = (const char *)&unk_1A8C3820;
      break;
    case ENVIRONMENT_FIREFLY:
      result = (const char *)&unk_1A8C3860;
      break;
    case ENVIRONMENT_WOODS:
      result = (const char *)&unk_1A8C38A0;
      break;
    case ENVIRONMENT_BUTTERFLY_INAZUMA_HIGH:
      result = (const char *)&unk_1A8C38E0;
      break;
    case ENVIRONMENT_BUTTERFLY_INAZUMA_LOW:
      result = (const char *)&unk_1A8C3920;
      break;
    case ENVIRONMENT_FIREFLY_INAZUMA:
      result = (const char *)&unk_1A8C3960;
      break;
    case ENVIRONMENT_CRAB_INAZUMA:
      result = (const char *)&unk_1A8C39A0;
      break;
    case ENVIRONMENT_LIZARD_INAZUMA:
      result = (const char *)&unk_1A8C39E0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 138: range 0000000011F72C3D-0000000011F72F0F
const char *__cdecl data::enumValToStr(data::RandTaskContentType e)
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
    case RAND_TASK_CONTENT_NONE:
      result = "RAND_TASK_CONTENT_NONE";
      break;
    case RAND_TASK_CONTENT_CLEANUP:
      result = "RAND_TASK_CONTENT_CLEANUP";
      break;
    case RAND_TASK_CONTENT_RESCUE:
      result = "RAND_TASK_CONTENT_RESCUE";
      break;
    case RAND_TASK_CONTENT_GUARD:
      result = "RAND_TASK_CONTENT_GUARD";
      break;
    case RAND_TASK_CONTENT_ATTACK:
      result = "RAND_TASK_CONTENT_ATTACK";
      break;
    case RAND_TASK_CONTENT_INVESTIGATE:
      result = "RAND_TASK_CONTENT_INVESTIGATE";
      break;
    case RAND_TASK_CONTENT_PAY:
      result = "RAND_TASK_CONTENT_PAY";
      break;
    case RAND_TASK_CONTENT_DUNGEON:
      result = "RAND_TASK_CONTENT_DUNGEON";
      break;
    case RAND_TASK_CONTENT_TALL:
      result = "RAND_TASK_CONTENT_TALL";
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumValToStr",
        160);
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

// Line 166: range 0000000011F72F10-0000000011F73B90
bool __cdecl data::enumStrToVal(const std::string *s, data::RandTaskContentType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::RandTaskContentType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::RandTaskContentType> >::pointer v10; // rax
  data::RandTaskContentType second; // ecx
  char v12; // dl
  data::RandTaskContentType *ea; // [rsp+10h] [rbp-380h]
  char v14[880]; // [rsp+20h] [rbp-370h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(832LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "16 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unkno"
                        "wn> 208 8 6 it:184 240 8 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 360 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = 61956;
  v4[536862726] = -234881024;
  v4[536862727] = 62194;
  v4[536862727] = -234881024;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862731] = -219021312;
  v4[536862732] = 62194;
  v4[536862743] = -218103808;
  v4[536862744] = -202116109;
  v4[536862745] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 272) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 47) & 7) >= *(_BYTE *)(((v2 + 303) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 272, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 272),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
      "enumStrToVal",
      169);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[23],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 400),
        (const char (*)[23])"RAND_TASK_CONTENT_NONE",
        (data::RandTaskContentType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "RAND_TASK_CONTENT_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[26],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 440),
        (const char (*)[26])"RAND_TASK_CONTENT_CLEANUP",
        (data::RandTaskContentType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "RAND_TASK_CONTENT_CLEANUP");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[25],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 480),
        (const char (*)[25])"RAND_TASK_CONTENT_RESCUE",
        (data::RandTaskContentType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "RAND_TASK_CONTENT_RESCUE");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[24],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 520),
        (const char (*)[24])"RAND_TASK_CONTENT_GUARD",
        (data::RandTaskContentType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "RAND_TASK_CONTENT_GUARD");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[25],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 560),
        (const char (*)[25])"RAND_TASK_CONTENT_ATTACK",
        (data::RandTaskContentType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "RAND_TASK_CONTENT_ATTACK");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[30],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 600),
        (const char (*)[30])"RAND_TASK_CONTENT_INVESTIGATE",
        (data::RandTaskContentType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "RAND_TASK_CONTENT_INVESTIGATE");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[22],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 640),
        (const char (*)[22])"RAND_TASK_CONTENT_PAY",
        (data::RandTaskContentType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "RAND_TASK_CONTENT_PAY");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[26],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 680),
        (const char (*)[26])"RAND_TASK_CONTENT_DUNGEON",
        (data::RandTaskContentType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "RAND_TASK_CONTENT_DUNGEON");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::RandTaskContentType>::pair<char const(&)[23],data::RandTaskContentType,true>(
        (std::pair<const std::string,data::RandTaskContentType> *const)(v2 + 720),
        (const char (*)[23])"RAND_TASK_CONTENT_TALL",
        (data::RandTaskContentType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::RandTaskContentType>>::allocator((std::allocator<std::pair<const std::string,data::RandTaskContentType> > *const)(v2 + 48));
      std::map<std::string,data::RandTaskContentType>::map(
        &data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m,
        (std::initializer_list<std::pair<const std::string,data::RandTaskContentType> >)__PAIR128__(9LL, v2 + 400),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::RandTaskContentType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::RandTaskContentType>::~map,
        &data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::RandTaskContentType>>::~allocator((std::allocator<std::pair<const std::string,data::RandTaskContentType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::RandTaskContentType> *)(v2 + 760);
            i != (std::pair<const std::string,data::RandTaskContentType> *)(v2 + 400);
            std::pair<std::string const,data::RandTaskContentType>::~pair(i) )
      {
        --i;
      }
      e = (data::RandTaskContentType *)360;
      __asan_poison_stack_memory(v2 + 400, 360LL);
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
    *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 208, e);
    *(std::map<std::string,data::RandTaskContentType>::iterator *)(v2 + 208) = std::map<std::string,data::RandTaskContentType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, s);
    *(std::map<std::string,data::RandTaskContentType>::iterator *)(v2 + 240) = std::map<std::string,data::RandTaskContentType>::end(&data::enumStrToVal(std::string const&,data::RandTaskContentType &)::m);
    v7 = (char *)(v2 + 240);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RandTaskContentType> >::_Self *)(v2 + 208),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::RandTaskContentType> >::_Self *)(v2 + 240));
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 111) & 7) >= *(_BYTE *)(((v2 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumStrToVal",
        187);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::RandTaskContentType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::RandTaskContentType> > *const)(v2 + 208));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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

// Line 195: range 0000000011F73B91-0000000011F73C1A
const char *__cdecl data::getDescription(data::RandTaskContentType e)
{
  const char *result; // rax

  switch ( e )
  {
    case RAND_TASK_CONTENT_NONE:
      result = (const char *)&off_1A8C3E00;
      break;
    case RAND_TASK_CONTENT_CLEANUP:
      result = (const char *)&unk_1A8C3E40;
      break;
    case RAND_TASK_CONTENT_RESCUE:
      result = (const char *)&unk_1A8C3E80;
      break;
    case RAND_TASK_CONTENT_GUARD:
      result = (const char *)&unk_1A8C3EC0;
      break;
    case RAND_TASK_CONTENT_ATTACK:
      result = (const char *)&unk_1A8C3F00;
      break;
    case RAND_TASK_CONTENT_INVESTIGATE:
      result = (const char *)&unk_1A8C3F40;
      break;
    case RAND_TASK_CONTENT_PAY:
      result = (const char *)&unk_1A8C3F80;
      break;
    case RAND_TASK_CONTENT_DUNGEON:
      result = (const char *)&unk_1A8C3FC0;
      break;
    case RAND_TASK_CONTENT_TALL:
      result = (const char *)&unk_1A8AA380;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 222: range 0000000011F73C1B-0000000011F73ECC
const char *__cdecl data::enumValToStr(data::SceneType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::SceneType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    case SCENE_NONE:
      result = "SCENE_NONE";
      break;
    case SCENE_WORLD:
      result = "SCENE_WORLD";
      break;
    case SCENE_DUNGEON:
      result = "SCENE_DUNGEON";
      break;
    case SCENE_ROOM:
      result = "SCENE_ROOM";
      break;
    case SCENE_HOME_WORLD:
      result = "SCENE_HOME_WORLD";
      break;
    case SCENE_HOME_ROOM:
      result = "SCENE_HOME_ROOM";
      break;
    case SCENE_ACTIVITY:
      result = "SCENE_ACTIVITY";
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumValToStr",
        240);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
      break;
  }
  if ( v10 == (char *)v1 )
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

// Line 246: range 0000000011F73ECD-0000000011F74A30
bool __cdecl data::enumStrToVal(const std::string *s, data::SceneType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::SceneType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::SceneType> >::pointer v10; // rax
  data::SceneType second; // ecx
  char v12; // dl
  data::SceneType *ea; // [rsp+10h] [rbp-320h]
  char v14[784]; // [rsp+20h] [rbp-310h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(736LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 6 it:262 224 8 9 <unknown"
                        "> 256 32 9 <unknown> 320 32 9 <unknown> 384 280 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862740] = -218103808;
  v4[536862741] = -202116109;
  v4[536862742] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
      "enumStrToVal",
      249);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::SceneType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::SceneType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[11],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 384),
        (const char (*)[11])"SCENE_NONE",
        (data::SceneType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "SCENE_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[12],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 424),
        (const char (*)[12])"SCENE_WORLD",
        (data::SceneType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "SCENE_WORLD");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[14],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 464),
        (const char (*)[14])"SCENE_DUNGEON",
        (data::SceneType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "SCENE_DUNGEON");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[11],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 504),
        (const char (*)[11])"SCENE_ROOM",
        (data::SceneType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "SCENE_ROOM");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[17],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 544),
        (const char (*)[17])"SCENE_HOME_WORLD",
        (data::SceneType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "SCENE_HOME_WORLD");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[16],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 584),
        (const char (*)[16])"SCENE_HOME_ROOM",
        (data::SceneType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "SCENE_HOME_ROOM");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::SceneType>::pair<char const(&)[15],data::SceneType,true>(
        (std::pair<const std::string,data::SceneType> *const)(v2 + 624),
        (const char (*)[15])"SCENE_ACTIVITY",
        (data::SceneType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::SceneType>>::allocator((std::allocator<std::pair<const std::string,data::SceneType> > *const)(v2 + 64));
      std::map<std::string,data::SceneType>::map(
        &data::enumStrToVal(std::string const&,data::SceneType &)::m,
        (std::initializer_list<std::pair<const std::string,data::SceneType> >)__PAIR128__(7LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::SceneType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::SceneType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::SceneType>::~map,
        &data::enumStrToVal(std::string const&,data::SceneType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::SceneType>>::~allocator((std::allocator<std::pair<const std::string,data::SceneType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::SceneType> *)(v2 + 664);
            i != (std::pair<const std::string,data::SceneType> *)(v2 + 384);
            std::pair<std::string const,data::SceneType>::~pair(i) )
      {
        --i;
      }
      e = (data::SceneType *)280;
      __asan_poison_stack_memory(v2 + 384, 280LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::SceneType>::iterator *)(v2 + 192) = std::map<std::string,data::SceneType>::find(
                                                                       &data::enumStrToVal(std::string const&,data::SceneType &)::m,
                                                                       s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::SceneType>::iterator *)(v2 + 224) = std::map<std::string,data::SceneType>::end(&data::enumStrToVal(std::string const&,data::SceneType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneType> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumStrToVal",
        265);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::SceneType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneType> > *const)(v2 + 192));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 273: range 0000000011F74A31-0000000011F74AA9
const char *__cdecl data::getDescription(data::SceneType e)
{
  const char *result; // rax

  switch ( e )
  {
    case SCENE_NONE:
      result = (const char *)&unk_1A8C3620;
      break;
    case SCENE_WORLD:
      result = (const char *)&unk_1A8C4320;
      break;
    case SCENE_DUNGEON:
      result = (const char *)&unk_1A8C4360;
      break;
    case SCENE_ROOM:
      result = (const char *)&unk_1A8C43A0;
      break;
    case SCENE_HOME_WORLD:
      result = (const char *)&unk_1A8C43E0;
      break;
    case SCENE_HOME_ROOM:
      result = (const char *)&unk_1A8C4420;
      break;
    case SCENE_ACTIVITY:
      result = (const char *)&unk_1A8C4460;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 296: range 0000000011F74AAA-0000000011F74D03
const char *__cdecl data::enumValToStr(data::SceneSubType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::SceneSubType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    if ( e == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
    {
      result = "SCENE_SUB_TYPE_PERSISTENT_DUNGEON";
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumValToStr",
        304);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "SCENE_SUB_TYPE_NONE";
  }
  if ( v10 == (char *)v1 )
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

// Line 310: range 0000000011F74D04-0000000011F7553B
bool __cdecl data::enumStrToVal(const std::string *s, data::SceneSubType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::SceneSubType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::SceneSubType> >::pointer v11; // rax
  data::SceneSubType second; // ecx
  char v13; // dl
  data::SceneSubType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:321 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
      "enumStrToVal",
      313);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::SceneSubType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::SceneSubType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::SceneSubType>::pair<char const(&)[20],data::SceneSubType,true>(
        (std::pair<const std::string,data::SceneSubType> *const)(v2 + 304),
        (const char (*)[20])"SCENE_SUB_TYPE_NONE",
        (data::SceneSubType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "SCENE_SUB_TYPE_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::SceneSubType>::pair<char const(&)[34],data::SceneSubType,true>(
        (std::pair<const std::string,data::SceneSubType> *const)(v2 + 344),
        (const char (*)[34])"SCENE_SUB_TYPE_PERSISTENT_DUNGEON",
        (data::SceneSubType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::SceneSubType>>::allocator((std::allocator<std::pair<const std::string,data::SceneSubType> > *const)(v2 + 64));
      std::map<std::string,data::SceneSubType>::map(
        &data::enumStrToVal(std::string const&,data::SceneSubType &)::m,
        (std::initializer_list<std::pair<const std::string,data::SceneSubType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::SceneSubType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::SceneSubType &)::m);
      e = (data::SceneSubType *)&data::enumStrToVal(std::string const&,data::SceneSubType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::SceneSubType>::~map,
        &data::enumStrToVal(std::string const&,data::SceneSubType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::SceneSubType>>::~allocator((std::allocator<std::pair<const std::string,data::SceneSubType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::SceneSubType> *)(v2 + 384);
            i != (std::pair<const std::string,data::SceneSubType> *)(v2 + 304);
            std::pair<std::string const,data::SceneSubType>::~pair(i) )
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
    *(std::map<std::string,data::SceneSubType>::iterator *)(v2 + 112) = std::map<std::string,data::SceneSubType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::SceneSubType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::SceneSubType>::iterator *)(v2 + 144) = std::map<std::string,data::SceneSubType>::end(&data::enumStrToVal(std::string const&,data::SceneSubType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneSubType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneSubType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumStrToVal",
        324);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::SceneSubType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::SceneSubType> > *const)(v2 + 112));
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

// Line 332: range 0000000011F7553C-0000000011F7556B
const char *__cdecl data::getDescription(data::SceneSubType e)
{
  if ( e == SCENE_SUB_TYPE_NONE )
    return (const char *)&unk_1A8C3620;
  if ( e == SCENE_SUB_TYPE_PERSISTENT_DUNGEON )
    return (const char *)&unk_1A8C4600;
  return "unknown enum value!";
};

// Line 345: range 0000000011F7556C-0000000011F757C5
const char *__cdecl data::enumValToStr(data::EditorDungeonSubType e)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  const char *result; // rax
  const char *v5; // rsi
  common::milog::MiLogStream *v6; // rdi
  data::EditorDungeonSubType v7; // ecx
  char v8; // al
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v10;
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
    if ( e == DUNGEON_SUB_TYPE_MIRROR_BIGWORLD )
    {
      result = "DUNGEON_SUB_TYPE_MIRROR_BIGWORLD";
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumValToStr",
        353);
      v5 = "invalid e:";
      v6 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
             (common::milog::MiLogStream *const)(v1 + 64),
             (const char (*)[11])"invalid e:");
      v7 = e;
      v8 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
      if ( v8 != 0 && v8 <= 3 )
      {
        v6 = (common::milog::MiLogStream *)(v1 + 48);
        LOBYTE(v5) = v8 != 0;
        __asan_report_store4(v1 + 48, v5);
      }
      *(_DWORD *)(v1 + 48) = v7;
      common::milog::MiLogStream::operator<<<int,(int *)0>(v6, (const int *)(v1 + 48));
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
      result = (const char *)&unk_1A891C40;
    }
  }
  else
  {
    result = "DUNGEON_SUB_TYPE_NONE";
  }
  if ( v10 == (char *)v1 )
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

// Line 359: range 0000000011F757C6-0000000011F75FFD
bool __cdecl data::enumStrToVal(const std::string *s, data::EditorDungeonSubType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::EditorDungeonSubType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EditorDungeonSubType> >::pointer v11; // rax
  data::EditorDungeonSubType second; // ecx
  char v13; // dl
  data::EditorDungeonSubType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:370 144 8 9 <un"
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
      "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
      "enumStrToVal",
      362);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::EditorDungeonSubType>::pair<char const(&)[22],data::EditorDungeonSubType,true>(
        (std::pair<const std::string,data::EditorDungeonSubType> *const)(v2 + 304),
        (const char (*)[22])"DUNGEON_SUB_TYPE_NONE",
        (data::EditorDungeonSubType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "DUNGEON_SUB_TYPE_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::EditorDungeonSubType>::pair<char const(&)[33],data::EditorDungeonSubType,true>(
        (std::pair<const std::string,data::EditorDungeonSubType> *const)(v2 + 344),
        (const char (*)[33])"DUNGEON_SUB_TYPE_MIRROR_BIGWORLD",
        (data::EditorDungeonSubType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::EditorDungeonSubType>>::allocator((std::allocator<std::pair<const std::string,data::EditorDungeonSubType> > *const)(v2 + 64));
      std::map<std::string,data::EditorDungeonSubType>::map(
        &data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m,
        (std::initializer_list<std::pair<const std::string,data::EditorDungeonSubType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::EditorDungeonSubType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m);
      e = (data::EditorDungeonSubType *)&data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EditorDungeonSubType>::~map,
        &data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EditorDungeonSubType>>::~allocator((std::allocator<std::pair<const std::string,data::EditorDungeonSubType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EditorDungeonSubType> *)(v2 + 384);
            i != (std::pair<const std::string,data::EditorDungeonSubType> *)(v2 + 304);
            std::pair<std::string const,data::EditorDungeonSubType>::~pair(i) )
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
    *(std::map<std::string,data::EditorDungeonSubType>::iterator *)(v2 + 112) = std::map<std::string,data::EditorDungeonSubType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::EditorDungeonSubType>::iterator *)(v2 + 144) = std::map<std::string,data::EditorDungeonSubType>::end(&data::enumStrToVal(std::string const&,data::EditorDungeonSubType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EditorDungeonSubType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EditorDungeonSubType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ComponentDefines/ConfigEnvironment.cpp",
        "enumStrToVal",
        373);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::EditorDungeonSubType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EditorDungeonSubType> > *const)(v2 + 112));
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

// Line 381: range 0000000011F75FFE-0000000011F7602D
const char *__cdecl data::getDescription(data::EditorDungeonSubType e)
{
  if ( e == DUNGEON_SUB_TYPE_NONE )
    return (const char *)&unk_1A8C3620;
  if ( e == DUNGEON_SUB_TYPE_MIRROR_BIGWORLD )
    return (const char *)&unk_1A8C4780;
  return "unknown enum value!";
};
