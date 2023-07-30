// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigRegionPerf.cpp

// Line 20: range 00000000120A0030-00000000120A2FEF
bool __cdecl data::ConfigRegionPerf::fromJson(data::ConfigRegionPerf *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  bool v7; // r15
  float *p_texture_streaming_fallback_guard; // rsi
  bool v9; // bl
  const Json::Value *area_idarray_ptr; // [rsp+10h] [rbp-B80h]
  const Json::Value *texture_streaming_budget_ptr; // [rsp+18h] [rbp-B78h]
  const Json::Value *streaming_profile_ratio_config_name_ptr; // [rsp+20h] [rbp-B70h]
  const Json::Value *disable_common_preload_ptr; // [rsp+28h] [rbp-B68h]
  const Json::Value *disable_entity_preload_effect_ptr; // [rsp+30h] [rbp-B60h]
  const Json::Value *requirement_array_ptr; // [rsp+38h] [rbp-B58h]
  const Json::Value *hiz_aabbscale_ptr; // [rsp+40h] [rbp-B50h]
  const Json::Value *distant_shadow_bound_ptr; // [rsp+48h] [rbp-B48h]
  Json::Value *max_shadow_quality_ptr; // [rsp+50h] [rbp-B40h]
  Json::Value *max_shadow_resolution_ptr; // [rsp+58h] [rbp-B38h]
  const Json::Value *texture_streaming_enable_adjust_ptr; // [rsp+60h] [rbp-B30h]
  const Json::Value *texture_streaming_guard_min_ptr; // [rsp+68h] [rbp-B28h]
  const Json::Value *texture_streaming_guard_max_ptr; // [rsp+70h] [rbp-B20h]
  const Json::Value *texture_streaming_near_protect_distance_ptr; // [rsp+78h] [rbp-B18h]
  const Json::Value *texture_streaming_near_mip_level_min_ptr; // [rsp+80h] [rbp-B10h]
  const Json::Value *texture_streaming_enable_important_renderer_ptr; // [rsp+88h] [rbp-B08h]
  const Json::Value *texture_streaming_custom_fallback_ptr; // [rsp+90h] [rbp-B00h]
  const Json::Value *texture_streaming_fallback_guard_ptr; // [rsp+98h] [rbp-AF8h]
  char v30[2800]; // [rsp+A0h] [rbp-AF0h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2752LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "56 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 3"
                        "2 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32"
                        " 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 "
                        "32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1"
                        "472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknow"
                        "n> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <un"
                        "known> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9"
                        " <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigRegionPerf::fromJson;
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
  v4[536862805] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    "areaIDArray",
    (const std::allocator<char> *)(v2 + 32));
  area_idarray_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( area_idarray_ptr && !data::arrFromJson(area_idarray_ptr, &this->area_idarray) )
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
      "./src/json_data_auto/ConfigRegionPerf.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[33])"fromJson for: areaIDArray fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 448),
      "textureStreamingBudget",
      (const std::allocator<char> *)(v2 + 48));
    texture_streaming_budget_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( texture_streaming_budget_ptr && !fromJson<float>(texture_streaming_budget_ptr, &this->texture_streaming_budget) )
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
        "./src/json_data_auto/ConfigRegionPerf.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
        (common::milog::MiLogStream *const)(v2 + 512),
        (const char (*)[44])"fromJson for: textureStreamingBudget fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 576),
        "streamingProfileRatioConfigName",
        (const std::allocator<char> *)(v2 + 64));
      streaming_profile_ratio_config_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( streaming_profile_ratio_config_name_ptr
        && !fromJson<std::string>(streaming_profile_ratio_config_name_ptr, &this->streaming_profile_ratio_config_name) )
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
          "./src/json_data_auto/ConfigRegionPerf.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          (common::milog::MiLogStream *const)(v2 + 640),
          (const char (*)[53])"fromJson for: streamingProfileRatioConfigName fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 704),
          "disableCommonPreload",
          (const std::allocator<char> *)(v2 + 80));
        disable_common_preload_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( disable_common_preload_ptr && !fromJson<bool>(disable_common_preload_ptr, &this->disable_common_preload) )
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
            "./src/json_data_auto/ConfigRegionPerf.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 768),
            (const char (*)[42])"fromJson for: disableCommonPreload fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            "disableEntityPreloadEffect",
            (const std::allocator<char> *)(v2 + 96));
          disable_entity_preload_effect_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( disable_entity_preload_effect_ptr
            && !fromJson<bool>(disable_entity_preload_effect_ptr, &this->disable_entity_preload_effect) )
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
              "./src/json_data_auto/ConfigRegionPerf.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[48])"fromJson for: disableEntityPreloadEffect fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 960),
              "requirementArray",
              (const std::allocator<char> *)(v2 + 112));
            requirement_array_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( requirement_array_ptr && !data::arrFromJson(requirement_array_ptr, &this->requirement_array) )
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
                "./src/json_data_auto/ConfigRegionPerf.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[38])"fromJson for: requirementArray fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1088),
                "hizAABBScale",
                (const std::allocator<char> *)(v2 + 128));
              hiz_aabbscale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( hiz_aabbscale_ptr && !fromJson<float>(hiz_aabbscale_ptr, &this->hiz_aabbscale) )
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
                  "./src/json_data_auto/ConfigRegionPerf.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[34])"fromJson for: hizAABBScale fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1216),
                  "distantShadowBound",
                  (const std::allocator<char> *)(v2 + 144));
                distant_shadow_bound_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( distant_shadow_bound_ptr && !fromJson<float>(distant_shadow_bound_ptr, &this->distant_shadow_bound) )
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
                    "./src/json_data_auto/ConfigRegionPerf.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                    (common::milog::MiLogStream *const)(v2 + 1280),
                    (const char (*)[40])"fromJson for: distantShadowBound fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1344),
                    "maxShadowQuality",
                    (const std::allocator<char> *)(v2 + 160));
                  max_shadow_quality_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1344));
                  std::string::~string((void *)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( !max_shadow_quality_ptr )
                    goto LABEL_51;
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1408) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1439) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1408, 32LL);
                  }
                  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 1408), (Json::Value_0 *)max_shadow_quality_ptr);
                  v6 = !data::enumStrToVal((const std::string *)(v2 + 1408), &this->max_shadow_quality);
                  std::string::~string((void *)(v2 + 1408));
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  if ( v6 )
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
                      "./src/json_data_auto/ConfigRegionPerf.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      (common::milog::MiLogStream *const)(v2 + 1472),
                      (const char (*)[38])"fromJson for: maxShadowQuality fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                    v5 = 0;
                  }
                  else
                  {
LABEL_51:
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1536),
                      "maxShadowResolution",
                      (const std::allocator<char> *)(v2 + 176));
                    max_shadow_resolution_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 1536));
                    std::string::~string((void *)(v2 + 1536));
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( !max_shadow_resolution_ptr )
                      goto LABEL_58;
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1600, 32LL);
                    }
                    Json::Value::asString[abi:cxx11](
                      (Json::String *)(v2 + 1600),
                      (Json::Value_0 *)max_shadow_resolution_ptr);
                    v7 = !data::enumStrToVal((const std::string *)(v2 + 1600), &this->max_shadow_resolution);
                    std::string::~string((void *)(v2 + 1600));
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                    if ( v7 )
                    {
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1664) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1695) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1664, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1664),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigRegionPerf.cpp",
                        "fromJson",
                        138);
                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                        (common::milog::MiLogStream *const)(v2 + 1664),
                        (const char (*)[41])"fromJson for: maxShadowResolution fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                      v5 = 0;
                    }
                    else
                    {
LABEL_58:
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1728),
                        "textureStreamingEnableAdjust",
                        (const std::allocator<char> *)(v2 + 192));
                      texture_streaming_enable_adjust_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                      std::string::~string((void *)(v2 + 1728));
                      *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( texture_streaming_enable_adjust_ptr
                        && !fromJson<int>(texture_streaming_enable_adjust_ptr, &this->texture_streaming_enable_adjust) )
                      {
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1792, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1792),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigRegionPerf.cpp",
                          "fromJson",
                          150);
                        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                          (common::milog::MiLogStream *const)(v2 + 1792),
                          (const char (*)[50])"fromJson for: textureStreamingEnableAdjust fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1856),
                          "textureStreamingGuardMin",
                          (const std::allocator<char> *)(v2 + 208));
                        texture_streaming_guard_min_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                        std::string::~string((void *)(v2 + 1856));
                        *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( texture_streaming_guard_min_ptr
                          && !fromJson<float>(texture_streaming_guard_min_ptr, &this->texture_streaming_guard_min) )
                        {
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1920) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 1951) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1920, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1920),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ConfigRegionPerf.cpp",
                            "fromJson",
                            162);
                          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            (common::milog::MiLogStream *const)(v2 + 1920),
                            (const char (*)[46])"fromJson for: textureStreamingGuardMin fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1984),
                            "textureStreamingGuardMax",
                            (const std::allocator<char> *)(v2 + 224));
                          texture_streaming_guard_max_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                          std::string::~string((void *)(v2 + 1984));
                          *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( texture_streaming_guard_max_ptr
                            && !fromJson<float>(texture_streaming_guard_max_ptr, &this->texture_streaming_guard_max) )
                          {
                            *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2048, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2048),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ConfigRegionPerf.cpp",
                              "fromJson",
                              174);
                            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                              (common::milog::MiLogStream *const)(v2 + 2048),
                              (const char (*)[46])"fromJson for: textureStreamingGuardMax fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2112),
                              "textureStreamingNearProtectDistance",
                              (const std::allocator<char> *)(v2 + 240));
                            texture_streaming_near_protect_distance_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 2112));
                            std::string::~string((void *)(v2 + 2112));
                            *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( texture_streaming_near_protect_distance_ptr
                              && !fromJson<float>(
                                    texture_streaming_near_protect_distance_ptr,
                                    &this->texture_streaming_near_protect_distance) )
                            {
                              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2176) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2207) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2176, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2176),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ConfigRegionPerf.cpp",
                                "fromJson",
                                186);
                              common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                                (common::milog::MiLogStream *const)(v2 + 2176),
                                (const char (*)[57])"fromJson for: textureStreamingNearProtectDistance fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2240),
                                "textureStreamingNearMipLevelMin",
                                (const std::allocator<char> *)(v2 + 256));
                              texture_streaming_near_mip_level_min_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 2240));
                              std::string::~string((void *)(v2 + 2240));
                              *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( texture_streaming_near_mip_level_min_ptr
                                && !fromJson<int>(
                                      texture_streaming_near_mip_level_min_ptr,
                                      &this->texture_streaming_near_mip_level_min) )
                              {
                                *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2304, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2304),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ConfigRegionPerf.cpp",
                                  "fromJson",
                                  198);
                                common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2304),
                                  (const char (*)[53])"fromJson for: textureStreamingNearMipLevelMin fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2368),
                                  "textureStreamingEnableImportantRenderer",
                                  (const std::allocator<char> *)(v2 + 272));
                                texture_streaming_enable_important_renderer_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 2368));
                                std::string::~string((void *)(v2 + 2368));
                                *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( texture_streaming_enable_important_renderer_ptr
                                  && !fromJson<int>(
                                        texture_streaming_enable_important_renderer_ptr,
                                        &this->texture_streaming_enable_important_renderer) )
                                {
                                  *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2432) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2463) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2432, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2432),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigRegionPerf.cpp",
                                    "fromJson",
                                    210);
                                  common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2432),
                                    (const char (*)[61])"fromJson for: textureStreamingEnableImportantRenderer fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2496),
                                    "textureStreamingCustomFallback",
                                    (const std::allocator<char> *)(v2 + 288));
                                  texture_streaming_custom_fallback_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 2496));
                                  std::string::~string((void *)(v2 + 2496));
                                  *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( texture_streaming_custom_fallback_ptr
                                    && !fromJson<int>(
                                          texture_streaming_custom_fallback_ptr,
                                          &this->texture_streaming_custom_fallback) )
                                  {
                                    *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2560, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2560),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ConfigRegionPerf.cpp",
                                      "fromJson",
                                      222);
                                    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2560),
                                      (const char (*)[52])"fromJson for: textureStreamingCustomFallback fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2624),
                                      "textureStreamingFallbackGuard",
                                      (const std::allocator<char> *)(v2 + 304));
                                    p_texture_streaming_fallback_guard = (float *)(v2 + 2624);
                                    texture_streaming_fallback_guard_ptr = jsonValueFind(
                                                                             jval,
                                                                             (const std::string *)(v2 + 2624));
                                    std::string::~string((void *)(v2 + 2624));
                                    *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( texture_streaming_fallback_guard_ptr
                                      && (p_texture_streaming_fallback_guard = &this->texture_streaming_fallback_guard,
                                          !fromJson<float>(
                                             texture_streaming_fallback_guard_ptr,
                                             &this->texture_streaming_fallback_guard)) )
                                    {
                                      *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2688) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2719) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2688, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2688),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ConfigRegionPerf.cpp",
                                        "fromJson",
                                        234);
                                      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2688),
                                        (const char (*)[51])"fromJson for: textureStreamingFallbackGuard fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                        __asan_report_store1(
                                          &this->is_json_loaded,
                                          p_texture_streaming_fallback_guard,
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
  v9 = v5;
  if ( v30 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80AC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8104) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF810C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8114) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF811C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8124) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF812C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8134) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF813C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF814C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8154) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2752LL, v30);
  }
  return v9;
};

// Line 242: range 00000000120A2FF0-00000000120A35F4
int32_t __cdecl data::ConfigRegionPerf::getHashValue(const data::ConfigRegionPerf *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:243";
  *(_QWORD *)(v2 + 16) = data::ConfigRegionPerf::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->area_idarray);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_budget >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->texture_streaming_budget);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_budget, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->streaming_profile_ratio_config_name, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->disable_common_preload >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->disable_common_preload, v2 + 32, &this->disable_common_preload);
  common::tools::HashUtils::appendHash(this->disable_common_preload, (int32_t *)(v2 + 32));
  v6 = ((_BYTE)this + 65) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->disable_entity_preload_effect >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->disable_entity_preload_effect >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&this->disable_entity_preload_effect, v6, v7);
  common::tools::HashUtils::appendHash(this->disable_entity_preload_effect, (int32_t *)(v2 + 32));
  v8 = data::getArrHashValue(&this->requirement_array);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hiz_aabbscale >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hiz_aabbscale);
  }
  common::tools::HashUtils::appendHash(this->hiz_aabbscale, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->distant_shadow_bound >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->distant_shadow_bound);
  }
  common::tools::HashUtils::appendHash(this->distant_shadow_bound, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shadow_quality >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_shadow_quality >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_shadow_quality);
  }
  common::tools::HashUtils::appendHash(this->max_shadow_quality, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_shadow_resolution >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_shadow_resolution >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_shadow_resolution);
  }
  common::tools::HashUtils::appendHash(this->max_shadow_resolution, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_adjust >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->texture_streaming_enable_adjust);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_enable_adjust, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_min >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->texture_streaming_guard_min);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_guard_min, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_guard_max >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->texture_streaming_guard_max);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_guard_max, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_protect_distance >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->texture_streaming_near_protect_distance);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_near_protect_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_near_mip_level_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->texture_streaming_near_mip_level_min);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_near_mip_level_min, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_important_renderer >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_enable_important_renderer >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->texture_streaming_enable_important_renderer);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_enable_important_renderer, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->texture_streaming_custom_fallback >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->texture_streaming_custom_fallback);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_custom_fallback, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->texture_streaming_fallback_guard >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->texture_streaming_fallback_guard);
  }
  common::tools::HashUtils::appendHash(this->texture_streaming_fallback_guard, (int32_t *)(v2 + 32));
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

// Line 266: range 00000000120A35F5-00000000120A3A0F
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigRegionPerfList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigRegionPerf *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-1A0h]
  char v12; // [rsp+8h] [rbp-198h]
  bool v13; // [rsp+Fh] [rbp-191h]
  uint32_t i; // [rsp+24h] [rbp-17Ch]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-178h]
  char v16[368]; // [rsp+30h] [rbp-170h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(320LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 152 8 elem:272";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862727] = -218103808;
  v4[536862728] = -202116109;
  v4[536862729] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      v6 = ((v2 + 96) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_DWORD *)(v6 + 4) = 0;
      *(_DWORD *)(v6 + 8) = 0;
      *(_DWORD *)(v6 + 12) = 0;
      *(_WORD *)(v6 + 16) = 0;
      *(_BYTE *)(v6 + 18) = 0;
      data::ConfigRegionPerf::ConfigRegionPerf((data::ConfigRegionPerf *const)(v2 + 96));
      if ( !data::ConfigRegionPerf::fromJson((data::ConfigRegionPerf *const)(v2 + 96), elem_jval) )
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
          "./src/json_data_auto/ConfigRegionPerf.cpp",
          "vecFromJson",
          275);
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
        v8 = std::move<data::ConfigRegionPerf &>((data::ConfigRegionPerf *)(v2 + 96));
        std::vector<data::ConfigRegionPerf>::emplace_back<data::ConfigRegionPerf>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigRegionPerf::~ConfigRegionPerf((data::ConfigRegionPerf *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_DWORD *)(v9 + 4) = -117901064;
    *(_DWORD *)(v9 + 8) = -117901064;
    *(_DWORD *)(v9 + 12) = -117901064;
    *(_WORD *)(v9 + 16) = -1800;
    *(_BYTE *)(v9 + 18) = -8;
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

// Line 285: range 00000000120A3A10-00000000120A3C5C
int32_t __cdecl data::getVecHashValue(const data::ConfigRegionPerfList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigRegionPerf*,std::vector<data::ConfigRegionPerf> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:286 64 8 15 __for_begin:287 96 8 13 __for_end:287";
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
  *(std::vector<data::ConfigRegionPerf>::const_iterator *)(v2 + 64) = std::vector<data::ConfigRegionPerf>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigRegionPerf>::const_iterator *)(v2 + 96) = std::vector<data::ConfigRegionPerf>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigRegionPerf const*,std::vector<data::ConfigRegionPerf>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigRegionPerf*,std::vector<data::ConfigRegionPerf> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigRegionPerf*,std::vector<data::ConfigRegionPerf> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigRegionPerf const*,std::vector<data::ConfigRegionPerf>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigRegionPerf*,std::vector<data::ConfigRegionPerf> > *const)(v2 + 64));
    HashValue = data::ConfigRegionPerf::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigRegionPerf const*,std::vector<data::ConfigRegionPerf>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigRegionPerf*,std::vector<data::ConfigRegionPerf> > *const)(v2 + 64));
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
