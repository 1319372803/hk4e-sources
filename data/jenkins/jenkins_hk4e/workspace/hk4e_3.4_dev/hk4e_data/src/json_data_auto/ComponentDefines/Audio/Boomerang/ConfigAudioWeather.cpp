// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp

// Line 20: range 0000000013B891C4-0000000013B89F69
bool __cdecl data::AudioWeatherProperties::fromJson(data::AudioWeatherProperties *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_surface_override; // rsi
  const Json::Value *state_value_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *music_state_value_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *switch_value_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *rtpc_value_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *surface_override_ptr; // [rsp+38h] [rbp-328h]
  char v13[800]; // [rsp+40h] [rbp-320h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(768LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 32 "
                        "9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherProperties::fromJson;
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
  v4[536862743] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 128),
    "stateValue",
    (const std::allocator<char> *)(v2 + 48));
  state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( state_value_ptr && !data::ConfigWwiseString::fromJson(&this->state_value, state_value_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[32])"fromJson for: stateValue fails!");
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
      "musicStateValue",
      (const std::allocator<char> *)(v2 + 64));
    music_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( music_state_value_ptr && !data::ConfigWwiseString::fromJson(&this->music_state_value, music_state_value_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[37])"fromJson for: musicStateValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 384),
        "switchValue",
        (const std::allocator<char> *)(v2 + 80));
      switch_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( switch_value_ptr && !data::ConfigWwiseString::fromJson(&this->switch_value, switch_value_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[33])"fromJson for: switchValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 512),
          "rtpcValue",
          (const std::allocator<char> *)(v2 + 96));
        rtpc_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( rtpc_value_ptr && !fromJson<float>(rtpc_value_ptr, &this->rtpc_value) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[31])"fromJson for: rtpcValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
          result = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 640),
            "surfaceOverride",
            (const std::allocator<char> *)(v2 + 112));
          p_surface_override = (std::string *)(v2 + 640);
          surface_override_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( surface_override_ptr
            && (p_surface_override = &this->surface_override,
                !fromJson<std::string>(surface_override_ptr, &this->surface_override)) )
          {
            *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 704, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 704),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[37])"fromJson for: surfaceOverride fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_surface_override, &this->is_json_loaded);
            this->is_json_loaded = 1;
            result = 1;
          }
        }
      }
    }
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
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

// Line 86: range 0000000013B89F6A-0000000013B8A14C
int32_t __cdecl data::AudioWeatherProperties::getHashValue(const data::AudioWeatherProperties *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:87";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherProperties::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->state_value);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->music_state_value);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->switch_value);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rtpc_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rtpc_value);
  }
  common::tools::HashUtils::appendHash(this->rtpc_value, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->surface_override, (int32_t *)(v2 + 32));
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

// Line 97: range 0000000013B8A14D-0000000013B8ADD4
bool __cdecl data::mapFromJson(const Json::Value *jval, data::AudioWeatherPropertiesMap *m)
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
  data::AudioWeatherProperties *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::AudioWeatherProperties>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  bool result; // al
  char v23[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 16 6 cit:99 64 16 9 <unknown> 96 32 7 key:102 160 32 9 <unknown> 224 32 9 <unknown> 288 32"
                        " 9 <unknown> 352 32 9 <unknown> 416 40 11 tmp_jval:98 496 40 12 key_jval:101 576 40 14 value_jva"
                        "l:108 656 168 9 value:109";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219021312;
  v5[536862722] = -219021312;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959360;
  v5[536862735] = 62194;
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862745] = -218103808;
  v5[536862746] = -202116109;
  v5[536862747] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 416), jval);
  if ( *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 416));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 416));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 32),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 64));
    *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 23) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 496, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 496));
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 96);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 496), (std::string *)(v3 + 96)) )
    {
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "mapFromJson",
        105);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 224), (Json::Value_0 *)(v3 + 496));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 224));
      std::string::~string((void *)(v3 + 224));
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      *(_DWORD *)(((v3 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 576) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 32));
      Json::Value::Value((Json::Value *)(v3 + 576), v11);
      v12 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v12 = 0;
      *(_DWORD *)(v12 + 4) = 0;
      *(_DWORD *)(v12 + 8) = 0;
      *(_DWORD *)(v12 + 12) = 0;
      *(_DWORD *)(v12 + 16) = 0;
      *(_BYTE *)(v12 + 20) = 0;
      data::AudioWeatherProperties::AudioWeatherProperties((data::AudioWeatherProperties *const)(v3 + 656));
      if ( !data::AudioWeatherProperties::fromJson(
              (data::AudioWeatherProperties *const)(v3 + 656),
              (const Json::Value *)(v3 + 576)) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "mapFromJson",
          112);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 288),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,data::AudioWeatherProperties>::emplace<std::string&,data::AudioWeatherProperties&>(
                m,
                (std::string *)(v3 + 96),
                (data::AudioWeatherProperties *)(v3 + 656),
                (std::string *)(v3 + 96),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
            "mapFromJson",
            117);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 352),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
          *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      data::AudioWeatherProperties::~AudioWeatherProperties((data::AudioWeatherProperties *const)(v3 + 656));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 96));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
    v18 = ((v3 + 496) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_DWORD *)(v20 + 4) = -117901064;
    *(_DWORD *)(v20 + 8) = -117901064;
    *(_DWORD *)(v20 + 12) = -117901064;
    *(_DWORD *)(v20 + 16) = -117901064;
    *(_BYTE *)(v20 + 20) = -8;
    if ( !v9 )
    {
      v21 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 32));
  }
  v21 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
  if ( v21 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 416));
  result = v2;
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
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
  return result;
};

// Line 126: range 0000000013B8ADD5-0000000013B8B07C
int32_t __cdecl data::getMapHashValue(const data::AudioWeatherPropertiesMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::AudioWeatherProperties>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::AudioWeatherProperties> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::AudioWeatherProperties> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:127 64 8 15 __for_begin:128 96 8 13 __for_end:128";
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
  *(std::unordered_map<std::string,data::AudioWeatherProperties>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::AudioWeatherProperties>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::AudioWeatherProperties>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::AudioWeatherProperties>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::AudioWeatherProperties>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AudioWeatherProperties>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::AudioWeatherProperties>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::AudioWeatherProperties>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::AudioWeatherProperties>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::AudioWeatherProperties>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::AudioWeatherProperties> >::type *)std::get<1ul,std::string const,data::AudioWeatherProperties>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::AudioWeatherProperties::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::AudioWeatherProperties>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::AudioWeatherProperties>,false,true> *const)(v2 + 64));
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

// Line 140: range 0000000013B8B07E-0000000013B8B90C
bool __cdecl data::AudioWeatherWorkSet::fromJson(data::AudioWeatherWorkSet *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  const Json::Value *v6; // rsi
  const Json::Value *state_group_name_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *activeness_rtpc_name_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *workset_switch_value_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::AudioWeatherWorkSet::fromJson;
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
    "stateGroupName",
    (const std::allocator<char> *)(v2 + 48));
  state_group_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( state_group_name_ptr && !data::ConfigWwiseString::fromJson(&this->state_group_name, state_group_name_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
      "fromJson",
      150);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[36])"fromJson for: stateGroupName fails!");
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
      "activenessRtpcName",
      (const std::allocator<char> *)(v2 + 64));
    activeness_rtpc_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( activeness_rtpc_name_ptr
      && !data::ConfigWwiseString::fromJson(&this->activeness_rtpc_name, activeness_rtpc_name_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "fromJson",
        162);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[40])"fromJson for: activenessRtpcName fails!");
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
        "worksetSwitchValue",
        (const std::allocator<char> *)(v2 + 80));
      v6 = (const Json::Value *)(v2 + 352);
      workset_switch_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( workset_switch_value_ptr
        && (v6 = workset_switch_value_ptr,
            !data::ConfigWwiseString::fromJson(&this->workset_switch_value, workset_switch_value_ptr)) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "fromJson",
          174);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[40])"fromJson for: worksetSwitchValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
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

// Line 182: range 0000000013B8B90E-0000000013B8BA8A
int32_t __cdecl data::AudioWeatherWorkSet::getHashValue(const data::AudioWeatherWorkSet *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:183";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherWorkSet::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->state_group_name);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->activeness_rtpc_name);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->workset_switch_value);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
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

// Line 191: range 0000000013B8BA8B-0000000013B8BD67
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigWeatherTypeList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::ConfigWeatherType> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:197 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
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
      if ( !fromJson<data::ConfigWeatherType>(elem_jval, (data::ConfigWeatherType *)(v3 + 48)) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "vecFromJson",
          200);
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
        std::vector<data::ConfigWeatherType>::push_back(
          va,
          (const std::vector<data::ConfigWeatherType>::value_type *)(v3 + 48));
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

// Line 210: range 0000000013B8BD68-0000000013B8BFE9
int32_t __cdecl data::getVecHashValue(const data::ConfigWeatherTypeList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ConfigWeatherType *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:211 64 8 15 __for_begin:212 96 8 13 __for_end:212";
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
  *(std::vector<data::ConfigWeatherType>::const_iterator *)(v2 + 64) = std::vector<data::ConfigWeatherType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigWeatherType>::const_iterator *)(v2 + 96) = std::vector<data::ConfigWeatherType>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigWeatherType const*,std::vector<data::ConfigWeatherType>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigWeatherType*,std::vector<data::ConfigWeatherType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigWeatherType*,std::vector<data::ConfigWeatherType> > *)(v2 + 96)) )
  {
    v5 = (data::ConfigWeatherType *)__gnu_cxx::__normal_iterator<data::ConfigWeatherType const*,std::vector<data::ConfigWeatherType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigWeatherType*,std::vector<data::ConfigWeatherType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigWeatherType const*,std::vector<data::ConfigWeatherType>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigWeatherType*,std::vector<data::ConfigWeatherType> > *const)(v2 + 64));
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

// Line 221: range 0000000013B8BFEA-0000000013B8C5D2
bool __cdecl data::AudioWeatherVoTrigger_TimeRule::fromJson(
        data::AudioWeatherVoTrigger_TimeRule *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *from_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *to_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::AudioWeatherVoTrigger_TimeRule::fromJson;
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
    "from",
    (const std::allocator<char> *)(v2 + 32));
  from_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( from_ptr && !fromJson<float>(from_ptr, &this->from) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
      "fromJson",
      231);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[26])"fromJson for: from fails!");
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
      "to",
      (const std::allocator<char> *)(v2 + 48));
    to_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( to_ptr && !fromJson<float>(to_ptr, &this->to) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "fromJson",
        243);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[24])"fromJson for: to fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 8) & 7;
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

// Line 251: range 0000000013B8C5D4-0000000013B8C792
int32_t __cdecl data::AudioWeatherVoTrigger_TimeRule::getHashValue(
        const data::AudioWeatherVoTrigger_TimeRule *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:252";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherVoTrigger_TimeRule::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)this & 7) + 3) >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(this);
  }
  common::tools::HashUtils::appendHash(this->from, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->to >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->to);
  }
  common::tools::HashUtils::appendHash(this->to, (int32_t *)(v2 + 32));
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

// Line 259: range 0000000013B8C793-0000000013B8CB31
bool __cdecl data::vecFromJson(const Json::Value *jval, data::AudioWeatherVoTrigger_TimeRuleList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  data::AudioWeatherVoTrigger_TimeRule *v8; // rdx
  bool result; // al
  std::vector<data::AudioWeatherVoTrigger_TimeRule> *va; // [rsp+0h] [rbp-D0h]
  Json::Value *jvala; // [rsp+8h] [rbp-C8h]
  uint32_t i; // [rsp+14h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-B8h]
  char v14[176]; // [rsp+20h] [rbp-B0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 12 8 elem:265 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -219020288;
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
      *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 1024;
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
      if ( *(char *)(((v3 + 40) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 40, v7, v3 + 40);
      *(_BYTE *)(v3 + 40) = 0;
      if ( !data::AudioWeatherVoTrigger_TimeRule::fromJson(
              (data::AudioWeatherVoTrigger_TimeRule *const)(v3 + 32),
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "vecFromJson",
          268);
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
        v8 = std::move<data::AudioWeatherVoTrigger_TimeRule &>((data::AudioWeatherVoTrigger_TimeRule *)(v3 + 32));
        std::vector<data::AudioWeatherVoTrigger_TimeRule>::emplace_back<data::AudioWeatherVoTrigger_TimeRule>(
          va,
          v8,
          v8);
        v6 = 2;
      }
    }
    *(_WORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v6 && v6 != 2 )
      goto LABEL_23;
  }
  v2 = 1;
LABEL_23:
  result = v2;
  if ( v14 == (char *)v3 )
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

// Line 278: range 0000000013B8CB32-0000000013B8CD7E
int32_t __cdecl data::getVecHashValue(const data::AudioWeatherVoTrigger_TimeRuleList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger_TimeRule*,std::vector<data::AudioWeatherVoTrigger_TimeRule> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:279 64 8 15 __for_begin:280 96 8 13 __for_end:280";
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
  *(std::vector<data::AudioWeatherVoTrigger_TimeRule>::const_iterator *)(v2 + 64) = std::vector<data::AudioWeatherVoTrigger_TimeRule>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::AudioWeatherVoTrigger_TimeRule>::const_iterator *)(v2 + 96) = std::vector<data::AudioWeatherVoTrigger_TimeRule>::end(vec);
  while ( __gnu_cxx::operator!=<data::AudioWeatherVoTrigger_TimeRule const*,std::vector<data::AudioWeatherVoTrigger_TimeRule>>(
            (const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger_TimeRule*,std::vector<data::AudioWeatherVoTrigger_TimeRule> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger_TimeRule*,std::vector<data::AudioWeatherVoTrigger_TimeRule> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::AudioWeatherVoTrigger_TimeRule const*,std::vector<data::AudioWeatherVoTrigger_TimeRule>>::operator*((const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger_TimeRule*,std::vector<data::AudioWeatherVoTrigger_TimeRule> > *const)(v2 + 64));
    HashValue = data::AudioWeatherVoTrigger_TimeRule::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::AudioWeatherVoTrigger_TimeRule const*,std::vector<data::AudioWeatherVoTrigger_TimeRule>>::operator++((__gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger_TimeRule*,std::vector<data::AudioWeatherVoTrigger_TimeRule> > *const)(v2 + 64));
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

// Line 289: range 0000000013B8CD80-0000000013B8E73C
bool __cdecl data::AudioWeatherVoTrigger::fromJson(data::AudioWeatherVoTrigger *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::AudioWeatherVoTrigger_TimeRuleList *p_time_limit; // rsi
  bool v7; // bl
  const Json::Value *weather_type_list_ptr; // [rsp+10h] [rbp-630h]
  const Json::Value *weather_type_is_include_ptr; // [rsp+18h] [rbp-628h]
  const Json::Value *weather_list_ptr; // [rsp+20h] [rbp-620h]
  const Json::Value *weather_is_include_ptr; // [rsp+28h] [rbp-618h]
  const Json::Value *previous_weather_type_list_ptr; // [rsp+30h] [rbp-610h]
  const Json::Value *previous_weather_type_is_include_ptr; // [rsp+38h] [rbp-608h]
  const Json::Value *previous_weather_list_ptr; // [rsp+40h] [rbp-600h]
  const Json::Value *previous_weather_is_include_ptr; // [rsp+48h] [rbp-5F8h]
  const Json::Value *vo_trigger_ptr; // [rsp+50h] [rbp-5F0h]
  const Json::Value *time_limit_ptr; // [rsp+58h] [rbp-5E8h]
  char v20[1504]; // [rsp+60h] [rbp-5E0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1472LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "30 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknow"
                        "n> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkn"
                        "own> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherVoTrigger::fromJson;
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
  v4[536862765] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "weatherTypeList",
    (const std::allocator<char> *)(v2 + 32));
  weather_type_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( weather_type_list_ptr && !data::vecFromJson(weather_type_list_ptr, &this->weather_type_list) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
      "fromJson",
      299);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[37])"fromJson for: weatherTypeList fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      "weatherTypeIsInclude",
      (const std::allocator<char> *)(v2 + 48));
    weather_type_is_include_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( weather_type_is_include_ptr && !fromJson<bool>(weather_type_is_include_ptr, &this->weather_type_is_include) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "fromJson",
        311);
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[42])"fromJson for: weatherTypeIsInclude fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 448),
        "weatherList",
        (const std::allocator<char> *)(v2 + 64));
      weather_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( weather_list_ptr && !data::vecFromJson(weather_list_ptr, &this->weather_list) )
      {
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "fromJson",
          323);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 512),
          (const char (*)[33])"fromJson for: weatherList fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 576),
          "weatherIsInclude",
          (const std::allocator<char> *)(v2 + 80));
        weather_is_include_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( weather_is_include_ptr && !fromJson<bool>(weather_is_include_ptr, &this->weather_is_include) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
            "fromJson",
            335);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[38])"fromJson for: weatherIsInclude fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 704),
            "previousWeatherTypeList",
            (const std::allocator<char> *)(v2 + 96));
          previous_weather_type_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( previous_weather_type_list_ptr
            && !data::vecFromJson(previous_weather_type_list_ptr, &this->previous_weather_type_list) )
          {
            *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 768, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 768),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
              "fromJson",
              347);
            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[45])"fromJson for: previousWeatherTypeList fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 832),
              "previousWeatherTypeIsInclude",
              (const std::allocator<char> *)(v2 + 112));
            previous_weather_type_is_include_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
            std::string::~string((void *)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( previous_weather_type_is_include_ptr
              && !fromJson<bool>(previous_weather_type_is_include_ptr, &this->previous_weather_type_is_include) )
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
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                "fromJson",
                359);
              common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[50])"fromJson for: previousWeatherTypeIsInclude fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 960),
                "previousWeatherList",
                (const std::allocator<char> *)(v2 + 128));
              previous_weather_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( previous_weather_list_ptr
                && !data::vecFromJson(previous_weather_list_ptr, &this->previous_weather_list) )
              {
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1024, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1024),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                  "fromJson",
                  371);
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  (common::milog::MiLogStream *const)(v2 + 1024),
                  (const char (*)[41])"fromJson for: previousWeatherList fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1088),
                  "previousWeatherIsInclude",
                  (const std::allocator<char> *)(v2 + 144));
                previous_weather_is_include_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
                std::string::~string((void *)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( previous_weather_is_include_ptr
                  && !fromJson<bool>(previous_weather_is_include_ptr, &this->previous_weather_is_include) )
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
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                    "fromJson",
                    383);
                  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[46])"fromJson for: previousWeatherIsInclude fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1216),
                    "voTrigger",
                    (const std::allocator<char> *)(v2 + 160));
                  vo_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                  std::string::~string((void *)(v2 + 1216));
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( vo_trigger_ptr && !data::VoiceTriggerIdentity::fromJson(&this->vo_trigger, vo_trigger_ptr) )
                  {
                    *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1280, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1280),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                      "fromJson",
                      395);
                    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[31])"fromJson for: voTrigger fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1344),
                      "timeLimit",
                      (const std::allocator<char> *)(v2 + 176));
                    p_time_limit = (data::AudioWeatherVoTrigger_TimeRuleList *)(v2 + 1344);
                    time_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                    std::string::~string((void *)(v2 + 1344));
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( time_limit_ptr
                      && (p_time_limit = &this->time_limit, !data::vecFromJson(time_limit_ptr, &this->time_limit)) )
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
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                        "fromJson",
                        407);
                      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        (common::milog::MiLogStream *const)(v2 + 1408),
                        (const char (*)[31])"fromJson for: timeLimit fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                      v5 = 0;
                    }
                    else
                    {
                      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                        __asan_report_store1(&this->is_json_loaded, p_time_limit, &this->is_json_loaded);
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
  v7 = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1472LL, v20);
  }
  return v7;
};

// Line 415: range 0000000013B8E73E-0000000013B8EA48
int32_t __cdecl data::AudioWeatherVoTrigger::getHashValue(const data::AudioWeatherVoTrigger *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t HashValue; // eax
  int32_t v10; // eax
  int32_t result; // eax
  char v12[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:416";
  *(_QWORD *)(v2 + 16) = data::AudioWeatherVoTrigger::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->weather_type_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->weather_type_is_include, v2 + 32, &this->weather_type_is_include);
  common::tools::HashUtils::appendHash(this->weather_type_is_include, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->weather_list);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->weather_is_include, v2 + 32, &this->weather_is_include);
  common::tools::HashUtils::appendHash(this->weather_is_include, (int32_t *)(v2 + 32));
  v7 = data::getVecHashValue(&this->previous_weather_type_list);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->previous_weather_type_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->previous_weather_type_is_include, v2 + 32, &this->previous_weather_type_is_include);
  common::tools::HashUtils::appendHash(this->previous_weather_type_is_include, (int32_t *)(v2 + 32));
  v8 = data::getVecHashValue(&this->previous_weather_list);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->previous_weather_is_include >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->previous_weather_is_include, v2 + 32, &this->previous_weather_is_include);
  common::tools::HashUtils::appendHash(this->previous_weather_is_include, (int32_t *)(v2 + 32));
  HashValue = data::VoiceTriggerIdentity::getHashValue(&this->vo_trigger);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v10 = data::getVecHashValue(&this->time_limit);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v12 == (char *)v2 )
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

// Line 431: range 0000000013B8EA49-0000000013B8EE85
bool __cdecl data::vecFromJson(const Json::Value *jval, data::AudioWeatherVoTriggers *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // rbx
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::AudioWeatherVoTrigger *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-1C0h]
  char v12; // [rsp+8h] [rbp-1B8h]
  bool v13; // [rsp+Fh] [rbp-1B1h]
  uint32_t i; // [rsp+24h] [rbp-19Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-198h]
  char v16[400]; // [rsp+30h] [rbp-190h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 168 8 elem:437";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = 61937;
  v4[536862722] = -219021312;
  v4[536862723] = 62194;
  v4[536862728] = -218103808;
  v4[536862729] = -202116109;
  v4[536862730] = -202116109;
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
      *(_DWORD *)(v6 + 12) = 0;
      *(_DWORD *)(v6 + 16) = 0;
      *(_BYTE *)(v6 + 20) = 0;
      data::AudioWeatherVoTrigger::AudioWeatherVoTrigger((data::AudioWeatherVoTrigger *const)(v2 + 112));
      if ( !data::AudioWeatherVoTrigger::fromJson((data::AudioWeatherVoTrigger *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "vecFromJson",
          440);
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
        v8 = std::move<data::AudioWeatherVoTrigger &>((data::AudioWeatherVoTrigger *)(v2 + 112));
        std::vector<data::AudioWeatherVoTrigger>::emplace_back<data::AudioWeatherVoTrigger>(v, v8, v8);
        v7 = 1;
      }
      data::AudioWeatherVoTrigger::~AudioWeatherVoTrigger((data::AudioWeatherVoTrigger *const)(v2 + 112));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 112) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_DWORD *)(v9 + 8) = -117901064;
    *(_DWORD *)(v9 + 12) = -117901064;
    *(_DWORD *)(v9 + 16) = -117901064;
    *(_BYTE *)(v9 + 20) = -8;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 450: range 0000000013B8EE86-0000000013B8F0D2
int32_t __cdecl data::getVecHashValue(const data::AudioWeatherVoTriggers *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger*,std::vector<data::AudioWeatherVoTrigger> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:451 64 8 15 __for_begin:452 96 8 13 __for_end:452";
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
  *(std::vector<data::AudioWeatherVoTrigger>::const_iterator *)(v2 + 64) = std::vector<data::AudioWeatherVoTrigger>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::AudioWeatherVoTrigger>::const_iterator *)(v2 + 96) = std::vector<data::AudioWeatherVoTrigger>::end(vec);
  while ( __gnu_cxx::operator!=<data::AudioWeatherVoTrigger const*,std::vector<data::AudioWeatherVoTrigger>>(
            (const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger*,std::vector<data::AudioWeatherVoTrigger> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger*,std::vector<data::AudioWeatherVoTrigger> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::AudioWeatherVoTrigger const*,std::vector<data::AudioWeatherVoTrigger>>::operator*((const __gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger*,std::vector<data::AudioWeatherVoTrigger> > *const)(v2 + 64));
    HashValue = data::AudioWeatherVoTrigger::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::AudioWeatherVoTrigger const*,std::vector<data::AudioWeatherVoTrigger>>::operator++((__gnu_cxx::__normal_iterator<const data::AudioWeatherVoTrigger*,std::vector<data::AudioWeatherVoTrigger> > *const)(v2 + 64));
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

// Line 461: range 0000000013B8F0D4-0000000013B93CDB
bool __cdecl data::ConfigAudioWeather::fromJson(data::ConfigAudioWeather *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  float *p_angle_dynamic_update_rate; // rsi
  bool v7; // bl
  const Json::Value *transition_rtpc_key_ptr; // [rsp+10h] [rbp-1210h]
  const Json::Value *dominant_state_name_ptr; // [rsp+18h] [rbp-1208h]
  const Json::Value *dominant_switch_name_ptr; // [rsp+20h] [rbp-1200h]
  const Json::Value *dominant_rtpc_key_ptr; // [rsp+28h] [rbp-11F8h]
  const Json::Value *dominant_state_name_without_delay_ptr; // [rsp+30h] [rbp-11F0h]
  const Json::Value *dominant_rtpc_key_without_delay_ptr; // [rsp+38h] [rbp-11E8h]
  const Json::Value *time_of_day_rtpc_key_ptr; // [rsp+40h] [rbp-11E0h]
  const Json::Value *avatar_speech_event_ptr; // [rsp+48h] [rbp-11D8h]
  const Json::Value *enable_default_weather_state_setting_ptr; // [rsp+50h] [rbp-11D0h]
  const Json::Value *default_weather_state_ptr; // [rsp+58h] [rbp-11C8h]
  const Json::Value *weather_state_map_ptr; // [rsp+60h] [rbp-11C0h]
  const Json::Value *workset1_ptr; // [rsp+68h] [rbp-11B8h]
  const Json::Value *workset2_ptr; // [rsp+70h] [rbp-11B0h]
  const Json::Value *near_thunder_start_ptr; // [rsp+78h] [rbp-11A8h]
  const Json::Value *near_thunder_end_ptr; // [rsp+80h] [rbp-11A0h]
  const Json::Value *distant_thunder_start_ptr; // [rsp+88h] [rbp-1198h]
  const Json::Value *distant_thunder_end_ptr; // [rsp+90h] [rbp-1190h]
  const Json::Value *sky_thunder_ptr; // [rsp+98h] [rbp-1188h]
  const Json::Value *workset_switch_key_ptr; // [rsp+A0h] [rbp-1180h]
  const Json::Value *wind_speed_rtpc_key_ptr; // [rsp+A8h] [rbp-1178h]
  const Json::Value *wind_direction_rtpc_key_ptr; // [rsp+B0h] [rbp-1170h]
  const Json::Value *climate_rtpc_key_ptr; // [rsp+B8h] [rbp-1168h]
  const Json::Value *climate_rtpcmap_ptr; // [rsp+C0h] [rbp-1160h]
  const Json::Value *weather_voice_triggers_ptr; // [rsp+C8h] [rbp-1158h]
  const Json::Value *thunder_voice_trigger_ptr; // [rsp+D0h] [rbp-1150h]
  const Json::Value *thunder_voice_cooldown_ptr; // [rsp+D8h] [rbp-1148h]
  const Json::Value *enviro_time_rtpc_key_ptr; // [rsp+E0h] [rbp-1140h]
  const Json::Value *angle_between_wind_and_listener_rtpc_key_ptr; // [rsp+E8h] [rbp-1138h]
  const Json::Value *angle_static_update_rate_ptr; // [rsp+F0h] [rbp-1130h]
  const Json::Value *angle_dynamic_update_rate_ptr; // [rsp+F8h] [rbp-1128h]
  char v40[4384]; // [rsp+100h] [rbp-1120h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4352LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "90 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 "
                        "<unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkno"
                        "wn> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> "
                        "640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 9"
                        "60 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown"
                        "> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unk"
                        "nown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 "
                        "<unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 3"
                        "2 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 24"
                        "96 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown"
                        "> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unk"
                        "nown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 "
                        "<unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712 3"
                        "2 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 32 9 <unknown> 3968 32 9 <unknown> 40"
                        "32 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4224 32 9 <unknown> 4288 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioWeather::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
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
  v4[536862855] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 512),
    "transitionRtpcKey",
    (const std::allocator<char> *)(v2 + 32));
  transition_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
  std::string::~string((void *)(v2 + 512));
  *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( transition_rtpc_key_ptr
    && !data::ConfigWwiseString::fromJson(&this->transition_rtpc_key, transition_rtpc_key_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
      "fromJson",
      471);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 576),
      (const char (*)[39])"fromJson for: transitionRtpcKey fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 640),
      "dominantStateName",
      (const std::allocator<char> *)(v2 + 48));
    dominant_state_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
    std::string::~string((void *)(v2 + 640));
    *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( dominant_state_name_ptr
      && !data::ConfigWwiseString::fromJson(&this->dominant_state_name, dominant_state_name_ptr) )
    {
      *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 704, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 704),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
        "fromJson",
        483);
      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
        (common::milog::MiLogStream *const)(v2 + 704),
        (const char (*)[39])"fromJson for: dominantStateName fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 768),
        "dominantSwitchName",
        (const std::allocator<char> *)(v2 + 64));
      dominant_switch_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
      std::string::~string((void *)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( dominant_switch_name_ptr
        && !data::ConfigWwiseString::fromJson(&this->dominant_switch_name, dominant_switch_name_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
          "fromJson",
          495);
        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
          (common::milog::MiLogStream *const)(v2 + 832),
          (const char (*)[40])"fromJson for: dominantSwitchName fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 896),
          "dominantRtpcKey",
          (const std::allocator<char> *)(v2 + 80));
        dominant_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
        std::string::~string((void *)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( dominant_rtpc_key_ptr
          && !data::ConfigWwiseString::fromJson(&this->dominant_rtpc_key, dominant_rtpc_key_ptr) )
        {
          *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 960, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 960),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
            "fromJson",
            507);
          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
            (common::milog::MiLogStream *const)(v2 + 960),
            (const char (*)[37])"fromJson for: dominantRtpcKey fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1024),
            "dominantStateNameWithoutDelay",
            (const std::allocator<char> *)(v2 + 96));
          dominant_state_name_without_delay_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
          std::string::~string((void *)(v2 + 1024));
          *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( dominant_state_name_without_delay_ptr
            && !data::ConfigWwiseString::fromJson(
                  &this->dominant_state_name_without_delay,
                  dominant_state_name_without_delay_ptr) )
          {
            *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1088) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1119) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1088, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1088),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
              "fromJson",
              519);
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)(v2 + 1088),
              (const char (*)[51])"fromJson for: dominantStateNameWithoutDelay fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1152),
              "dominantRtpcKeyWithoutDelay",
              (const std::allocator<char> *)(v2 + 112));
            dominant_rtpc_key_without_delay_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
            std::string::~string((void *)(v2 + 1152));
            *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( dominant_rtpc_key_without_delay_ptr
              && !data::ConfigWwiseString::fromJson(
                    &this->dominant_rtpc_key_without_delay,
                    dominant_rtpc_key_without_delay_ptr) )
            {
              *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1216) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1247) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1216, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1216),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                "fromJson",
                531);
              common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                (common::milog::MiLogStream *const)(v2 + 1216),
                (const char (*)[49])"fromJson for: dominantRtpcKeyWithoutDelay fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1280),
                "timeOfDayRtpcKey",
                (const std::allocator<char> *)(v2 + 128));
              time_of_day_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
              std::string::~string((void *)(v2 + 1280));
              *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( time_of_day_rtpc_key_ptr
                && !data::ConfigWwiseString::fromJson(&this->time_of_day_rtpc_key, time_of_day_rtpc_key_ptr) )
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
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                  "fromJson",
                  543);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 1344),
                  (const char (*)[38])"fromJson for: timeOfDayRtpcKey fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1408),
                  "avatarSpeechEvent",
                  (const std::allocator<char> *)(v2 + 144));
                avatar_speech_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
                std::string::~string((void *)(v2 + 1408));
                *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( avatar_speech_event_ptr
                  && !data::ConfigWwiseString::fromJson(&this->avatar_speech_event, avatar_speech_event_ptr) )
                {
                  *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1472) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1503) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1472, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1472),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                    "fromJson",
                    555);
                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                    (common::milog::MiLogStream *const)(v2 + 1472),
                    (const char (*)[39])"fromJson for: avatarSpeechEvent fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1536),
                    "enableDefaultWeatherStateSetting",
                    (const std::allocator<char> *)(v2 + 160));
                  enable_default_weather_state_setting_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1536));
                  std::string::~string((void *)(v2 + 1536));
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( enable_default_weather_state_setting_ptr
                    && !fromJson<bool>(
                          enable_default_weather_state_setting_ptr,
                          &this->enable_default_weather_state_setting) )
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
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                      "fromJson",
                      567);
                    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                      (common::milog::MiLogStream *const)(v2 + 1600),
                      (const char (*)[54])"fromJson for: enableDefaultWeatherStateSetting fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1664),
                      "defaultWeatherState",
                      (const std::allocator<char> *)(v2 + 176));
                    default_weather_state_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1664));
                    std::string::~string((void *)(v2 + 1664));
                    *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( default_weather_state_ptr
                      && !data::AudioWeatherProperties::fromJson(
                            &this->default_weather_state,
                            default_weather_state_ptr) )
                    {
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1728, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1728),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                        "fromJson",
                        579);
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        (common::milog::MiLogStream *const)(v2 + 1728),
                        (const char (*)[41])"fromJson for: defaultWeatherState fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1792),
                        "weatherStateMap",
                        (const std::allocator<char> *)(v2 + 192));
                      weather_state_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1792));
                      std::string::~string((void *)(v2 + 1792));
                      *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( weather_state_map_ptr && !data::mapFromJson(weather_state_map_ptr, &this->weather_state_map) )
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
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                          "fromJson",
                          591);
                        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                          (common::milog::MiLogStream *const)(v2 + 1856),
                          (const char (*)[37])"fromJson for: weatherStateMap fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1920),
                          "workset1",
                          (const std::allocator<char> *)(v2 + 208));
                        workset1_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1920));
                        std::string::~string((void *)(v2 + 1920));
                        *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( workset1_ptr && !data::AudioWeatherWorkSet::fromJson(&this->workset1, workset1_ptr) )
                        {
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1984, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1984),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                            "fromJson",
                            603);
                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            (common::milog::MiLogStream *const)(v2 + 1984),
                            (const char (*)[30])"fromJson for: workset1 fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2048),
                            "workset2",
                            (const std::allocator<char> *)(v2 + 224));
                          workset2_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2048));
                          std::string::~string((void *)(v2 + 2048));
                          *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( workset2_ptr && !data::AudioWeatherWorkSet::fromJson(&this->workset2, workset2_ptr) )
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
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                              "fromJson",
                              615);
                            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                              (common::milog::MiLogStream *const)(v2 + 2112),
                              (const char (*)[30])"fromJson for: workset2 fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2176),
                              "nearThunderStart",
                              (const std::allocator<char> *)(v2 + 240));
                            near_thunder_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2176));
                            std::string::~string((void *)(v2 + 2176));
                            *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( near_thunder_start_ptr
                              && !data::AudioOneTimeEvent::fromJson(&this->near_thunder_start, near_thunder_start_ptr) )
                            {
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2240, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2240),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                "fromJson",
                                627);
                              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                (common::milog::MiLogStream *const)(v2 + 2240),
                                (const char (*)[38])"fromJson for: nearThunderStart fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2304),
                                "nearThunderEnd",
                                (const std::allocator<char> *)(v2 + 256));
                              near_thunder_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2304));
                              std::string::~string((void *)(v2 + 2304));
                              *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( near_thunder_end_ptr
                                && !data::AudioOneTimeEvent::fromJson(&this->near_thunder_end, near_thunder_end_ptr) )
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
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                  "fromJson",
                                  639);
                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2368),
                                  (const char (*)[36])"fromJson for: nearThunderEnd fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2432),
                                  "distantThunderStart",
                                  (const std::allocator<char> *)(v2 + 272));
                                distant_thunder_start_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2432));
                                std::string::~string((void *)(v2 + 2432));
                                *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( distant_thunder_start_ptr
                                  && !data::AudioOneTimeEvent::fromJson(
                                        &this->distant_thunder_start,
                                        distant_thunder_start_ptr) )
                                {
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2496, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2496),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                    "fromJson",
                                    651);
                                  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2496),
                                    (const char (*)[41])"fromJson for: distantThunderStart fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2560),
                                    "distantThunderEnd",
                                    (const std::allocator<char> *)(v2 + 288));
                                  distant_thunder_end_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2560));
                                  std::string::~string((void *)(v2 + 2560));
                                  *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( distant_thunder_end_ptr
                                    && !data::AudioOneTimeEvent::fromJson(
                                          &this->distant_thunder_end,
                                          distant_thunder_end_ptr) )
                                  {
                                    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2624) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2624, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2624),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                      "fromJson",
                                      663);
                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2624),
                                      (const char (*)[39])"fromJson for: distantThunderEnd fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2688),
                                      "skyThunder",
                                      (const std::allocator<char> *)(v2 + 304));
                                    sky_thunder_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2688));
                                    std::string::~string((void *)(v2 + 2688));
                                    *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( sky_thunder_ptr
                                      && !data::AudioOneTimeEvent::fromJson(&this->sky_thunder, sky_thunder_ptr) )
                                    {
                                      *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2752, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2752),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                        "fromJson",
                                        675);
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2752),
                                        (const char (*)[32])"fromJson for: skyThunder fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2816),
                                        "worksetSwitchKey",
                                        (const std::allocator<char> *)(v2 + 320));
                                      workset_switch_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2816));
                                      std::string::~string((void *)(v2 + 2816));
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( workset_switch_key_ptr
                                        && !data::ConfigWwiseString::fromJson(
                                              &this->workset_switch_key,
                                              workset_switch_key_ptr) )
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
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                          "fromJson",
                                          687);
                                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2880),
                                          (const char (*)[38])"fromJson for: worksetSwitchKey fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2880));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2944),
                                          "windSpeedRtpcKey",
                                          (const std::allocator<char> *)(v2 + 336));
                                        wind_speed_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2944));
                                        std::string::~string((void *)(v2 + 2944));
                                        *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( wind_speed_rtpc_key_ptr
                                          && !data::ConfigWwiseString::fromJson(
                                                &this->wind_speed_rtpc_key,
                                                wind_speed_rtpc_key_ptr) )
                                        {
                                          *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3008, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3008),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                            "fromJson",
                                            699);
                                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3008),
                                            (const char (*)[38])"fromJson for: windSpeedRtpcKey fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 352);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3072),
                                            "windDirectionRtpcKey",
                                            (const std::allocator<char> *)(v2 + 352));
                                          wind_direction_rtpc_key_ptr = jsonValueFind(
                                                                          jval,
                                                                          (const std::string *)(v2 + 3072));
                                          std::string::~string((void *)(v2 + 3072));
                                          *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 352);
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                          if ( wind_direction_rtpc_key_ptr
                                            && !data::ConfigWwiseString::fromJson(
                                                  &this->wind_direction_rtpc_key,
                                                  wind_direction_rtpc_key_ptr) )
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
                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                              "fromJson",
                                              711);
                                            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3136),
                                              (const char (*)[42])"fromJson for: windDirectionRtpcKey fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3136));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 368);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3200),
                                              "climateRtpcKey",
                                              (const std::allocator<char> *)(v2 + 368));
                                            climate_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3200));
                                            std::string::~string((void *)(v2 + 3200));
                                            *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 368);
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                            if ( climate_rtpc_key_ptr
                                              && !data::ConfigWwiseString::fromJson(
                                                    &this->climate_rtpc_key,
                                                    climate_rtpc_key_ptr) )
                                            {
                                              *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3264) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3295) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3295) >> 3)
                                                                                          + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3264, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3264),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                "fromJson",
                                                723);
                                              common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3264),
                                                (const char (*)[36])"fromJson for: climateRtpcKey fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3264));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 384);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3328),
                                                "climateRTPCMap",
                                                (const std::allocator<char> *)(v2 + 384));
                                              climate_rtpcmap_ptr = jsonValueFind(
                                                                      jval,
                                                                      (const std::string *)(v2 + 3328));
                                              std::string::~string((void *)(v2 + 3328));
                                              *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 384);
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                              if ( climate_rtpcmap_ptr
                                                && !data::mapFromJson(climate_rtpcmap_ptr, &this->climate_rtpcmap) )
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
                                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                  "fromJson",
                                                  735);
                                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3392),
                                                  (const char (*)[36])"fromJson for: climateRTPCMap fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3392));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 400);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3456),
                                                  "weatherVoiceTriggers",
                                                  (const std::allocator<char> *)(v2 + 400));
                                                weather_voice_triggers_ptr = jsonValueFind(
                                                                               jval,
                                                                               (const std::string *)(v2 + 3456));
                                                std::string::~string((void *)(v2 + 3456));
                                                *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 400);
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                                if ( weather_voice_triggers_ptr
                                                  && !data::vecFromJson(
                                                        weather_voice_triggers_ptr,
                                                        &this->weather_voice_triggers) )
                                                {
                                                  *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3520) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3551) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3551) >> 3)
                                                                                              + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3520, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3520),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                    "fromJson",
                                                    747);
                                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3520),
                                                    (const char (*)[42])"fromJson for: weatherVoiceTriggers fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3520));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 416);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3584),
                                                    "thunderVoiceTrigger",
                                                    (const std::allocator<char> *)(v2 + 416));
                                                  thunder_voice_trigger_ptr = jsonValueFind(
                                                                                jval,
                                                                                (const std::string *)(v2 + 3584));
                                                  std::string::~string((void *)(v2 + 3584));
                                                  *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 416);
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                  if ( thunder_voice_trigger_ptr
                                                    && !data::VoiceTriggerIdentity::fromJson(
                                                          &this->thunder_voice_trigger,
                                                          thunder_voice_trigger_ptr) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3648) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3679) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 3679) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3648, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3648),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                      "fromJson",
                                                      759);
                                                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3648),
                                                      (const char (*)[41])"fromJson for: thunderVoiceTrigger fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3648));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 432);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3712),
                                                      "thunderVoiceCooldown",
                                                      (const std::allocator<char> *)(v2 + 432));
                                                    thunder_voice_cooldown_ptr = jsonValueFind(
                                                                                   jval,
                                                                                   (const std::string *)(v2 + 3712));
                                                    std::string::~string((void *)(v2 + 3712));
                                                    *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 432);
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                    if ( thunder_voice_cooldown_ptr
                                                      && !fromJson<unsigned int>(
                                                            thunder_voice_cooldown_ptr,
                                                            &this->thunder_voice_cooldown) )
                                                    {
                                                      *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 3776) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 3807) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3807) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 3776, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 3776),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                        "fromJson",
                                                        771);
                                                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 3776),
                                                        (const char (*)[42])"fromJson for: thunderVoiceCooldown fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3776));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 448);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 3840),
                                                        "enviroTimeRtpcKey",
                                                        (const std::allocator<char> *)(v2 + 448));
                                                      enviro_time_rtpc_key_ptr = jsonValueFind(
                                                                                   jval,
                                                                                   (const std::string *)(v2 + 3840));
                                                      std::string::~string((void *)(v2 + 3840));
                                                      *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 448);
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                      if ( enviro_time_rtpc_key_ptr
                                                        && !data::ConfigWwiseString::fromJson(
                                                              &this->enviro_time_rtpc_key,
                                                              enviro_time_rtpc_key_ptr) )
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
                                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioWeather.cpp",
                                                          "fromJson",
                                                          783);
                                                        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 3904),
                                                          (const char (*)[39])"fromJson for: enviroTimeRtpcKey fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3904));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 464);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 3968),
                                                          "angleBetweenWindAndListenerRtpcKey",
                                                          (const std::allocator<char> *)(v2 + 464));
                                                        angle_between_wind_and_listener_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3968));
                                                        std::string::~string((void *)(v2 + 3968));
                                                        *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 464);
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                        if ( angle_between_wind_and_listener_rtpc_key_ptr
                                                          && !data::ConfigWwiseString::fromJson(
                                                                &this->angle_between_wind_and_listener_rtpc_key,
                                                                angle_between_wind_and_listener_rtpc_key_ptr) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4032) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 4063) >> 3) + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4032, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4032),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/Config"
                                                            "AudioWeather.cpp",
                                                            "fromJson",
                                                            795);
                                                          common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4032),
                                                            (const char (*)[56])"fromJson for: angleBetweenWindAndListenerRtpcKey fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4032));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 480);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4096),
                                                            "angleStaticUpdateRate",
                                                            (const std::allocator<char> *)(v2 + 480));
                                                          angle_static_update_rate_ptr = jsonValueFind(
                                                                                           jval,
                                                                                           (const std::string *)(v2 + 4096));
                                                          std::string::~string((void *)(v2 + 4096));
                                                          *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 480);
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                          if ( angle_static_update_rate_ptr
                                                            && !fromJson<float>(
                                                                  angle_static_update_rate_ptr,
                                                                  &this->angle_static_update_rate) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4160) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4191) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4191) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4160, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4160),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/Conf"
                                                              "igAudioWeather.cpp",
                                                              "fromJson",
                                                              807);
                                                            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4160),
                                                              (const char (*)[43])"fromJson for: angleStaticUpdateRate fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4160));
                                                            v5 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 496);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4224),
                                                              "angleDynamicUpdateRate",
                                                              (const std::allocator<char> *)(v2 + 496));
                                                            p_angle_dynamic_update_rate = (float *)(v2 + 4224);
                                                            angle_dynamic_update_rate_ptr = jsonValueFind(
                                                                                              jval,
                                                                                              (const std::string *)(v2 + 4224));
                                                            std::string::~string((void *)(v2 + 4224));
                                                            *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 496);
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                            if ( angle_dynamic_update_rate_ptr
                                                              && (p_angle_dynamic_update_rate = &this->angle_dynamic_update_rate,
                                                                  !fromJson<float>(
                                                                     angle_dynamic_update_rate_ptr,
                                                                     &this->angle_dynamic_update_rate)) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4288) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4319) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 4319) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4288, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4288),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/Co"
                                                                "nfigAudioWeather.cpp",
                                                                "fromJson",
                                                                819);
                                                              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4288),
                                                                (const char (*)[44])"fromJson for: angleDynamicUpdateRate fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4288));
                                                              v5 = 0;
                                                            }
                                                            else
                                                            {
                                                              if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                           + 0x7FFF8000) < 0 )
                                                                __asan_report_store1(
                                                                  &this->is_json_loaded,
                                                                  p_angle_dynamic_update_rate,
                                                                  &this->is_json_loaded);
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
  v7 = v5;
  if ( v40 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8074) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8084) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8134) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF813C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8144) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81FC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8204) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF820C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8214) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF821C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4352LL, v40);
  }
  return v7;
};

// Line 827: range 0000000013B93CDC-0000000013B942AC
int32_t __cdecl data::ConfigAudioWeather::getHashValue(const data::ConfigAudioWeather *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t MapHashValue; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t v22; // eax
  int32_t v23; // eax
  int32_t v24; // eax
  int32_t v25; // eax
  int32_t v26; // eax
  int32_t VecHashValue; // eax
  int32_t v28; // eax
  int32_t v29; // eax
  int32_t v30; // eax
  int32_t result; // eax
  char v32[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:828";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioWeather::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->transition_rtpc_key);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->dominant_state_name);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->dominant_switch_name);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::ConfigWwiseString::getHashValue(&this->dominant_rtpc_key);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigWwiseString::getHashValue(&this->dominant_state_name_without_delay);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigWwiseString::getHashValue(&this->dominant_rtpc_key_without_delay);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  v11 = data::ConfigWwiseString::getHashValue(&this->time_of_day_rtpc_key);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::ConfigWwiseString::getHashValue(&this->avatar_speech_event);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_default_weather_state_setting >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(
      &this->enable_default_weather_state_setting,
      v2 + 32,
      &this->enable_default_weather_state_setting);
  common::tools::HashUtils::appendHash(this->enable_default_weather_state_setting, (int32_t *)(v2 + 32));
  v13 = data::AudioWeatherProperties::getHashValue(&this->default_weather_state);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->weather_state_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v15 = data::AudioWeatherWorkSet::getHashValue(&this->workset1);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::AudioWeatherWorkSet::getHashValue(&this->workset2);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::AudioOneTimeEvent::getHashValue(&this->near_thunder_start);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::AudioOneTimeEvent::getHashValue(&this->near_thunder_end);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::AudioOneTimeEvent::getHashValue(&this->distant_thunder_start);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::AudioOneTimeEvent::getHashValue(&this->distant_thunder_end);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::AudioOneTimeEvent::getHashValue(&this->sky_thunder);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  v22 = data::ConfigWwiseString::getHashValue(&this->workset_switch_key);
  common::tools::HashUtils::appendHash(v22, (int32_t *)(v2 + 32));
  v23 = data::ConfigWwiseString::getHashValue(&this->wind_speed_rtpc_key);
  common::tools::HashUtils::appendHash(v23, (int32_t *)(v2 + 32));
  v24 = data::ConfigWwiseString::getHashValue(&this->wind_direction_rtpc_key);
  common::tools::HashUtils::appendHash(v24, (int32_t *)(v2 + 32));
  v25 = data::ConfigWwiseString::getHashValue(&this->climate_rtpc_key);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  v26 = data::getMapHashValue(&this->climate_rtpcmap);
  common::tools::HashUtils::appendHash(v26, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->weather_voice_triggers);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v28 = data::VoiceTriggerIdentity::getHashValue(&this->thunder_voice_trigger);
  common::tools::HashUtils::appendHash(v28, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->thunder_voice_cooldown >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thunder_voice_cooldown >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->thunder_voice_cooldown);
  }
  common::tools::HashUtils::appendHash(this->thunder_voice_cooldown, (int32_t *)(v2 + 32));
  v29 = data::ConfigWwiseString::getHashValue(&this->enviro_time_rtpc_key);
  common::tools::HashUtils::appendHash(v29, (int32_t *)(v2 + 32));
  v30 = data::ConfigWwiseString::getHashValue(&this->angle_between_wind_and_listener_rtpc_key);
  common::tools::HashUtils::appendHash(v30, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_static_update_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->angle_static_update_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->angle_static_update_rate);
  }
  common::tools::HashUtils::appendHash(this->angle_static_update_rate, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->angle_dynamic_update_rate >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->angle_dynamic_update_rate >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->angle_dynamic_update_rate);
  }
  common::tools::HashUtils::appendHash(this->angle_dynamic_update_rate, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v32 == (char *)v2 )
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
