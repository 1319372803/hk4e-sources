// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp

// Line 19: range 0000000013B9EFED-0000000013B9F2BF
const char *__cdecl data::enumValToStr(data::GCGCardType e)
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
    case GCG_CARD_INVALID:
      result = "GCG_CARD_INVALID";
      break;
    case GCG_CARD_CHARACTER:
      result = "GCG_CARD_CHARACTER";
      break;
    case GCG_CARD_MODIFY:
      result = "GCG_CARD_MODIFY";
      break;
    case GCG_CARD_SUMMON:
      result = "GCG_CARD_SUMMON";
      break;
    case GCG_CARD_STATE:
      result = "GCG_CARD_STATE";
      break;
    case GCG_CARD_EVENT:
      result = "GCG_CARD_EVENT";
      break;
    case GCG_CARD_ASSIST:
      result = "GCG_CARD_ASSIST";
      break;
    case GCG_CARD_ONSTAGE:
      result = "GCG_CARD_ONSTAGE";
      break;
    case GCG_CARD_RULE:
      result = "GCG_CARD_RULE";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        41);
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

// Line 47: range 0000000013B9F2C0-0000000013B9FF40
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGCardType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::GCGCardType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGCardType> >::pointer v10; // rax
  data::GCGCardType second; // ecx
  char v12; // dl
  data::GCGCardType *ea; // [rsp+10h] [rbp-380h]
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
                        "wn> 208 8 5 it:65 240 8 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 360 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      50);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGCardType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGCardType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[17],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 400),
        (const char (*)[17])"GCG_CARD_INVALID",
        (data::GCGCardType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "GCG_CARD_INVALID");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[19],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 440),
        (const char (*)[19])"GCG_CARD_CHARACTER",
        (data::GCGCardType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_CARD_CHARACTER");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[16],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 480),
        (const char (*)[16])"GCG_CARD_MODIFY",
        (data::GCGCardType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_CARD_MODIFY");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[16],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 520),
        (const char (*)[16])"GCG_CARD_SUMMON",
        (data::GCGCardType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_CARD_SUMMON");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[15],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 560),
        (const char (*)[15])"GCG_CARD_STATE",
        (data::GCGCardType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "GCG_CARD_STATE");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[15],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 600),
        (const char (*)[15])"GCG_CARD_EVENT",
        (data::GCGCardType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GCG_CARD_EVENT");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[16],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 640),
        (const char (*)[16])"GCG_CARD_ASSIST",
        (data::GCGCardType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GCG_CARD_ASSIST");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[17],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 680),
        (const char (*)[17])"GCG_CARD_ONSTAGE",
        (data::GCGCardType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "GCG_CARD_ONSTAGE");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::GCGCardType>::pair<char const(&)[14],data::GCGCardType,true>(
        (std::pair<const std::string,data::GCGCardType> *const)(v2 + 720),
        (const char (*)[14])"GCG_CARD_RULE",
        (data::GCGCardType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::GCGCardType>>::allocator((std::allocator<std::pair<const std::string,data::GCGCardType> > *const)(v2 + 48));
      std::map<std::string,data::GCGCardType>::map(
        &data::enumStrToVal(std::string const&,data::GCGCardType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGCardType> >)__PAIR128__(9LL, v2 + 400),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::GCGCardType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGCardType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGCardType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGCardType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGCardType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGCardType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGCardType> *)(v2 + 760);
            i != (std::pair<const std::string,data::GCGCardType> *)(v2 + 400);
            std::pair<std::string const,data::GCGCardType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGCardType *)360;
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
    *(std::map<std::string,data::GCGCardType>::iterator *)(v2 + 208) = std::map<std::string,data::GCGCardType>::find(
                                                                         &data::enumStrToVal(std::string const&,data::GCGCardType &)::m,
                                                                         s);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, s);
    *(std::map<std::string,data::GCGCardType>::iterator *)(v2 + 240) = std::map<std::string,data::GCGCardType>::end(&data::enumStrToVal(std::string const&,data::GCGCardType &)::m);
    v7 = (char *)(v2 + 240);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGCardType> >::_Self *)(v2 + 208),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGCardType> >::_Self *)(v2 + 240));
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        68);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGCardType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGCardType> > *const)(v2 + 208));
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

// Line 76: range 0000000013B9FF41-0000000013B9FFCA
const char *__cdecl data::getDescription(data::GCGCardType e)
{
  const char *result; // rax

  switch ( e )
  {
    case GCG_CARD_INVALID:
      result = byte_1AC59EA0;
      break;
    case GCG_CARD_CHARACTER:
      result = (const char *)&unk_1ACA0260;
      break;
    case GCG_CARD_MODIFY:
      result = (const char *)&unk_1ACA02A0;
      break;
    case GCG_CARD_SUMMON:
      result = (const char *)&unk_1ACA02E0;
      break;
    case GCG_CARD_STATE:
      result = (const char *)&unk_1ACA0320;
      break;
    case GCG_CARD_EVENT:
      result = (const char *)&unk_1ACA0360;
      break;
    case GCG_CARD_ASSIST:
      result = (const char *)&unk_1ACA03A0;
      break;
    case GCG_CARD_ONSTAGE:
      result = (const char *)&unk_1ACA03E0;
      break;
    case GCG_CARD_RULE:
      result = (const char *)&unk_1ACA0420;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 103: range 0000000013B9FFCB-0000000013BA05DD
const char *__cdecl data::enumValToStr(data::GCGTagType e)
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
  if ( e == GCG_TAG_IMMUNE_CONTROL )
  {
    result = "GCG_TAG_IMMUNE_CONTROL";
    goto LABEL_73;
  }
  if ( e > GCG_TAG_IMMUNE_CONTROL )
    goto LABEL_68;
  if ( e == GCG_TAG_IMMUNE_FREEZING )
  {
    result = "GCG_TAG_IMMUNE_FREEZING";
    goto LABEL_73;
  }
  if ( e == GCG_TAG_DENDRO_PRODUCE )
  {
    result = "GCG_TAG_DENDRO_PRODUCE";
    goto LABEL_73;
  }
  if ( e > GCG_TAG_DENDRO_PRODUCE )
    goto LABEL_68;
  if ( e == GCG_TAG_CAMP_KAIRAGI )
  {
    result = "GCG_TAG_CAMP_KAIRAGI";
    goto LABEL_73;
  }
  if ( e > GCG_TAG_CAMP_KAIRAGI )
    goto LABEL_68;
  switch ( e )
  {
    case GCG_TAG_CAMP_MONSTER:
      result = "GCG_TAG_CAMP_MONSTER";
      goto LABEL_73;
    case GCG_TAG_CAMP_HILICHURL:
      result = "GCG_TAG_CAMP_HILICHURL";
      goto LABEL_73;
    case GCG_TAG_CAMP_FATUI:
      result = "GCG_TAG_CAMP_FATUI";
      goto LABEL_73;
  }
  if ( e > GCG_TAG_NATION_KHAENRIAH )
    goto LABEL_68;
  if ( e >= GCG_TAG_ELEMENT_NONE )
  {
    switch ( e )
    {
      case GCG_TAG_ELEMENT_NONE:
        result = "GCG_TAG_ELEMENT_NONE";
        break;
      case GCG_TAG_ELEMENT_CRYO:
        result = "GCG_TAG_ELEMENT_CRYO";
        break;
      case GCG_TAG_ELEMENT_HYDRO:
        result = "GCG_TAG_ELEMENT_HYDRO";
        break;
      case GCG_TAG_ELEMENT_PYRO:
        result = "GCG_TAG_ELEMENT_PYRO";
        break;
      case GCG_TAG_ELEMENT_ELECTRO:
        result = "GCG_TAG_ELEMENT_ELECTRO";
        break;
      case GCG_TAG_ELEMENT_GEO:
        result = "GCG_TAG_ELEMENT_GEO";
        break;
      case GCG_TAG_ELEMENT_DENDRO:
        result = "GCG_TAG_ELEMENT_DENDRO";
        break;
      case GCG_TAG_ELEMENT_ANEMO:
        result = "GCG_TAG_ELEMENT_ANEMO";
        break;
      case GCG_TAG_NATION_MONDSTADT:
        result = "GCG_TAG_NATION_MONDSTADT";
        break;
      case GCG_TAG_NATION_LIYUE:
        result = "GCG_TAG_NATION_LIYUE";
        break;
      case GCG_TAG_NATION_INAZUMA:
        result = "GCG_TAG_NATION_INAZUMA";
        break;
      case GCG_TAG_NATION_SUMERU:
        result = "GCG_TAG_NATION_SUMERU";
        break;
      case GCG_TAG_NATION_FONTAINE:
        result = "GCG_TAG_NATION_FONTAINE";
        break;
      case GCG_TAG_NATION_NATLAN:
        result = "GCG_TAG_NATION_NATLAN";
        break;
      case GCG_TAG_NATION_SNEZHNAYA:
        result = "GCG_TAG_NATION_SNEZHNAYA";
        break;
      case GCG_TAG_NATION_KHAENRIAH:
        result = "GCG_TAG_NATION_KHAENRIAH";
        break;
      default:
        goto LABEL_68;
    }
  }
  else if ( e > GCG_TAG_RESONANCE )
  {
    if ( e > GCG_TAG_WEAPON_POLE || e < GCG_TAG_WEAPON_NONE )
      goto LABEL_68;
    switch ( e )
    {
      case GCG_TAG_WEAPON_NONE:
        result = "GCG_TAG_WEAPON_NONE";
        break;
      case GCG_TAG_WEAPON_SWORD:
        result = "GCG_TAG_WEAPON_SWORD";
        break;
      case GCG_TAG_WEAPON_CATALYST:
        result = "GCG_TAG_WEAPON_CATALYST";
        break;
      case GCG_TAG_WEAPON_CLAYMORE:
        result = "GCG_TAG_WEAPON_CLAYMORE";
        break;
      case GCG_TAG_WEAPON_BOW:
        result = "GCG_TAG_WEAPON_BOW";
        break;
      case GCG_TAG_WEAPON_POLE:
        result = "GCG_TAG_WEAPON_POLE";
        break;
      default:
        goto LABEL_68;
    }
  }
  else
  {
    if ( e < GCG_TAG_NONE )
    {
LABEL_68:
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        193);
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
      goto LABEL_73;
    }
    switch ( e )
    {
      case GCG_TAG_NONE:
        result = "GCG_TAG_NONE";
        break;
      case GCG_TAG_UNIQUE:
        result = "GCG_TAG_UNIQUE";
        break;
      case GCG_TAG_SLOWLY:
        result = "GCG_TAG_SLOWLY";
        break;
      case GCG_TAG_WEAPON:
        result = "GCG_TAG_WEAPON";
        break;
      case GCG_TAG_ARTIFACT:
        result = "GCG_TAG_ARTIFACT";
        break;
      case GCG_TAG_FORBIDDEN_ATTACK:
        result = "GCG_TAG_FORBIDDEN_ATTACK";
        break;
      case GCG_TAG_TALENT:
        result = "GCG_TAG_TALENT";
        break;
      case GCG_TAG_SKILL:
        result = "GCG_TAG_SKILL";
        break;
      case GCG_TAG_SHEILD:
        result = "GCG_TAG_SHEILD";
        break;
      case GCG_TAG_FOOD:
        result = "GCG_TAG_FOOD";
        break;
      case GCG_TAG_ITEM:
        result = "GCG_TAG_ITEM";
        break;
      case GCG_TAG_ALLY:
        result = "GCG_TAG_ALLY";
        break;
      case GCG_TAG_PLACE:
        result = "GCG_TAG_PLACE";
        break;
      case GCG_TAG_RESONANCE:
        result = "GCG_TAG_RESONANCE";
        break;
      default:
        goto LABEL_68;
    }
  }
LABEL_73:
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

// Line 199: range 0000000013BA05DE-0000000013BA25CB
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGTagType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::GCGTagType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTagType> >::pointer v10; // rax
  data::GCGTagType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::GCGTagType *ea; // [rsp+10h] [rbp-B40h]
  char v16[2864]; // [rsp+20h] [rbp-B30h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2816LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "50 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 4 9 <unknown> 384 4 9"
                        " <unknown> 400 4 9 <unknown> 416 4 9 <unknown> 432 4 9 <unknown> 448 4 9 <unknown> 464 4 9 <unkn"
                        "own> 480 4 9 <unknown> 496 4 9 <unknown> 512 4 9 <unknown> 528 4 9 <unknown> 544 4 9 <unknown> 5"
                        "60 4 9 <unknown> 576 4 9 <unknown> 592 4 9 <unknown> 608 4 9 <unknown> 624 4 9 <unknown> 640 4 9"
                        " <unknown> 656 4 9 <unknown> 672 4 9 <unknown> 688 4 9 <unknown> 704 4 9 <unknown> 720 4 9 <unkn"
                        "own> 736 4 9 <unknown> 752 4 9 <unknown> 768 8 6 it:251 800 8 9 <unknown> 832 32 9 <unknown> 896"
                        " 32 9 <unknown> 960 1720 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = -234556924;
  v4[536862732] = -234556924;
  v4[536862733] = -234556924;
  v4[536862734] = -234556924;
  v4[536862735] = -234556924;
  v4[536862736] = -234556924;
  v4[536862737] = -234556924;
  v4[536862738] = -234556924;
  v4[536862739] = -234556924;
  v4[536862740] = -234556924;
  v4[536862741] = -234556924;
  v4[536862742] = -234556924;
  v4[536862743] = -234556924;
  v4[536862744] = -218959360;
  v4[536862745] = -218959360;
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862803] = -218103808;
  v4[536862804] = -202116109;
  v4[536862805] = -202116109;
  v4[536862806] = -202116109;
  v4[536862807] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      202);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 832),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGTagType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGTagType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[13],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 960),
        (const char (*)[13])"GCG_TAG_NONE",
        (data::GCGTagType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_TAG_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[15],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1000),
        (const char (*)[15])"GCG_TAG_UNIQUE",
        (data::GCGTagType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_TAG_UNIQUE");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[15],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1040),
        (const char (*)[15])"GCG_TAG_SLOWLY",
        (data::GCGTagType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_TAG_SLOWLY");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[15],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1080),
        (const char (*)[15])"GCG_TAG_WEAPON",
        (data::GCGTagType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "GCG_TAG_WEAPON");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[17],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1120),
        (const char (*)[17])"GCG_TAG_ARTIFACT",
        (data::GCGTagType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GCG_TAG_ARTIFACT");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[25],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1160),
        (const char (*)[25])"GCG_TAG_FORBIDDEN_ATTACK",
        (data::GCGTagType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GCG_TAG_FORBIDDEN_ATTACK");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[15],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1200),
        (const char (*)[15])"GCG_TAG_TALENT",
        (data::GCGTagType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "GCG_TAG_TALENT");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[14],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1240),
        (const char (*)[14])"GCG_TAG_SKILL",
        (data::GCGTagType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "GCG_TAG_SKILL");
      *(_DWORD *)(v2 + 208) = 10;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[15],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1280),
        (const char (*)[15])"GCG_TAG_SHEILD",
        (data::GCGTagType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "GCG_TAG_SHEILD");
      *(_DWORD *)(v2 + 224) = 101;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[13],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1320),
        (const char (*)[13])"GCG_TAG_FOOD",
        (data::GCGTagType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "GCG_TAG_FOOD");
      *(_DWORD *)(v2 + 240) = 102;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[13],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1360),
        (const char (*)[13])"GCG_TAG_ITEM",
        (data::GCGTagType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "GCG_TAG_ITEM");
      *(_DWORD *)(v2 + 256) = 103;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[13],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1400),
        (const char (*)[13])"GCG_TAG_ALLY",
        (data::GCGTagType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "GCG_TAG_ALLY");
      *(_DWORD *)(v2 + 272) = 104;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[14],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1440),
        (const char (*)[14])"GCG_TAG_PLACE",
        (data::GCGTagType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "GCG_TAG_PLACE");
      *(_DWORD *)(v2 + 288) = 105;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[18],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1480),
        (const char (*)[18])"GCG_TAG_RESONANCE",
        (data::GCGTagType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "GCG_TAG_RESONANCE");
      *(_DWORD *)(v2 + 304) = 200;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[20],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1520),
        (const char (*)[20])"GCG_TAG_WEAPON_NONE",
        (data::GCGTagType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "GCG_TAG_WEAPON_NONE");
      *(_DWORD *)(v2 + 320) = 201;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1560),
        (const char (*)[21])"GCG_TAG_WEAPON_SWORD",
        (data::GCGTagType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "GCG_TAG_WEAPON_SWORD");
      *(_DWORD *)(v2 + 336) = 202;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[24],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1600),
        (const char (*)[24])"GCG_TAG_WEAPON_CATALYST",
        (data::GCGTagType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "GCG_TAG_WEAPON_CATALYST");
      *(_DWORD *)(v2 + 352) = 203;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[24],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1640),
        (const char (*)[24])"GCG_TAG_WEAPON_CLAYMORE",
        (data::GCGTagType *)(v2 + 352));
      if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 368, "GCG_TAG_WEAPON_CLAYMORE");
      *(_DWORD *)(v2 + 368) = 204;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[19],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1680),
        (const char (*)[19])"GCG_TAG_WEAPON_BOW",
        (data::GCGTagType *)(v2 + 368));
      if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 384, "GCG_TAG_WEAPON_BOW");
      *(_DWORD *)(v2 + 384) = 205;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[20],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1720),
        (const char (*)[20])"GCG_TAG_WEAPON_POLE",
        (data::GCGTagType *)(v2 + 384));
      if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 400, "GCG_TAG_WEAPON_POLE");
      *(_DWORD *)(v2 + 400) = 300;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1760),
        (const char (*)[21])"GCG_TAG_ELEMENT_NONE",
        (data::GCGTagType *)(v2 + 400));
      if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 416, "GCG_TAG_ELEMENT_NONE");
      *(_DWORD *)(v2 + 416) = 301;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1800),
        (const char (*)[21])"GCG_TAG_ELEMENT_CRYO",
        (data::GCGTagType *)(v2 + 416));
      if ( *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 432, "GCG_TAG_ELEMENT_CRYO");
      *(_DWORD *)(v2 + 432) = 302;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[22],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1840),
        (const char (*)[22])"GCG_TAG_ELEMENT_HYDRO",
        (data::GCGTagType *)(v2 + 432));
      if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 448, "GCG_TAG_ELEMENT_HYDRO");
      *(_DWORD *)(v2 + 448) = 303;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1880),
        (const char (*)[21])"GCG_TAG_ELEMENT_PYRO",
        (data::GCGTagType *)(v2 + 448));
      if ( *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 464, "GCG_TAG_ELEMENT_PYRO");
      *(_DWORD *)(v2 + 464) = 304;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[24],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1920),
        (const char (*)[24])"GCG_TAG_ELEMENT_ELECTRO",
        (data::GCGTagType *)(v2 + 464));
      if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 480, "GCG_TAG_ELEMENT_ELECTRO");
      *(_DWORD *)(v2 + 480) = 305;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[20],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 1960),
        (const char (*)[20])"GCG_TAG_ELEMENT_GEO",
        (data::GCGTagType *)(v2 + 480));
      if ( *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 496, "GCG_TAG_ELEMENT_GEO");
      *(_DWORD *)(v2 + 496) = 306;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[23],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2000),
        (const char (*)[23])"GCG_TAG_ELEMENT_DENDRO",
        (data::GCGTagType *)(v2 + 496));
      if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 512, "GCG_TAG_ELEMENT_DENDRO");
      *(_DWORD *)(v2 + 512) = 307;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[22],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2040),
        (const char (*)[22])"GCG_TAG_ELEMENT_ANEMO",
        (data::GCGTagType *)(v2 + 512));
      if ( *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 528, "GCG_TAG_ELEMENT_ANEMO");
      *(_DWORD *)(v2 + 528) = 401;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[25],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2080),
        (const char (*)[25])"GCG_TAG_NATION_MONDSTADT",
        (data::GCGTagType *)(v2 + 528));
      if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 544, "GCG_TAG_NATION_MONDSTADT");
      *(_DWORD *)(v2 + 544) = 402;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2120),
        (const char (*)[21])"GCG_TAG_NATION_LIYUE",
        (data::GCGTagType *)(v2 + 544));
      if ( *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 560, "GCG_TAG_NATION_LIYUE");
      *(_DWORD *)(v2 + 560) = 403;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[23],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2160),
        (const char (*)[23])"GCG_TAG_NATION_INAZUMA",
        (data::GCGTagType *)(v2 + 560));
      if ( *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 576, "GCG_TAG_NATION_INAZUMA");
      *(_DWORD *)(v2 + 576) = 404;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[22],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2200),
        (const char (*)[22])"GCG_TAG_NATION_SUMERU",
        (data::GCGTagType *)(v2 + 576));
      if ( *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 592, "GCG_TAG_NATION_SUMERU");
      *(_DWORD *)(v2 + 592) = 405;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[24],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2240),
        (const char (*)[24])"GCG_TAG_NATION_FONTAINE",
        (data::GCGTagType *)(v2 + 592));
      if ( *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 608, "GCG_TAG_NATION_FONTAINE");
      *(_DWORD *)(v2 + 608) = 406;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[22],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2280),
        (const char (*)[22])"GCG_TAG_NATION_NATLAN",
        (data::GCGTagType *)(v2 + 608));
      if ( *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 624, "GCG_TAG_NATION_NATLAN");
      *(_DWORD *)(v2 + 624) = 407;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[25],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2320),
        (const char (*)[25])"GCG_TAG_NATION_SNEZHNAYA",
        (data::GCGTagType *)(v2 + 624));
      if ( *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 640, "GCG_TAG_NATION_SNEZHNAYA");
      *(_DWORD *)(v2 + 640) = 408;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[25],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2360),
        (const char (*)[25])"GCG_TAG_NATION_KHAENRIAH",
        (data::GCGTagType *)(v2 + 640));
      if ( *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 656, "GCG_TAG_NATION_KHAENRIAH");
      *(_DWORD *)(v2 + 656) = 501;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[19],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2400),
        (const char (*)[19])"GCG_TAG_CAMP_FATUI",
        (data::GCGTagType *)(v2 + 656));
      if ( *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 672, "GCG_TAG_CAMP_FATUI");
      *(_DWORD *)(v2 + 672) = 502;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[23],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2440),
        (const char (*)[23])"GCG_TAG_CAMP_HILICHURL",
        (data::GCGTagType *)(v2 + 672));
      if ( *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 688, "GCG_TAG_CAMP_HILICHURL");
      *(_DWORD *)(v2 + 688) = 503;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2480),
        (const char (*)[21])"GCG_TAG_CAMP_MONSTER",
        (data::GCGTagType *)(v2 + 688));
      if ( *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 704, "GCG_TAG_CAMP_MONSTER");
      *(_DWORD *)(v2 + 704) = 504;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[21],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2520),
        (const char (*)[21])"GCG_TAG_CAMP_KAIRAGI",
        (data::GCGTagType *)(v2 + 704));
      if ( *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 720, "GCG_TAG_CAMP_KAIRAGI");
      *(_DWORD *)(v2 + 720) = 601;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[23],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2560),
        (const char (*)[23])"GCG_TAG_DENDRO_PRODUCE",
        (data::GCGTagType *)(v2 + 720));
      if ( *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 736, "GCG_TAG_DENDRO_PRODUCE");
      *(_DWORD *)(v2 + 736) = 701;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[24],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2600),
        (const char (*)[24])"GCG_TAG_IMMUNE_FREEZING",
        (data::GCGTagType *)(v2 + 736));
      if ( *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 752, "GCG_TAG_IMMUNE_FREEZING");
      *(_DWORD *)(v2 + 752) = 702;
      std::pair<std::string const,data::GCGTagType>::pair<char const(&)[23],data::GCGTagType,true>(
        (std::pair<const std::string,data::GCGTagType> *const)(v2 + 2640),
        (const char (*)[23])"GCG_TAG_IMMUNE_CONTROL",
        (data::GCGTagType *)(v2 + 752));
      std::allocator<std::pair<std::string const,data::GCGTagType>>::allocator((std::allocator<std::pair<const std::string,data::GCGTagType> > *const)(v2 + 64));
      std::map<std::string,data::GCGTagType>::map(
        &data::enumStrToVal(std::string const&,data::GCGTagType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGTagType> >)__PAIR128__(43LL, v2 + 960),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::GCGTagType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGTagType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGTagType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGTagType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGTagType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGTagType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGTagType> *)(v2 + 2680);
            i != (std::pair<const std::string,data::GCGTagType> *)(v2 + 960);
            std::pair<std::string const,data::GCGTagType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGTagType *)1720;
      __asan_poison_stack_memory(v2 + 960, 1720LL);
      *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 736) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 720) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 704) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 688) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
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
    }
    *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 768, e);
    *(std::map<std::string,data::GCGTagType>::iterator *)(v2 + 768) = std::map<std::string,data::GCGTagType>::find(
                                                                        &data::enumStrToVal(std::string const&,data::GCGTagType &)::m,
                                                                        s);
    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 800, s);
    *(std::map<std::string,data::GCGTagType>::iterator *)(v2 + 800) = std::map<std::string,data::GCGTagType>::end(&data::enumStrToVal(std::string const&,data::GCGTagType &)::m);
    v7 = (char *)(v2 + 800);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTagType> >::_Self *)(v2 + 768),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTagType> >::_Self *)(v2 + 800));
    *(_BYTE *)(((v2 + 800) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 896) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 927) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 896, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 896),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        254);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 896),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGTagType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTagType> > *const)(v2 + 768));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862751) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450996 - (((_DWORD)v4 + 2147451004) & 0xFFFFFFF8) + 236) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2816LL, v16);
  }
  return v13;
};

// Line 262: range 0000000013BA25CC-0000000013BA2944
const char *__cdecl data::getDescription(data::GCGTagType e)
{
  const char *result; // rax

  if ( e == GCG_TAG_IMMUNE_CONTROL )
    return (const char *)&unk_1ACA1DE0;
  if ( e > GCG_TAG_IMMUNE_CONTROL )
    return "unknown enum value!";
  if ( e == GCG_TAG_IMMUNE_FREEZING )
    return (const char *)&unk_1ACA1DA0;
  if ( e == GCG_TAG_DENDRO_PRODUCE )
    return (const char *)&unk_1ACA1D60;
  if ( e > GCG_TAG_DENDRO_PRODUCE )
    return "unknown enum value!";
  if ( e == GCG_TAG_CAMP_KAIRAGI )
    return (const char *)&unk_1ACA1D20;
  if ( e > GCG_TAG_CAMP_KAIRAGI )
    return "unknown enum value!";
  switch ( e )
  {
    case GCG_TAG_CAMP_MONSTER:
      return (const char *)&unk_1ACA1CE0;
    case GCG_TAG_CAMP_HILICHURL:
      return byte_1AC3C4A0;
    case GCG_TAG_CAMP_FATUI:
      return byte_1AC3C520;
  }
  if ( e > GCG_TAG_NATION_KHAENRIAH )
    return "unknown enum value!";
  if ( e >= GCG_TAG_ELEMENT_NONE )
  {
    switch ( e )
    {
      case GCG_TAG_ELEMENT_NONE:
        result = (const char *)&unk_1ACA1AA0;
        break;
      case GCG_TAG_ELEMENT_CRYO:
        result = off_1AC01740;
        break;
      case GCG_TAG_ELEMENT_HYDRO:
        result = off_1AC017C0;
        break;
      case GCG_TAG_ELEMENT_PYRO:
        result = off_1AC016C0;
        break;
      case GCG_TAG_ELEMENT_ELECTRO:
        result = off_1AC01680;
        break;
      case GCG_TAG_ELEMENT_GEO:
        result = off_1AC01780;
        break;
      case GCG_TAG_ELEMENT_DENDRO:
        result = off_1AC01700;
        break;
      case GCG_TAG_ELEMENT_ANEMO:
        result = off_1AC01800;
        break;
      case GCG_TAG_NATION_MONDSTADT:
        result = (const char *)&unk_1ACA1AE0;
        break;
      case GCG_TAG_NATION_LIYUE:
        result = (const char *)&unk_1ACA1B20;
        break;
      case GCG_TAG_NATION_INAZUMA:
        result = (const char *)&unk_1ACA1B60;
        break;
      case GCG_TAG_NATION_SUMERU:
        result = (const char *)&unk_1ACA1BA0;
        break;
      case GCG_TAG_NATION_FONTAINE:
        result = (const char *)&unk_1ACA1BE0;
        break;
      case GCG_TAG_NATION_NATLAN:
        result = (const char *)&unk_1ACA1C20;
        break;
      case GCG_TAG_NATION_SNEZHNAYA:
        result = (const char *)&unk_1ACA1C60;
        break;
      case GCG_TAG_NATION_KHAENRIAH:
        result = (const char *)&unk_1ACA1CA0;
        break;
      default:
        return "unknown enum value!";
    }
  }
  else if ( e > GCG_TAG_RESONANCE )
  {
    if ( e > GCG_TAG_WEAPON_POLE || e < GCG_TAG_WEAPON_NONE )
      return "unknown enum value!";
    switch ( e )
    {
      case GCG_TAG_WEAPON_NONE:
        result = (const char *)&unk_1ACA1920;
        break;
      case GCG_TAG_WEAPON_SWORD:
        result = (const char *)&unk_1ACA1960;
        break;
      case GCG_TAG_WEAPON_CATALYST:
        result = (const char *)&unk_1ACA19A0;
        break;
      case GCG_TAG_WEAPON_CLAYMORE:
        result = (const char *)&unk_1ACA19E0;
        break;
      case GCG_TAG_WEAPON_BOW:
        result = (const char *)&off_1ACA1A20;
        break;
      case GCG_TAG_WEAPON_POLE:
        result = (const char *)&unk_1ACA1A60;
        break;
      default:
        return "unknown enum value!";
    }
  }
  else
  {
    if ( e < GCG_TAG_NONE )
      return "unknown enum value!";
    switch ( e )
    {
      case GCG_TAG_NONE:
        result = byte_1AC59EA0;
        break;
      case GCG_TAG_UNIQUE:
        result = (const char *)&unk_1ACA1660;
        break;
      case GCG_TAG_SLOWLY:
        result = (const char *)&unk_1ACA16A0;
        break;
      case GCG_TAG_WEAPON:
        result = byte_1AC309A0;
        break;
      case GCG_TAG_ARTIFACT:
        result = byte_1AC516A0;
        break;
      case GCG_TAG_FORBIDDEN_ATTACK:
        result = (const char *)&unk_1ACA16E0;
        break;
      case GCG_TAG_TALENT:
        result = (const char *)&unk_1ACA1720;
        break;
      case GCG_TAG_SKILL:
        result = (const char *)&unk_1ACA1760;
        break;
      case GCG_TAG_SHEILD:
        result = (const char *)&unk_1ACA17A0;
        break;
      case GCG_TAG_FOOD:
        result = (const char *)&unk_1ACA17E0;
        break;
      case GCG_TAG_ITEM:
        result = (const char *)&unk_1ACA1820;
        break;
      case GCG_TAG_ALLY:
        result = (const char *)&unk_1ACA1860;
        break;
      case GCG_TAG_PLACE:
        result = (const char *)&unk_1ACA18A0;
        break;
      case GCG_TAG_RESONANCE:
        result = (const char *)&unk_1ACA18E0;
        break;
      default:
        return "unknown enum value!";
    }
  }
  return result;
};

// Line 357: range 0000000013BA2945-0000000013BA2C21
bool __cdecl data::arrFromJson(const Json::Value *jval, data::GCGTagTypeArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::GCGTagType> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:363 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::GCGTagType>(elem_jval, (data::GCGTagType *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
          "arrFromJson",
          366);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        std::vector<data::GCGTagType>::push_back(va, (const std::vector<data::GCGTagType>::value_type *)(v3 + 48));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_17;
  }
  v2 = 1;
LABEL_17:
  result = v2;
  if ( v12 == (char *)v3 )
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

// Line 376: range 0000000013BA2C22-0000000013BA2EA3
int32_t __cdecl data::getArrHashValue(const data::GCGTagTypeArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GCGTagType *v5; // rax
  int32_t result; // eax
  int32_t *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:377 64 8 15 __for_begin:378 96 8 13 __for_end:378";
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
  *(std::vector<data::GCGTagType>::const_iterator *)(v2 + 64) = std::vector<data::GCGTagType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::GCGTagType>::const_iterator *)(v2 + 96) = std::vector<data::GCGTagType>::end(vec);
  while ( __gnu_cxx::operator!=<data::GCGTagType const*,std::vector<data::GCGTagType>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *)(v2 + 96)) )
  {
    v5 = (data::GCGTagType *)__gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::GCGTagType const*,std::vector<data::GCGTagType>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGTagType*,std::vector<data::GCGTagType> > *const)(v2 + 64));
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

// Line 386: range 0000000013BA2EA4-0000000013BA31E2
const char *__cdecl data::enumValToStr(data::GCGTokenType e)
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
    case GCG_TOKEN_NONE:
      result = "GCG_TOKEN_NONE";
      break;
    case GCG_TOKEN_HP:
      result = "GCG_TOKEN_HP";
      break;
    case GCG_TOKEN_MAX_HP:
      result = "GCG_TOKEN_MAX_HP";
      break;
    case GCG_TOKEN_ATK:
      result = "GCG_TOKEN_ATK";
      break;
    case GCG_TOKEN_ENERGY:
      result = "GCG_TOKEN_ENERGY";
      break;
    case GCG_TOKEN_MAX_ENERGY:
      result = "GCG_TOKEN_MAX_ENERGY";
      break;
    case GCG_TOKEN_ROUND_COUNT:
      result = "GCG_TOKEN_ROUND_COUNT";
      break;
    case GCG_TOKEN_SHIELD:
      result = "GCG_TOKEN_SHIELD";
      break;
    case GCG_TOKEN_LIFE:
      result = "GCG_TOKEN_LIFE";
      break;
    case GCG_TOKEN_ATTACH_CRYO:
      result = "GCG_TOKEN_ATTACH_CRYO";
      break;
    case GCG_TOKEN_ATTACH_HYDRO:
      result = "GCG_TOKEN_ATTACH_HYDRO";
      break;
    case GCG_TOKEN_ATTACH_PYRO:
      result = "GCG_TOKEN_ATTACH_PYRO";
      break;
    case GCG_TOKEN_ATTACH_ELECTRO:
      result = "GCG_TOKEN_ATTACH_ELECTRO";
      break;
    case GCG_TOKEN_ATTACH_GEO:
      result = "GCG_TOKEN_ATTACH_GEO";
      break;
    case GCG_TOKEN_ATTACH_DENDRO:
      result = "GCG_TOKEN_ATTACH_DENDRO";
      break;
    case GCG_TOKEN_ATTACH_ANEMO:
      result = "GCG_TOKEN_ATTACH_ANEMO";
      break;
    case GCG_TOKEN_COUNTER:
      result = "GCG_TOKEN_COUNTER";
      break;
    case GCG_TOKEN_SET_DAMAGE_ELEMENT:
      result = "GCG_TOKEN_SET_DAMAGE_ELEMENT";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        426);
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

// Line 432: range 0000000013BA31E3-0000000013BA4335
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGTokenType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::pair<const std::string,data::GCGTokenType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTokenType> >::pointer v10; // rax
  data::GCGTokenType second; // ecx
  char v12; // dl
  bool v13; // bl
  data::GCGTokenType *ea; // [rsp+10h] [rbp-5C0h]
  char v16[1456]; // [rsp+20h] [rbp-5B0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown> 288 4 9 <unknown> 3"
                        "04 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 4 9 <unknown> 368 8 6 it:459 400 8 9 <u"
                        "nknown> 432 32 9 <unknown> 496 32 9 <unknown> 560 720 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -234556924;
  v4[536862729] = -234556924;
  v4[536862730] = -234556924;
  v4[536862731] = 61956;
  v4[536862731] = -234881024;
  v4[536862732] = 62194;
  v4[536862732] = -234881024;
  v4[536862733] = 62194;
  v4[536862734] = -219021312;
  v4[536862735] = 62194;
  v4[536862736] = -219021312;
  v4[536862737] = 62194;
  v4[536862760] = -202116109;
  v4[536862761] = -202116109;
  v4[536862762] = -202116109;
  v4[536862763] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 432) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 49) & 7) >= *(_BYTE *)(((v2 + 463) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 432, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 432),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      435);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 432),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 432));
    v5 = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGTokenType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGTokenType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[15],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 560),
        (const char (*)[15])"GCG_TOKEN_NONE",
        (data::GCGTokenType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_TOKEN_NONE");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[13],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 600),
        (const char (*)[13])"GCG_TOKEN_HP",
        (data::GCGTokenType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_TOKEN_HP");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[17],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 640),
        (const char (*)[17])"GCG_TOKEN_MAX_HP",
        (data::GCGTokenType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_TOKEN_MAX_HP");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[14],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 680),
        (const char (*)[14])"GCG_TOKEN_ATK",
        (data::GCGTokenType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "GCG_TOKEN_ATK");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[17],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 720),
        (const char (*)[17])"GCG_TOKEN_ENERGY",
        (data::GCGTokenType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GCG_TOKEN_ENERGY");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[21],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 760),
        (const char (*)[21])"GCG_TOKEN_MAX_ENERGY",
        (data::GCGTokenType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GCG_TOKEN_MAX_ENERGY");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[22],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 800),
        (const char (*)[22])"GCG_TOKEN_ROUND_COUNT",
        (data::GCGTokenType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "GCG_TOKEN_ROUND_COUNT");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[17],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 840),
        (const char (*)[17])"GCG_TOKEN_SHIELD",
        (data::GCGTokenType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "GCG_TOKEN_SHIELD");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[15],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 880),
        (const char (*)[15])"GCG_TOKEN_LIFE",
        (data::GCGTokenType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "GCG_TOKEN_LIFE");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[22],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 920),
        (const char (*)[22])"GCG_TOKEN_ATTACH_CRYO",
        (data::GCGTokenType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "GCG_TOKEN_ATTACH_CRYO");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[23],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 960),
        (const char (*)[23])"GCG_TOKEN_ATTACH_HYDRO",
        (data::GCGTokenType *)(v2 + 240));
      if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 256, "GCG_TOKEN_ATTACH_HYDRO");
      *(_DWORD *)(v2 + 256) = 11;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[22],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1000),
        (const char (*)[22])"GCG_TOKEN_ATTACH_PYRO",
        (data::GCGTokenType *)(v2 + 256));
      if ( *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 272, "GCG_TOKEN_ATTACH_PYRO");
      *(_DWORD *)(v2 + 272) = 12;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[25],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1040),
        (const char (*)[25])"GCG_TOKEN_ATTACH_ELECTRO",
        (data::GCGTokenType *)(v2 + 272));
      if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 288, "GCG_TOKEN_ATTACH_ELECTRO");
      *(_DWORD *)(v2 + 288) = 13;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[21],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1080),
        (const char (*)[21])"GCG_TOKEN_ATTACH_GEO",
        (data::GCGTokenType *)(v2 + 288));
      if ( *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 304, "GCG_TOKEN_ATTACH_GEO");
      *(_DWORD *)(v2 + 304) = 14;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[24],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1120),
        (const char (*)[24])"GCG_TOKEN_ATTACH_DENDRO",
        (data::GCGTokenType *)(v2 + 304));
      if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 320, "GCG_TOKEN_ATTACH_DENDRO");
      *(_DWORD *)(v2 + 320) = 15;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[23],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1160),
        (const char (*)[23])"GCG_TOKEN_ATTACH_ANEMO",
        (data::GCGTokenType *)(v2 + 320));
      if ( *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 336, "GCG_TOKEN_ATTACH_ANEMO");
      *(_DWORD *)(v2 + 336) = 16;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[18],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1200),
        (const char (*)[18])"GCG_TOKEN_COUNTER",
        (data::GCGTokenType *)(v2 + 336));
      if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 352, "GCG_TOKEN_COUNTER");
      *(_DWORD *)(v2 + 352) = 17;
      std::pair<std::string const,data::GCGTokenType>::pair<char const(&)[29],data::GCGTokenType,true>(
        (std::pair<const std::string,data::GCGTokenType> *const)(v2 + 1240),
        (const char (*)[29])"GCG_TOKEN_SET_DAMAGE_ELEMENT",
        (data::GCGTokenType *)(v2 + 352));
      std::allocator<std::pair<std::string const,data::GCGTokenType>>::allocator((std::allocator<std::pair<const std::string,data::GCGTokenType> > *const)(v2 + 64));
      std::map<std::string,data::GCGTokenType>::map(
        &data::enumStrToVal(std::string const&,data::GCGTokenType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGTokenType> >)__PAIR128__(18LL, v2 + 560),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::GCGTokenType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGTokenType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGTokenType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGTokenType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGTokenType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGTokenType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGTokenType> *)(v2 + 1280);
            i != (std::pair<const std::string,data::GCGTokenType> *)(v2 + 560);
            std::pair<std::string const,data::GCGTokenType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGTokenType *)720;
      __asan_poison_stack_memory(v2 + 560, 720LL);
      *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
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
    }
    *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 368, e);
    *(std::map<std::string,data::GCGTokenType>::iterator *)(v2 + 368) = std::map<std::string,data::GCGTokenType>::find(
                                                                          &data::enumStrToVal(std::string const&,data::GCGTokenType &)::m,
                                                                          s);
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 400, s);
    *(std::map<std::string,data::GCGTokenType>::iterator *)(v2 + 400) = std::map<std::string,data::GCGTokenType>::end(&data::enumStrToVal(std::string const&,data::GCGTokenType &)::m);
    v7 = (char *)(v2 + 400);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTokenType> >::_Self *)(v2 + 368),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTokenType> >::_Self *)(v2 + 400));
    *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
    {
      *(_DWORD *)(((v2 + 496) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 15) & 7) >= *(_BYTE *)(((v2 + 527) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 496, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 496),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        462);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 496),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 496));
      v5 = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGTokenType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGTokenType> > *const)(v2 + 368));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 176) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v16);
  }
  return v13;
};

// Line 470: range 0000000013BA4336-0000000013BA4420
const char *__cdecl data::getDescription(data::GCGTokenType e)
{
  const char *result; // rax

  switch ( e )
  {
    case GCG_TOKEN_NONE:
      result = byte_1AC59EA0;
      break;
    case GCG_TOKEN_HP:
      result = (const char *)&unk_1ACA28C0;
      break;
    case GCG_TOKEN_MAX_HP:
      result = (const char *)&unk_1ACA2900;
      break;
    case GCG_TOKEN_ATK:
      result = byte_1AC452C0;
      break;
    case GCG_TOKEN_ENERGY:
      result = (const char *)&unk_1ACA2940;
      break;
    case GCG_TOKEN_MAX_ENERGY:
      result = (const char *)&unk_1ACA2980;
      break;
    case GCG_TOKEN_ROUND_COUNT:
      result = (const char *)&unk_1ACA29C0;
      break;
    case GCG_TOKEN_SHIELD:
      result = (const char *)&unk_1ACA17A0;
      break;
    case GCG_TOKEN_LIFE:
      result = (const char *)&unk_1ACA2A00;
      break;
    case GCG_TOKEN_ATTACH_CRYO:
      result = (const char *)&unk_1ACA2A40;
      break;
    case GCG_TOKEN_ATTACH_HYDRO:
      result = (const char *)&unk_1ACA2A80;
      break;
    case GCG_TOKEN_ATTACH_PYRO:
      result = (const char *)&unk_1ACA2AC0;
      break;
    case GCG_TOKEN_ATTACH_ELECTRO:
      result = (const char *)&unk_1ACA2B00;
      break;
    case GCG_TOKEN_ATTACH_GEO:
      result = (const char *)&unk_1ACA2B40;
      break;
    case GCG_TOKEN_ATTACH_DENDRO:
      result = (const char *)&unk_1ACA2B80;
      break;
    case GCG_TOKEN_ATTACH_ANEMO:
      result = (const char *)&unk_1ACA2BC0;
      break;
    case GCG_TOKEN_COUNTER:
      result = (const char *)&unk_1ACA2C00;
      break;
    case GCG_TOKEN_SET_DAMAGE_ELEMENT:
      result = (const char *)&unk_1ACA2C40;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 515: range 0000000013BA4421-0000000013BA46FD
bool __cdecl data::arrFromJson(const Json::Value *jval, data::GCGTokenTypeArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::GCGTokenType> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:521 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::GCGTokenType>(elem_jval, (data::GCGTokenType *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
          "arrFromJson",
          524);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        std::vector<data::GCGTokenType>::push_back(va, (const std::vector<data::GCGTokenType>::value_type *)(v3 + 48));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_17;
  }
  v2 = 1;
LABEL_17:
  result = v2;
  if ( v12 == (char *)v3 )
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

// Line 534: range 0000000013BA46FE-0000000013BA497F
int32_t __cdecl data::getArrHashValue(const data::GCGTokenTypeArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GCGTokenType *v5; // rax
  int32_t result; // eax
  int32_t *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:535 64 8 15 __for_begin:536 96 8 13 __for_end:536";
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
  *(std::vector<data::GCGTokenType>::const_iterator *)(v2 + 64) = std::vector<data::GCGTokenType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::GCGTokenType>::const_iterator *)(v2 + 96) = std::vector<data::GCGTokenType>::end(vec);
  while ( __gnu_cxx::operator!=<data::GCGTokenType const*,std::vector<data::GCGTokenType>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGTokenType*,std::vector<data::GCGTokenType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::GCGTokenType*,std::vector<data::GCGTokenType> > *)(v2 + 96)) )
  {
    v5 = (data::GCGTokenType *)__gnu_cxx::__normal_iterator<data::GCGTokenType const*,std::vector<data::GCGTokenType>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGTokenType*,std::vector<data::GCGTokenType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::GCGTokenType const*,std::vector<data::GCGTokenType>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGTokenType*,std::vector<data::GCGTokenType> > *const)(v2 + 64));
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

// Line 544: range 0000000013BA4980-0000000013BA4C6A
const char *__cdecl data::enumValToStr(data::GCGEffectDamageElementType e)
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
    case DAMAGE_ELEMENT_ANY:
      result = "DAMAGE_ELEMENT_ANY";
      break;
    case DAMAGE_ELEMENT_PHYSIC:
      result = "DAMAGE_ELEMENT_PHYSIC";
      break;
    case DAMAGE_ELEMENT_CRYO:
      result = "DAMAGE_ELEMENT_CRYO";
      break;
    case DAMAGE_ELEMENT_HYDRO:
      result = "DAMAGE_ELEMENT_HYDRO";
      break;
    case DAMAGE_ELEMENT_PYRO:
      result = "DAMAGE_ELEMENT_PYRO";
      break;
    case DAMAGE_ELEMENT_ELECTRO:
      result = "DAMAGE_ELEMENT_ELECTRO";
      break;
    case DAMAGE_ELEMENT_GEO:
      result = "DAMAGE_ELEMENT_GEO";
      break;
    case DAMAGE_ELEMENT_DENDRO:
      result = "DAMAGE_ELEMENT_DENDRO";
      break;
    case DAMAGE_ELEMENT_ANEMO:
      result = "DAMAGE_ELEMENT_ANEMO";
      break;
    case DAMAGE_ELEMENT_EXCEPT_PHYSIC:
      result = "DAMAGE_ELEMENT_EXCEPT_PHYSIC";
      break;
    case DAMAGE_ELEMENT_SET_DAMAGE:
      result = "DAMAGE_ELEMENT_SET_DAMAGE";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        570);
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

// Line 576: range 0000000013BA4C6B-0000000013BA5A62
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGEffectDamageElementType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::GCGEffectDamageElementType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectDamageElementType> >::pointer v10; // rax
  data::GCGEffectDamageElementType second; // ecx
  char v12; // dl
  data::GCGEffectDamageElementType *ea; // [rsp+10h] [rbp-400h]
  char v14[1008]; // [rsp+20h] [rbp-3F0h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(960LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "18 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unknown> 208 4 9 <unkn"
                        "own> 224 4 9 <unknown> 240 4 9 <unknown> 256 8 6 it:596 288 8 9 <unknown> 320 32 9 <unknown> 384"
                        " 32 9 <unknown> 448 440 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234556927;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -234556924;
  v4[536862727] = -234556924;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862747] = -218103808;
  v4[536862748] = -202116109;
  v4[536862749] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      579);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[19],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 448),
        (const char (*)[19])"DAMAGE_ELEMENT_ANY",
        (data::GCGEffectDamageElementType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "DAMAGE_ELEMENT_ANY");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[22],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 488),
        (const char (*)[22])"DAMAGE_ELEMENT_PHYSIC",
        (data::GCGEffectDamageElementType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "DAMAGE_ELEMENT_PHYSIC");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[20],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 528),
        (const char (*)[20])"DAMAGE_ELEMENT_CRYO",
        (data::GCGEffectDamageElementType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "DAMAGE_ELEMENT_CRYO");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[21],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 568),
        (const char (*)[21])"DAMAGE_ELEMENT_HYDRO",
        (data::GCGEffectDamageElementType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "DAMAGE_ELEMENT_HYDRO");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[20],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 608),
        (const char (*)[20])"DAMAGE_ELEMENT_PYRO",
        (data::GCGEffectDamageElementType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "DAMAGE_ELEMENT_PYRO");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[23],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 648),
        (const char (*)[23])"DAMAGE_ELEMENT_ELECTRO",
        (data::GCGEffectDamageElementType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "DAMAGE_ELEMENT_ELECTRO");
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[19],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 688),
        (const char (*)[19])"DAMAGE_ELEMENT_GEO",
        (data::GCGEffectDamageElementType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "DAMAGE_ELEMENT_GEO");
      *(_DWORD *)(v2 + 192) = 7;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[22],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 728),
        (const char (*)[22])"DAMAGE_ELEMENT_DENDRO",
        (data::GCGEffectDamageElementType *)(v2 + 192));
      if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 208, "DAMAGE_ELEMENT_DENDRO");
      *(_DWORD *)(v2 + 208) = 8;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[21],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 768),
        (const char (*)[21])"DAMAGE_ELEMENT_ANEMO",
        (data::GCGEffectDamageElementType *)(v2 + 208));
      if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 224, "DAMAGE_ELEMENT_ANEMO");
      *(_DWORD *)(v2 + 224) = 9;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[29],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 808),
        (const char (*)[29])"DAMAGE_ELEMENT_EXCEPT_PHYSIC",
        (data::GCGEffectDamageElementType *)(v2 + 224));
      if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 240, "DAMAGE_ELEMENT_EXCEPT_PHYSIC");
      *(_DWORD *)(v2 + 240) = 10;
      std::pair<std::string const,data::GCGEffectDamageElementType>::pair<char const(&)[26],data::GCGEffectDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectDamageElementType> *const)(v2 + 848),
        (const char (*)[26])"DAMAGE_ELEMENT_SET_DAMAGE",
        (data::GCGEffectDamageElementType *)(v2 + 240));
      std::allocator<std::pair<std::string const,data::GCGEffectDamageElementType>>::allocator((std::allocator<std::pair<const std::string,data::GCGEffectDamageElementType> > *const)(v2 + 64));
      std::map<std::string,data::GCGEffectDamageElementType>::map(
        &data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGEffectDamageElementType> >)__PAIR128__(
                                                                                                 11LL,
                                                                                                 v2 + 448),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::GCGEffectDamageElementType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGEffectDamageElementType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGEffectDamageElementType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGEffectDamageElementType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGEffectDamageElementType> *)(v2 + 888);
            i != (std::pair<const std::string,data::GCGEffectDamageElementType> *)(v2 + 448);
            std::pair<std::string const,data::GCGEffectDamageElementType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGEffectDamageElementType *)440;
      __asan_poison_stack_memory(v2 + 448, 440LL);
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
    }
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, e);
    *(std::map<std::string,data::GCGEffectDamageElementType>::iterator *)(v2 + 256) = std::map<std::string,data::GCGEffectDamageElementType>::find(
                                                                                        &data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m,
                                                                                        s);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, s);
    *(std::map<std::string,data::GCGEffectDamageElementType>::iterator *)(v2 + 288) = std::map<std::string,data::GCGEffectDamageElementType>::end(&data::enumStrToVal(std::string const&,data::GCGEffectDamageElementType &)::m);
    v7 = (char *)(v2 + 288);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectDamageElementType> >::_Self *)(v2 + 256),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectDamageElementType> >::_Self *)(v2 + 288));
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        599);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGEffectDamageElementType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectDamageElementType> > *const)(v2 + 256));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
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
  }
  return result;
};

// Line 607: range 0000000013BA5A63-0000000013BA5B02
const char *__cdecl data::getDescription(data::GCGEffectDamageElementType e)
{
  const char *result; // rax

  switch ( e )
  {
    case DAMAGE_ELEMENT_ANY:
      result = (const char *)&unk_1ACA3180;
      break;
    case DAMAGE_ELEMENT_PHYSIC:
      result = (const char *)&unk_1ACA31C0;
      break;
    case DAMAGE_ELEMENT_CRYO:
      result = (const char *)&unk_1ACA3200;
      break;
    case DAMAGE_ELEMENT_HYDRO:
      result = (const char *)&unk_1ACA3240;
      break;
    case DAMAGE_ELEMENT_PYRO:
      result = (const char *)&unk_1ACA3280;
      break;
    case DAMAGE_ELEMENT_ELECTRO:
      result = (const char *)&unk_1ACA32C0;
      break;
    case DAMAGE_ELEMENT_GEO:
      result = (const char *)&unk_1ACA3300;
      break;
    case DAMAGE_ELEMENT_DENDRO:
      result = (const char *)&unk_1ACA3340;
      break;
    case DAMAGE_ELEMENT_ANEMO:
      result = (const char *)&unk_1ACA3380;
      break;
    case DAMAGE_ELEMENT_EXCEPT_PHYSIC:
      result = (const char *)&unk_1ACA33C0;
      break;
    case DAMAGE_ELEMENT_SET_DAMAGE:
      result = (const char *)&unk_1ACA3400;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 638: range 0000000013BA5B03-0000000013BA5DC9
const char *__cdecl data::enumValToStr(data::GCGEffectSetDamageElementType e)
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
    case GCG_SET_DAMAGE_ELEMENT_NONE:
      result = "GCG_SET_DAMAGE_ELEMENT_NONE";
      break;
    case GCG_SET_DAMAGE_ELEMENT_CRYO:
      result = "GCG_SET_DAMAGE_ELEMENT_CRYO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_HYDRO:
      result = "GCG_SET_DAMAGE_ELEMENT_HYDRO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_PYRO:
      result = "GCG_SET_DAMAGE_ELEMENT_PYRO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_ELECTRO:
      result = "GCG_SET_DAMAGE_ELEMENT_ELECTRO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_GEO:
      result = "GCG_SET_DAMAGE_ELEMENT_GEO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_DENDRO:
      result = "GCG_SET_DAMAGE_ELEMENT_DENDRO";
      break;
    case GCG_SET_DAMAGE_ELEMENT_ANEMO:
      result = "GCG_SET_DAMAGE_ELEMENT_ANEMO";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        658);
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

// Line 664: range 0000000013BA5DCA-0000000013BA69AD
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGEffectSetDamageElementType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::GCGEffectSetDamageElementType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectSetDamageElementType> >::pointer v10; // rax
  data::GCGEffectSetDamageElementType second; // ecx
  char v12; // dl
  data::GCGEffectSetDamageElementType *ea; // [rsp+10h] [rbp-340h]
  char v14[816]; // [rsp+20h] [rbp-330h] BYREF

  ea = e;
  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 6 it:681"
                        " 224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 320 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862725] = -234556924;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862742] = -202116109;
  v4[536862743] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
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
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      667);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[28],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 384),
        (const char (*)[28])"GCG_SET_DAMAGE_ELEMENT_NONE",
        (data::GCGEffectSetDamageElementType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "GCG_SET_DAMAGE_ELEMENT_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[28],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 424),
        (const char (*)[28])"GCG_SET_DAMAGE_ELEMENT_CRYO",
        (data::GCGEffectSetDamageElementType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_SET_DAMAGE_ELEMENT_CRYO");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[29],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 464),
        (const char (*)[29])"GCG_SET_DAMAGE_ELEMENT_HYDRO",
        (data::GCGEffectSetDamageElementType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_SET_DAMAGE_ELEMENT_HYDRO");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[28],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 504),
        (const char (*)[28])"GCG_SET_DAMAGE_ELEMENT_PYRO",
        (data::GCGEffectSetDamageElementType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_SET_DAMAGE_ELEMENT_PYRO");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[31],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 544),
        (const char (*)[31])"GCG_SET_DAMAGE_ELEMENT_ELECTRO",
        (data::GCGEffectSetDamageElementType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "GCG_SET_DAMAGE_ELEMENT_ELECTRO");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[27],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 584),
        (const char (*)[27])"GCG_SET_DAMAGE_ELEMENT_GEO",
        (data::GCGEffectSetDamageElementType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GCG_SET_DAMAGE_ELEMENT_GEO");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[30],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 624),
        (const char (*)[30])"GCG_SET_DAMAGE_ELEMENT_DENDRO",
        (data::GCGEffectSetDamageElementType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GCG_SET_DAMAGE_ELEMENT_DENDRO");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::GCGEffectSetDamageElementType>::pair<char const(&)[29],data::GCGEffectSetDamageElementType,true>(
        (std::pair<const std::string,data::GCGEffectSetDamageElementType> *const)(v2 + 664),
        (const char (*)[29])"GCG_SET_DAMAGE_ELEMENT_ANEMO",
        (data::GCGEffectSetDamageElementType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::GCGEffectSetDamageElementType>>::allocator((std::allocator<std::pair<const std::string,data::GCGEffectSetDamageElementType> > *const)(v2 + 48));
      std::map<std::string,data::GCGEffectSetDamageElementType>::map(
        &data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGEffectSetDamageElementType> >)__PAIR128__(
                                                                                                    8LL,
                                                                                                    v2 + 384),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::GCGEffectSetDamageElementType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGEffectSetDamageElementType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGEffectSetDamageElementType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGEffectSetDamageElementType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGEffectSetDamageElementType> *)(v2 + 704);
            i != (std::pair<const std::string,data::GCGEffectSetDamageElementType> *)(v2 + 384);
            std::pair<std::string const,data::GCGEffectSetDamageElementType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGEffectSetDamageElementType *)320;
      __asan_poison_stack_memory(v2 + 384, 320LL);
      *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, e);
    *(std::map<std::string,data::GCGEffectSetDamageElementType>::iterator *)(v2 + 192) = std::map<std::string,data::GCGEffectSetDamageElementType>::find(
                                                                                           &data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m,
                                                                                           s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::GCGEffectSetDamageElementType>::iterator *)(v2 + 224) = std::map<std::string,data::GCGEffectSetDamageElementType>::end(&data::enumStrToVal(std::string const&,data::GCGEffectSetDamageElementType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectSetDamageElementType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectSetDamageElementType> >::_Self *)(v2 + 224));
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        684);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGEffectSetDamageElementType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectSetDamageElementType> > *const)(v2 + 192));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
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
  }
  return result;
};

// Line 692: range 0000000013BA69AE-0000000013BA6A2E
const char *__cdecl data::getDescription(data::GCGEffectSetDamageElementType e)
{
  const char *result; // rax

  switch ( e )
  {
    case GCG_SET_DAMAGE_ELEMENT_NONE:
      result = off_1AC27420;
      break;
    case GCG_SET_DAMAGE_ELEMENT_CRYO:
      result = (const char *)&unk_1ACA3200;
      break;
    case GCG_SET_DAMAGE_ELEMENT_HYDRO:
      result = (const char *)&unk_1ACA3240;
      break;
    case GCG_SET_DAMAGE_ELEMENT_PYRO:
      result = (const char *)&unk_1ACA3280;
      break;
    case GCG_SET_DAMAGE_ELEMENT_ELECTRO:
      result = (const char *)&unk_1ACA32C0;
      break;
    case GCG_SET_DAMAGE_ELEMENT_GEO:
      result = (const char *)&unk_1ACA3300;
      break;
    case GCG_SET_DAMAGE_ELEMENT_DENDRO:
      result = (const char *)&unk_1ACA3340;
      break;
    case GCG_SET_DAMAGE_ELEMENT_ANEMO:
      result = (const char *)&unk_1ACA3380;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 717: range 0000000013BA6A2F-0000000013BA6D01
const char *__cdecl data::enumValToStr(data::GCGEffectElementType e)
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
    case GCG_ELEMENT_PHYSIC:
      result = "GCG_ELEMENT_PHYSIC";
      break;
    case GCG_ELEMENT_CRYO:
      result = "GCG_ELEMENT_CRYO";
      break;
    case GCG_ELEMENT_HYDRO:
      result = "GCG_ELEMENT_HYDRO";
      break;
    case GCG_ELEMENT_PYRO:
      result = "GCG_ELEMENT_PYRO";
      break;
    case GCG_ELEMENT_ELECTRO:
      result = "GCG_ELEMENT_ELECTRO";
      break;
    case GCG_ELEMENT_GEO:
      result = "GCG_ELEMENT_GEO";
      break;
    case GCG_ELEMENT_DENDRO:
      result = "GCG_ELEMENT_DENDRO";
      break;
    case GCG_ELEMENT_ANEMO:
      result = "GCG_ELEMENT_ANEMO";
      break;
    case GCG_ELEMENT_ANY:
      result = "GCG_ELEMENT_ANY";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        739);
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

// Line 745: range 0000000013BA6D02-0000000013BA7982
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGEffectElementType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::GCGEffectElementType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectElementType> >::pointer v10; // rax
  data::GCGEffectElementType second; // ecx
  char v12; // dl
  data::GCGEffectElementType *ea; // [rsp+10h] [rbp-380h]
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
                        "wn> 208 8 6 it:763 240 8 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 360 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      748);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 272),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[19],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 400),
        (const char (*)[19])"GCG_ELEMENT_PHYSIC",
        (data::GCGEffectElementType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "GCG_ELEMENT_PHYSIC");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[17],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 440),
        (const char (*)[17])"GCG_ELEMENT_CRYO",
        (data::GCGEffectElementType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_ELEMENT_CRYO");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[18],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 480),
        (const char (*)[18])"GCG_ELEMENT_HYDRO",
        (data::GCGEffectElementType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_ELEMENT_HYDRO");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[17],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 520),
        (const char (*)[17])"GCG_ELEMENT_PYRO",
        (data::GCGEffectElementType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_ELEMENT_PYRO");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[20],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 560),
        (const char (*)[20])"GCG_ELEMENT_ELECTRO",
        (data::GCGEffectElementType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "GCG_ELEMENT_ELECTRO");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[16],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 600),
        (const char (*)[16])"GCG_ELEMENT_GEO",
        (data::GCGEffectElementType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "GCG_ELEMENT_GEO");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[19],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 640),
        (const char (*)[19])"GCG_ELEMENT_DENDRO",
        (data::GCGEffectElementType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GCG_ELEMENT_DENDRO");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[18],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 680),
        (const char (*)[18])"GCG_ELEMENT_ANEMO",
        (data::GCGEffectElementType *)(v2 + 176));
      if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 192, "GCG_ELEMENT_ANEMO");
      *(_DWORD *)(v2 + 192) = 8;
      std::pair<std::string const,data::GCGEffectElementType>::pair<char const(&)[16],data::GCGEffectElementType,true>(
        (std::pair<const std::string,data::GCGEffectElementType> *const)(v2 + 720),
        (const char (*)[16])"GCG_ELEMENT_ANY",
        (data::GCGEffectElementType *)(v2 + 192));
      std::allocator<std::pair<std::string const,data::GCGEffectElementType>>::allocator((std::allocator<std::pair<const std::string,data::GCGEffectElementType> > *const)(v2 + 48));
      std::map<std::string,data::GCGEffectElementType>::map(
        &data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGEffectElementType> >)__PAIR128__(9LL, v2 + 400),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::GCGEffectElementType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGEffectElementType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGEffectElementType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGEffectElementType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGEffectElementType> *)(v2 + 760);
            i != (std::pair<const std::string,data::GCGEffectElementType> *)(v2 + 400);
            std::pair<std::string const,data::GCGEffectElementType>::~pair(i) )
      {
        --i;
      }
      e = (data::GCGEffectElementType *)360;
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
    *(std::map<std::string,data::GCGEffectElementType>::iterator *)(v2 + 208) = std::map<std::string,data::GCGEffectElementType>::find(
                                                                                  &data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m,
                                                                                  s);
    *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 240, s);
    *(std::map<std::string,data::GCGEffectElementType>::iterator *)(v2 + 240) = std::map<std::string,data::GCGEffectElementType>::end(&data::enumStrToVal(std::string const&,data::GCGEffectElementType &)::m);
    v7 = (char *)(v2 + 240);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectElementType> >::_Self *)(v2 + 208),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectElementType> >::_Self *)(v2 + 240));
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        766);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 336),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 336));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGEffectElementType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGEffectElementType> > *const)(v2 + 208));
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

// Line 774: range 0000000013BA7983-0000000013BA7A0C
const char *__cdecl data::getDescription(data::GCGEffectElementType e)
{
  const char *result; // rax

  switch ( e )
  {
    case GCG_ELEMENT_PHYSIC:
      result = (const char *)&unk_1ACA3B80;
      break;
    case GCG_ELEMENT_CRYO:
      result = (const char *)&unk_1ACA3200;
      break;
    case GCG_ELEMENT_HYDRO:
      result = (const char *)&unk_1ACA3240;
      break;
    case GCG_ELEMENT_PYRO:
      result = (const char *)&unk_1ACA3280;
      break;
    case GCG_ELEMENT_ELECTRO:
      result = (const char *)&unk_1ACA32C0;
      break;
    case GCG_ELEMENT_GEO:
      result = (const char *)&unk_1ACA3300;
      break;
    case GCG_ELEMENT_DENDRO:
      result = (const char *)&unk_1ACA3340;
      break;
    case GCG_ELEMENT_ANEMO:
      result = (const char *)&unk_1ACA3380;
      break;
    case GCG_ELEMENT_ANY:
      result = (const char *)&unk_1ACA3180;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 801: range 0000000013BA7A0D-0000000013BA7CAB
const char *__cdecl data::enumValToStr(data::GCGSkillTagType e)
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
    case GCG_SKILL_TAG_NONE:
      result = "GCG_SKILL_TAG_NONE";
      break;
    case GCG_SKILL_TAG_A:
      result = "GCG_SKILL_TAG_A";
      break;
    case GCG_SKILL_TAG_E:
      result = "GCG_SKILL_TAG_E";
      break;
    case GCG_SKILL_TAG_Q:
      result = "GCG_SKILL_TAG_Q";
      break;
    case GCG_SKILL_TAG_PASSIVE:
      result = "GCG_SKILL_TAG_PASSIVE";
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumValToStr",
        815);
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

// Line 821: range 0000000013BA7CAC-0000000013BA8716
bool __cdecl data::enumStrToVal(const std::string *s, data::GCGSkillTagType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::GCGSkillTagType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::GCGSkillTagType> >::pointer v11; // rax
  data::GCGSkillTagType second; // ecx
  char v13; // dl
  data::GCGSkillTagType *ea; // [rsp+10h] [rbp-2A0h]
  char v15[656]; // [rsp+20h] [rbp-290h] BYREF

  ea = e;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 "
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:835 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
                        "n> 336 200 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::enumStrToVal;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = 61956;
  v4[536862724] = -234881024;
  v4[536862725] = 62194;
  v4[536862725] = -234881024;
  v4[536862726] = 62194;
  v4[536862727] = -219021312;
  v4[536862728] = 62194;
  v4[536862729] = -219021312;
  v4[536862730] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  if ( (unsigned __int8)std::string::empty(s) )
  {
    if ( *(char *)(((v2 + 208) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 17) & 7) >= *(_BYTE *)(((v2 + 239) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 208, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 208),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
      "enumStrToVal",
      824);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::GCGSkillTagType>::pair<char const(&)[19],data::GCGSkillTagType,true>(
        (std::pair<const std::string,data::GCGSkillTagType> *const)(v2 + 336),
        (const char (*)[19])"GCG_SKILL_TAG_NONE",
        (data::GCGSkillTagType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "GCG_SKILL_TAG_NONE");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::GCGSkillTagType>::pair<char const(&)[16],data::GCGSkillTagType,true>(
        (std::pair<const std::string,data::GCGSkillTagType> *const)(v2 + 376),
        (const char (*)[16])"GCG_SKILL_TAG_A",
        (data::GCGSkillTagType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "GCG_SKILL_TAG_A");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::GCGSkillTagType>::pair<char const(&)[16],data::GCGSkillTagType,true>(
        (std::pair<const std::string,data::GCGSkillTagType> *const)(v2 + 416),
        (const char (*)[16])"GCG_SKILL_TAG_E",
        (data::GCGSkillTagType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "GCG_SKILL_TAG_E");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::GCGSkillTagType>::pair<char const(&)[16],data::GCGSkillTagType,true>(
        (std::pair<const std::string,data::GCGSkillTagType> *const)(v2 + 456),
        (const char (*)[16])"GCG_SKILL_TAG_Q",
        (data::GCGSkillTagType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "GCG_SKILL_TAG_Q");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::GCGSkillTagType>::pair<char const(&)[22],data::GCGSkillTagType,true>(
        (std::pair<const std::string,data::GCGSkillTagType> *const)(v2 + 496),
        (const char (*)[22])"GCG_SKILL_TAG_PASSIVE",
        (data::GCGSkillTagType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::GCGSkillTagType>>::allocator((std::allocator<std::pair<const std::string,data::GCGSkillTagType> > *const)(v2 + 48));
      std::map<std::string,data::GCGSkillTagType>::map(
        &data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m,
        (std::initializer_list<std::pair<const std::string,data::GCGSkillTagType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::GCGSkillTagType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m);
      e = (data::GCGSkillTagType *)&data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::GCGSkillTagType>::~map,
        &data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::GCGSkillTagType>>::~allocator((std::allocator<std::pair<const std::string,data::GCGSkillTagType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::GCGSkillTagType> *)(v2 + 536);
            i != (std::pair<const std::string,data::GCGSkillTagType> *)(v2 + 336);
            std::pair<std::string const,data::GCGSkillTagType>::~pair(i) )
      {
        --i;
      }
      v7 = ((v2 + 336) >> 3) + 2147450880;
      *(_DWORD *)v7 = -117901064;
      *(_DWORD *)(v7 + 4) = -117901064;
      *(_DWORD *)(v7 + 8) = -117901064;
      *(_DWORD *)(v7 + 12) = -117901064;
      *(_DWORD *)(v7 + 16) = -117901064;
      *(_DWORD *)(v7 + 20) = -117901064;
      *(_BYTE *)(v7 + 24) = -8;
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    }
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, e);
    *(std::map<std::string,data::GCGSkillTagType>::iterator *)(v2 + 144) = std::map<std::string,data::GCGSkillTagType>::find(
                                                                             &data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m,
                                                                             s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::GCGSkillTagType>::iterator *)(v2 + 176) = std::map<std::string,data::GCGSkillTagType>::end(&data::enumStrToVal(std::string const&,data::GCGSkillTagType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGSkillTagType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGSkillTagType> >::_Self *)(v2 + 176));
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v2 + 272) >> 3) + 0x7FFF8000) = 0;
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
        "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
        "enumStrToVal",
        838);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::GCGSkillTagType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::GCGSkillTagType> > *const)(v2 + 144));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
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

// Line 846: range 0000000013BA8717-0000000013BA877C
const char *__cdecl data::getDescription(data::GCGSkillTagType e)
{
  const char *result; // rax

  switch ( e )
  {
    case GCG_SKILL_TAG_NONE:
      result = (const char *)&unk_1ACA3E40;
      break;
    case GCG_SKILL_TAG_A:
      result = (const char *)&unk_1ACA3E80;
      break;
    case GCG_SKILL_TAG_E:
      result = (const char *)&unk_1ACA3EC0;
      break;
    case GCG_SKILL_TAG_Q:
      result = (const char *)&unk_1ACA3F00;
      break;
    case GCG_SKILL_TAG_PASSIVE:
      result = (const char *)&unk_1ACA3F40;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 865: range 0000000013BA877D-0000000013BA8A59
bool __cdecl data::arrFromJson(const Json::Value *jval, data::GCGSkillTagTypeArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::GCGSkillTagType> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v12[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:871 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::GCGSkillTagType>(elem_jval, (data::GCGSkillTagType *)(v3 + 48)) )
      {
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/GCG/ConfigGCGDefine.cpp",
          "arrFromJson",
          874);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 64),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 64));
        *(_DWORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        std::vector<data::GCGSkillTagType>::push_back(
          va,
          (const std::vector<data::GCGSkillTagType>::value_type *)(v3 + 48));
        v6 = 2;
      }
    }
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v6 && v6 != 2 )
      goto LABEL_17;
  }
  v2 = 1;
LABEL_17:
  result = v2;
  if ( v12 == (char *)v3 )
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

// Line 884: range 0000000013BA8A5A-0000000013BA8CDB
int32_t __cdecl data::getArrHashValue(const data::GCGSkillTagTypeArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::GCGSkillTagType *v5; // rax
  int32_t result; // eax
  int32_t *elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:885 64 8 15 __for_begin:886 96 8 13 __for_end:886";
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
  *(std::vector<data::GCGSkillTagType>::const_iterator *)(v2 + 64) = std::vector<data::GCGSkillTagType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::GCGSkillTagType>::const_iterator *)(v2 + 96) = std::vector<data::GCGSkillTagType>::end(vec);
  while ( __gnu_cxx::operator!=<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>(
            (const __gnu_cxx::__normal_iterator<const data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *)(v2 + 96)) )
  {
    v5 = (data::GCGSkillTagType *)__gnu_cxx::__normal_iterator<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>::operator*((const __gnu_cxx::__normal_iterator<const data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::GCGSkillTagType const*,std::vector<data::GCGSkillTagType>>::operator++((__gnu_cxx::__normal_iterator<const data::GCGSkillTagType*,std::vector<data::GCGSkillTagType> > *const)(v2 + 64));
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
