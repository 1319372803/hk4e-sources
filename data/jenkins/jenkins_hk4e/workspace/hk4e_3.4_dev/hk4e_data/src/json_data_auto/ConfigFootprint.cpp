// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigFootprint.cpp

// Line 20: range 0000000011F025D2-0000000011F02BB5
bool __cdecl data::ConfigFootprintEffect::fromJson(data::ConfigFootprintEffect *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_deformation; // rsi
  const Json::Value *effect_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *deformation_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigFootprintEffect::fromJson;
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
    "effect",
    (const std::allocator<char> *)(v2 + 32));
  effect_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( effect_ptr && !fromJson<std::string>(effect_ptr, &this->effect) )
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
      "./src/json_data_auto/ConfigFootprint.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[28])"fromJson for: effect fails!");
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
      "deformation",
      (const std::allocator<char> *)(v2 + 48));
    p_deformation = (std::string *)(v2 + 192);
    deformation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( deformation_ptr
      && (p_deformation = &this->deformation, !fromJson<std::string>(deformation_ptr, &this->deformation)) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[33])"fromJson for: deformation fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_deformation, &this->is_json_loaded);
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

// Line 50: range 0000000011F02BB6-0000000011F02CFF
int32_t __cdecl data::ConfigFootprintEffect::getHashValue(const data::ConfigFootprintEffect *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:51";
  *(_QWORD *)(v2 + 16) = data::ConfigFootprintEffect::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->effect, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->deformation, (int32_t *)(v2 + 32));
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

// Line 58: range 0000000011F02D00-0000000011F02FB6
const char *__cdecl data::enumValToStr(data::EFootprintPlatform e)
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
    case all:
      result = off_1A8AC7A0;
      break;
    case allNoTessellation:
      result = "allNoTessellation";
      break;
    case PCNoTessellation:
      result = "PCNoTessellation";
      break;
    case pc:
      result = "pc";
      break;
    case android:
      result = "android";
      break;
    case ios:
      result = off_1A8AC8E0;
      break;
    case ps4:
      result = "ps4";
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
        "./src/json_data_auto/ConfigFootprint.cpp",
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

// Line 82: range 0000000011F02FB7-0000000011F03B1A
bool __cdecl data::enumStrToVal(const std::string *s, data::EFootprintPlatform *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::EFootprintPlatform> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::EFootprintPlatform> >::pointer v10; // rax
  data::EFootprintPlatform second; // ecx
  char v12; // dl
  data::EFootprintPlatform *ea; // [rsp+10h] [rbp-320h]
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
                        " <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 5 it:98 224 8 9 <unknown>"
                        " 256 32 9 <unknown> 320 32 9 <unknown> 384 280 9 <unknown>";
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
      "./src/json_data_auto/ConfigFootprint.cpp",
      "enumStrToVal",
      85);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[4],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 384),
        (const char (*)[4])off_1A8AC7A0,
        (data::EFootprintPlatform *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, off_1A8AC7A0);
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[18],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 424),
        (const char (*)[18])"allNoTessellation",
        (data::EFootprintPlatform *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "allNoTessellation");
      *(_DWORD *)(v2 + 112) = 2;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[17],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 464),
        (const char (*)[17])"PCNoTessellation",
        (data::EFootprintPlatform *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "PCNoTessellation");
      *(_DWORD *)(v2 + 128) = 3;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[3],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 504),
        (const char (*)[3])"pc",
        (data::EFootprintPlatform *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "pc");
      *(_DWORD *)(v2 + 144) = 4;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[8],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 544),
        (const char (*)[8])"android",
        (data::EFootprintPlatform *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "android");
      *(_DWORD *)(v2 + 160) = 5;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[4],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 584),
        (const char (*)[4])off_1A8AC8E0,
        (data::EFootprintPlatform *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, off_1A8AC8E0);
      *(_DWORD *)(v2 + 176) = 6;
      std::pair<std::string const,data::EFootprintPlatform>::pair<char const(&)[4],data::EFootprintPlatform,true>(
        (std::pair<const std::string,data::EFootprintPlatform> *const)(v2 + 624),
        (const char (*)[4])"ps4",
        (data::EFootprintPlatform *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::EFootprintPlatform>>::allocator((std::allocator<std::pair<const std::string,data::EFootprintPlatform> > *const)(v2 + 64));
      std::map<std::string,data::EFootprintPlatform>::map(
        &data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m,
        (std::initializer_list<std::pair<const std::string,data::EFootprintPlatform> >)__PAIR128__(7LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::EFootprintPlatform>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::EFootprintPlatform>::~map,
        &data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::EFootprintPlatform>>::~allocator((std::allocator<std::pair<const std::string,data::EFootprintPlatform> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::EFootprintPlatform> *)(v2 + 664);
            i != (std::pair<const std::string,data::EFootprintPlatform> *)(v2 + 384);
            std::pair<std::string const,data::EFootprintPlatform>::~pair(i) )
      {
        --i;
      }
      e = (data::EFootprintPlatform *)280;
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
    *(std::map<std::string,data::EFootprintPlatform>::iterator *)(v2 + 192) = std::map<std::string,data::EFootprintPlatform>::find(
                                                                                &data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m,
                                                                                s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::EFootprintPlatform>::iterator *)(v2 + 224) = std::map<std::string,data::EFootprintPlatform>::end(&data::enumStrToVal(std::string const&,data::EFootprintPlatform &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EFootprintPlatform> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::EFootprintPlatform> >::_Self *)(v2 + 224));
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "enumStrToVal",
        101);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::EFootprintPlatform>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::EFootprintPlatform> > *const)(v2 + 192));
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

// Line 109: range 0000000011F03B1B-0000000011F03B92
const char *__cdecl data::getDescription(data::EFootprintPlatform e)
{
  const char *result; // rax

  switch ( e )
  {
    case all:
      result = (const char *)&unk_1A8ACA80;
      break;
    case allNoTessellation:
      result = (const char *)&unk_1A8ACAC0;
      break;
    case PCNoTessellation:
      result = (const char *)&unk_1A8ACB20;
      break;
    case pc:
      result = "pc";
      break;
    case android:
      result = "android";
      break;
    case ios:
      result = off_1A8AC8E0;
      break;
    case ps4:
      result = (const char *)&unk_1A8ACB80;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 132: range 0000000011F03B93-0000000011F04AEE
bool __cdecl data::mapFromJson(const Json::Value *jval, data::PlatformFootprintEffectMap *m)
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
  data::ConfigFootprintEffect *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  bool result; // al
  char v26[976]; // [rsp+20h] [rbp-3D0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(928LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 7 key:137 64 8 9 <unknown> 96 8 9 <unknown> 128 16 7 cit:134 160 16 9 <unknown> 192 32 1"
                        "1 key_str:138 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32"
                        " 9 <unknown> 576 40 12 tmp_jval:133 656 40 12 key_jval:136 736 40 14 value_jval:149 816 72 9 value:150";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -219021312;
  v5[536862725] = -219021312;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862744] = -218959360;
  v5[536862745] = 62194;
  v5[536862747] = -218103808;
  v5[536862748] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 576), jval);
  if ( *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 576));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 576));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 128),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 160));
    *(_WORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 656) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 112 + 39) & 7) >= *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 656, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 656));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 192);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 656), (std::string *)(v3 + 192)) )
    {
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        141);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 320), (Json::Value_0 *)(v3 + 656));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 320));
      std::string::~string((void *)(v3 + 320));
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 192), (data::EFootprintPlatform *)(v3 + 48)) )
    {
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 384, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 384),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        146);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 384),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 192));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
      *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 736) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 128));
      Json::Value::Value((Json::Value *)(v3 + 736), v12);
      v13 = ((v3 + 816) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_DWORD *)(v13 + 4) = 0;
      *(_BYTE *)(v13 + 8) = 0;
      data::ConfigFootprintEffect::ConfigFootprintEffect((data::ConfigFootprintEffect *const)(v3 + 816));
      if ( !data::ConfigFootprintEffect::fromJson(
              (data::ConfigFootprintEffect *const)(v3 + 816),
              (const Json::Value *)(v3 + 736)) )
      {
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 63) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigFootprint.cpp",
          "mapFromJson",
          153);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v16 = (__int64)data::enumValToStr((data::EFootprintPlatform)*(_DWORD *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 64, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 64) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 64));
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::emplace<data::EFootprintPlatform&,data::ConfigFootprintEffect&>(
                m,
                (data::EFootprintPlatform *)(v3 + 48),
                (data::ConfigFootprintEffect *)(v3 + 816),
                (data::EFootprintPlatform *)(v3 + 48),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 127) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigFootprint.cpp",
            "mapFromJson",
            158);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v20 = (__int64)data::enumValToStr((data::EFootprintPlatform)*(_DWORD *)(v3 + 48));
          if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 96, "key duplicate: ");
          *(_QWORD *)(v3 + 96) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 96));
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      data::ConfigFootprintEffect::~ConfigFootprintEffect((data::ConfigFootprintEffect *const)(v3 + 816));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 736));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 192));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
    v21 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 816) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_DWORD *)(v23 + 4) = -117901064;
    *(_BYTE *)(v23 + 8) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 128));
  }
  v24 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF806C) = 0LL;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = -168430091;
  }
  return result;
};

// Line 167: range 0000000011F04AEF-0000000011F04DBF
int32_t __cdecl data::getMapHashValue(const data::PlatformFootprintEffectMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:168 64 8 15 __for_begin:169 96 8 13 __for_end:169";
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
  *(std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::const_iterator *)(v2 + 64) = std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::const_iterator *)(v2 + 96) = std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::end(map);
  while ( std::__detail::operator!=<std::pair<data::EFootprintPlatform const,data::ConfigFootprintEffect>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::EFootprintPlatform const,data::ConfigFootprintEffect>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::EFootprintPlatform const,data::ConfigFootprintEffect>(v7);
    val = (std::tuple_element<1,const std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect> >::type *)std::get<1ul,data::EFootprintPlatform const,data::ConfigFootprintEffect>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigFootprintEffect::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::EFootprintPlatform const,data::ConfigFootprintEffect>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::EFootprintPlatform,data::ConfigFootprintEffect>,false,false> *const)(v2 + 64));
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

// Line 180: range 0000000011F04DC0-0000000011F05D06
bool __cdecl data::mapFromJson(const Json::Value *jval, data::SurfaceTypeStringMap *m)
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
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  char v26[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 7 key:185 48 8 9 <unknown> 80 8 9 <unknown> 112 16 7 cit:182 144 16 9 <unknown> 176 32 1"
                        "1 key_str:186 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32"
                        " 9 <unknown> 560 40 12 tmp_jval:181 640 40 12 key_jval:184 720 40 14 value_jval:197 800 56 9 value:198";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
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
  v5[536862743] = -234881024;
  v5[536862744] = -218959118;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 560), jval);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 560));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 560));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 112),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 144));
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
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
        && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        189);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 176), (data::SceneSurfaceType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        194);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[21])"enumStrToVal fails: ");
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
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 112));
      Json::Value::Value((Json::Value *)(v3 + 720), v12);
      v13 = ((v3 + 800) >> 3) + 2147450880;
      *(_DWORD *)v13 = 0;
      *(_WORD *)(v13 + 4) = 0;
      *(_BYTE *)(v13 + 6) = 0;
      std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::unordered_map((std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *const)(v3 + 800));
      if ( !data::mapFromJson((const Json::Value *)(v3 + 720), (data::PlatformFootprintEffectMap *)(v3 + 800)) )
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
          "./src/json_data_auto/ConfigFootprint.cpp",
          "mapFromJson",
          201);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::SceneSurfaceType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::emplace<data::SceneSurfaceType&,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>&>(
                m,
                (data::SceneSurfaceType *)(v3 + 32),
                (std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *)(v3 + 800),
                (data::SceneSurfaceType *)(v3 + 32),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 496, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 496),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigFootprint.cpp",
            "mapFromJson",
            206);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::SceneSurfaceType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::~unordered_map((std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *const)(v3 + 800));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
    v21 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 800) >> 3) + 2147450880;
    *(_DWORD *)v23 = -117901064;
    *(_WORD *)(v23 + 4) = -1800;
    *(_BYTE *)(v23 + 6) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 112));
  }
  v24 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 560));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 112) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 215: range 0000000011F05D07-0000000011F05FD7
int32_t __cdecl data::getMapHashValue(const data::SurfaceTypeStringMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t MapHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:216 64 8 15 __for_begin:217 96 8 13 __for_end:217";
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
  *(std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::const_iterator *)(v2 + 64) = std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::const_iterator *)(v2 + 96) = std::unordered_map<data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::end(map);
  while ( std::__detail::operator!=<std::pair<data::SceneSurfaceType const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::SceneSurfaceType const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::SceneSurfaceType const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>(v7);
    val = (std::tuple_element<1,const std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *)std::get<1ul,data::SceneSurfaceType const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    MapHashValue = data::getMapHashValue(val);
    common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::SceneSurfaceType const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::SceneSurfaceType,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,false> *const)(v2 + 64));
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

// Line 229: range 0000000011F05FD8-0000000011F065BB
bool __cdecl data::ConfigFootprint::fromJson(data::ConfigFootprint *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::SurfaceTypeStringMap *p_special_surfaces; // rsi
  const Json::Value *default_effect_pattern_name_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *special_surfaces_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigFootprint::fromJson;
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
    "defaultEffectPatternName",
    (const std::allocator<char> *)(v2 + 32));
  default_effect_pattern_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( default_effect_pattern_name_ptr
    && !fromJson<std::string>(default_effect_pattern_name_ptr, &this->default_effect_pattern_name) )
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
      "./src/json_data_auto/ConfigFootprint.cpp",
      "fromJson",
      239);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[46])"fromJson for: defaultEffectPatternName fails!");
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
      "specialSurfaces",
      (const std::allocator<char> *)(v2 + 48));
    p_special_surfaces = (data::SurfaceTypeStringMap *)(v2 + 192);
    special_surfaces_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( special_surfaces_ptr
      && (p_special_surfaces = &this->special_surfaces, !data::mapFromJson(
                                                           special_surfaces_ptr,
                                                           &this->special_surfaces)) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "fromJson",
        251);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[37])"fromJson for: specialSurfaces fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_special_surfaces, &this->is_json_loaded);
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

// Line 259: range 0000000011F065BC-0000000011F0670E
int32_t __cdecl data::ConfigFootprint::getHashValue(const data::ConfigFootprint *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:260";
  *(_QWORD *)(v2 + 16) = data::ConfigFootprint::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->default_effect_pattern_name, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->special_surfaces);
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

// Line 267: range 0000000011F0670F-0000000011F0696E
const char *__cdecl data::enumValToStr(data::FootprintZoneType e)
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
    if ( e == Glow )
    {
      result = "Glow";
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "enumValToStr",
        275);
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
    result = "Spore";
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

// Line 281: range 0000000011F0696F-0000000011F071A6
bool __cdecl data::enumStrToVal(const std::string *s, data::FootprintZoneType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::FootprintZoneType> *i; // r14
  unsigned __int64 v7; // rax
  char *v8; // rsi
  bool v9; // al
  common::milog::MiLogStream *v10; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::FootprintZoneType> >::pointer v11; // rax
  data::FootprintZoneType second; // ecx
  char v13; // dl
  data::FootprintZoneType *ea; // [rsp+10h] [rbp-1E0h]
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
  *(_QWORD *)(v2 + 8) = "9 48 1 9 <unknown> 64 1 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 8 6 it:292 144 8 9 <un"
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
      "./src/json_data_auto/ConfigFootprint.cpp",
      "enumStrToVal",
      284);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 176),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 176));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, e);
      *(_DWORD *)(v2 + 80) = 0;
      std::pair<std::string const,data::FootprintZoneType>::pair<char const(&)[6],data::FootprintZoneType,true>(
        (std::pair<const std::string,data::FootprintZoneType> *const)(v2 + 304),
        (const char (*)[6])"Spore",
        (data::FootprintZoneType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "Spore");
      *(_DWORD *)(v2 + 96) = 1;
      std::pair<std::string const,data::FootprintZoneType>::pair<char const(&)[5],data::FootprintZoneType,true>(
        (std::pair<const std::string,data::FootprintZoneType> *const)(v2 + 344),
        (const char (*)[5])"Glow",
        (data::FootprintZoneType *)(v2 + 96));
      std::allocator<std::pair<std::string const,data::FootprintZoneType>>::allocator((std::allocator<std::pair<const std::string,data::FootprintZoneType> > *const)(v2 + 64));
      std::map<std::string,data::FootprintZoneType>::map(
        &data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m,
        (std::initializer_list<std::pair<const std::string,data::FootprintZoneType> >)__PAIR128__(2LL, v2 + 304),
        (const std::less<std::string > *)(v2 + 48),
        (const std::map<std::string,data::FootprintZoneType>::allocator_type *)(v2 + 64));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m);
      e = (data::FootprintZoneType *)&data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m;
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::FootprintZoneType>::~map,
        &data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::FootprintZoneType>>::~allocator((std::allocator<std::pair<const std::string,data::FootprintZoneType> > *const)(v2 + 64));
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::FootprintZoneType> *)(v2 + 384);
            i != (std::pair<const std::string,data::FootprintZoneType> *)(v2 + 304);
            std::pair<std::string const,data::FootprintZoneType>::~pair(i) )
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
    *(std::map<std::string,data::FootprintZoneType>::iterator *)(v2 + 112) = std::map<std::string,data::FootprintZoneType>::find(
                                                                               &data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m,
                                                                               s);
    *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 144, s);
    *(std::map<std::string,data::FootprintZoneType>::iterator *)(v2 + 144) = std::map<std::string,data::FootprintZoneType>::end(&data::enumStrToVal(std::string const&,data::FootprintZoneType &)::m);
    v8 = (char *)(v2 + 144);
    v9 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FootprintZoneType> >::_Self *)(v2 + 112),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::FootprintZoneType> >::_Self *)(v2 + 144));
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "enumStrToVal",
        295);
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              (common::milog::MiLogStream *const)(v2 + 240),
              (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 240));
      result = 0;
    }
    else
    {
      v11 = std::_Rb_tree_iterator<std::pair<std::string const,data::FootprintZoneType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::FootprintZoneType> > *const)(v2 + 112));
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

// Line 303: range 0000000011F071A7-0000000011F071D6
const char *__cdecl data::getDescription(data::FootprintZoneType e)
{
  if ( e == Spore )
    return (const char *)&unk_1A8AD160;
  if ( e == Glow )
    return (const char *)&unk_1A8AD1A0;
  return "unknown enum value!";
};

// Line 316: range 0000000011F071D7-0000000011F07DCA
bool __cdecl data::mapFromJson(const Json::Value *jval, data::BodyTypeFootprintZoneStringMap *m)
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
  unsigned __int64 v12; // rax
  std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[816]; // [rsp+20h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 7 cit:318 80 16 9 <unknown> 112 32 7 key:321 176 32 9 <unknown> 240 32 9 <unknown> 304 "
                        "32 9 <unknown> 368 32 9 <unknown> 432 40 12 tmp_jval:317 512 40 12 key_jval:320 592 40 14 value_"
                        "jval:327 672 56 9 value:328";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
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
  v5[536862734] = -234881024;
  v5[536862735] = -218959118;
  v5[536862737] = -218959360;
  v5[536862738] = 62194;
  v5[536862739] = -234881024;
  v5[536862740] = -218959118;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 432), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 432));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 432));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 39) & 7) >= *(_BYTE *)(((v3 + 551) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 512, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 512));
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 112);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 512), (std::string *)(v3 + 112)) )
    {
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        324);
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
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 240), (Json::Value_0 *)(v3 + 512));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 240));
      std::string::~string((void *)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
      *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 592) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 592), v11);
      v12 = ((v3 + 672) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_WORD *)(v12 + 4) = 0;
      *(_BYTE *)(v12 + 6) = 0;
      std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::unordered_map((std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *const)(v3 + 672));
      if ( !data::mapFromJson((const Json::Value *)(v3 + 592), (data::PlatformFootprintEffectMap *)(v3 + 672)) )
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
          "./src/json_data_auto/ConfigFootprint.cpp",
          "mapFromJson",
          331);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::emplace<std::string&,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>&>(
                m,
                (std::string *)(v3 + 112),
                (std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *)(v3 + 672),
                (std::string *)(v3 + 112),
                v13);
        if ( !v16.second )
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
            "./src/json_data_auto/ConfigFootprint.cpp",
            "mapFromJson",
            336);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>::~unordered_map((std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> *const)(v3 + 672));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
    v18 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 672) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_WORD *)(v20 + 4) = -1800;
    *(_BYTE *)(v20 + 6) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 432));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 96) & 0xFFFFFFF8) >> 3));
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
  }
  return v2;
};

// Line 345: range 0000000011F07DCB-0000000011F08072
int32_t __cdecl data::getMapHashValue(const data::BodyTypeFootprintZoneStringMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t MapHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:346 64 8 15 __for_begin:347 96 8 13 __for_end:347";
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
  *(std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> > >::type *)std::get<1ul,std::string const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    MapHashValue = data::getMapHashValue(val);
    common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::unordered_map<data::EFootprintPlatform,data::ConfigFootprintEffect> >,false,true> *const)(v2 + 64));
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

// Line 359: range 0000000011F08074-0000000011F08C89
bool __cdecl data::ConfigFootprintZoneEffect::fromJson(
        data::ConfigFootprintZoneEffect *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  data::BodyTypeFootprintZoneStringMap *p_special_body_types; // rsi
  Json::Value *surface_type_ptr; // [rsp+10h] [rbp-2F0h]
  const Json::Value *max_water_height_ptr; // [rsp+18h] [rbp-2E8h]
  const Json::Value *default_config_ptr; // [rsp+20h] [rbp-2E0h]
  const Json::Value *special_body_types_ptr; // [rsp+28h] [rbp-2D8h]
  char v13[720]; // [rsp+30h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v13;
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
  *(_QWORD *)(v2 + 16) = data::ConfigFootprintZoneEffect::fromJson;
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
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "surfaceType",
    (const std::allocator<char> *)(v2 + 32));
  surface_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !surface_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)surface_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->surface_type);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
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
      "./src/json_data_auto/ConfigFootprint.cpp",
      "fromJson",
      369);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[33])"fromJson for: surfaceType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "maxWaterHeight",
      (const std::allocator<char> *)(v2 + 48));
    max_water_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( max_water_height_ptr && !fromJson<float>(max_water_height_ptr, &this->max_water_height) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "fromJson",
        381);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[36])"fromJson for: maxWaterHeight fails!");
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
        "defaultConfig",
        (const std::allocator<char> *)(v2 + 64));
      default_config_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( default_config_ptr && !data::mapFromJson(default_config_ptr, &this->default_config) )
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
          "./src/json_data_auto/ConfigFootprint.cpp",
          "fromJson",
          393);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[35])"fromJson for: defaultConfig fails!");
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
          "specialBodyTypes",
          (const std::allocator<char> *)(v2 + 80));
        p_special_body_types = (data::BodyTypeFootprintZoneStringMap *)(v2 + 544);
        special_body_types_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( special_body_types_ptr
          && (p_special_body_types = &this->special_body_types,
              !data::mapFromJson(special_body_types_ptr, &this->special_body_types)) )
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
            "./src/json_data_auto/ConfigFootprint.cpp",
            "fromJson",
            405);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[38])"fromJson for: specialBodyTypes fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_special_body_types, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v13 == (char *)v2 )
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

// Line 413: range 0000000011F08C8A-0000000011F08E80
int32_t __cdecl data::ConfigFootprintZoneEffect::getHashValue(const data::ConfigFootprintZoneEffect *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t MapHashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:414";
  *(_QWORD *)(v2 + 16) = data::ConfigFootprintZoneEffect::getHashValue;
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
  common::tools::HashUtils::appendHash(this->surface_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_water_height >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_water_height);
  }
  common::tools::HashUtils::appendHash(this->max_water_height, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->default_config);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v6 = data::getMapHashValue(&this->special_body_types);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
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

// Line 423: range 0000000011F08E81-0000000011F09249
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigFootprintZoneEffectArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  _DWORD *v6; // rax
  int v7; // r14d
  data::ConfigFootprintZoneEffect *v8; // rdx
  _DWORD *v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 128 8 elem:429";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      data::ConfigFootprintZoneEffect::ConfigFootprintZoneEffect((data::ConfigFootprintZoneEffect *const)(v2 + 96));
      if ( !data::ConfigFootprintZoneEffect::fromJson((data::ConfigFootprintZoneEffect *const)(v2 + 96), elem_jval) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
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
          "./src/json_data_auto/ConfigFootprint.cpp",
          "arrFromJson",
          432);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v7 = 0;
      }
      else
      {
        v8 = std::move<data::ConfigFootprintZoneEffect &>((data::ConfigFootprintZoneEffect *)(v2 + 96));
        std::vector<data::ConfigFootprintZoneEffect>::emplace_back<data::ConfigFootprintZoneEffect>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigFootprintZoneEffect::~ConfigFootprintZoneEffect((data::ConfigFootprintZoneEffect *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    v9[2] = -117901064;
    v9[3] = -117901064;
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

// Line 442: range 0000000011F0924A-0000000011F09496
int32_t __cdecl data::getArrHashValue(const data::ConfigFootprintZoneEffectArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigFootprintZoneEffect*,std::vector<data::ConfigFootprintZoneEffect> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
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
  *(std::vector<data::ConfigFootprintZoneEffect>::const_iterator *)(v2 + 64) = std::vector<data::ConfigFootprintZoneEffect>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigFootprintZoneEffect>::const_iterator *)(v2 + 96) = std::vector<data::ConfigFootprintZoneEffect>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigFootprintZoneEffect const*,std::vector<data::ConfigFootprintZoneEffect>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigFootprintZoneEffect*,std::vector<data::ConfigFootprintZoneEffect> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigFootprintZoneEffect*,std::vector<data::ConfigFootprintZoneEffect> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigFootprintZoneEffect const*,std::vector<data::ConfigFootprintZoneEffect>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigFootprintZoneEffect*,std::vector<data::ConfigFootprintZoneEffect> > *const)(v2 + 64));
    HashValue = data::ConfigFootprintZoneEffect::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigFootprintZoneEffect const*,std::vector<data::ConfigFootprintZoneEffect>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigFootprintZoneEffect*,std::vector<data::ConfigFootprintZoneEffect> > *const)(v2 + 64));
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

// Line 452: range 0000000011F09497-0000000011F0A3D8
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigGlobalFootprintZoneEffect *m)
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
  std::vector<data::ConfigFootprintZoneEffect> *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  char v26[912]; // [rsp+20h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 7 key:457 48 8 9 <unknown> 80 8 9 <unknown> 112 16 7 cit:454 144 16 9 <unknown> 176 24 9"
                        " value:470 240 32 11 key_str:458 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32"
                        " 9 <unknown> 560 32 9 <unknown> 624 40 12 tmp_jval:453 704 40 12 key_jval:456 784 40 14 value_jval:469";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = -218959360;
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
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -234881024;
  v5[536862741] = -218959118;
  v5[536862743] = -218959360;
  v5[536862744] = 62194;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 624), jval);
  if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 624));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 624));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 112),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 144));
    *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 704) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 25) & 7) >= *(_BYTE *)(((v3 + 743) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 704, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 704));
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 240);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 704), (std::string *)(v3 + 240)) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        461);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 304),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 368, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 368), (Json::Value_0 *)(v3 + 704));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 368));
      std::string::~string((void *)(v3 + 368));
      *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 240), (data::FootprintZoneType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigFootprint.cpp",
        "mapFromJson",
        466);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 432),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 240));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 784) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 112));
      Json::Value::Value((Json::Value *)(v3 + 784), v12);
      v13 = ((v3 + 176) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      std::vector<data::ConfigFootprintZoneEffect>::vector((std::vector<data::ConfigFootprintZoneEffect> *const)(v3 + 176));
      if ( !data::arrFromJson((const Json::Value *)(v3 + 784), (data::ConfigFootprintZoneEffectArray *)(v3 + 176)) )
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
          "./src/json_data_auto/ConfigFootprint.cpp",
          "mapFromJson",
          473);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::FootprintZoneType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect>>::emplace<data::FootprintZoneType&,std::vector<data::ConfigFootprintZoneEffect>&>(
                m,
                (data::FootprintZoneType *)(v3 + 32),
                (std::vector<data::ConfigFootprintZoneEffect> *)(v3 + 176),
                (data::FootprintZoneType *)(v3 + 32),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 560, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 560),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigFootprint.cpp",
            "mapFromJson",
            478);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 560),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::FootprintZoneType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      std::vector<data::ConfigFootprintZoneEffect>::~vector((std::vector<data::ConfigFootprintZoneEffect> *const)(v3 + 176));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 784));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 240));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 704));
    v21 = ((v3 + 704) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 784) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 176) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 112));
  }
  v24 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 108) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8068) = -168430091;
  }
  return v2;
};

// Line 487: range 0000000011F0A3D9-0000000011F0A6A9
int32_t __cdecl data::getMapHashValue(const data::ConfigGlobalFootprintZoneEffect *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:488 64 8 15 __for_begin:489 96 8 13 __for_end:489";
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
  *(std::unordered_map<data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect>>::const_iterator *)(v2 + 64) = std::unordered_map<data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect>>::const_iterator *)(v2 + 96) = std::unordered_map<data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect>>::end(map);
  while ( std::__detail::operator!=<std::pair<data::FootprintZoneType const,std::vector<data::ConfigFootprintZoneEffect>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::FootprintZoneType const,std::vector<data::ConfigFootprintZoneEffect>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::FootprintZoneType const,std::vector<data::ConfigFootprintZoneEffect>>(v7);
    val = (std::tuple_element<1,const std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> > >::type *)std::get<1ul,data::FootprintZoneType const,std::vector<data::ConfigFootprintZoneEffect>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    ArrHashValue = data::getArrHashValue(val);
    common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::FootprintZoneType const,std::vector<data::ConfigFootprintZoneEffect>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::FootprintZoneType,std::vector<data::ConfigFootprintZoneEffect> >,false,false> *const)(v2 + 64));
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
