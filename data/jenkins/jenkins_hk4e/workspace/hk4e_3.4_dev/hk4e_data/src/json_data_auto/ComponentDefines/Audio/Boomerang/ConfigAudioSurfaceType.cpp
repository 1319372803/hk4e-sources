// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp

// Line 20: range 0000000013B7F0F4-0000000013B7FE99
bool __cdecl data::ConfigAudioSurfaceType::fromJson(data::ConfigAudioSurfaceType *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::StringMap *p_rtpc_map; // rsi
  const Json::Value *switch_key_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *tall_grass_rtpc_id_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *water_depth_rtpc_id_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *switch_map_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *rtpc_map_ptr; // [rsp+38h] [rbp-328h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigAudioSurfaceType::fromJson;
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
    "switchKey",
    (const std::allocator<char> *)(v2 + 48));
  switch_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( switch_key_ptr && !data::ConfigWwiseString::fromJson(&this->switch_key, switch_key_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[31])"fromJson for: switchKey fails!");
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
      "tallGrassRtpcId",
      (const std::allocator<char> *)(v2 + 64));
    tall_grass_rtpc_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( tall_grass_rtpc_id_ptr && !data::ConfigWwiseString::fromJson(&this->tall_grass_rtpc_id, tall_grass_rtpc_id_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[37])"fromJson for: tallGrassRtpcId fails!");
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
        "waterDepthRtpcId",
        (const std::allocator<char> *)(v2 + 80));
      water_depth_rtpc_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( water_depth_rtpc_id_ptr
        && !data::ConfigWwiseString::fromJson(&this->water_depth_rtpc_id, water_depth_rtpc_id_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[38])"fromJson for: waterDepthRtpcId fails!");
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
          "switchMap",
          (const std::allocator<char> *)(v2 + 96));
        switch_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( switch_map_ptr && !data::mapFromJson(switch_map_ptr, &this->switch_map) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[31])"fromJson for: switchMap fails!");
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
            "rtpcMap",
            (const std::allocator<char> *)(v2 + 112));
          p_rtpc_map = (data::StringMap *)(v2 + 640);
          rtpc_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( rtpc_map_ptr && (p_rtpc_map = &this->rtpc_map, !data::mapFromJson(rtpc_map_ptr, &this->rtpc_map)) )
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
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioSurfaceType.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[29])"fromJson for: rtpcMap fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_rtpc_map, &this->is_json_loaded);
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

// Line 86: range 0000000013B7FE9A-0000000013B8005A
int32_t __cdecl data::ConfigAudioSurfaceType::getHashValue(const data::ConfigAudioSurfaceType *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:87";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioSurfaceType::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->switch_key);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->tall_grass_rtpc_id);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->water_depth_rtpc_id);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->switch_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v9 = data::getMapHashValue(&this->rtpc_map);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
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
