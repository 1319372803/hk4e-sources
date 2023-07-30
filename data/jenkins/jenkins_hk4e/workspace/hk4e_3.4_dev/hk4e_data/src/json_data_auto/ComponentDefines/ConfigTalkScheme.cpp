// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp

// Line 20: range 0000000011FA2BD8-0000000011FA32B8
bool __cdecl data::TalkCondEx::fromJson(data::TalkCondEx *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  data::StringList *p_param; // rsi
  Json::Value *type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *param_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::TalkCondEx::fromJson;
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
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->type);
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[26])"fromJson for: type fails!");
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
      "param",
      (const std::allocator<char> *)(v2 + 48));
    p_param = (data::StringList *)(v2 + 256);
    param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( param_ptr && (p_param = &this->param, !data::vecFromJson(param_ptr, &this->param)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[27])"fromJson for: param fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
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

// Line 50: range 0000000011FA32BA-0000000011FA32CD
int32_t __cdecl data::TalkCondEx::getHashValue(const data::TalkCondEx *const this)
{
  return 0;
};

// Line 57: range 0000000011FA32CE-0000000011FA39AE
bool __cdecl data::TalkExecEx::fromJson(data::TalkExecEx *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  data::StringList *p_param; // rsi
  Json::Value *type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *param_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::TalkExecEx::fromJson;
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
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->type);
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      67);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[26])"fromJson for: type fails!");
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
      "param",
      (const std::allocator<char> *)(v2 + 48));
    p_param = (data::StringList *)(v2 + 256);
    param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( param_ptr && (p_param = &this->param, !data::vecFromJson(param_ptr, &this->param)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        79);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[27])"fromJson for: param fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_param, &this->is_json_loaded);
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

// Line 87: range 0000000011FA39B0-0000000011FA39C3
int32_t __cdecl data::TalkExecEx::getHashValue(const data::TalkExecEx *const this)
{
  return 0;
};

// Line 93: range 0000000011FA39C4-0000000011FA3D78
bool __cdecl data::vecFromJson(const Json::Value *jval, data::TalkCondExList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::TalkCondEx *v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 7 elem:99";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
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
      data::TalkCondEx::TalkCondEx((data::TalkCondEx *const)(v2 + 112));
      if ( !data::TalkCondEx::fromJson((data::TalkCondEx *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "vecFromJson",
          102);
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
        v8 = std::move<data::TalkCondEx &>((data::TalkCondEx *)(v2 + 112));
        std::vector<data::TalkCondEx>::emplace_back<data::TalkCondEx>(v, v8, v8);
        v7 = 1;
      }
      data::TalkCondEx::~TalkCondEx((data::TalkCondEx *const)(v2 + 112));
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

// Line 112: range 0000000011FA3D79-0000000011FA3FC5
int32_t __cdecl data::getVecHashValue(const data::TalkCondExList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::TalkCondEx*,std::vector<data::TalkCondEx> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:113 64 8 15 __for_begin:114 96 8 13 __for_end:114";
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
  *(std::vector<data::TalkCondEx>::const_iterator *)(v2 + 64) = std::vector<data::TalkCondEx>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::TalkCondEx>::const_iterator *)(v2 + 96) = std::vector<data::TalkCondEx>::end(vec);
  while ( __gnu_cxx::operator!=<data::TalkCondEx const*,std::vector<data::TalkCondEx>>(
            (const __gnu_cxx::__normal_iterator<const data::TalkCondEx*,std::vector<data::TalkCondEx> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::TalkCondEx*,std::vector<data::TalkCondEx> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::TalkCondEx const*,std::vector<data::TalkCondEx>>::operator*((const __gnu_cxx::__normal_iterator<const data::TalkCondEx*,std::vector<data::TalkCondEx> > *const)(v2 + 64));
    HashValue = data::TalkCondEx::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::TalkCondEx const*,std::vector<data::TalkCondEx>>::operator++((__gnu_cxx::__normal_iterator<const data::TalkCondEx*,std::vector<data::TalkCondEx> > *const)(v2 + 64));
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

// Line 122: range 0000000011FA3FC6-0000000011FA437A
bool __cdecl data::vecFromJson(const Json::Value *jval, data::TalkExecExList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::TalkExecEx *v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 8 elem:128";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
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
      data::TalkExecEx::TalkExecEx((data::TalkExecEx *const)(v2 + 112));
      if ( !data::TalkExecEx::fromJson((data::TalkExecEx *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "vecFromJson",
          131);
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
        v8 = std::move<data::TalkExecEx &>((data::TalkExecEx *)(v2 + 112));
        std::vector<data::TalkExecEx>::emplace_back<data::TalkExecEx>(v, v8, v8);
        v7 = 1;
      }
      data::TalkExecEx::~TalkExecEx((data::TalkExecEx *const)(v2 + 112));
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

// Line 141: range 0000000011FA437B-0000000011FA45C7
int32_t __cdecl data::getVecHashValue(const data::TalkExecExList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::TalkExecEx*,std::vector<data::TalkExecEx> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:142 64 8 15 __for_begin:143 96 8 13 __for_end:143";
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
  *(std::vector<data::TalkExecEx>::const_iterator *)(v2 + 64) = std::vector<data::TalkExecEx>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::TalkExecEx>::const_iterator *)(v2 + 96) = std::vector<data::TalkExecEx>::end(vec);
  while ( __gnu_cxx::operator!=<data::TalkExecEx const*,std::vector<data::TalkExecEx>>(
            (const __gnu_cxx::__normal_iterator<const data::TalkExecEx*,std::vector<data::TalkExecEx> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::TalkExecEx*,std::vector<data::TalkExecEx> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::TalkExecEx const*,std::vector<data::TalkExecEx>>::operator*((const __gnu_cxx::__normal_iterator<const data::TalkExecEx*,std::vector<data::TalkExecEx> > *const)(v2 + 64));
    HashValue = data::TalkExecEx::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::TalkExecEx const*,std::vector<data::TalkExecEx>>::operator++((__gnu_cxx::__normal_iterator<const data::TalkExecEx*,std::vector<data::TalkExecEx> > *const)(v2 + 64));
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

// Line 152: range 0000000011FA45C8-0000000011FA4CA8
bool __cdecl data::TalkRoleEx::fromJson(data::TalkRoleEx *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  std::string *p_id; // rsi
  Json::Value *type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *id_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::TalkRoleEx::fromJson;
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
    "type",
    (const std::allocator<char> *)(v2 + 32));
  type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->type);
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      162);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[26])"fromJson for: type fails!");
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
      "id",
      (const std::allocator<char> *)(v2 + 48));
    p_id = (std::string *)(v2 + 256);
    id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( id_ptr && (p_id = &this->id, !fromJson<std::string>(id_ptr, &this->id)) )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        174);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[24])"fromJson for: id fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_id, &this->is_json_loaded);
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

// Line 182: range 0000000011FA4CAA-0000000011FA4CBD
int32_t __cdecl data::TalkRoleEx::getHashValue(const data::TalkRoleEx *const this)
{
  return 0;
};

// Line 189: range 0000000011FA4CBE-0000000011FAA62A
bool __cdecl data::ConfigTalkScheme::fromJson(data::ConfigTalkScheme *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  bool v8; // r15
  bool v9; // r15
  bool v10; // r15
  bool v11; // r15
  __int64 v12; // rsi
  __int64 v13; // rdx
  bool v14; // bl
  const Json::Value *id_ptr; // [rsp+18h] [rbp-1578h]
  Json::Value *begin_way_ptr; // [rsp+20h] [rbp-1570h]
  Json::Value *active_mode_ptr; // [rsp+28h] [rbp-1568h]
  Json::Value *begin_cond_comb_ptr; // [rsp+30h] [rbp-1560h]
  const Json::Value *begin_cond_ptr; // [rsp+38h] [rbp-1558h]
  const Json::Value *priority_ptr; // [rsp+40h] [rbp-1550h]
  const Json::Value *next_talks_ptr; // [rsp+48h] [rbp-1548h]
  const Json::Value *next_random_talks_ptr; // [rsp+50h] [rbp-1540h]
  const Json::Value *show_random_talk_count_ptr; // [rsp+58h] [rbp-1538h]
  const Json::Value *init_dialog_ptr; // [rsp+60h] [rbp-1530h]
  const Json::Value *decorator_id_ptr; // [rsp+68h] [rbp-1528h]
  const Json::Value *npc_id_ptr; // [rsp+70h] [rbp-1520h]
  const Json::Value *perform_cfg_ptr; // [rsp+78h] [rbp-1518h]
  Json::Value *hero_talk_ptr; // [rsp+80h] [rbp-1510h]
  Json::Value *load_type_ptr; // [rsp+88h] [rbp-1508h]
  const Json::Value *quest_id_ptr; // [rsp+90h] [rbp-1500h]
  const Json::Value *extra_load_mark_id_ptr; // [rsp+98h] [rbp-14F8h]
  const Json::Value *asset_index_ptr; // [rsp+A0h] [rbp-14F0h]
  const Json::Value *dont_block_daily_ptr; // [rsp+A8h] [rbp-14E8h]
  const Json::Value *participant_id_ptr; // [rsp+B0h] [rbp-14E0h]
  const Json::Value *pre_perform_cfg_ptr; // [rsp+B8h] [rbp-14D8h]
  const Json::Value *stay_free_style_ptr; // [rsp+C0h] [rbp-14D0h]
  const Json::Value *enable_camera_displacement_ptr; // [rsp+C8h] [rbp-14C8h]
  const Json::Value *lock_game_time_ptr; // [rsp+D0h] [rbp-14C0h]
  Json::Value *talk_mark_type_ptr; // [rsp+D8h] [rbp-14B8h]
  const Json::Value *quest_idle_talk_ptr; // [rsp+E0h] [rbp-14B0h]
  const Json::Value *low_priority_ptr; // [rsp+E8h] [rbp-14A8h]
  const Json::Value *finish_exec_ptr; // [rsp+F0h] [rbp-14A0h]
  const Json::Value *pre_perform_free_style_list_ptr; // [rsp+F8h] [rbp-1498h]
  const Json::Value *free_style_list_ptr; // [rsp+100h] [rbp-1490h]
  const Json::Value *talk_mark_hide_list_ptr; // [rsp+108h] [rbp-1488h]
  const Json::Value *crowd_lod0_list_ptr; // [rsp+110h] [rbp-1480h]
  const Json::Value *check_action_after_ptr; // [rsp+118h] [rbp-1478h]
  char v49[5232]; // [rsp+120h] [rbp-1470h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(5184LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "105 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 "
                        "9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unk"
                        "nown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> "
                        "304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 "
                        "9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unknown> 464 1 9 <unk"
                        "nown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 544 1 9 <unknown> "
                        "560 1 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                        "2 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1"
                        "152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknow"
                        "n> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <un"
                        "known> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9"
                        " <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 "
                        "32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2"
                        "688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknow"
                        "n> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <un"
                        "known> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9"
                        " <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 "
                        "32 9 <unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4"
                        "224 32 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown> 4480 32 9 <unknow"
                        "n> 4544 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unknown> 4800 32 9 <un"
                        "known> 4864 32 9 <unknown> 4928 32 9 <unknown> 4992 32 9 <unknown> 5056 32 9 <unknown> 5120 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTalkScheme::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
  v4[536862729] = -234753535;
  v4[536862730] = -234753535;
  v4[536862731] = -234753535;
  v4[536862732] = -234753535;
  v4[536862733] = -234753535;
  v4[536862734] = -234753535;
  v4[536862735] = -234753535;
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
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
  v4[536862769] = -218959118;
  v4[536862771] = -218959118;
  v4[536862773] = -218959118;
  v4[536862775] = -218959118;
  v4[536862777] = -218959118;
  v4[536862779] = -218959118;
  v4[536862781] = -218959118;
  v4[536862783] = -218959118;
  v4[536862785] = -218959118;
  v4[536862787] = -218959118;
  v4[536862789] = -218959118;
  v4[536862791] = -218959118;
  v4[536862793] = -218959118;
  v4[536862795] = -218959118;
  v4[536862797] = -218959118;
  v4[536862799] = -218959118;
  v4[536862801] = -218959118;
  v4[536862803] = -218959118;
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -218959118;
  v4[536862817] = -218959118;
  v4[536862819] = -218959118;
  v4[536862821] = -218959118;
  v4[536862823] = -218959118;
  v4[536862825] = -218959118;
  v4[536862827] = -218959118;
  v4[536862829] = -218959118;
  v4[536862831] = -218959118;
  v4[536862833] = -218959118;
  v4[536862835] = -218959118;
  v4[536862837] = -218959118;
  v4[536862839] = -218959118;
  v4[536862841] = -218959118;
  v4[536862843] = -218959118;
  v4[536862845] = -218959118;
  v4[536862847] = -218959118;
  v4[536862849] = -218959118;
  v4[536862851] = -218959118;
  v4[536862853] = -218959118;
  v4[536862855] = -218959118;
  v4[536862857] = -218959118;
  v4[536862859] = -218959118;
  v4[536862861] = -218959118;
  v4[536862863] = -218959118;
  v4[536862865] = -218959118;
  v4[536862867] = -218959118;
  v4[536862869] = -218959118;
  v4[536862871] = -218959118;
  v4[536862873] = -218959118;
  v4[536862875] = -218959118;
  v4[536862877] = -218959118;
  v4[536862879] = -218959118;
  v4[536862881] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "id",
    (const std::allocator<char> *)(v2 + 48));
  id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( id_ptr && !fromJson<unsigned int>(id_ptr, &this->id) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      199);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)(v2 + 640),
      (const char (*)[24])"fromJson for: id fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 704),
      "beginWay",
      (const std::allocator<char> *)(v2 + 64));
    begin_way_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 704));
    std::string::~string((void *)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !begin_way_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 768, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 768), (Json::Value_0 *)begin_way_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 768), &this->begin_way);
    std::string::~string((void *)(v2 + 768));
    *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        211);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 832),
        (const char (*)[30])"fromJson for: beginWay fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
      v5 = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 896),
        "activeMode",
        (const std::allocator<char> *)(v2 + 80));
      active_mode_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 896));
      std::string::~string((void *)(v2 + 896));
      *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !active_mode_ptr )
        goto LABEL_23;
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 960, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 960), (Json::Value_0 *)active_mode_ptr);
      v7 = !data::enumStrToVal((const std::string *)(v2 + 960), &this->active_mode);
      std::string::~string((void *)(v2 + 960));
      *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
      if ( v7 )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "fromJson",
          223);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 1024),
          (const char (*)[32])"fromJson for: activeMode fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
        v5 = 0;
      }
      else
      {
LABEL_23:
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1088),
          "beginCondComb",
          (const std::allocator<char> *)(v2 + 96));
        begin_cond_comb_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1088));
        std::string::~string((void *)(v2 + 1088));
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( !begin_cond_comb_ptr )
          goto LABEL_30;
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1152) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1183) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1152, 32LL);
        }
        Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1152), (Json::Value_0 *)begin_cond_comb_ptr);
        v8 = !data::enumStrToVal((const std::string *)(v2 + 1152), &this->begin_cond_comb);
        std::string::~string((void *)(v2 + 1152));
        *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
        if ( v8 )
        {
          *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1216, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1216),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "fromJson",
            235);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v2 + 1216),
            (const char (*)[35])"fromJson for: beginCondComb fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
          v5 = 0;
        }
        else
        {
LABEL_30:
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1280),
            "beginCond",
            (const std::allocator<char> *)(v2 + 112));
          begin_cond_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
          std::string::~string((void *)(v2 + 1280));
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( begin_cond_ptr && !data::vecFromJson(begin_cond_ptr, &this->begin_cond) )
          {
            *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1344) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1375) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1344, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1344),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "fromJson",
              247);
            common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
              (common::milog::MiLogStream *const)(v2 + 1344),
              (const char (*)[31])"fromJson for: beginCond fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1408),
              "priority",
              (const std::allocator<char> *)(v2 + 128));
            priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
            std::string::~string((void *)(v2 + 1408));
            *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( priority_ptr && !fromJson<unsigned int>(priority_ptr, &this->priority) )
            {
              *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1472, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1472),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                "fromJson",
                259);
              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                (common::milog::MiLogStream *const)(v2 + 1472),
                (const char (*)[30])"fromJson for: priority fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1536),
                "nextTalks",
                (const std::allocator<char> *)(v2 + 144));
              next_talks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1536));
              std::string::~string((void *)(v2 + 1536));
              *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( next_talks_ptr && !data::vecFromJson(next_talks_ptr, &this->next_talks) )
              {
                *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1600, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1600),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                  "fromJson",
                  271);
                common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  (common::milog::MiLogStream *const)(v2 + 1600),
                  (const char (*)[31])"fromJson for: nextTalks fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1664),
                  "nextRandomTalks",
                  (const std::allocator<char> *)(v2 + 160));
                next_random_talks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1664));
                std::string::~string((void *)(v2 + 1664));
                *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( next_random_talks_ptr && !data::vecFromJson(next_random_talks_ptr, &this->next_random_talks) )
                {
                  *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1728, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1728),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                    "fromJson",
                    283);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1728),
                    (const char (*)[37])"fromJson for: nextRandomTalks fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1792),
                    "showRandomTalkCount",
                    (const std::allocator<char> *)(v2 + 176));
                  show_random_talk_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1792));
                  std::string::~string((void *)(v2 + 1792));
                  *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( show_random_talk_count_ptr
                    && !fromJson<int>(show_random_talk_count_ptr, &this->show_random_talk_count) )
                  {
                    *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1856, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1856),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                      "fromJson",
                      295);
                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      (common::milog::MiLogStream *const)(v2 + 1856),
                      (const char (*)[41])"fromJson for: showRandomTalkCount fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1920),
                      "initDialog",
                      (const std::allocator<char> *)(v2 + 192));
                    init_dialog_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1920));
                    std::string::~string((void *)(v2 + 1920));
                    *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( init_dialog_ptr && !fromJson<unsigned int>(init_dialog_ptr, &this->init_dialog) )
                    {
                      *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1984, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1984),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                        "fromJson",
                        307);
                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                        (common::milog::MiLogStream *const)(v2 + 1984),
                        (const char (*)[32])"fromJson for: initDialog fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2048),
                        "decoratorID",
                        (const std::allocator<char> *)(v2 + 208));
                      decorator_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2048));
                      std::string::~string((void *)(v2 + 2048));
                      *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( decorator_id_ptr && !fromJson<unsigned int>(decorator_id_ptr, &this->decorator_id) )
                      {
                        *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2112) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2112, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2112),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                          "fromJson",
                          319);
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v2 + 2112),
                          (const char (*)[33])"fromJson for: decoratorID fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2176),
                          "npcId",
                          (const std::allocator<char> *)(v2 + 224));
                        npc_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2176));
                        std::string::~string((void *)(v2 + 2176));
                        *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( npc_id_ptr && !data::vecFromJson(npc_id_ptr, &this->npc_id) )
                        {
                          *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2240, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2240),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                            "fromJson",
                            331);
                          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            (common::milog::MiLogStream *const)(v2 + 2240),
                            (const char (*)[27])"fromJson for: npcId fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2304),
                            "performCfg",
                            (const std::allocator<char> *)(v2 + 240));
                          perform_cfg_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2304));
                          std::string::~string((void *)(v2 + 2304));
                          *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( perform_cfg_ptr && !fromJson<std::string>(perform_cfg_ptr, &this->perform_cfg) )
                          {
                            *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2368) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2368, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2368),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                              "fromJson",
                              343);
                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                              (common::milog::MiLogStream *const)(v2 + 2368),
                              (const char (*)[32])"fromJson for: performCfg fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2432),
                              "heroTalk",
                              (const std::allocator<char> *)(v2 + 256));
                            hero_talk_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 2432));
                            std::string::~string((void *)(v2 + 2432));
                            *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( !hero_talk_ptr )
                              goto LABEL_82;
                            *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2496, 32LL);
                            }
                            Json::Value::asString[abi:cxx11](
                              (Json::String *)(v2 + 2496),
                              (Json::Value_0 *)hero_talk_ptr);
                            v9 = !data::enumStrToVal((const std::string *)(v2 + 2496), &this->hero_talk);
                            std::string::~string((void *)(v2 + 2496));
                            *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                            if ( v9 )
                            {
                              *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2560, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2560),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                "fromJson",
                                355);
                              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                (common::milog::MiLogStream *const)(v2 + 2560),
                                (const char (*)[30])"fromJson for: heroTalk fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                              v5 = 0;
                            }
                            else
                            {
LABEL_82:
                              *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2624),
                                "loadType",
                                (const std::allocator<char> *)(v2 + 272));
                              load_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 2624));
                              std::string::~string((void *)(v2 + 2624));
                              *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( !load_type_ptr )
                                goto LABEL_89;
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2688, 32LL);
                              }
                              Json::Value::asString[abi:cxx11](
                                (Json::String *)(v2 + 2688),
                                (Json::Value_0 *)load_type_ptr);
                              v10 = !data::enumStrToVal((const std::string *)(v2 + 2688), &this->load_type);
                              std::string::~string((void *)(v2 + 2688));
                              *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                              if ( v10 )
                              {
                                *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2752, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2752),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                  "fromJson",
                                  367);
                                common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2752),
                                  (const char (*)[30])"fromJson for: loadType fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
                                v5 = 0;
                              }
                              else
                              {
LABEL_89:
                                *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2816),
                                  "questId",
                                  (const std::allocator<char> *)(v2 + 288));
                                quest_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2816));
                                std::string::~string((void *)(v2 + 2816));
                                *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( quest_id_ptr && !fromJson<unsigned int>(quest_id_ptr, &this->quest_id) )
                                {
                                  *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2880) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2880, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2880),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                    "fromJson",
                                    379);
                                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2880),
                                    (const char (*)[29])"fromJson for: questId fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2880));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2944),
                                    "extraLoadMarkId",
                                    (const std::allocator<char> *)(v2 + 304));
                                  extra_load_mark_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2944));
                                  std::string::~string((void *)(v2 + 2944));
                                  *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( extra_load_mark_id_ptr
                                    && !data::vecFromJson(extra_load_mark_id_ptr, &this->extra_load_mark_id) )
                                  {
                                    *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3008, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3008),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                      "fromJson",
                                      391);
                                    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3008),
                                      (const char (*)[37])"fromJson for: extraLoadMarkId fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3072),
                                      "assetIndex",
                                      (const std::allocator<char> *)(v2 + 320));
                                    asset_index_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3072));
                                    std::string::~string((void *)(v2 + 3072));
                                    *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( asset_index_ptr
                                      && !fromJson<unsigned long>(asset_index_ptr, &this->asset_index) )
                                    {
                                      *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3136) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3167) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3136, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3136),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                        "fromJson",
                                        403);
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3136),
                                        (const char (*)[32])"fromJson for: assetIndex fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3136));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3200),
                                        "dontBlockDaily",
                                        (const std::allocator<char> *)(v2 + 336));
                                      dont_block_daily_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3200));
                                      std::string::~string((void *)(v2 + 3200));
                                      *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( dont_block_daily_ptr
                                        && !fromJson<bool>(dont_block_daily_ptr, &this->dont_block_daily) )
                                      {
                                        *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3264) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3264, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3264),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                          "fromJson",
                                          415);
                                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3264),
                                          (const char (*)[36])"fromJson for: dontBlockDaily fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3264));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3328),
                                          "participantId",
                                          (const std::allocator<char> *)(v2 + 352));
                                        participant_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3328));
                                        std::string::~string((void *)(v2 + 3328));
                                        *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( participant_id_ptr
                                          && !data::vecFromJson(participant_id_ptr, &this->participant_id) )
                                        {
                                          *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3392) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3423) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3392, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3392),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                            "fromJson",
                                            427);
                                          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3392),
                                            (const char (*)[35])"fromJson for: participantId fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3392));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3456),
                                            "prePerformCfg",
                                            (const std::allocator<char> *)(v2 + 368));
                                          pre_perform_cfg_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3456));
                                          std::string::~string((void *)(v2 + 3456));
                                          *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( pre_perform_cfg_ptr
                                            && !fromJson<std::string>(pre_perform_cfg_ptr, &this->pre_perform_cfg) )
                                          {
                                            *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3520) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3520, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3520),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                              "fromJson",
                                              439);
                                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3520),
                                              (const char (*)[35])"fromJson for: prePerformCfg fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3520));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3584),
                                              "stayFreeStyle",
                                              (const std::allocator<char> *)(v2 + 384));
                                            stay_free_style_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3584));
                                            std::string::~string((void *)(v2 + 3584));
                                            *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( stay_free_style_ptr
                                              && !fromJson<bool>(stay_free_style_ptr, &this->stay_free_style) )
                                            {
                                              *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3648) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3679) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3679) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3648, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3648),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                "fromJson",
                                                451);
                                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3648),
                                                (const char (*)[35])"fromJson for: stayFreeStyle fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3648));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3712),
                                                "enableCameraDisplacement",
                                                (const std::allocator<char> *)(v2 + 400));
                                              enable_camera_displacement_ptr = jsonValueFind(
                                                                                 jval,
                                                                                 (const std::string *)(v2 + 3712));
                                              std::string::~string((void *)(v2 + 3712));
                                              *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( enable_camera_displacement_ptr
                                                && !fromJson<bool>(
                                                      enable_camera_displacement_ptr,
                                                      &this->enable_camera_displacement) )
                                              {
                                                *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3776) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3807) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 3807) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3776, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3776),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                  "fromJson",
                                                  463);
                                                common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3776),
                                                  (const char (*)[46])"fromJson for: enableCameraDisplacement fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3776));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 416);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3840),
                                                  "lockGameTime",
                                                  (const std::allocator<char> *)(v2 + 416));
                                                lock_game_time_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 3840));
                                                std::string::~string((void *)(v2 + 3840));
                                                *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( lock_game_time_ptr
                                                  && !fromJson<bool>(lock_game_time_ptr, &this->lock_game_time) )
                                                {
                                                  *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3904) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3935) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3935) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3904, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3904),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                    "fromJson",
                                                    475);
                                                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3904),
                                                    (const char (*)[34])"fromJson for: lockGameTime fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3904));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 432);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3968),
                                                    "talkMarkType",
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  talk_mark_type_ptr = (Json::Value *)jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 3968));
                                                  std::string::~string((void *)(v2 + 3968));
                                                  *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( !talk_mark_type_ptr )
                                                    goto LABEL_141;
                                                  *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4032) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4063) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4032, 32LL);
                                                  }
                                                  Json::Value::asString[abi:cxx11](
                                                    (Json::String *)(v2 + 4032),
                                                    (Json::Value_0 *)talk_mark_type_ptr);
                                                  v11 = !data::enumStrToVal(
                                                           (const std::string *)(v2 + 4032),
                                                           &this->talk_mark_type);
                                                  std::string::~string((void *)(v2 + 4032));
                                                  *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
                                                  if ( v11 )
                                                  {
                                                    *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4096) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4127) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4127) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4096, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4096),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                      "fromJson",
                                                      487);
                                                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4096),
                                                      (const char (*)[34])"fromJson for: talkMarkType fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4096));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
LABEL_141:
                                                    *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 448);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4160),
                                                      "questIdleTalk",
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    quest_idle_talk_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 4160));
                                                    std::string::~string((void *)(v2 + 4160));
                                                    *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( quest_idle_talk_ptr
                                                      && !fromJson<bool>(quest_idle_talk_ptr, &this->quest_idle_talk) )
                                                    {
                                                      *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4224) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4255) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4224, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4224),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                        "fromJson",
                                                        499);
                                                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4224),
                                                        (const char (*)[35])"fromJson for: questIdleTalk fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4288),
                                                        "lowPriority",
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      low_priority_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 4288));
                                                      std::string::~string((void *)(v2 + 4288));
                                                      *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( low_priority_ptr
                                                        && !fromJson<bool>(low_priority_ptr, &this->low_priority) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4352) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4383) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4383) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4352, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4352),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                          "fromJson",
                                                          511);
                                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4352),
                                                          (const char (*)[33])"fromJson for: lowPriority fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4352));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 480);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4416),
                                                          "finishExec",
                                                          (const std::allocator<char> *)(v2 + 480));
                                                        finish_exec_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 4416));
                                                        std::string::~string((void *)(v2 + 4416));
                                                        *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 480);
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                        if ( finish_exec_ptr
                                                          && !data::vecFromJson(finish_exec_ptr, &this->finish_exec) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4480) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4511) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4511) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4480, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4480),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                            "fromJson",
                                                            523);
                                                          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4480),
                                                            (const char (*)[32])"fromJson for: finishExec fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4480));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 496);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4544),
                                                            "prePerformFreeStyleList",
                                                            (const std::allocator<char> *)(v2 + 496));
                                                          pre_perform_free_style_list_ptr = jsonValueFind(
                                                                                              jval,
                                                                                              (const std::string *)(v2 + 4544));
                                                          std::string::~string((void *)(v2 + 4544));
                                                          *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 496);
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                          if ( pre_perform_free_style_list_ptr
                                                            && !data::vecFromJson(
                                                                  pre_perform_free_style_list_ptr,
                                                                  &this->pre_perform_free_style_list) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4608) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4639) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4608, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4608),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                              "fromJson",
                                                              535);
                                                            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4608),
                                                              (const char (*)[45])"fromJson for: prePerformFreeStyleList fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4608));
                                                            v5 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4672),
                                                              "freeStyleList",
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            free_style_list_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 4672));
                                                            std::string::~string((void *)(v2 + 4672));
                                                            *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( free_style_list_ptr
                                                              && !data::vecFromJson(
                                                                    free_style_list_ptr,
                                                                    &this->free_style_list) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4736) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4767) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4767) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4736, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4736),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                                "fromJson",
                                                                547);
                                                              common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4736),
                                                                (const char (*)[35])"fromJson for: freeStyleList fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4736));
                                                              v5 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4800),
                                                                "talkMarkHideList",
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              talk_mark_hide_list_ptr = jsonValueFind(
                                                                                          jval,
                                                                                          (const std::string *)(v2 + 4800));
                                                              std::string::~string((void *)(v2 + 4800));
                                                              *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( talk_mark_hide_list_ptr
                                                                && !data::vecFromJson(
                                                                      talk_mark_hide_list_ptr,
                                                                      &this->talk_mark_hide_list) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4864) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4895) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4895) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4864, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4864),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                                  "fromJson",
                                                                  559);
                                                                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4864),
                                                                  (const char (*)[38])"fromJson for: talkMarkHideList fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4864));
                                                                v5 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 544);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4928),
                                                                  "crowdLOD0List",
                                                                  (const std::allocator<char> *)(v2 + 544));
                                                                crowd_lod0_list_ptr = jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 4928));
                                                                std::string::~string((void *)(v2 + 4928));
                                                                *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 544);
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                if ( crowd_lod0_list_ptr
                                                                  && !data::vecFromJson(
                                                                        crowd_lod0_list_ptr,
                                                                        &this->crowd_lod0_list) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 4992) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 4992) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 5023) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 5023) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 4992, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 4992),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                                    "fromJson",
                                                                    571);
                                                                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 4992),
                                                                    (const char (*)[35])"fromJson for: crowdLOD0List fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4992));
                                                                  v5 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 560);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5056),
                                                                    "checkActionAfter",
                                                                    (const std::allocator<char> *)(v2 + 560));
                                                                  check_action_after_ptr = jsonValueFind(
                                                                                             jval,
                                                                                             (const std::string *)(v2 + 5056));
                                                                  std::string::~string((void *)(v2 + 5056));
                                                                  *(_DWORD *)(((v2 + 5056) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 560);
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( check_action_after_ptr
                                                                    && !fromJson<bool>(
                                                                          check_action_after_ptr,
                                                                          &this->check_action_after) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5120) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5120) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5151) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 5151) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5120, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5120),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                                                      "fromJson",
                                                                      583);
                                                                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5120),
                                                                      (const char (*)[38])"fromJson for: checkActionAfter fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5120));
                                                                    v5 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    v12 = ((_BYTE)this - 95) & 7;
                                                                    v13 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                                    + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                                                    if ( (_BYTE)v13 )
                                                                      __asan_report_store1(
                                                                        &this->is_json_loaded,
                                                                        v12,
                                                                        v13);
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
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v14 = v5;
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF807C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF809C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80FC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8104) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF810C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8114) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF811C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8124) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF812C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF813C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF814C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8154) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF815C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8164) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF816C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8174) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF817C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8184) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF818C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8194) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF819C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81E4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81EC) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8204) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF820C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8214) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF821C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8224) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF822C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8234) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF823C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8244) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF824C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8254) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF825C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8264) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF826C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8274) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF827C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8284) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 5184LL, v49);
  }
  return v14;
};

// Line 591: range 0000000011FAA62C-0000000011FAAF0C
int32_t __cdecl data::ConfigTalkScheme::getHashValue(const data::ConfigTalkScheme *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t result; // eax
  char v23[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:592";
  *(_QWORD *)(v2 + 16) = data::ConfigTalkScheme::getHashValue;
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
  common::tools::HashUtils::appendHash(this->id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_way >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->begin_way);
  }
  common::tools::HashUtils::appendHash(this->begin_way, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->active_mode >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->active_mode);
  }
  common::tools::HashUtils::appendHash(this->active_mode, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->begin_cond_comb >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->begin_cond_comb);
  }
  common::tools::HashUtils::appendHash(this->begin_cond_comb, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->begin_cond);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->priority);
  }
  common::tools::HashUtils::appendHash(this->priority, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->next_talks);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->next_random_talks);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->show_random_talk_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_random_talk_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->show_random_talk_count);
  }
  common::tools::HashUtils::appendHash(this->show_random_talk_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_dialog >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->init_dialog);
  }
  common::tools::HashUtils::appendHash(this->init_dialog, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->decorator_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->decorator_id);
  }
  common::tools::HashUtils::appendHash(this->decorator_id, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->npc_id);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->perform_cfg, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->hero_talk >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hero_talk >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hero_talk);
  }
  common::tools::HashUtils::appendHash(this->hero_talk, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->load_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->load_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->load_type);
  }
  common::tools::HashUtils::appendHash(this->load_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->quest_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->quest_id);
  }
  common::tools::HashUtils::appendHash(this->quest_id, (int32_t *)(v2 + 32));
  v9 = data::getVecHashValue(&this->extra_load_mark_id);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->asset_index >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->asset_index);
  common::tools::HashUtils::appendHash(this->asset_index, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->dont_block_daily >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->dont_block_daily, v2 + 32, &this->dont_block_daily);
  common::tools::HashUtils::appendHash(this->dont_block_daily, (int32_t *)(v2 + 32));
  v10 = data::getVecHashValue(&this->participant_id);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->pre_perform_cfg, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->stay_free_style >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->stay_free_style, v2 + 32, &this->stay_free_style);
  common::tools::HashUtils::appendHash(this->stay_free_style, (int32_t *)(v2 + 32));
  v11 = ((_BYTE)this + 25) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->enable_camera_displacement >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&this->enable_camera_displacement, v11, v12);
  common::tools::HashUtils::appendHash(this->enable_camera_displacement, (int32_t *)(v2 + 32));
  v13 = ((_BYTE)this + 26) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->lock_game_time >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->lock_game_time >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&this->lock_game_time, v13, v14);
  common::tools::HashUtils::appendHash(this->lock_game_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_mark_type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->talk_mark_type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->talk_mark_type);
  }
  common::tools::HashUtils::appendHash(this->talk_mark_type, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->quest_idle_talk >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->quest_idle_talk, v2 + 32, &this->quest_idle_talk);
  common::tools::HashUtils::appendHash(this->quest_idle_talk, (int32_t *)(v2 + 32));
  v15 = ((_BYTE)this + 33) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->low_priority >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->low_priority >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&this->low_priority, v15, v16);
  common::tools::HashUtils::appendHash(this->low_priority, (int32_t *)(v2 + 32));
  v17 = data::getVecHashValue(&this->finish_exec);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::getVecHashValue(&this->pre_perform_free_style_list);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::getVecHashValue(&this->free_style_list);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::getVecHashValue(&this->talk_mark_hide_list);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::getVecHashValue(&this->crowd_lod0_list);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->check_action_after >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->check_action_after, v2 + 32, &this->check_action_after);
  common::tools::HashUtils::appendHash(this->check_action_after, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v23 == (char *)v2 )
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

// Line 631: range 0000000011FAAF0E-0000000011FAD670
bool __cdecl data::ConfigDialogScheme::fromJson(data::ConfigDialogScheme *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  std::string *p_option_icon; // rsi
  bool v8; // bl
  const Json::Value *id_ptr; // [rsp+18h] [rbp-988h]
  const Json::Value *next_dialogs_ptr; // [rsp+20h] [rbp-980h]
  Json::Value *talk_show_type_ptr; // [rsp+28h] [rbp-978h]
  const Json::Value *talk_role_ptr; // [rsp+30h] [rbp-970h]
  const Json::Value *talk_content_ptr; // [rsp+38h] [rbp-968h]
  const Json::Value *talk_title_ptr; // [rsp+40h] [rbp-960h]
  const Json::Value *talk_role_name_ptr; // [rsp+48h] [rbp-958h]
  const Json::Value *talk_asset_path_ptr; // [rsp+50h] [rbp-950h]
  const Json::Value *talk_asset_path__alter_ptr; // [rsp+58h] [rbp-948h]
  const Json::Value *talk_audio_name_ptr; // [rsp+60h] [rbp-940h]
  const Json::Value *action_before_ptr; // [rsp+68h] [rbp-938h]
  const Json::Value *action_while_ptr; // [rsp+70h] [rbp-930h]
  const Json::Value *action_after_ptr; // [rsp+78h] [rbp-928h]
  const Json::Value *show_duration_ptr; // [rsp+80h] [rbp-920h]
  const Json::Value *option_icon_ptr; // [rsp+88h] [rbp-918h]
  char v26[2320]; // [rsp+90h] [rbp-910h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2272LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "46 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 32 9 <unknown> "
                        "352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 99"
                        "2 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown>"
                        " 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unkn"
                        "own> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <"
                        "unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDialogScheme::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
  v4[536862727] = -234753535;
  v4[536862728] = -234753535;
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
  v4[536862778] = -218959118;
  v4[536862780] = -218959118;
  v4[536862782] = -218959118;
  v4[536862784] = -218959118;
  v4[536862786] = -218959118;
  v4[536862788] = -218959118;
  v4[536862790] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "id",
    (const std::allocator<char> *)(v2 + 48));
  id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( id_ptr && !fromJson<unsigned int>(id_ptr, &this->id) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      641);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
      (common::milog::MiLogStream *const)(v2 + 352),
      (const char (*)[24])"fromJson for: id fails!");
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
      "nextDialogs",
      (const std::allocator<char> *)(v2 + 64));
    next_dialogs_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( next_dialogs_ptr && !data::vecFromJson(next_dialogs_ptr, &this->next_dialogs) )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        653);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 480),
        (const char (*)[33])"fromJson for: nextDialogs fails!");
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
        "talkShowType",
        (const std::allocator<char> *)(v2 + 80));
      talk_show_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( !talk_show_type_ptr )
        goto LABEL_21;
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 608, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 608), (Json::Value_0 *)talk_show_type_ptr);
      v6 = !data::enumStrToVal((const std::string *)(v2 + 608), &this->talk_show_type);
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      if ( v6 )
      {
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "fromJson",
          665);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          (common::milog::MiLogStream *const)(v2 + 672),
          (const char (*)[34])"fromJson for: talkShowType fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        v5 = 0;
      }
      else
      {
LABEL_21:
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          "talkRole",
          (const std::allocator<char> *)(v2 + 96));
        talk_role_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( talk_role_ptr && !data::TalkRoleEx::fromJson(&this->talk_role, talk_role_ptr) )
        {
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 800, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 800),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "fromJson",
            677);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 800),
            (const char (*)[30])"fromJson for: talkRole fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 864),
            "talkContent",
            (const std::allocator<char> *)(v2 + 112));
          talk_content_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( talk_content_ptr && !fromJson<std::string>(talk_content_ptr, &this->talk_content) )
          {
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "fromJson",
              689);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[33])"fromJson for: talkContent fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              "talkTitle",
              (const std::allocator<char> *)(v2 + 128));
            talk_title_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( talk_title_ptr && !fromJson<std::string>(talk_title_ptr, &this->talk_title) )
            {
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1056, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1056),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                "fromJson",
                701);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[31])"fromJson for: talkTitle fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                "talkRoleName",
                (const std::allocator<char> *)(v2 + 144));
              talk_role_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( talk_role_name_ptr && !fromJson<std::string>(talk_role_name_ptr, &this->talk_role_name) )
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1184, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1184),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                  "fromJson",
                  713);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v2 + 1184),
                  (const char (*)[34])"fromJson for: talkRoleName fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  "talkAssetPath",
                  (const std::allocator<char> *)(v2 + 160));
                talk_asset_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( talk_asset_path_ptr && !fromJson<std::string>(talk_asset_path_ptr, &this->talk_asset_path) )
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1312, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1312),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                    "fromJson",
                    725);
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    (common::milog::MiLogStream *const)(v2 + 1312),
                    (const char (*)[35])"fromJson for: talkAssetPath fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    "talkAssetPath_Alter",
                    (const std::allocator<char> *)(v2 + 176));
                  talk_asset_path__alter_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( talk_asset_path__alter_ptr
                    && !fromJson<std::string>(talk_asset_path__alter_ptr, &this->talk_asset_path__alter) )
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1440, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1440),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                      "fromJson",
                      737);
                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[41])"fromJson for: talkAssetPath_Alter fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1504),
                      "talkAudioName",
                      (const std::allocator<char> *)(v2 + 192));
                    talk_audio_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                    std::string::~string((void *)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( talk_audio_name_ptr && !fromJson<std::string>(talk_audio_name_ptr, &this->talk_audio_name) )
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1568, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1568),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                        "fromJson",
                        749);
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        (common::milog::MiLogStream *const)(v2 + 1568),
                        (const char (*)[35])"fromJson for: talkAudioName fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1632),
                        "actionBefore",
                        (const std::allocator<char> *)(v2 + 208));
                      action_before_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                      std::string::~string((void *)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( action_before_ptr && !fromJson<std::string>(action_before_ptr, &this->action_before) )
                      {
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1696, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1696),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                          "fromJson",
                          761);
                        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          (common::milog::MiLogStream *const)(v2 + 1696),
                          (const char (*)[34])"fromJson for: actionBefore fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1760),
                          "actionWhile",
                          (const std::allocator<char> *)(v2 + 224));
                        action_while_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( action_while_ptr && !fromJson<std::string>(action_while_ptr, &this->action_while) )
                        {
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1824, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1824),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                            "fromJson",
                            773);
                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                            (common::milog::MiLogStream *const)(v2 + 1824),
                            (const char (*)[33])"fromJson for: actionWhile fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1888),
                            "actionAfter",
                            (const std::allocator<char> *)(v2 + 240));
                          action_after_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                          std::string::~string((void *)(v2 + 1888));
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( action_after_ptr && !fromJson<std::string>(action_after_ptr, &this->action_after) )
                          {
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1952, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1952),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                              "fromJson",
                              785);
                            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                              (common::milog::MiLogStream *const)(v2 + 1952),
                              (const char (*)[33])"fromJson for: actionAfter fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2016),
                              "showDuration",
                              (const std::allocator<char> *)(v2 + 256));
                            show_duration_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                            std::string::~string((void *)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( show_duration_ptr && !fromJson<float>(show_duration_ptr, &this->show_duration) )
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2080, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2080),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                "fromJson",
                                797);
                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                (common::milog::MiLogStream *const)(v2 + 2080),
                                (const char (*)[34])"fromJson for: showDuration fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2144),
                                "optionIcon",
                                (const std::allocator<char> *)(v2 + 272));
                              p_option_icon = (std::string *)(v2 + 2144);
                              option_icon_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                              std::string::~string((void *)(v2 + 2144));
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( option_icon_ptr
                                && (p_option_icon = &this->option_icon,
                                    !fromJson<std::string>(option_icon_ptr, &this->option_icon)) )
                              {
                                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2208, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2208),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
                                  "fromJson",
                                  809);
                                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2208),
                                  (const char (*)[32])"fromJson for: optionIcon fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                                v5 = 0;
                              }
                              else
                              {
                                if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                  __asan_report_store1(&this->is_json_loaded, p_option_icon, &this->is_json_loaded);
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
      }
    }
  }
  v8 = v5;
  if ( v26 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2272LL, v26);
  }
  return v8;
};

// Line 817: range 0000000011FAD672-0000000011FAD9A6
int32_t __cdecl data::ConfigDialogScheme::getHashValue(const data::ConfigDialogScheme *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:818";
  *(_QWORD *)(v2 + 16) = data::ConfigDialogScheme::getHashValue;
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
  common::tools::HashUtils::appendHash(this->id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->next_dialogs);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_show_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->talk_show_type);
  }
  common::tools::HashUtils::appendHash(this->talk_show_type, (int32_t *)(v2 + 32));
  HashValue = data::TalkRoleEx::getHashValue(&this->talk_role);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_content, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_title, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_role_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_asset_path, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_asset_path__alter, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->talk_audio_name, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->action_before, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->action_while, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->action_after, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->show_duration >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->show_duration);
  }
  common::tools::HashUtils::appendHash(this->show_duration, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->option_icon, (int32_t *)(v2 + 32));
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

// Line 838: range 0000000011FAD9A7-0000000011FADC6D
const char *__cdecl data::enumValToStr(data::DialogGroupSchemeType e)
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
    case QUEST_2:
      result = "QUEST";
      break;
    case FREE_0:
      result = "FREE";
      break;
    case NARRATOR:
      result = "NARRATOR";
      break;
    case BLOSSOM:
      result = "BLOSSOM";
      break;
    case ACTIVITY:
      result = "ACTIVITY";
      break;
    case COOP:
      result = "COOP";
      break;
    case GADGET_0:
      result = "GADGET";
      break;
    case UI:
      result = "UI";
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "enumValToStr",
        858);
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

// Line 864: range 0000000011FADC6E-0000000011FAE851
bool __cdecl data::enumStrToVal(const std::string *s, data::DialogGroupSchemeType *e)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::pair<const std::string,data::DialogGroupSchemeType> *i; // r14
  char *v7; // rsi
  bool v8; // al
  common::milog::MiLogStream *v9; // rdx
  std::_Rb_tree_iterator<std::pair<const std::string,data::DialogGroupSchemeType> >::pointer v10; // rax
  data::DialogGroupSchemeType second; // ecx
  char v12; // dl
  data::DialogGroupSchemeType *ea; // [rsp+10h] [rbp-340h]
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
                        "<unknown> 128 4 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 8 6 it:881"
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "enumStrToVal",
      867);
    common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[12])"s is empty!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    result = 0;
  }
  else
  {
    if ( !(_BYTE)`guard variable for'data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m
      && __cxa_guard_acquire(&`guard variable for'data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m) )
    {
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, e);
      *(_DWORD *)(v2 + 64) = 0;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[6],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 384),
        (const char (*)[6])"QUEST",
        (data::DialogGroupSchemeType *)(v2 + 64));
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 80, "QUEST");
      *(_DWORD *)(v2 + 80) = 1;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[5],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 424),
        (const char (*)[5])"FREE",
        (data::DialogGroupSchemeType *)(v2 + 80));
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 96, "FREE");
      *(_DWORD *)(v2 + 96) = 2;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[9],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 464),
        (const char (*)[9])"NARRATOR",
        (data::DialogGroupSchemeType *)(v2 + 96));
      if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 112, "NARRATOR");
      *(_DWORD *)(v2 + 112) = 3;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[8],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 504),
        (const char (*)[8])"BLOSSOM",
        (data::DialogGroupSchemeType *)(v2 + 112));
      if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 128, "BLOSSOM");
      *(_DWORD *)(v2 + 128) = 4;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[9],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 544),
        (const char (*)[9])"ACTIVITY",
        (data::DialogGroupSchemeType *)(v2 + 128));
      if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 144, "ACTIVITY");
      *(_DWORD *)(v2 + 144) = 5;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[5],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 584),
        (const char (*)[5])"COOP",
        (data::DialogGroupSchemeType *)(v2 + 144));
      if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 160, "COOP");
      *(_DWORD *)(v2 + 160) = 6;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[7],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 624),
        (const char (*)[7])"GADGET",
        (data::DialogGroupSchemeType *)(v2 + 160));
      if ( *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 176, "GADGET");
      *(_DWORD *)(v2 + 176) = 7;
      std::pair<std::string const,data::DialogGroupSchemeType>::pair<char const(&)[3],data::DialogGroupSchemeType,true>(
        (std::pair<const std::string,data::DialogGroupSchemeType> *const)(v2 + 664),
        (const char (*)[3])"UI",
        (data::DialogGroupSchemeType *)(v2 + 176));
      std::allocator<std::pair<std::string const,data::DialogGroupSchemeType>>::allocator((std::allocator<std::pair<const std::string,data::DialogGroupSchemeType> > *const)(v2 + 48));
      std::map<std::string,data::DialogGroupSchemeType>::map(
        &data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m,
        (std::initializer_list<std::pair<const std::string,data::DialogGroupSchemeType> >)__PAIR128__(8LL, v2 + 384),
        (const std::less<std::string > *)(v2 + 32),
        (const std::map<std::string,data::DialogGroupSchemeType>::allocator_type *)(v2 + 48));
      __cxa_guard_release(&`guard variable for'data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m);
      __cxa_atexit(
        (void (__fastcall *)(void *))std::map<std::string,data::DialogGroupSchemeType>::~map,
        &data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m,
        &_dso_handle);
      std::allocator<std::pair<std::string const,data::DialogGroupSchemeType>>::~allocator((std::allocator<std::pair<const std::string,data::DialogGroupSchemeType> > *const)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      for ( i = (std::pair<const std::string,data::DialogGroupSchemeType> *)(v2 + 704);
            i != (std::pair<const std::string,data::DialogGroupSchemeType> *)(v2 + 384);
            std::pair<std::string const,data::DialogGroupSchemeType>::~pair(i) )
      {
        --i;
      }
      e = (data::DialogGroupSchemeType *)320;
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
    *(std::map<std::string,data::DialogGroupSchemeType>::iterator *)(v2 + 192) = std::map<std::string,data::DialogGroupSchemeType>::find(
                                                                                   &data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m,
                                                                                   s);
    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 224, s);
    *(std::map<std::string,data::DialogGroupSchemeType>::iterator *)(v2 + 224) = std::map<std::string,data::DialogGroupSchemeType>::end(&data::enumStrToVal(std::string const&,data::DialogGroupSchemeType &)::m);
    v7 = (char *)(v2 + 224);
    v8 = std::operator==(
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::DialogGroupSchemeType> >::_Self *)(v2 + 192),
           (const std::_Rb_tree_iterator<std::pair<const std::string,data::DialogGroupSchemeType> >::_Self *)(v2 + 224));
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "enumStrToVal",
        884);
      v9 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             (common::milog::MiLogStream *const)(v2 + 320),
             (const char (*)[27])"unrecognized enum string: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, s);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v10 = std::_Rb_tree_iterator<std::pair<std::string const,data::DialogGroupSchemeType>>::operator->((const std::_Rb_tree_iterator<std::pair<const std::string,data::DialogGroupSchemeType> > *const)(v2 + 192));
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

// Line 892: range 0000000011FAE852-0000000011FAE8D2
const char *__cdecl data::getDescription(data::DialogGroupSchemeType e)
{
  const char *result; // rax

  switch ( e )
  {
    case QUEST_2:
      result = (const char *)&unk_1A8CF7E0;
      break;
    case FREE_0:
      result = (const char *)&unk_1A8CF820;
      break;
    case NARRATOR:
      result = (const char *)&unk_1A8CF860;
      break;
    case BLOSSOM:
      result = (const char *)&unk_1A8CF8A0;
      break;
    case ACTIVITY:
      result = (const char *)&unk_1A8CF8E0;
      break;
    case COOP:
      result = (const char *)&unk_1A8CF920;
      break;
    case GADGET_0:
      result = (const char *)&unk_1A8CF960;
      break;
    case UI:
      result = (const char *)&unk_1A8CF9A0;
      break;
    default:
      result = "unknown enum value!";
      break;
  }
  return result;
};

// Line 917: range 0000000011FAE8D3-0000000011FAED02
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigDialogList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  int v6; // r14d
  data::ConfigDialogScheme *v7; // rdx
  int v9; // [rsp+0h] [rbp-2C0h]
  char v10; // [rsp+8h] [rbp-2B8h]
  bool v11; // [rsp+Fh] [rbp-2B1h]
  uint32_t i; // [rsp+24h] [rbp-29Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-298h]
  char v14[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 424 8 elem:923";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862736] = -218103808;
  v4[536862737] = -202116109;
  v4[536862738] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v9, v10);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 112, 424LL);
      data::ConfigDialogScheme::ConfigDialogScheme((data::ConfigDialogScheme *const)(v2 + 112));
      if ( !data::ConfigDialogScheme::fromJson((data::ConfigDialogScheme *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "vecFromJson",
          926);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 48),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 48));
        *(_DWORD *)(((v2 + 48) >> 3) + 0x7FFF8000) = -117901064;
        v11 = 0;
        v6 = 0;
      }
      else
      {
        v7 = std::move<data::ConfigDialogScheme &>((data::ConfigDialogScheme *)(v2 + 112));
        std::vector<data::ConfigDialogScheme>::emplace_back<data::ConfigDialogScheme>(v, v7, v7);
        v6 = 1;
      }
      data::ConfigDialogScheme::~ConfigDialogScheme((data::ConfigDialogScheme *const)(v2 + 112));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    __asan_poison_stack_memory(v2 + 112, 424LL);
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v11 = 1;
LABEL_20:
  if ( v14 == (char *)v2 )
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
  return v11;
};

// Line 936: range 0000000011FAED03-0000000011FAEF4F
int32_t __cdecl data::getVecHashValue(const data::ConfigDialogList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigDialogScheme*,std::vector<data::ConfigDialogScheme> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:937 64 8 15 __for_begin:938 96 8 13 __for_end:938";
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
  *(std::vector<data::ConfigDialogScheme>::const_iterator *)(v2 + 64) = std::vector<data::ConfigDialogScheme>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigDialogScheme>::const_iterator *)(v2 + 96) = std::vector<data::ConfigDialogScheme>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigDialogScheme const*,std::vector<data::ConfigDialogScheme>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigDialogScheme*,std::vector<data::ConfigDialogScheme> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigDialogScheme*,std::vector<data::ConfigDialogScheme> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigDialogScheme const*,std::vector<data::ConfigDialogScheme>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigDialogScheme*,std::vector<data::ConfigDialogScheme> > *const)(v2 + 64));
    HashValue = data::ConfigDialogScheme::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigDialogScheme const*,std::vector<data::ConfigDialogScheme>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigDialogScheme*,std::vector<data::ConfigDialogScheme> > *const)(v2 + 64));
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

// Line 947: range 0000000011FAEF50-0000000011FAF185
data::ConfigDialogGroupPtr __cdecl data::createConfigDialogGroup(const std::string *name)
{
  const std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *v1; // rsi
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool v5; // al
  std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::pointer v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdx
  void (__fastcall *v9)(const std::string *, unsigned __int64); // rcx
  data::ConfigDialogGroupPtr result; // rax
  char v11[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > > *)v3;
  }
  v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::_Base_ptr)1102416563;
  v2[1]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::_Base_ptr)"2 32 8 6 it:948 64 8 9 <unknown>";
  v2[2]._M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::_Base_ptr)data::createConfigDialogGroup;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], v1);
  v2[4]._M_node = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::find(
                    &data::g_ConfigDialogGroupMap[abi:cxx11],
                    v1)._M_node;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], v1);
  v2[8]._M_node = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::end(&data::g_ConfigDialogGroupMap[abi:cxx11])._M_node;
  v5 = std::operator!=(v2 + 4, v2 + 8);
  *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) = -8;
  if ( v5 )
  {
    v6 = std::_Rb_tree_iterator<std::pair<std::string const,std::shared_ptr<data::ConfigDialogGroup>>>::operator->(v2 + 4);
    v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v6->second);
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
    std::shared_ptr<data::ConfigDialogGroup>::shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)name, 0LL);
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_node = (std::_Rb_tree_iterator<std::pair<const std::string,std::shared_ptr<data::ConfigDialogGroup> > >::_Base_ptr)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)name;
  return result;
};

// Line 954: range 0000000011FAF186-0000000011FAF37A
void __cdecl data::ConfigDialogGroup::foreachMember(
        data::ConfigDialogGroup *const this,
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
  v2->_M_storage._M_ptr = "3 32 16 15 talk_id_any:955 64 16 12 type_any:957 96 16 19 dialog_list_any:959";
  v2[1]._M_manager = (void (*)(std::any::_Op, const std::any *, std::any::_Arg *))data::ConfigDialogGroup::foreachMember;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  std::any::any<unsigned int &,unsigned int,std::any::_Manager_internal<unsigned int>,true,true>(v2 + 2, &this->talk_id);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 2);
  std::any::any<data::DialogGroupSchemeType &,data::DialogGroupSchemeType,std::any::_Manager_internal<data::DialogGroupSchemeType>,true,true>(
    v2 + 4,
    &this->type);
  std::function<void ()(std::any &)>::operator()(p_func, v2 + 4);
  std::any::any<std::vector<data::ConfigDialogScheme> &,std::vector<data::ConfigDialogScheme>,std::any::_Manager_external<std::vector<data::ConfigDialogScheme>>,true,true>(
    v2 + 6,
    &this->dialog_list);
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

// Line 964: range 0000000011FAF37C-0000000011FAF3C6
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigDialogGroup::clone(data::ConfigDialogGroup *const this)
{
  data::ConfigDialogGroup *v1; // rsi
  std::shared_ptr<data::ConfigDialogGroup> result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigDialogGroup,data::ConfigDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigDialogGroup,data::ConfigDialogGroup> *)this,
    v1);
  result._M_ptr = this;
  return result;
};

// Line 968: range 0000000011FAF3C8-0000000011FAFD57
bool __cdecl data::ConfigDialogGroup::fromJson(data::ConfigDialogGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  bool v6; // r14
  data::ConfigDialogList *p_dialog_list; // rsi
  const Json::Value *talk_id_ptr; // [rsp+18h] [rbp-268h]
  Json::Value *type_ptr; // [rsp+20h] [rbp-260h]
  const Json::Value *dialog_list_ptr; // [rsp+28h] [rbp-258h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigDialogGroup::fromJson;
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
    "talkId",
    (const std::allocator<char> *)(v2 + 48));
  talk_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( talk_id_ptr && !fromJson<unsigned int>(talk_id_ptr, &this->talk_id) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      978);
    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[28])"fromJson for: talkId fails!");
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
      "type",
      (const std::allocator<char> *)(v2 + 64));
    type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !type_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 288), (Json::Value_0 *)type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 288), &this->type);
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "fromJson",
        990);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[26])"fromJson for: type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      result = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "dialogList",
        (const std::allocator<char> *)(v2 + 80));
      p_dialog_list = (data::ConfigDialogList *)(v2 + 416);
      dialog_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( dialog_list_ptr
        && (p_dialog_list = &this->dialog_list, !data::vecFromJson(dialog_list_ptr, &this->dialog_list)) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "fromJson",
          1002);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[32])"fromJson for: dialogList fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_dialog_list, &this->is_json_loaded);
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
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

// Line 1009: range 0000000011FAFD58-0000000011FB06AD
data::ConfigDialogGroupPtr __cdecl data::ConfigDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 16 8 ptr:1022 96 32 9 <unknown> 160 32 9 <unknown> 224 32 14 type_name:101"
                        "6 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1019);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[45])"fromJson for: ConfigDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigDialogGroup>::shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)jval, 0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1025);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 224));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigDialogGroup>::shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)jval, 0LL);
      }
      else
      {
        v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1030);
          v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                 (common::milog::MiLogStream *const)(v2 + 416),
                 (const std::string *)(v2 + 224));
          common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
          *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v10 = (__int64)std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
          v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
          LOBYTE(v1) = v11 != 0;
          v12 = v11 < 0;
          if ( v12 )
            v10 = __asan_report_store1(v10 + 56, v1, v12);
          *(_BYTE *)(v10 + 56) = 1;
          std::shared_ptr<data::ConfigDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigDialogGroup> *const)jval,
            (std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64));
        }
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1013);
    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[50])"jsonValueFind for: ConfigDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigDialogGroup>::shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1038: range 0000000011FB06AE-0000000011FB0886
int32_t __cdecl data::ConfigDialogGroup::getHashValue(const data::ConfigDialogGroup *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1039";
  *(_QWORD *)(v2 + 16) = data::ConfigDialogGroup::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->talk_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->talk_id);
  }
  common::tools::HashUtils::appendHash(this->talk_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->type);
  }
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->dialog_list);
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

// Line 1050: range 0000000012156DAC-0000000012156FED
void __cdecl data::ConfigFreeDialogGroupRegister::ConfigFreeDialogGroupRegister(
        data::ConfigFreeDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigFreeDialogGroupRegister::ConfigFreeDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigFreeDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigFreeDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigFreeDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigFreeDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigFreeDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigFreeDialogGroup> *const)(v1 + 64));
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

// Line 1053: range 0000000011FB0888-0000000011FB09BB
void __cdecl data::ConfigFreeDialogGroup::foreachMember(
        data::ConfigFreeDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigFreeDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1058: range 0000000011FB09BC-0000000011FB0ACC
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigFreeDialogGroup::clone(
        data::ConfigFreeDialogGroup *const this)
{
  data::ConfigFreeDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigFreeDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigFreeDialogGroup,data::ConfigFreeDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigFreeDialogGroup,data::ConfigFreeDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigFreeDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigFreeDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigFreeDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigFreeDialogGroup> *const)(v2 + 32));
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

// Line 1062: range 0000000011FB0ACE-0000000011FB0B11
data::ConfigFreeDialogGroupPtr __cdecl data::ConfigFreeDialogGroupFactory::create(
        data::ConfigFreeDialogGroupFactory *const this)
{
  data::ConfigFreeDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigFreeDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1064: range 0000000011FB0B12-0000000011FB0D25
bool __cdecl data::ConfigFreeDialogGroup::fromJson(data::ConfigFreeDialogGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigFreeDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1067);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1074: range 0000000011FB0D26-0000000011FB186C
data::ConfigFreeDialogGroupPtr __cdecl data::ConfigFreeDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigFreeDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1087 96 16 8 ptr:1093 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1081 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigFreeDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1084);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[49])"fromJson for: ConfigFreeDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1090);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigFreeDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigFreeDialogGroup>(
               (const std::shared_ptr<data::ConfigFreeDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1096);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[40])"cast to ConfigFreeDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1101);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigFreeDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigFreeDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigFreeDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1078);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[54])"jsonValueFind for: ConfigFreeDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigFreeDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigFreeDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigFreeDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1109: range 0000000011FB186E-0000000011FB188D
int32_t __cdecl data::ConfigFreeDialogGroup::getHashValue(const data::ConfigFreeDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1118: range 0000000012157066-00000000121572A7
void __cdecl data::ConfigNarratorDialogGroupRegister::ConfigNarratorDialogGroupRegister(
        data::ConfigNarratorDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigNarratorDialogGroupRegister::ConfigNarratorDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNarratorDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigNarratorDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigNarratorDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigNarratorDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigNarratorDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNarratorDialogGroup> *const)(v1 + 64));
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

// Line 1121: range 0000000011FB188E-0000000011FB19C1
void __cdecl data::ConfigNarratorDialogGroup::foreachMember(
        data::ConfigNarratorDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigNarratorDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1126: range 0000000011FB19C2-0000000011FB1AD2
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigNarratorDialogGroup::clone(
        data::ConfigNarratorDialogGroup *const this)
{
  data::ConfigNarratorDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigNarratorDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNarratorDialogGroup,data::ConfigNarratorDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigNarratorDialogGroup,data::ConfigNarratorDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigNarratorDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigNarratorDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigNarratorDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNarratorDialogGroup> *const)(v2 + 32));
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

// Line 1130: range 0000000011FB1AD4-0000000011FB1B17
data::ConfigNarratorDialogGroupPtr __cdecl data::ConfigNarratorDialogGroupFactory::create(
        data::ConfigNarratorDialogGroupFactory *const this)
{
  data::ConfigNarratorDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigNarratorDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1132: range 0000000011FB1B18-0000000011FB1D2B
bool __cdecl data::ConfigNarratorDialogGroup::fromJson(
        data::ConfigNarratorDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNarratorDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1135);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1142: range 0000000011FB1D2C-0000000011FB2872
data::ConfigNarratorDialogGroupPtr __cdecl data::ConfigNarratorDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigNarratorDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1155 96 16 8 ptr:1161 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1149 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNarratorDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1152);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigNarratorDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1158);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigNarratorDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigNarratorDialogGroup>(
               (const std::shared_ptr<data::ConfigNarratorDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1164);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigNarratorDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1169);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigNarratorDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigNarratorDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNarratorDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1146);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigNarratorDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigNarratorDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigNarratorDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigNarratorDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1177: range 0000000011FB2874-0000000011FB2893
int32_t __cdecl data::ConfigNarratorDialogGroup::getHashValue(const data::ConfigNarratorDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1186: range 0000000012157320-0000000012157561
void __cdecl data::ConfigBlossomDialogGroupRegister::ConfigBlossomDialogGroupRegister(
        data::ConfigBlossomDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigBlossomDialogGroupRegister::ConfigBlossomDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBlossomDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigBlossomDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigBlossomDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigBlossomDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigBlossomDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigBlossomDialogGroup> *const)(v1 + 64));
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

// Line 1189: range 0000000011FB2894-0000000011FB29C7
void __cdecl data::ConfigBlossomDialogGroup::foreachMember(
        data::ConfigBlossomDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigBlossomDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1194: range 0000000011FB29C8-0000000011FB2AD8
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigBlossomDialogGroup::clone(
        data::ConfigBlossomDialogGroup *const this)
{
  data::ConfigBlossomDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigBlossomDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigBlossomDialogGroup,data::ConfigBlossomDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigBlossomDialogGroup,data::ConfigBlossomDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigBlossomDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigBlossomDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigBlossomDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigBlossomDialogGroup> *const)(v2 + 32));
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

// Line 1198: range 0000000011FB2ADA-0000000011FB2B1D
data::ConfigBlossomDialogGroupPtr __cdecl data::ConfigBlossomDialogGroupFactory::create(
        data::ConfigBlossomDialogGroupFactory *const this)
{
  data::ConfigBlossomDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigBlossomDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1200: range 0000000011FB2B1E-0000000011FB2D31
bool __cdecl data::ConfigBlossomDialogGroup::fromJson(
        data::ConfigBlossomDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBlossomDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1203);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1210: range 0000000011FB2D32-0000000011FB3878
data::ConfigBlossomDialogGroupPtr __cdecl data::ConfigBlossomDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigBlossomDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1223 96 16 8 ptr:1229 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1217 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigBlossomDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1220);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[52])"fromJson for: ConfigBlossomDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1226);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigBlossomDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigBlossomDialogGroup>(
               (const std::shared_ptr<data::ConfigBlossomDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1232);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[43])"cast to ConfigBlossomDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1237);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigBlossomDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigBlossomDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigBlossomDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1214);
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[57])"jsonValueFind for: ConfigBlossomDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigBlossomDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigBlossomDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigBlossomDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1245: range 0000000011FB387A-0000000011FB3899
int32_t __cdecl data::ConfigBlossomDialogGroup::getHashValue(const data::ConfigBlossomDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1254: range 00000000121575DA-000000001215781B
void __cdecl data::ConfigActivityDialogGroupRegister::ConfigActivityDialogGroupRegister(
        data::ConfigActivityDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigActivityDialogGroupRegister::ConfigActivityDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigActivityDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigActivityDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigActivityDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigActivityDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigActivityDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigActivityDialogGroup> *const)(v1 + 64));
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

// Line 1257: range 0000000011FB389A-0000000011FB39CD
void __cdecl data::ConfigActivityDialogGroup::foreachMember(
        data::ConfigActivityDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigActivityDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1262: range 0000000011FB39CE-0000000011FB3ADE
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigActivityDialogGroup::clone(
        data::ConfigActivityDialogGroup *const this)
{
  data::ConfigActivityDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigActivityDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigActivityDialogGroup,data::ConfigActivityDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigActivityDialogGroup,data::ConfigActivityDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigActivityDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigActivityDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigActivityDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigActivityDialogGroup> *const)(v2 + 32));
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

// Line 1266: range 0000000011FB3AE0-0000000011FB3B23
data::ConfigActivityDialogGroupPtr __cdecl data::ConfigActivityDialogGroupFactory::create(
        data::ConfigActivityDialogGroupFactory *const this)
{
  data::ConfigActivityDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigActivityDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1268: range 0000000011FB3B24-0000000011FB3D37
bool __cdecl data::ConfigActivityDialogGroup::fromJson(
        data::ConfigActivityDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigActivityDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1271);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1278: range 0000000011FB3D38-0000000011FB487E
data::ConfigActivityDialogGroupPtr __cdecl data::ConfigActivityDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigActivityDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1291 96 16 8 ptr:1297 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1285 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigActivityDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1288);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigActivityDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1294);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigActivityDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigActivityDialogGroup>(
               (const std::shared_ptr<data::ConfigActivityDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1300);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigActivityDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1305);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigActivityDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigActivityDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigActivityDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1282);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigActivityDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigActivityDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigActivityDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigActivityDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1313: range 0000000011FB4880-0000000011FB489F
int32_t __cdecl data::ConfigActivityDialogGroup::getHashValue(const data::ConfigActivityDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1322: range 0000000012157894-0000000012157AD5
void __cdecl data::ConfigCoopDialogGroupRegister::ConfigCoopDialogGroupRegister(
        data::ConfigCoopDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigCoopDialogGroupRegister::ConfigCoopDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCoopDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigCoopDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigCoopDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigCoopDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigCoopDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCoopDialogGroup> *const)(v1 + 64));
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

// Line 1325: range 0000000011FB48A0-0000000011FB49D3
void __cdecl data::ConfigCoopDialogGroup::foreachMember(
        data::ConfigCoopDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigCoopDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1330: range 0000000011FB49D4-0000000011FB4AE4
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigCoopDialogGroup::clone(
        data::ConfigCoopDialogGroup *const this)
{
  data::ConfigCoopDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigCoopDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCoopDialogGroup,data::ConfigCoopDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigCoopDialogGroup,data::ConfigCoopDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigCoopDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigCoopDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigCoopDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCoopDialogGroup> *const)(v2 + 32));
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

// Line 1334: range 0000000011FB4AE6-0000000011FB4B29
data::ConfigCoopDialogGroupPtr __cdecl data::ConfigCoopDialogGroupFactory::create(
        data::ConfigCoopDialogGroupFactory *const this)
{
  data::ConfigCoopDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigCoopDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1336: range 0000000011FB4B2A-0000000011FB4D3D
bool __cdecl data::ConfigCoopDialogGroup::fromJson(data::ConfigCoopDialogGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCoopDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1339);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1346: range 0000000011FB4D3E-0000000011FB5884
data::ConfigCoopDialogGroupPtr __cdecl data::ConfigCoopDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigCoopDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1359 96 16 8 ptr:1365 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1353 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCoopDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1356);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[49])"fromJson for: ConfigCoopDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1362);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigCoopDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigCoopDialogGroup>(
               (const std::shared_ptr<data::ConfigCoopDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1368);
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[40])"cast to ConfigCoopDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1373);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigCoopDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigCoopDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCoopDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1350);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[54])"jsonValueFind for: ConfigCoopDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigCoopDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigCoopDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigCoopDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1381: range 0000000011FB5886-0000000011FB58A5
int32_t __cdecl data::ConfigCoopDialogGroup::getHashValue(const data::ConfigCoopDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1390: range 0000000012157B4E-0000000012157D8F
void __cdecl data::ConfigGadgetDialogGroupRegister::ConfigGadgetDialogGroupRegister(
        data::ConfigGadgetDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigGadgetDialogGroupRegister::ConfigGadgetDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigGadgetDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigGadgetDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigGadgetDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigGadgetDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigGadgetDialogGroup> *const)(v1 + 64));
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

// Line 1393: range 0000000011FB58A6-0000000011FB59D9
void __cdecl data::ConfigGadgetDialogGroup::foreachMember(
        data::ConfigGadgetDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigGadgetDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1398: range 0000000011FB59DA-0000000011FB5AEA
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigGadgetDialogGroup::clone(
        data::ConfigGadgetDialogGroup *const this)
{
  data::ConfigGadgetDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigGadgetDialogGroup,data::ConfigGadgetDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigGadgetDialogGroup,data::ConfigGadgetDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigGadgetDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigGadgetDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigGadgetDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigGadgetDialogGroup> *const)(v2 + 32));
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

// Line 1402: range 0000000011FB5AEC-0000000011FB5B2F
data::ConfigGadgetDialogGroupPtr __cdecl data::ConfigGadgetDialogGroupFactory::create(
        data::ConfigGadgetDialogGroupFactory *const this)
{
  data::ConfigGadgetDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigGadgetDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1404: range 0000000011FB5B30-0000000011FB5D43
bool __cdecl data::ConfigGadgetDialogGroup::fromJson(
        data::ConfigGadgetDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1407);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1414: range 0000000011FB5D44-0000000011FB688A
data::ConfigGadgetDialogGroupPtr __cdecl data::ConfigGadgetDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigGadgetDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1427 96 16 8 ptr:1433 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1421 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1424);
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[51])"fromJson for: ConfigGadgetDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1430);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigGadgetDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigGadgetDialogGroup>(
               (const std::shared_ptr<data::ConfigGadgetDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1436);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[42])"cast to ConfigGadgetDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1441);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigGadgetDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigGadgetDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigGadgetDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1418);
    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[56])"jsonValueFind for: ConfigGadgetDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigGadgetDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigGadgetDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigGadgetDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1449: range 0000000011FB688C-0000000011FB68AB
int32_t __cdecl data::ConfigGadgetDialogGroup::getHashValue(const data::ConfigGadgetDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1458: range 0000000012157E08-0000000012158049
void __cdecl data::ConfigNpcOtherDialogGroupRegister::ConfigNpcOtherDialogGroupRegister(
        data::ConfigNpcOtherDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigNpcOtherDialogGroupRegister::ConfigNpcOtherDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNpcOtherDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigNpcOtherDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigNpcOtherDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigNpcOtherDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)(v1 + 64));
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

// Line 1461: range 0000000011FB68AC-0000000011FB69DF
void __cdecl data::ConfigNpcOtherDialogGroup::foreachMember(
        data::ConfigNpcOtherDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigNpcOtherDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1466: range 0000000011FB69E0-0000000011FB6AF0
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigNpcOtherDialogGroup::clone(
        data::ConfigNpcOtherDialogGroup *const this)
{
  data::ConfigNpcOtherDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigNpcOtherDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigNpcOtherDialogGroup,data::ConfigNpcOtherDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigNpcOtherDialogGroup,data::ConfigNpcOtherDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigNpcOtherDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigNpcOtherDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)(v2 + 32));
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

// Line 1470: range 0000000011FB6AF2-0000000011FB6B35
data::ConfigNpcOtherDialogGroupPtr __cdecl data::ConfigNpcOtherDialogGroupFactory::create(
        data::ConfigNpcOtherDialogGroupFactory *const this)
{
  data::ConfigNpcOtherDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigNpcOtherDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1472: range 0000000011FB6B36-0000000011FB6D49
bool __cdecl data::ConfigNpcOtherDialogGroup::fromJson(
        data::ConfigNpcOtherDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNpcOtherDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1475);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1482: range 0000000011FB6D4A-0000000011FB7890
data::ConfigNpcOtherDialogGroupPtr __cdecl data::ConfigNpcOtherDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigNpcOtherDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1495 96 16 8 ptr:1501 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1489 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigNpcOtherDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1492);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigNpcOtherDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1498);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigNpcOtherDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigNpcOtherDialogGroup>(
               (const std::shared_ptr<data::ConfigNpcOtherDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1504);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigNpcOtherDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1509);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigNpcOtherDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1486);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigNpcOtherDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigNpcOtherDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigNpcOtherDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigNpcOtherDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1517: range 0000000011FB7892-0000000011FB78B1
int32_t __cdecl data::ConfigNpcOtherDialogGroup::getHashValue(const data::ConfigNpcOtherDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1526: range 00000000121580C2-0000000012158303
void __cdecl data::ConfigCutsceneDialogGroupRegister::ConfigCutsceneDialogGroupRegister(
        data::ConfigCutsceneDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigCutsceneDialogGroupRegister::ConfigCutsceneDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCutsceneDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigCutsceneDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigCutsceneDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigCutsceneDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigCutsceneDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)(v1 + 64));
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

// Line 1529: range 0000000011FB78B2-0000000011FB79E5
void __cdecl data::ConfigCutsceneDialogGroup::foreachMember(
        data::ConfigCutsceneDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigCutsceneDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1534: range 0000000011FB79E6-0000000011FB7AF6
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigCutsceneDialogGroup::clone(
        data::ConfigCutsceneDialogGroup *const this)
{
  data::ConfigCutsceneDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigCutsceneDialogGroup,data::ConfigCutsceneDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigCutsceneDialogGroup,data::ConfigCutsceneDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigCutsceneDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigCutsceneDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigCutsceneDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)(v2 + 32));
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

// Line 1538: range 0000000011FB7AF8-0000000011FB7B3B
data::ConfigCutsceneDialogGroupPtr __cdecl data::ConfigCutsceneDialogGroupFactory::create(
        data::ConfigCutsceneDialogGroupFactory *const this)
{
  data::ConfigCutsceneDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigCutsceneDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1540: range 0000000011FB7B3C-0000000011FB7D4F
bool __cdecl data::ConfigCutsceneDialogGroup::fromJson(
        data::ConfigCutsceneDialogGroup *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1543);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1550: range 0000000011FB7D50-0000000011FB8896
data::ConfigCutsceneDialogGroupPtr __cdecl data::ConfigCutsceneDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigCutsceneDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1563 96 16 8 ptr:1569 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1557 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigCutsceneDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1560);
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[53])"fromJson for: ConfigCutsceneDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1566);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigCutsceneDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigCutsceneDialogGroup>(
               (const std::shared_ptr<data::ConfigCutsceneDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1572);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[44])"cast to ConfigCutsceneDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1577);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigCutsceneDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigCutsceneDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1554);
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[58])"jsonValueFind for: ConfigCutsceneDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigCutsceneDialogGroup>::shared_ptr(
      (std::shared_ptr<data::ConfigCutsceneDialogGroup> *const)jval,
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
  result._M_ptr = (std::__shared_ptr<data::ConfigCutsceneDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1585: range 0000000011FB8898-0000000011FB88B7
int32_t __cdecl data::ConfigCutsceneDialogGroup::getHashValue(const data::ConfigCutsceneDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};

// Line 1594: range 000000001215837C-00000000121585BD
void __cdecl data::ConfigUIDialogGroupRegister::ConfigUIDialogGroupRegister(
        data::ConfigUIDialogGroupRegister *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::shared_ptr<data::ConfigDialogGroup> *v4; // rax
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
  *(_QWORD *)(v1 + 16) = data::ConfigUIDialogGroupRegister::ConfigUIDialogGroupRegister;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -219021312;
  v3[536862724] = -202116109;
  if ( *(_WORD *)(((v1 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigUIDialogGroup>();
  std::allocator<char>::allocator(v1 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v1 + 96),
    "ConfigUIDialogGroup",
    (const std::allocator<char> *)(v1 + 48));
  v4 = std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::operator[](
         &data::g_ConfigDialogGroupMap[abi:cxx11],
         (std::map<std::string,std::shared_ptr<data::ConfigDialogGroup>>::key_type *)(v1 + 96));
  std::shared_ptr<data::ConfigDialogGroup>::operator=<data::ConfigUIDialogGroup>(
    v4,
    (std::shared_ptr<data::ConfigUIDialogGroup> *)(v1 + 64));
  std::string::~string((void *)(v1 + 96));
  *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v1 + 48);
  *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
  std::shared_ptr<data::ConfigUIDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigUIDialogGroup> *const)(v1 + 64));
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

// Line 1597: range 0000000011FB88B8-0000000011FB89EB
void __cdecl data::ConfigUIDialogGroup::foreachMember(
        data::ConfigUIDialogGroup *const this,
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
  v2->_M_manager = (std::_Function_base::_Manager_type)data::ConfigUIDialogGroup::foreachMember;
  v4 = (unsigned __int64)v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  std::function<void ()(std::any &)>::function(v2 + 1, p_func);
  data::ConfigDialogGroup::foreachMember(this, v2 + 1);
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

// Line 1602: range 0000000011FB89EC-0000000011FB8AFC
std::shared_ptr<data::ConfigDialogGroup> __cdecl data::ConfigUIDialogGroup::clone(
        data::ConfigUIDialogGroup *const this)
{
  data::ConfigUIDialogGroup *v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::shared_ptr<data::ConfigDialogGroup> result; // rax
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
  *(_QWORD *)(v2 + 16) = data::ConfigUIDialogGroup::clone;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  common::tools::perf::make_shared<data::ConfigUIDialogGroup,data::ConfigUIDialogGroup&>(
    (common::tools::perf::allocator<data::ConfigUIDialogGroup,data::ConfigUIDialogGroup> *)(v2 + 32),
    v1);
  std::shared_ptr<data::ConfigDialogGroup>::shared_ptr<data::ConfigUIDialogGroup,void>(
    (std::shared_ptr<data::ConfigDialogGroup> *const)this,
    (std::shared_ptr<data::ConfigUIDialogGroup> *)(v2 + 32));
  std::shared_ptr<data::ConfigUIDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigUIDialogGroup> *const)(v2 + 32));
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

// Line 1606: range 0000000011FB8AFE-0000000011FB8B41
data::ConfigUIDialogGroupPtr __cdecl data::ConfigUIDialogGroupFactory::create(
        data::ConfigUIDialogGroupFactory *const this)
{
  data::ConfigUIDialogGroupPtr result; // rax

  if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  result = common::tools::perf::make_shared<data::ConfigUIDialogGroup>();
  result._M_ptr = (std::__shared_ptr<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 1608: range 0000000011FB8B42-0000000011FB8D55
bool __cdecl data::ConfigUIDialogGroup::fromJson(data::ConfigUIDialogGroup *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool result; // al
  char v6[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigUIDialogGroup::fromJson;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( !data::ConfigDialogGroup::fromJson(this, jval) )
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "fromJson",
      1611);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 32),
      (const char (*)[39])"fromJson for: ConfigDialogGroup fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, jval, &this->is_json_loaded);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v6 == (char *)v2 )
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

// Line 1618: range 0000000011FB8D56-0000000011FB989C
data::ConfigUIDialogGroupPtr __cdecl data::ConfigUIDialogGroup::parseFromJson(const Json::Value *jval)
{
  const Json::Value *v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  data::ConfigUIDialogGroupPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "10 48 1 9 <unknown> 64 16 13 base_ptr:1631 96 16 8 ptr:1637 128 32 9 <unknown> 192 32 9 <unknown"
                        "> 256 32 14 type_name:1625 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigUIDialogGroup::parseFromJson;
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
        "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
        "parseFromJson",
        1628);
      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[47])"fromJson for: ConfigUIDialogGroup $type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr(
        (std::shared_ptr<data::ConfigUIDialogGroup> *const)jval,
        0LL);
    }
    else
    {
      *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
      if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store16();
      data::createConfigDialogGroup((const std::string *)(v2 + 64));
      if ( std::operator==<data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 64), 0LL) )
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
          "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
          "parseFromJson",
          1634);
        v6 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
               (common::milog::MiLogStream *const)(v2 + 384),
               (const char (*)[43])"create ConfigDialogGroup fails, type_name:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v2 + 256));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
        *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
        std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr(
          (std::shared_ptr<data::ConfigUIDialogGroup> *const)jval,
          0LL);
      }
      else
      {
        *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store16();
        std::dynamic_pointer_cast<data::ConfigUIDialogGroup,data::ConfigDialogGroup>((const std::shared_ptr<data::ConfigDialogGroup> *)(v2 + 96));
        if ( std::operator==<data::ConfigUIDialogGroup>(
               (const std::shared_ptr<data::ConfigUIDialogGroup> *)(v2 + 96),
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
            "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
            "parseFromJson",
            1640);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 448),
            (const char (*)[38])"cast to ConfigUIDialogGroupPtr fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr(
            (std::shared_ptr<data::ConfigUIDialogGroup> *const)jval,
            0LL);
        }
        else
        {
          v7 = (unsigned __int64)std::__shared_ptr_access<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
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
              "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
              "parseFromJson",
              1645);
            v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                   (common::milog::MiLogStream *const)(v2 + 512),
                   (const std::string *)(v2 + 256));
            common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v9, (const char (*)[17])" fromJson fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigUIDialogGroup> *const)jval,
              0LL);
          }
          else
          {
            v10 = (__int64)std::__shared_ptr_access<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
            v11 = *(_BYTE *)(((unsigned __int64)(v10 + 56) >> 3) + 0x7FFF8000);
            LOBYTE(v1) = v11 != 0;
            v12 = v11 < 0;
            if ( v12 )
              v10 = __asan_report_store1(v10 + 56, v1, v12);
            *(_BYTE *)(v10 + 56) = 1;
            std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr(
              (std::shared_ptr<data::ConfigUIDialogGroup> *const)jval,
              (std::shared_ptr<data::ConfigUIDialogGroup> *)(v2 + 96));
          }
        }
        std::shared_ptr<data::ConfigUIDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigUIDialogGroup> *const)(v2 + 96));
      }
      std::shared_ptr<data::ConfigDialogGroup>::~shared_ptr((std::shared_ptr<data::ConfigDialogGroup> *const)(v2 + 64));
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
      "./src/json_data_auto/ComponentDefines/ConfigTalkScheme.cpp",
      "parseFromJson",
      1622);
    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[52])"jsonValueFind for: ConfigUIDialogGroup $type fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::shared_ptr<data::ConfigUIDialogGroup>::shared_ptr((std::shared_ptr<data::ConfigUIDialogGroup> *const)jval, 0LL);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigUIDialogGroup,(__gnu_cxx::_Lock_policy)2>::element_type *)jval;
  return result;
};

// Line 1653: range 0000000011FB989E-0000000011FB98BD
int32_t __cdecl data::ConfigUIDialogGroup::getHashValue(const data::ConfigUIDialogGroup *const this)
{
  return data::ConfigDialogGroup::getHashValue(this);
};
