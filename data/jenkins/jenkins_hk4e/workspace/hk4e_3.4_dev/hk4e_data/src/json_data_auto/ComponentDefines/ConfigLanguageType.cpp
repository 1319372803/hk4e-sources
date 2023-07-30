// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp

// Line 19: range 0000000011F9696B-0000000011F96C91
const char *__cdecl data::enumValToStr(data::TextLanguageType e)
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
    case LANGUAGE_NONE_0:
      result = "LANGUAGE_NONE";
      break;
    case LANGUAGE_EN_0:
      result = "LANGUAGE_EN";
      break;
    case LANGUAGE_SC_0:
      result = "LANGUAGE_SC";
      break;
    case LANGUAGE_TC_0:
      result = "LANGUAGE_TC";
      break;
    case LANGUAGE_FR_0:
      result = "LANGUAGE_FR";
      break;
    case LANGUAGE_DE_0:
      result = "LANGUAGE_DE";
      break;
    case LANGUAGE_ES_0:
      result = "LANGUAGE_ES";
      break;
    case LANGUAGE_PT_0:
      result = "LANGUAGE_PT";
      break;
    case LANGUAGE_RU_0:
      result = "LANGUAGE_RU";
      break;
    case LANGUAGE_JP_0:
      result = "LANGUAGE_JP";
      break;
    case LANGUAGE_KR_0:
      result = "LANGUAGE_KR";
      break;
    case LANGUAGE_TH_0:
      result = "LANGUAGE_TH";
      break;
    case LANGUAGE_VN_0:
      result = "LANGUAGE_VN";
      break;
    case LANGUAGE_ID_0:
      result = "LANGUAGE_ID";
      break;
    case LANGUAGE_TR_0:
      result = "LANGUAGE_TR";
      break;
    case LANGUAGE_IT_0:
      result = "LANGUAGE_IT";
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
        "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
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

// Line 61: range 0000000011F96C92-0000000011F97CD7
bool __cdecl data::enumStrToVal(const std::string *s, data::TextLanguageType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::TextLanguageType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::TextLanguageType> >::pointer v10; // rax
  data::TextLanguageType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::TextLanguageType *ea; // [rsp+10h] [rbp-540h]
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
      "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
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
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::TextLanguageType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::TextLanguageType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[14],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 512),
        (const char (*)[14])"LANGUAGE_NONE",
        (data::TextLanguageType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "LANGUAGE_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 552),
        (const char (*)[12])"LANGUAGE_EN",
        (data::TextLanguageType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "LANGUAGE_EN");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 592),
        (const char (*)[12])"LANGUAGE_SC",
        (data::TextLanguageType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "LANGUAGE_SC");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 632),
        (const char (*)[12])"LANGUAGE_TC",
        (data::TextLanguageType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "LANGUAGE_TC");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 672),
        (const char (*)[12])"LANGUAGE_FR",
        (data::TextLanguageType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "LANGUAGE_FR");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 712),
        (const char (*)[12])"LANGUAGE_DE",
        (data::TextLanguageType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "LANGUAGE_DE");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 752),
        (const char (*)[12])"LANGUAGE_ES",
        (data::TextLanguageType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "LANGUAGE_ES");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 792),
        (const char (*)[12])"LANGUAGE_PT",
        (data::TextLanguageType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "LANGUAGE_PT");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 832),
        (const char (*)[12])"LANGUAGE_RU",
        (data::TextLanguageType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "LANGUAGE_RU");
      *(_DWORD *)(v2 + 208) = 9;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 872),
        (const char (*)[12])"LANGUAGE_JP",
        (data::TextLanguageType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "LANGUAGE_JP");
      *(_DWORD *)(v2 + 224) = 10;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 912),
        (const char (*)[12])"LANGUAGE_KR",
        (data::TextLanguageType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "LANGUAGE_KR");
      *(_DWORD *)(v2 + 240) = 11;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 952),
        (const char (*)[12])"LANGUAGE_TH",
        (data::TextLanguageType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "LANGUAGE_TH");
      *(_DWORD *)(v2 + 256) = 12;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 992),
        (const char (*)[12])"LANGUAGE_VN",
        (data::TextLanguageType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "LANGUAGE_VN");
      *(_DWORD *)(v2 + 272) = 13;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 1032),
        (const char (*)[12])"LANGUAGE_ID",
        (data::TextLanguageType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "LANGUAGE_ID");
      *(_DWORD *)(v2 + 288) = 14;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 1072),
        (const char (*)[12])"LANGUAGE_TR",
        (data::TextLanguageType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "LANGUAGE_TR");
      *(_DWORD *)(v2 + 304) = 15;
      std::pair<std::string const,data::TextLanguageType>::pair<char const(&)[12],data::TextLanguageType,true>(
        (std::pair<const std::string,data::TextLanguageType> *const)(v2 + 1112),
        (const char (*)[12])"LANGUAGE_IT",
        (data::TextLanguageType *)(v2 + 304));
      std::allocator<std::pair<std::string const,data::TextLanguageType>>::allocator((std::allocator<std::pair<const std::string,data::TextLanguageType> > *const)(v2 + 48));
      std::map<std::string,data::TextLanguageType>::map(
        &data::enumStrToVal(std::string const&,data::TextLanguageType &)::m,
        (std::initializer_list<std::pair<const std::string,data::TextLanguageType> >)__PAIR128__(16LL, v2 + 512),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::TextLanguageType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::TextLanguageType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::TextLanguageType>::~map,
        &data::enumStrToVal(std::string const&,data::TextLanguageType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::TextLanguageType>>::~allocator((std::allocator<std::pair<const std::string,data::TextLanguageType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::TextLanguageType> *)(v2 + 1152);
            i != (std::pair<const std::string,data::TextLanguageType> *)(v2 + 512);
            std::pair<std::string const,data::TextLanguageType>::~pair(i) )
      {
        --i;
      }
      e = (data::TextLanguageType *)640;
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
    *(std::map<std::string,data::TextLanguageType>::iterator *)(v2 + 320) = std::map<std::string,data::TextLanguageType>::find(
                                                                              &data::enumStrToVal(std::string const&,data::TextLanguageType &)::m,
                                                                              s);
    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 352, s);
    *(std::map<std::string,data::TextLanguageType>::iterator *)(v2 + 352) = std::map<std::string,data::TextLanguageType>::end(&data::enumStrToVal(std::string const&,data::TextLanguageType &)::m);
    v7 = (char *)(v2 + 352);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TextLanguageType> >::_Self *)(v2 + 320),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::TextLanguageType> >::_Self *)(v2 + 352));
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
        "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
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
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::TextLanguageType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::TextLanguageType> > *const)(v2 + 320));
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

// Line 97: range 0000000011F97CD8-0000000011F97DAA
const char *__cdecl data::getDescription(data::TextLanguageType e)
{
  const char *result; // rax

  switch ( e )
  {
    case LANGUAGE_NONE_0:
      result = (const char *)&off_1A8C3E00;
      break;
    case LANGUAGE_EN_0:
      result = (const char *)&unk_1A8CA9A0;
      break;
    case LANGUAGE_SC_0:
      result = (const char *)&unk_1A8CA9E0;
      break;
    case LANGUAGE_TC_0:
      result = (const char *)&unk_1A8CAA20;
      break;
    case LANGUAGE_FR_0:
      result = (const char *)&unk_1A8CAA60;
      break;
    case LANGUAGE_DE_0:
      result = (const char *)&unk_1A8CAAA0;
      break;
    case LANGUAGE_ES_0:
      result = (const char *)&unk_1A8CAAE0;
      break;
    case LANGUAGE_PT_0:
      result = (const char *)&unk_1A8CAB20;
      break;
    case LANGUAGE_RU_0:
      result = (const char *)&unk_1A8CAB60;
      break;
    case LANGUAGE_JP_0:
      result = (const char *)&unk_1A8CABA0;
      break;
    case LANGUAGE_KR_0:
      result = (const char *)&unk_1A8CABE0;
      break;
    case LANGUAGE_TH_0:
      result = (const char *)&unk_1A8CAC20;
      break;
    case LANGUAGE_VN_0:
      result = (const char *)&unk_1A8CAC60;
      break;
    case LANGUAGE_ID_0:
      result = (const char *)&unk_1A8CACA0;
      break;
    case LANGUAGE_TR_0:
      result = (const char *)&unk_1A8CACE0;
      break;
    case LANGUAGE_IT_0:
      result = (const char *)&unk_1A8CAD20;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 138: range 0000000011F97DAB-0000000011F98046
const char *__cdecl data::enumValToStr(data::VoiceLanguageType e)
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
  if ( e == Korean )
  {
    result = "Korean";
  }
  else
  {
    if ( e <= Korean )
    {
      switch ( e )
      {
        case Japanese:
          result = "Japanese";
          goto LABEL_19;
        case Chinese:
          result = "Chinese";
          goto LABEL_19;
        case English:
          result = "English";
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
      "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
      "enumValToStr",
      150);
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

// Line 156: range 0000000011F98047-0000000011F989CB
bool __cdecl data::enumStrToVal(const std::string *s, data::VoiceLanguageType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::VoiceLanguageType> *i; // r14
  _DWORD *v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::VoiceLanguageType> >::pointer v11; // rax
  data::VoiceLanguageType second; // ecx
  char v13; // dl
  data::VoiceLanguageType *ea; // [rsp+10h] [rbp-260h]
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
                        "<unknown> 128 8 6 it:169 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 160 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
      "enumStrToVal",
      159);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::VoiceLanguageType>::pair<char const(&)[8],data::VoiceLanguageType,true>(
        (std::pair<const std::string,data::VoiceLanguageType> *const)(v2 + 320),
        (const char (*)[8])"Chinese",
        (data::VoiceLanguageType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "Chinese");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::VoiceLanguageType>::pair<char const(&)[8],data::VoiceLanguageType,true>(
        (std::pair<const std::string,data::VoiceLanguageType> *const)(v2 + 360),
        (const char (*)[8])"English",
        (data::VoiceLanguageType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "English");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::VoiceLanguageType>::pair<char const(&)[9],data::VoiceLanguageType,true>(
        (std::pair<const std::string,data::VoiceLanguageType> *const)(v2 + 400),
        (const char (*)[9])"Japanese",
        (data::VoiceLanguageType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Japanese");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::VoiceLanguageType>::pair<char const(&)[7],data::VoiceLanguageType,true>(
        (std::pair<const std::string,data::VoiceLanguageType> *const)(v2 + 440),
        (const char (*)[7])"Korean",
        (data::VoiceLanguageType *)(v2 + 112));
      std::allocator<std::pair<std::string const,data::VoiceLanguageType>>::allocator((std::allocator<std::pair<const std::string,data::VoiceLanguageType> > *const)(v2 + 48));
      std::map<std::string,data::VoiceLanguageType>::map(
        &data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m,
        (std::initializer_list<std::pair<const std::string,data::VoiceLanguageType> >)__PAIR128__(4LL, v2 + 320),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::VoiceLanguageType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m);
      e = (data::VoiceLanguageType *)&data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::VoiceLanguageType>::~map,
        &data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::VoiceLanguageType>>::~allocator((std::allocator<std::pair<const std::string,data::VoiceLanguageType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::VoiceLanguageType> *)(v2 + 480);
            i != (std::pair<const std::string,data::VoiceLanguageType> *)(v2 + 320);
            std::pair<std::string const,data::VoiceLanguageType>::~pair(i) )
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
    *(std::map<std::string,data::VoiceLanguageType>::iterator *)(v2 + 128) = std::map<std::string,data::VoiceLanguageType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, s);
    *(std::map<std::string,data::VoiceLanguageType>::iterator *)(v2 + 160) = std::map<std::string,data::VoiceLanguageType>::end(&data::enumStrToVal(std::string const&,data::VoiceLanguageType &)::m);
    v8 = (char *)(v2 + 160);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoiceLanguageType> >::_Self *)(v2 + 128),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::VoiceLanguageType> >::_Self *)(v2 + 160));
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
        "./src/json_data_auto/ComponentDefines/ConfigLanguageType.cpp",
        "enumStrToVal",
        172);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::VoiceLanguageType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::VoiceLanguageType> > *const)(v2 + 128));
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

// Line 180: range 0000000011F989CC-0000000011F98A25
const char *__cdecl data::getDescription(data::VoiceLanguageType e)
{
  if ( e == Korean )
    return (const char *)&unk_1A8CABE0;
  if ( e <= Korean )
  {
    switch ( e )
    {
      case Japanese:
        return (const char *)&unk_1A8CABA0;
      case Chinese:
        return (const char *)&unk_1A8CAF80;
      case English:
        return (const char *)&unk_1A8CA9A0;
    }
  }
  return "unknown enum value!";
};
