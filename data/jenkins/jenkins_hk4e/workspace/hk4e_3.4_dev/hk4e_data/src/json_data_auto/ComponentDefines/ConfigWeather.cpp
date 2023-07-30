// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigWeather.cpp

// Line 19: range 0000000011FD0B9F-0000000011FD0E65
const char *__cdecl data::enumValToStr(data::ConfigWeatherType e)
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
    case ClearSky:
      result = "ClearSky";
      break;
    case Cloudy:
      result = "Cloudy";
      break;
    case Foggy:
      result = "Foggy";
      break;
    case Rain:
      result = "Rain";
      break;
    case Snow:
      result = "Snow";
      break;
    case Storm:
      result = "Storm";
      break;
    case Skill:
      result = "Skill";
      break;
    case Desert:
      result = "Desert";
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumValToStr",
        39);
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

// Line 45: range 0000000011FD0E66-0000000011FD1A49
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigWeatherType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigWeatherType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherType> >::pointer v10; // rax
  data::ConfigWeatherType second; // ecx
  char v12; // dl
  data::ConfigWeatherType *ea; // [rsp+10h] [rbp-340h]
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 5 it:62 "
                        "224 8 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 320 9 <unknown>";
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "enumStrToVal",
      48);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[9],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 384),
        (const char (*)[9])"ClearSky",
        (data::ConfigWeatherType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "ClearSky");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[7],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 424),
        (const char (*)[7])"Cloudy",
        (data::ConfigWeatherType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Cloudy");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[6],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 464),
        (const char (*)[6])"Foggy",
        (data::ConfigWeatherType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "Foggy");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[5],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 504),
        (const char (*)[5])"Rain",
        (data::ConfigWeatherType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "Rain");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[5],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 544),
        (const char (*)[5])"Snow",
        (data::ConfigWeatherType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "Snow");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[6],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 584),
        (const char (*)[6])"Storm",
        (data::ConfigWeatherType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "Storm");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[6],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 624),
        (const char (*)[6])"Skill",
        (data::ConfigWeatherType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "Skill");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::ConfigWeatherType>::pair<char const(&)[7],data::ConfigWeatherType,true>(
        (std::pair<const std::string,data::ConfigWeatherType> *const)(v2 + 664),
        (const char (*)[7])"Desert",
        (data::ConfigWeatherType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::ConfigWeatherType>>::allocator((std::allocator<std::pair<const std::string,data::ConfigWeatherType> > *const)(v2 + 48));
      std::map<std::string,data::ConfigWeatherType>::map(
        &data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigWeatherType> >)__PAIR128__(8LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ConfigWeatherType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigWeatherType>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigWeatherType>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigWeatherType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigWeatherType> *)(v2 + 704);
            i != (std::pair<const std::string,data::ConfigWeatherType> *)(v2 + 384);
            std::pair<std::string const,data::ConfigWeatherType>::~pair(i) )
      {
        --i;
      }
      e = (data::ConfigWeatherType *)320;
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
    *(std::map<std::string,data::ConfigWeatherType>::iterator *)(v2 + 192) = std::map<std::string,data::ConfigWeatherType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::ConfigWeatherType>::iterator *)(v2 + 224) = std::map<std::string,data::ConfigWeatherType>::end(&data::enumStrToVal(std::string const&,data::ConfigWeatherType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherType> >::_Self *)(v2 + 224));
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumStrToVal",
        65);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigWeatherType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherType> > *const)(v2 + 192));
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

// Line 73: range 0000000011FD1A4A-0000000011FD1ACA
const char *__cdecl data::getDescription(data::ConfigWeatherType e)
{
  const char *result; // rax

  switch ( e )
  {
    case ClearSky:
      result = (const char *)&unk_1A8D5F20;
      break;
    case Cloudy:
      result = (const char *)&unk_1A8D5F60;
      break;
    case Foggy:
      result = (const char *)&unk_1A8D5FA0;
      break;
    case Rain:
      result = (const char *)&unk_1A8D5FE0;
      break;
    case Snow:
      result = (const char *)&unk_1A8D6020;
      break;
    case Storm:
      result = (const char *)&unk_1A8D6060;
      break;
    case Skill:
      result = (const char *)&unk_1A8D60A0;
      break;
    case Desert:
      result = (const char *)&unk_1A8AFAC0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 98: range 0000000011FD1ACB-0000000011FD1D69
const char *__cdecl data::enumValToStr(data::ElemBallTriggerType e)
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
    case None_29:
      result = "None";
      break;
    case InRain:
      result = "InRain";
      break;
    case AfterRain:
      result = "AfterRain";
      break;
    case InSnow:
      result = "InSnow";
      break;
    case InStorm:
      result = "InStorm";
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumValToStr",
        112);
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

// Line 118: range 0000000011FD1D6A-0000000011FD27D4
bool __cdecl data::enumStrToVal(const std::string *s, data::ElemBallTriggerType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ElemBallTriggerType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ElemBallTriggerType> >::pointer v11; // rax
  data::ElemBallTriggerType second; // ecx
  char v13; // dl
  data::ElemBallTriggerType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:132 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "enumStrToVal",
      121);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ElemBallTriggerType>::pair<char const(&)[5],data::ElemBallTriggerType,true>(
        (std::pair<const std::string,data::ElemBallTriggerType> *const)(v2 + 336),
        (const char (*)[5])"None",
        (data::ElemBallTriggerType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "None");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ElemBallTriggerType>::pair<char const(&)[7],data::ElemBallTriggerType,true>(
        (std::pair<const std::string,data::ElemBallTriggerType> *const)(v2 + 376),
        (const char (*)[7])"InRain",
        (data::ElemBallTriggerType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "InRain");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ElemBallTriggerType>::pair<char const(&)[10],data::ElemBallTriggerType,true>(
        (std::pair<const std::string,data::ElemBallTriggerType> *const)(v2 + 416),
        (const char (*)[10])"AfterRain",
        (data::ElemBallTriggerType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "AfterRain");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ElemBallTriggerType>::pair<char const(&)[7],data::ElemBallTriggerType,true>(
        (std::pair<const std::string,data::ElemBallTriggerType> *const)(v2 + 456),
        (const char (*)[7])"InSnow",
        (data::ElemBallTriggerType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "InSnow");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ElemBallTriggerType>::pair<char const(&)[8],data::ElemBallTriggerType,true>(
        (std::pair<const std::string,data::ElemBallTriggerType> *const)(v2 + 496),
        (const char (*)[8])"InStorm",
        (data::ElemBallTriggerType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ElemBallTriggerType>>::allocator((std::allocator<std::pair<const std::string,data::ElemBallTriggerType> > *const)(v2 + 48));
      std::map<std::string,data::ElemBallTriggerType>::map(
        &data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ElemBallTriggerType> >)__PAIR128__(5LL, v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ElemBallTriggerType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m);
      e = (data::ElemBallTriggerType *)&data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ElemBallTriggerType>::~map,
        &data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ElemBallTriggerType>>::~allocator((std::allocator<std::pair<const std::string,data::ElemBallTriggerType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ElemBallTriggerType> *)(v2 + 536);
            i != (std::pair<const std::string,data::ElemBallTriggerType> *)(v2 + 336);
            std::pair<std::string const,data::ElemBallTriggerType>::~pair(i) )
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
    *(std::map<std::string,data::ElemBallTriggerType>::iterator *)(v2 + 144) = std::map<std::string,data::ElemBallTriggerType>::find(
                                                                                 &data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m,
                                                                                 s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::ElemBallTriggerType>::iterator *)(v2 + 176) = std::map<std::string,data::ElemBallTriggerType>::end(&data::enumStrToVal(std::string const&,data::ElemBallTriggerType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElemBallTriggerType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ElemBallTriggerType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumStrToVal",
        135);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ElemBallTriggerType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ElemBallTriggerType> > *const)(v2 + 144));
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

// Line 143: range 0000000011FD27D5-0000000011FD283A
const char *__cdecl data::getDescription(data::ElemBallTriggerType e)
{
  const char *result; // rax

  switch ( e )
  {
    case None_29:
      result = (const char *)&unk_1A8ACA80;
      break;
    case InRain:
      result = (const char *)&unk_1A8D6300;
      break;
    case AfterRain:
      result = (const char *)&unk_1A8D6340;
      break;
    case InSnow:
      result = (const char *)&unk_1A8D6380;
      break;
    case InStorm:
      result = (const char *)&unk_1A8D63C0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 163: range 0000000011FD283C-0000000011FD43EA
bool __cdecl data::ConfigElemBall::fromJson(data::ConfigElemBall *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  char v6; // al
  bool v7; // r15
  float *p_max_radius; // rsi
  bool v9; // bl
  Json::Value *type_ptr; // [rsp+10h] [rbp-6C0h]
  Json::Value *element_type_ptr; // [rsp+18h] [rbp-6B8h]
  const Json::Value *cur_max_num_ptr; // [rsp+20h] [rbp-6B0h]
  const Json::Value *interval_times_ptr; // [rsp+28h] [rbp-6A8h]
  const Json::Value *drop_items_ptr; // [rsp+30h] [rbp-6A0h]
  const Json::Value *drop_counts_ptr; // [rsp+38h] [rbp-698h]
  const Json::Value *max_num_ptr; // [rsp+40h] [rbp-690h]
  const Json::Value *poisson_disk_ptr; // [rsp+48h] [rbp-688h]
  const Json::Value *min_radius_ptr; // [rsp+50h] [rbp-680h]
  const Json::Value *max_radius_ptr; // [rsp+58h] [rbp-678h]
  char v22[1648]; // [rsp+60h] [rbp-670h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1600LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "32 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknow"
                        "n> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkn"
                        "own> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <"
                        "unknown> 1536 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigElemBall::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
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
  v4[536862747] = -218959118;
  v4[536862749] = -218959118;
  v4[536862751] = -218959118;
  v4[536862753] = -218959118;
  v4[536862755] = -218959118;
  v4[536862757] = -218959118;
  v4[536862759] = -218959118;
  v4[536862761] = -218959118;
  v4[536862763] = -218959118;
  v4[536862765] = -218959118;
  v4[536862767] = -218959118;
  v4[536862769] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 256, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 256), &this->type);
  std::string::~string((void *)(v2 + 256));
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "fromJson",
      173);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[26])"fromJson for: type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
    v6 = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 384),
      "elementType",
      (const std::allocator<char> *)(v2 + 48));
    element_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( !element_type_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 448), (Json::Value_0 *)element_type_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 448), &this->element_type);
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "fromJson",
        185);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 512),
        (const char (*)[33])"fromJson for: elementType fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      v6 = 0;
    }
    else
    {
LABEL_18:
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        "curMaxNum",
        (const std::allocator<char> *)(v2 + 64));
      cur_max_num_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( cur_max_num_ptr && !fromJson<int>(cur_max_num_ptr, &this->cur_max_num) )
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
          "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
          "fromJson",
          197);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 640),
          (const char (*)[31])"fromJson for: curMaxNum fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          "intervalTimes",
          (const std::allocator<char> *)(v2 + 80));
        interval_times_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( interval_times_ptr && !data::vecFromJson(interval_times_ptr, &this->interval_times) )
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
            "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
            "fromJson",
            209);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v2 + 768),
            (const char (*)[35])"fromJson for: intervalTimes fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            "dropItems",
            (const std::allocator<char> *)(v2 + 96));
          drop_items_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( drop_items_ptr && !data::vecFromJson(drop_items_ptr, &this->drop_items) )
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
              "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
              "fromJson",
              221);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[31])"fromJson for: dropItems fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v6 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              "dropCounts",
              (const std::allocator<char> *)(v2 + 112));
            drop_counts_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( drop_counts_ptr && !data::vecFromJson(drop_counts_ptr, &this->drop_counts) )
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1024, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1024),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                "fromJson",
                233);
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[32])"fromJson for: dropCounts fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1088),
                "maxNum",
                (const std::allocator<char> *)(v2 + 128));
              max_num_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( max_num_ptr && !fromJson<int>(max_num_ptr, &this->max_num) )
              {
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1152, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1152),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                  "fromJson",
                  245);
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[28])"fromJson for: maxNum fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1216),
                  "poissonDisk",
                  (const std::allocator<char> *)(v2 + 144));
                poisson_disk_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( poisson_disk_ptr && !fromJson<float>(poisson_disk_ptr, &this->poisson_disk) )
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1280, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1280),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                    "fromJson",
                    257);
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v2 + 1280),
                    (const char (*)[33])"fromJson for: poissonDisk fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1344),
                    "minRadius",
                    (const std::allocator<char> *)(v2 + 160));
                  min_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                  std::string::~string((void *)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( min_radius_ptr && !fromJson<float>(min_radius_ptr, &this->min_radius) )
                  {
                    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1408, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1408),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                      "fromJson",
                      269);
                    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      (common::milog::MiLogStream *const)(v2 + 1408),
                      (const char (*)[31])"fromJson for: minRadius fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                    v6 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1472),
                      "maxRadius",
                      (const std::allocator<char> *)(v2 + 176));
                    p_max_radius = (float *)(v2 + 1472);
                    max_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                    std::string::~string((void *)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( max_radius_ptr
                      && (p_max_radius = &this->max_radius, !fromJson<float>(max_radius_ptr, &this->max_radius)) )
                    {
                      *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1536, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1536),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                        "fromJson",
                        281);
                      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v2 + 1536),
                        (const char (*)[31])"fromJson for: maxRadius fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                      v6 = 0;
                    }
                    else
                    {
                      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                        __asan_report_store1(&this->is_json_loaded, p_max_radius, &this->is_json_loaded);
                      this->is_json_loaded = 1;
                      v6 = 1;
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
  v9 = v6;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8034) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8094) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1600LL, v22);
  }
  return v9;
};

// Line 289: range 0000000011FD43EC-0000000011FD4779
int32_t __cdecl data::ConfigElemBall::getHashValue(const data::ConfigElemBall *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:290";
  *(_QWORD *)(v2 + 16) = data::ConfigElemBall::getHashValue;
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
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->element_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->element_type);
  }
  common::tools::HashUtils::appendHash(this->element_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cur_max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cur_max_num);
  }
  common::tools::HashUtils::appendHash(this->cur_max_num, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->interval_times);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->drop_items);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->drop_counts);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_num);
  }
  common::tools::HashUtils::appendHash(this->max_num, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->poisson_disk >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->poisson_disk);
  }
  common::tools::HashUtils::appendHash(this->poisson_disk, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->min_radius);
  }
  common::tools::HashUtils::appendHash(this->min_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_radius);
  }
  common::tools::HashUtils::appendHash(this->max_radius, (int32_t *)(v2 + 32));
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

// Line 305: range 0000000011FD477A-0000000011FD4B60
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigElemBallList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigElemBall *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-160h]
  char v12; // [rsp+8h] [rbp-158h]
  bool v13; // [rsp+Fh] [rbp-151h]
  uint32_t i; // [rsp+24h] [rbp-13Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-138h]
  char v16[304]; // [rsp+30h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 112 8 elem:311";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862727] = -202116109;
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
      *(_DWORD *)(v6 + 8) = 0;
      *(_WORD *)(v6 + 12) = 0;
      data::ConfigElemBall::ConfigElemBall((data::ConfigElemBall *const)(v2 + 112));
      if ( !data::ConfigElemBall::fromJson((data::ConfigElemBall *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
          "vecFromJson",
          314);
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
        v8 = std::move<data::ConfigElemBall &>((data::ConfigElemBall *)(v2 + 112));
        std::vector<data::ConfigElemBall>::emplace_back<data::ConfigElemBall>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigElemBall::~ConfigElemBall((data::ConfigElemBall *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_DWORD *)(v9 + 8) = -117901064;
    *(_WORD *)(v9 + 12) = -1800;
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
  return result;
};

// Line 324: range 0000000011FD4B61-0000000011FD4DAD
int32_t __cdecl data::getVecHashValue(const data::ConfigElemBallList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigElemBall*,std::vector<data::ConfigElemBall> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:325 64 8 15 __for_begin:326 96 8 13 __for_end:326";
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
  *(std::vector<data::ConfigElemBall>::const_iterator *)(v2 + 64) = std::vector<data::ConfigElemBall>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigElemBall>::const_iterator *)(v2 + 96) = std::vector<data::ConfigElemBall>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigElemBall const*,std::vector<data::ConfigElemBall>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigElemBall*,std::vector<data::ConfigElemBall> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigElemBall*,std::vector<data::ConfigElemBall> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigElemBall const*,std::vector<data::ConfigElemBall>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigElemBall*,std::vector<data::ConfigElemBall> > *const)(v2 + 64));
    HashValue = data::ConfigElemBall::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigElemBall const*,std::vector<data::ConfigElemBall>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigElemBall*,std::vector<data::ConfigElemBall> > *const)(v2 + 64));
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

// Line 335: range 0000000011FD4DAE-0000000011FD6278
bool __cdecl data::ConfigWeather::fromJson(data::ConfigWeather *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *drop_elem_balls_ptr; // [rsp+10h] [rbp-500h]
  const Json::Value *shape_name_ptr; // [rsp+18h] [rbp-4F8h]
  const Json::Value *position_ptr; // [rsp+20h] [rbp-4F0h]
  const Json::Value *priority_ptr; // [rsp+28h] [rbp-4E8h]
  const Json::Value *default_enviro_ptr; // [rsp+30h] [rbp-4E0h]
  const Json::Value *weather_list_ptr; // [rsp+38h] [rbp-4D8h]
  const Json::Value *weather_weight_list_ptr; // [rsp+40h] [rbp-4D0h]
  const Json::Value *refresh_time_ptr; // [rsp+48h] [rbp-4C8h]
  char v18[1216]; // [rsp+50h] [rbp-4C0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "24 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <un"
                        "known> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unk"
                        "nown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unkn"
                        "own> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigWeather::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862752] = -218959118;
  v4[536862754] = -218959118;
  v4[536862756] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 160),
    "dropElemBalls",
    (const std::allocator<char> *)(v2 + 32));
  drop_elem_balls_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( drop_elem_balls_ptr && !data::vecFromJson(drop_elem_balls_ptr, &this->drop_elem_balls) )
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "fromJson",
      345);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[35])"fromJson for: dropElemBalls fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "shapeName",
      (const std::allocator<char> *)(v2 + 48));
    shape_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( shape_name_ptr && !fromJson<std::string>(shape_name_ptr, &this->shape_name) )
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "fromJson",
        357);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[31])"fromJson for: shapeName fails!");
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
        "position",
        (const std::allocator<char> *)(v2 + 64));
      position_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( position_ptr && !data::vecFromJson(position_ptr, &this->position) )
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
          "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
          "fromJson",
          369);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[30])"fromJson for: position fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 544),
          "priority",
          (const std::allocator<char> *)(v2 + 80));
        priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( priority_ptr && !fromJson<int>(priority_ptr, &this->priority) )
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
            "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
            "fromJson",
            381);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[30])"fromJson for: priority fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 672),
            "defaultEnviro",
            (const std::allocator<char> *)(v2 + 96));
          default_enviro_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( default_enviro_ptr && !fromJson<std::string>(default_enviro_ptr, &this->default_enviro) )
          {
            *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
              "fromJson",
              393);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[35])"fromJson for: defaultEnviro fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 800),
              "weatherList",
              (const std::allocator<char> *)(v2 + 112));
            weather_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( weather_list_ptr && !data::vecFromJson(weather_list_ptr, &this->weather_list) )
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
                "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                "fromJson",
                405);
              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[33])"fromJson for: weatherList fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 928),
                "weatherWeightList",
                (const std::allocator<char> *)(v2 + 128));
              weather_weight_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( weather_weight_list_ptr && !data::vecFromJson(weather_weight_list_ptr, &this->weather_weight_list) )
              {
                *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 992, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 992),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                  "fromJson",
                  417);
                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[39])"fromJson for: weatherWeightList fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1056),
                  "refreshTime",
                  (const std::allocator<char> *)(v2 + 144));
                refresh_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
                std::string::~string((void *)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( refresh_time_ptr && !fromJson<float>(refresh_time_ptr, &this->refresh_time) )
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
                    "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
                    "fromJson",
                    429);
                  common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    (common::milog::MiLogStream *const)(v2 + 1120),
                    (const char (*)[33])"fromJson for: refreshTime fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                  v5 = 0;
                }
                else
                {
                  v6 = ((_BYTE)this - 84) & 7;
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
  }
  v8 = v5;
  if ( v18 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1184LL, v18);
  }
  return v8;
};

// Line 437: range 0000000011FD627A-0000000011FD64D9
int32_t __cdecl data::ConfigWeather::getHashValue(const data::ConfigWeather *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:438";
  *(_QWORD *)(v2 + 16) = data::ConfigWeather::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->drop_elem_balls);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->shape_name, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->position);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->priority);
  }
  common::tools::HashUtils::appendHash(this->priority, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->default_enviro, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->weather_list);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->weather_weight_list);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->refresh_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->refresh_time);
  }
  common::tools::HashUtils::appendHash(this->refresh_time, (int32_t *)(v2 + 32));
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

// Line 452: range 0000000011FD64DA-0000000011FD6AC2
bool __cdecl data::ConfigWall::fromJson(data::ConfigWall *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *collision_effect_pattern_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *fade_duration_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigWall::fromJson;
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
    "collisionEffectPattern",
    (const std::allocator<char> *)(v2 + 32));
  collision_effect_pattern_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( collision_effect_pattern_ptr
    && !fromJson<std::string>(collision_effect_pattern_ptr, &this->collision_effect_pattern) )
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "fromJson",
      462);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[44])"fromJson for: collisionEffectPattern fails!");
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
      "fadeDuration",
      (const std::allocator<char> *)(v2 + 48));
    fade_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( fade_duration_ptr && !fromJson<float>(fade_duration_ptr, &this->fade_duration) )
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "fromJson",
        474);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[34])"fromJson for: fadeDuration fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
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

// Line 482: range 0000000011FD6AC4-0000000011FD6C40
int32_t __cdecl data::ConfigWall::getHashValue(const data::ConfigWall *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:483";
  *(_QWORD *)(v2 + 16) = data::ConfigWall::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->collision_effect_pattern, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fade_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fade_duration);
  }
  common::tools::HashUtils::appendHash(this->fade_duration, (int32_t *)(v2 + 32));
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

// Line 490: range 0000000011FD6C41-0000000011FD6EDF
const char *__cdecl data::enumValToStr(data::ConfigWeatherEffectControlType e)
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
    case SetEmitOffsetPos:
      result = "SetEmitOffsetPos";
      break;
    case SetEmitPlaySpeed:
      result = "SetEmitPlaySpeed";
      break;
    case SetEmitPlaySpeedWithLerp:
      result = "SetEmitPlaySpeedWithLerp";
      break;
    case SetVelocityMultiplier:
      result = "SetVelocityMultiplier";
      break;
    case SetEmitPosition:
      result = "SetEmitPosition";
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumValToStr",
        504);
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

// Line 510: range 0000000011FD6EE0-0000000011FD794A
bool __cdecl data::enumStrToVal(const std::string *s, data::ConfigWeatherEffectControlType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::ConfigWeatherEffectControlType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherEffectControlType> >::pointer v11; // rax
  data::ConfigWeatherEffectControlType second; // ecx
  char v13; // dl
  data::ConfigWeatherEffectControlType *ea; // [rsp+10h] [rbp-2A0h]
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
                        "<unknown> 128 4 9 <unknown> 144 8 6 it:524 176 8 9 <unknown> 208 32 9 <unknown> 272 32 9 <unknow"
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
      "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
      "enumStrToVal",
      513);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 208),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 208));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::ConfigWeatherEffectControlType>::pair<char const(&)[17],data::ConfigWeatherEffectControlType,true>(
        (std::pair<const std::string,data::ConfigWeatherEffectControlType> *const)(v2 + 336),
        (const char (*)[17])"SetEmitOffsetPos",
        (data::ConfigWeatherEffectControlType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "SetEmitOffsetPos");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::ConfigWeatherEffectControlType>::pair<char const(&)[17],data::ConfigWeatherEffectControlType,true>(
        (std::pair<const std::string,data::ConfigWeatherEffectControlType> *const)(v2 + 376),
        (const char (*)[17])"SetEmitPlaySpeed",
        (data::ConfigWeatherEffectControlType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "SetEmitPlaySpeed");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::ConfigWeatherEffectControlType>::pair<char const(&)[25],data::ConfigWeatherEffectControlType,true>(
        (std::pair<const std::string,data::ConfigWeatherEffectControlType> *const)(v2 + 416),
        (const char (*)[25])"SetEmitPlaySpeedWithLerp",
        (data::ConfigWeatherEffectControlType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "SetEmitPlaySpeedWithLerp");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::ConfigWeatherEffectControlType>::pair<char const(&)[22],data::ConfigWeatherEffectControlType,true>(
        (std::pair<const std::string,data::ConfigWeatherEffectControlType> *const)(v2 + 456),
        (const char (*)[22])"SetVelocityMultiplier",
        (data::ConfigWeatherEffectControlType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "SetVelocityMultiplier");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::ConfigWeatherEffectControlType>::pair<char const(&)[16],data::ConfigWeatherEffectControlType,true>(
        (std::pair<const std::string,data::ConfigWeatherEffectControlType> *const)(v2 + 496),
        (const char (*)[16])"SetEmitPosition",
        (data::ConfigWeatherEffectControlType *)(v2 + 128));
      std::allocator<std::pair<std::string const,data::ConfigWeatherEffectControlType>>::allocator((std::allocator<std::pair<const std::string,data::ConfigWeatherEffectControlType> > *const)(v2 + 48));
      std::map<std::string,data::ConfigWeatherEffectControlType>::map(
        &data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m,
        (std::initializer_list<std::pair<const std::string,data::ConfigWeatherEffectControlType> >)__PAIR128__(
                                                                                                     5LL,
                                                                                                     v2 + 336),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::ConfigWeatherEffectControlType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m);
      e = (data::ConfigWeatherEffectControlType *)&data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::ConfigWeatherEffectControlType>::~map,
        &data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::ConfigWeatherEffectControlType>>::~allocator((std::allocator<std::pair<const std::string,data::ConfigWeatherEffectControlType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::ConfigWeatherEffectControlType> *)(v2 + 536);
            i != (std::pair<const std::string,data::ConfigWeatherEffectControlType> *)(v2 + 336);
            std::pair<std::string const,data::ConfigWeatherEffectControlType>::~pair(i) )
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
    *(std::map<std::string,data::ConfigWeatherEffectControlType>::iterator *)(v2 + 144) = std::map<std::string,data::ConfigWeatherEffectControlType>::find(
                                                                                            &data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m,
                                                                                            s);
    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 176, s);
    *(std::map<std::string,data::ConfigWeatherEffectControlType>::iterator *)(v2 + 176) = std::map<std::string,data::ConfigWeatherEffectControlType>::end(&data::enumStrToVal(std::string const&,data::ConfigWeatherEffectControlType &)::m);
    v8 = (char *)(v2 + 176);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherEffectControlType> >::_Self *)(v2 + 144),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherEffectControlType> >::_Self *)(v2 + 176));
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
        "./src/json_data_auto/ComponentDefines/ConfigWeather.cpp",
        "enumStrToVal",
        527);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 272),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 272));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::ConfigWeatherEffectControlType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::ConfigWeatherEffectControlType> > *const)(v2 + 144));
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

// Line 535: range 0000000011FD794B-0000000011FD79B0
const char *__cdecl data::getDescription(data::ConfigWeatherEffectControlType e)
{
  const char *result; // rax

  switch ( e )
  {
    case SetEmitOffsetPos:
      result = (const char *)&unk_1A8D72A0;
      break;
    case SetEmitPlaySpeed:
      result = (const char *)&unk_1A8D7340;
      break;
    case SetEmitPlaySpeedWithLerp:
      result = (const char *)&unk_1A8D73A0;
      break;
    case SetVelocityMultiplier:
      result = (const char *)&unk_1A8D7440;
      break;
    case SetEmitPosition:
      result = (const char *)&unk_1A8D74C0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};
