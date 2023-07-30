// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRocketJump.cpp

// Line 20: range 00000000120B3088-00000000120B391B
bool __cdecl data::RocketJumpMoveSpeedRatioParam::fromJson(
        data::RocketJumpMoveSpeedRatioParam *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *start_normalized_time_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *end_normalized_time_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *move_speed_ratio_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::RocketJumpMoveSpeedRatioParam::fromJson;
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
    "startNormalizedTime",
    (const std::allocator<char> *)(v2 + 48));
  start_normalized_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( start_normalized_time_ptr && !fromJson<float>(start_normalized_time_ptr, &this->start_normalized_time) )
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
      "./src/json_data_auto/ConfigRocketJump.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[41])"fromJson for: startNormalizedTime fails!");
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
      "endNormalizedTime",
      (const std::allocator<char> *)(v2 + 64));
    end_normalized_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( end_normalized_time_ptr && !fromJson<float>(end_normalized_time_ptr, &this->end_normalized_time) )
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
        "./src/json_data_auto/ConfigRocketJump.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[39])"fromJson for: endNormalizedTime fails!");
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
        "moveSpeedRatio",
        (const std::allocator<char> *)(v2 + 80));
      move_speed_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( move_speed_ratio_ptr && !fromJson<float>(move_speed_ratio_ptr, &this->move_speed_ratio) )
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
          "./src/json_data_auto/ConfigRocketJump.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[36])"fromJson for: moveSpeedRatio fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 12) & 7;
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

// Line 62: range 00000000120B391C-00000000120B392F
int32_t __cdecl data::RocketJumpMoveSpeedRatioParam::getHashValue(
        const data::RocketJumpMoveSpeedRatioParam *const this)
{
  return 0;
};

// Line 68: range 00000000120B3930-00000000120B3D0F
bool __cdecl data::vecFromJson(const Json::Value *jval, data::RocketJumpMoveSpeedRatioParamList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  data::RocketJumpMoveSpeedRatioParam *v10; // rdx
  bool result; // al
  data::RocketJumpMoveSpeedRatioParamList *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v16[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 16 7 elem:74 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
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
      *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 32, i);
      *(_DWORD *)(v3 + 32) = 0;
      v7 = (((_BYTE)v3 + 36) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 36) & 7) + 3) >= *(_BYTE *)(((v3 + 36) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 36, v7);
      }
      *(_DWORD *)(v3 + 36) = 0;
      if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 40, v7);
      *(_DWORD *)(v3 + 40) = 0;
      v8 = ((_BYTE)v3 + 44) & 7;
      v9 = (*(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(v3 + 44, v8, v9);
      *(_BYTE *)(v3 + 44) = 0;
      if ( !data::RocketJumpMoveSpeedRatioParam::fromJson(
              (data::RocketJumpMoveSpeedRatioParam *const)(v3 + 32),
              elem_jval) )
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
          "./src/json_data_auto/ConfigRocketJump.cpp",
          "vecFromJson",
          77);
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
        v10 = std::move<data::RocketJumpMoveSpeedRatioParam &>((data::RocketJumpMoveSpeedRatioParam *)(v3 + 32));
        std::vector<data::RocketJumpMoveSpeedRatioParam>::emplace_back<data::RocketJumpMoveSpeedRatioParam>(
          va,
          v10,
          v10);
        v6 = 2;
      }
    }
    *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_25;
  }
  v2 = 1;
LABEL_25:
  result = v2;
  if ( v16 == (char *)v3 )
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

// Line 87: range 00000000120B3D10-00000000120B3F5C
int32_t __cdecl data::getVecHashValue(const data::RocketJumpMoveSpeedRatioParamList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::RocketJumpMoveSpeedRatioParam*,std::vector<data::RocketJumpMoveSpeedRatioParam> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:88 64 8 14 __for_begin:89 96 8 12 __for_end:89";
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
  *(std::vector<data::RocketJumpMoveSpeedRatioParam>::const_iterator *)(v2 + 64) = std::vector<data::RocketJumpMoveSpeedRatioParam>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::RocketJumpMoveSpeedRatioParam>::const_iterator *)(v2 + 96) = std::vector<data::RocketJumpMoveSpeedRatioParam>::end(vec);
  while ( __gnu_cxx::operator!=<data::RocketJumpMoveSpeedRatioParam const*,std::vector<data::RocketJumpMoveSpeedRatioParam>>(
            (const __gnu_cxx::__normal_iterator<const data::RocketJumpMoveSpeedRatioParam*,std::vector<data::RocketJumpMoveSpeedRatioParam> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::RocketJumpMoveSpeedRatioParam*,std::vector<data::RocketJumpMoveSpeedRatioParam> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::RocketJumpMoveSpeedRatioParam const*,std::vector<data::RocketJumpMoveSpeedRatioParam>>::operator*((const __gnu_cxx::__normal_iterator<const data::RocketJumpMoveSpeedRatioParam*,std::vector<data::RocketJumpMoveSpeedRatioParam> > *const)(v2 + 64));
    HashValue = data::RocketJumpMoveSpeedRatioParam::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::RocketJumpMoveSpeedRatioParam const*,std::vector<data::RocketJumpMoveSpeedRatioParam>>::operator++((__gnu_cxx::__normal_iterator<const data::RocketJumpMoveSpeedRatioParam*,std::vector<data::RocketJumpMoveSpeedRatioParam> > *const)(v2 + 64));
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

// Line 98: range 00000000120B3F5E-00000000120B4541
bool __cdecl data::ConfigRocketJump::fromJson(data::ConfigRocketJump *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::StringArray *p_animator_state_ids; // rsi
  const Json::Value *param_list_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *animator_state_ids_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigRocketJump::fromJson;
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
    "paramList",
    (const std::allocator<char> *)(v2 + 32));
  param_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( param_list_ptr && !data::vecFromJson(param_list_ptr, &this->param_list) )
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
      "./src/json_data_auto/ConfigRocketJump.cpp",
      "fromJson",
      108);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[31])"fromJson for: paramList fails!");
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
      "animatorStateIDs",
      (const std::allocator<char> *)(v2 + 48));
    p_animator_state_ids = (data::StringArray *)(v2 + 192);
    animator_state_ids_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( animator_state_ids_ptr
      && (p_animator_state_ids = &this->animator_state_ids,
          !data::arrFromJson(animator_state_ids_ptr, &this->animator_state_ids)) )
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
        "./src/json_data_auto/ConfigRocketJump.cpp",
        "fromJson",
        120);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[38])"fromJson for: animatorStateIDs fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_animator_state_ids, &this->is_json_loaded);
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

// Line 128: range 00000000120B4542-00000000120B4555
int32_t __cdecl data::ConfigRocketJump::getHashValue(const data::ConfigRocketJump *const this)
{
  return 0;
};

// Line 134: range 00000000120B4556-00000000120B549C
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigRocketJumpMap *m)
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
  data::ConfigRocketJump *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false,false>,bool> v18; // rax
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
  *(_QWORD *)(v3 + 8) = "15 32 4 7 key:139 48 8 9 <unknown> 80 8 9 <unknown> 112 16 7 cit:136 144 16 9 <unknown> 176 32 1"
                        "1 key_str:140 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32"
                        " 9 <unknown> 560 40 12 tmp_jval:135 640 40 12 key_jval:138 720 40 14 value_jval:151 800 56 9 value:152";
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
        "./src/json_data_auto/ConfigRocketJump.cpp",
        "mapFromJson",
        143);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 176), (data::RocketJumpType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigRocketJump.cpp",
        "mapFromJson",
        148);
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
      data::ConfigRocketJump::ConfigRocketJump((data::ConfigRocketJump *const)(v3 + 800));
      if ( !data::ConfigRocketJump::fromJson((data::ConfigRocketJump *const)(v3 + 800), (const Json::Value *)(v3 + 720)) )
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
          "./src/json_data_auto/ConfigRocketJump.cpp",
          "mapFromJson",
          155);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::RocketJumpType)*(_DWORD *)(v3 + 32));
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
        v18 = std::unordered_map<data::RocketJumpType,data::ConfigRocketJump>::emplace<data::RocketJumpType&,data::ConfigRocketJump&>(
                m,
                (data::RocketJumpType *)(v3 + 32),
                (data::ConfigRocketJump *)(v3 + 800),
                (data::RocketJumpType *)(v3 + 32),
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
            "./src/json_data_auto/ConfigRocketJump.cpp",
            "mapFromJson",
            160);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::RocketJumpType)*(_DWORD *)(v3 + 32));
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
      data::ConfigRocketJump::~ConfigRocketJump((data::ConfigRocketJump *const)(v3 + 800));
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

// Line 169: range 00000000120B549D-00000000120B576D
int32_t __cdecl data::getMapHashValue(const data::ConfigRocketJumpMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::RocketJumpType,data::ConfigRocketJump> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::RocketJumpType,data::ConfigRocketJump> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:170 64 8 15 __for_begin:171 96 8 13 __for_end:171";
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
  *(std::unordered_map<data::RocketJumpType,data::ConfigRocketJump>::const_iterator *)(v2 + 64) = std::unordered_map<data::RocketJumpType,data::ConfigRocketJump>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::RocketJumpType,data::ConfigRocketJump>::const_iterator *)(v2 + 96) = std::unordered_map<data::RocketJumpType,data::ConfigRocketJump>::end(map);
  while ( std::__detail::operator!=<std::pair<data::RocketJumpType const,data::ConfigRocketJump>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::RocketJumpType const,data::ConfigRocketJump>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::RocketJumpType const,data::ConfigRocketJump>(v7);
    val = (std::tuple_element<1,const std::pair<const data::RocketJumpType,data::ConfigRocketJump> >::type *)std::get<1ul,data::RocketJumpType const,data::ConfigRocketJump>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigRocketJump::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::RocketJumpType const,data::ConfigRocketJump>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RocketJumpType,data::ConfigRocketJump>,false,false> *const)(v2 + 64));
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
