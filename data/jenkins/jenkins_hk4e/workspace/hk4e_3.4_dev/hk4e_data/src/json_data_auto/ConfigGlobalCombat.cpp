// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigGlobalCombat.cpp

// Line 20: range 000000000D56CC10-000000000D56F258
bool __cdecl data::ConfigGlobalHit::fromJson(data::ConfigGlobalHit *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *min_hit_vx_ptr; // [rsp+18h] [rbp-938h]
  const Json::Value *max_hit_vx_ptr; // [rsp+20h] [rbp-930h]
  const Json::Value *min_hit_vy_ptr; // [rsp+28h] [rbp-928h]
  const Json::Value *max_hit_vy_ptr; // [rsp+30h] [rbp-920h]
  const Json::Value *gravity_ptr; // [rsp+38h] [rbp-918h]
  const Json::Value *hit_retreat_friction_ptr; // [rsp+40h] [rbp-910h]
  const Json::Value *air_friction_x_ptr; // [rsp+48h] [rbp-908h]
  const Json::Value *air_friction_y_ptr; // [rsp+50h] [rbp-900h]
  const Json::Value *die_retreat_ratio_ptr; // [rsp+58h] [rbp-8F8h]
  const Json::Value *die_retreat_light_ratio_ptr; // [rsp+60h] [rbp-8F0h]
  const Json::Value *die_retreat_heavy_ratio_ptr; // [rsp+68h] [rbp-8E8h]
  const Json::Value *die_retreat_add_ptr; // [rsp+70h] [rbp-8E0h]
  const Json::Value *die_retreat_heavy_add_ptr; // [rsp+78h] [rbp-8D8h]
  const Json::Value *die_retreat_air_xadd_ptr; // [rsp+80h] [rbp-8D0h]
  const Json::Value *die_retreat_air_yadd_ptr; // [rsp+88h] [rbp-8C8h]
  char v25[2240]; // [rsp+90h] [rbp-8C0h] BYREF

  v2 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2208LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "45 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 32 9 <unknown> "
                        "352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 99"
                        "2 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown>"
                        " 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unkn"
                        "own> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <"
                        "unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalHit::fromJson;
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
  v4[536862788] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "minHitVX",
    (const std::allocator<char> *)(v2 + 48));
  min_hit_vx_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( min_hit_vx_ptr && !fromJson<float>(min_hit_vx_ptr, &this->min_hit_vx) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 352),
      (const char (*)[30])"fromJson for: minHitVX fails!");
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
      "maxHitVX",
      (const std::allocator<char> *)(v2 + 64));
    max_hit_vx_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( max_hit_vx_ptr && !fromJson<float>(max_hit_vx_ptr, &this->max_hit_vx) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 480),
        (const char (*)[30])"fromJson for: maxHitVX fails!");
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
        "minHitVY",
        (const std::allocator<char> *)(v2 + 80));
      min_hit_vy_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( min_hit_vy_ptr && !fromJson<float>(min_hit_vy_ptr, &this->min_hit_vy) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 608),
          (const char (*)[30])"fromJson for: minHitVY fails!");
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
          "maxHitVY",
          (const std::allocator<char> *)(v2 + 96));
        max_hit_vy_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( max_hit_vy_ptr && !fromJson<float>(max_hit_vy_ptr, &this->max_hit_vy) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 736),
            (const char (*)[30])"fromJson for: maxHitVY fails!");
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
            "gravity",
            (const std::allocator<char> *)(v2 + 112));
          gravity_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( gravity_ptr && !fromJson<float>(gravity_ptr, &this->gravity) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[29])"fromJson for: gravity fails!");
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
              "hitRetreatFriction",
              (const std::allocator<char> *)(v2 + 128));
            hit_retreat_friction_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( hit_retreat_friction_ptr && !fromJson<float>(hit_retreat_friction_ptr, &this->hit_retreat_friction) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[40])"fromJson for: hitRetreatFriction fails!");
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
                "airFrictionX",
                (const std::allocator<char> *)(v2 + 144));
              air_friction_x_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( air_friction_x_ptr && !fromJson<float>(air_friction_x_ptr, &this->air_friction_x) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[34])"fromJson for: airFrictionX fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1184),
                  "airFrictionY",
                  (const std::allocator<char> *)(v2 + 160));
                air_friction_y_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( air_friction_y_ptr && !fromJson<float>(air_friction_y_ptr, &this->air_friction_y) )
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1248, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1248),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    (common::milog::MiLogStream *const)(v2 + 1248),
                    (const char (*)[34])"fromJson for: airFrictionY fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1312),
                    "dieRetreatRatio",
                    (const std::allocator<char> *)(v2 + 176));
                  die_retreat_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( die_retreat_ratio_ptr && !fromJson<float>(die_retreat_ratio_ptr, &this->die_retreat_ratio) )
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1376) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1407) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1376, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1376),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[37])"fromJson for: dieRetreatRatio fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1440),
                      "dieRetreatLightRatio",
                      (const std::allocator<char> *)(v2 + 192));
                    die_retreat_light_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( die_retreat_light_ratio_ptr
                      && !fromJson<float>(die_retreat_light_ratio_ptr, &this->die_retreat_light_ratio) )
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1504, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1504),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        138);
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        (common::milog::MiLogStream *const)(v2 + 1504),
                        (const char (*)[42])"fromJson for: dieRetreatLightRatio fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1568),
                        "dieRetreatHeavyRatio",
                        (const std::allocator<char> *)(v2 + 208));
                      die_retreat_heavy_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
                      std::string::~string((void *)(v2 + 1568));
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( die_retreat_heavy_ratio_ptr
                        && !fromJson<float>(die_retreat_heavy_ratio_ptr, &this->die_retreat_heavy_ratio) )
                      {
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1632) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1663) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1632, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1632),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          150);
                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          (common::milog::MiLogStream *const)(v2 + 1632),
                          (const char (*)[42])"fromJson for: dieRetreatHeavyRatio fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1696),
                          "dieRetreatAdd",
                          (const std::allocator<char> *)(v2 + 224));
                        die_retreat_add_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1696));
                        std::string::~string((void *)(v2 + 1696));
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( die_retreat_add_ptr && !fromJson<float>(die_retreat_add_ptr, &this->die_retreat_add) )
                        {
                          *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1760, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1760),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                            "fromJson",
                            162);
                          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                            (common::milog::MiLogStream *const)(v2 + 1760),
                            (const char (*)[35])"fromJson for: dieRetreatAdd fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1824),
                            "dieRetreatHeavyAdd",
                            (const std::allocator<char> *)(v2 + 240));
                          die_retreat_heavy_add_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
                          std::string::~string((void *)(v2 + 1824));
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( die_retreat_heavy_add_ptr
                            && !fromJson<float>(die_retreat_heavy_add_ptr, &this->die_retreat_heavy_add) )
                          {
                            *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1888) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 1919) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1888, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1888),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                              "fromJson",
                              174);
                            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                              (common::milog::MiLogStream *const)(v2 + 1888),
                              (const char (*)[40])"fromJson for: dieRetreatHeavyAdd fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 1952),
                              "dieRetreatAirXAdd",
                              (const std::allocator<char> *)(v2 + 256));
                            die_retreat_air_xadd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                            std::string::~string((void *)(v2 + 1952));
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( die_retreat_air_xadd_ptr
                              && !fromJson<float>(die_retreat_air_xadd_ptr, &this->die_retreat_air_xadd) )
                            {
                              *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2016, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2016),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                "fromJson",
                                186);
                              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                (common::milog::MiLogStream *const)(v2 + 2016),
                                (const char (*)[39])"fromJson for: dieRetreatAirXAdd fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2080),
                                "dieRetreatAirYAdd",
                                (const std::allocator<char> *)(v2 + 272));
                              die_retreat_air_yadd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2080));
                              std::string::~string((void *)(v2 + 2080));
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( die_retreat_air_yadd_ptr
                                && !fromJson<float>(die_retreat_air_yadd_ptr, &this->die_retreat_air_yadd) )
                              {
                                *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2144) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2175) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2144, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2144),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                  "fromJson",
                                  198);
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2144),
                                  (const char (*)[39])"fromJson for: dieRetreatAirYAdd fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                                v5 = 0;
                              }
                              else
                              {
                                v6 = ((_BYTE)this + 60) & 7;
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
              }
            }
          }
        }
      }
    }
  }
  v8 = v5;
  if ( v25 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8080) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8090) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80C0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F0) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F8) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8100) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8108) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2208LL, v25);
  }
  return v8;
};

// Line 206: range 000000000D56F25A-000000000D56F83F
int32_t __cdecl data::ConfigGlobalHit::getHashValue(const data::ConfigGlobalHit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:207";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalHit::getHashValue;
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
  common::tools::HashUtils::appendHash(this->min_hit_vx, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_hit_vx >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_hit_vx >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_hit_vx);
  }
  common::tools::HashUtils::appendHash(this->max_hit_vx, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->min_hit_vy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->min_hit_vy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->min_hit_vy);
  }
  common::tools::HashUtils::appendHash(this->min_hit_vy, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_hit_vy >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_hit_vy >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_hit_vy);
  }
  common::tools::HashUtils::appendHash(this->max_hit_vy, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gravity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gravity);
  }
  common::tools::HashUtils::appendHash(this->gravity, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->hit_retreat_friction >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hit_retreat_friction >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hit_retreat_friction);
  }
  common::tools::HashUtils::appendHash(this->hit_retreat_friction, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->air_friction_x >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->air_friction_x >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->air_friction_x);
  }
  common::tools::HashUtils::appendHash(this->air_friction_x, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->air_friction_y >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->air_friction_y >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->air_friction_y);
  }
  common::tools::HashUtils::appendHash(this->air_friction_y, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_ratio);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_light_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_light_ratio >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_light_ratio);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_light_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_heavy_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_heavy_ratio >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_heavy_ratio);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_heavy_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_add >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_add);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_add, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_heavy_add >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_heavy_add >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_heavy_add);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_heavy_add, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_air_xadd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_air_xadd >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_air_xadd);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_air_xadd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->die_retreat_air_yadd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->die_retreat_air_yadd >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->die_retreat_air_yadd);
  }
  common::tools::HashUtils::appendHash(this->die_retreat_air_yadd, (int32_t *)(v2 + 32));
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

// Line 228: range 000000000D56F840-000000000D56FB9A
bool __cdecl data::ConfigGlobalCollision::fromJson(data::ConfigGlobalCollision *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *high_spd_threshold_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalCollision::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "highSpdThreshold",
    (const std::allocator<char> *)(v2 + 48));
  high_spd_threshold_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( high_spd_threshold_ptr && !fromJson<float>(high_spd_threshold_ptr, (float *)this) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      238);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[38])"fromJson for: highSpdThreshold fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 4) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 246: range 000000000D56FB9C-000000000D56FD07
int32_t __cdecl data::ConfigGlobalCollision::getHashValue(const data::ConfigGlobalCollision *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:247";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalCollision::getHashValue;
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
  common::tools::HashUtils::appendHash(this->high_spd_threshold, (int32_t *)(v2 + 32));
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

// Line 254: range 000000000D56FD08-000000000D5702F0
bool __cdecl data::ConfigPublicAISkillCD::fromJson(data::ConfigPublicAISkillCD *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *name_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *min_interval_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigPublicAISkillCD::fromJson;
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
    "name",
    (const std::allocator<char> *)(v2 + 32));
  name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( name_ptr && !fromJson<std::string>(name_ptr, &this->name) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      264);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[26])"fromJson for: name fails!");
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
      "minInterval",
      (const std::allocator<char> *)(v2 + 48));
    min_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( min_interval_ptr && !fromJson<float>(min_interval_ptr, &this->min_interval) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        276);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[33])"fromJson for: minInterval fails!");
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

// Line 284: range 000000000D5702F2-000000000D57046E
int32_t __cdecl data::ConfigPublicAISkillCD::getHashValue(const data::ConfigPublicAISkillCD *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:285";
  *(_QWORD *)(v2 + 16) = data::ConfigPublicAISkillCD::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->min_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->min_interval);
  }
  common::tools::HashUtils::appendHash(this->min_interval, (int32_t *)(v2 + 32));
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

// Line 292: range 000000000D57046F-000000000D571062
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigPublicAISkillCDMap *m)
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
  data::ConfigPublicAISkillCD *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigPublicAISkillCD>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  bool result; // al
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 16 7 cit:294 64 16 9 <unknown> 96 32 7 key:297 160 32 9 <unknown> 224 32 9 <unknown> 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 40 12 tmp_jval:293 496 40 12 key_jval:296 576 40 14 value_j"
                        "val:303 656 40 9 value:304";
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
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
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
      && (char)((v3 - 32 + 55) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
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
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        300);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
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
      *(_BYTE *)(v12 + 4) = 0;
      data::ConfigPublicAISkillCD::ConfigPublicAISkillCD((data::ConfigPublicAISkillCD *const)(v3 + 656));
      if ( !data::ConfigPublicAISkillCD::fromJson(
              (data::ConfigPublicAISkillCD *const)(v3 + 656),
              (const Json::Value *)(v3 + 576)) )
      {
        *(_DWORD *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 32 + 95) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          307);
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
        v16 = std::unordered_map<std::string,data::ConfigPublicAISkillCD>::emplace<std::string&,data::ConfigPublicAISkillCD&>(
                m,
                (std::string *)(v3 + 96),
                (data::ConfigPublicAISkillCD *)(v3 + 656),
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            312);
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
      data::ConfigPublicAISkillCD::~ConfigPublicAISkillCD((data::ConfigPublicAISkillCD *const)(v3 + 656));
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
    *(_BYTE *)(v20 + 4) = -8;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return result;
};

// Line 321: range 000000000D571063-000000000D57130A
int32_t __cdecl data::getMapHashValue(const data::ConfigPublicAISkillCDMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigPublicAISkillCD>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigPublicAISkillCD> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigPublicAISkillCD> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:322 64 8 15 __for_begin:323 96 8 13 __for_end:323";
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
  *(std::unordered_map<std::string,data::ConfigPublicAISkillCD>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigPublicAISkillCD>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigPublicAISkillCD>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigPublicAISkillCD>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigPublicAISkillCD>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigPublicAISkillCD>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigPublicAISkillCD>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigPublicAISkillCD>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigPublicAISkillCD>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigPublicAISkillCD>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigPublicAISkillCD> >::type *)std::get<1ul,std::string const,data::ConfigPublicAISkillCD>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigPublicAISkillCD::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigPublicAISkillCD>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigPublicAISkillCD>,false,true> *const)(v2 + 64));
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

// Line 335: range 000000000D57130C-000000000D572CCD
bool __cdecl data::ConfigGlobalAI::fromJson(data::ConfigGlobalAI *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *avatar_melee_slot_radius_ptr; // [rsp+10h] [rbp-630h]
  const Json::Value *avoidance_radius_ptr; // [rsp+18h] [rbp-628h]
  const Json::Value *avoidance_force_ptr; // [rsp+20h] [rbp-620h]
  const Json::Value *lod0_ptr; // [rsp+28h] [rbp-618h]
  const Json::Value *lod1_ptr; // [rsp+30h] [rbp-610h]
  const Json::Value *lod2_ptr; // [rsp+38h] [rbp-608h]
  const Json::Value *sensing_ignore_camp_ids_ptr; // [rsp+40h] [rbp-600h]
  const Json::Value *public_cds_ptr; // [rsp+48h] [rbp-5F8h]
  const Json::Value *default_weather_neuron_mapping_ptr; // [rsp+50h] [rbp-5F0h]
  const Json::Value *use_server_pathfinding_ptr; // [rsp+58h] [rbp-5E8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalAI::fromJson;
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
    "avatarMeleeSlotRadius",
    (const std::allocator<char> *)(v2 + 32));
  avatar_melee_slot_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( avatar_melee_slot_radius_ptr && !fromJson<float>(avatar_melee_slot_radius_ptr, &this->avatar_melee_slot_radius) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      345);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[43])"fromJson for: avatarMeleeSlotRadius fails!");
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
      "avoidanceRadius",
      (const std::allocator<char> *)(v2 + 48));
    avoidance_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( avoidance_radius_ptr && !fromJson<float>(avoidance_radius_ptr, &this->avoidance_radius) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        357);
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        (common::milog::MiLogStream *const)(v2 + 384),
        (const char (*)[37])"fromJson for: avoidanceRadius fails!");
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
        "avoidanceForce",
        (const std::allocator<char> *)(v2 + 64));
      avoidance_force_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
      std::string::~string((void *)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( avoidance_force_ptr && !fromJson<float>(avoidance_force_ptr, &this->avoidance_force) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          369);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 512),
          (const char (*)[36])"fromJson for: avoidanceForce fails!");
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
          "lod0",
          (const std::allocator<char> *)(v2 + 80));
        lod0_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
        std::string::~string((void *)(v2 + 576));
        *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( lod0_ptr && !fromJson<float>(lod0_ptr, &this->lod0) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            381);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)(v2 + 640),
            (const char (*)[26])"fromJson for: lod0 fails!");
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
            "lod1",
            (const std::allocator<char> *)(v2 + 96));
          lod1_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
          std::string::~string((void *)(v2 + 704));
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( lod1_ptr && !fromJson<float>(lod1_ptr, &this->lod1) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              393);
            common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[26])"fromJson for: lod1 fails!");
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
              "lod2",
              (const std::allocator<char> *)(v2 + 112));
            lod2_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
            std::string::~string((void *)(v2 + 832));
            *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( lod2_ptr && !fromJson<float>(lod2_ptr, &this->lod2) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                405);
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[26])"fromJson for: lod2 fails!");
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
                "sensingIgnoreCampIDs",
                (const std::allocator<char> *)(v2 + 128));
              sensing_ignore_camp_ids_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( sensing_ignore_camp_ids_ptr
                && !data::vecFromJson(sensing_ignore_camp_ids_ptr, &this->sensing_ignore_camp_ids) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  417);
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)(v2 + 1024),
                  (const char (*)[42])"fromJson for: sensingIgnoreCampIDs fails!");
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
                  "publicCDs",
                  (const std::allocator<char> *)(v2 + 144));
                public_cds_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
                std::string::~string((void *)(v2 + 1088));
                *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( public_cds_ptr && !data::mapFromJson(public_cds_ptr, &this->public_cds) )
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
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    429);
                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 1152),
                    (const char (*)[31])"fromJson for: publicCDs fails!");
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
                    "defaultWeatherNeuronMapping",
                    (const std::allocator<char> *)(v2 + 160));
                  default_weather_neuron_mapping_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                  std::string::~string((void *)(v2 + 1216));
                  *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( default_weather_neuron_mapping_ptr
                    && !data::mapFromJson(default_weather_neuron_mapping_ptr, &this->default_weather_neuron_mapping) )
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
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      441);
                    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                      (common::milog::MiLogStream *const)(v2 + 1280),
                      (const char (*)[49])"fromJson for: defaultWeatherNeuronMapping fails!");
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
                      "useServerPathfinding",
                      (const std::allocator<char> *)(v2 + 176));
                    use_server_pathfinding_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                    std::string::~string((void *)(v2 + 1344));
                    *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( use_server_pathfinding_ptr
                      && !fromJson<bool>(use_server_pathfinding_ptr, &this->use_server_pathfinding) )
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
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        453);
                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                        (common::milog::MiLogStream *const)(v2 + 1408),
                        (const char (*)[42])"fromJson for: useServerPathfinding fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                      v5 = 0;
                    }
                    else
                    {
                      v6 = ((_BYTE)this - 95) & 7;
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
    }
  }
  v8 = v5;
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
  return v8;
};

// Line 461: range 000000000D572CCE-000000000D57306A
int32_t __cdecl data::ConfigGlobalAI::getHashValue(const data::ConfigGlobalAI *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:462";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalAI::getHashValue;
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
  common::tools::HashUtils::appendHash(this->avatar_melee_slot_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avoidance_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avoidance_radius >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->avoidance_radius);
  }
  common::tools::HashUtils::appendHash(this->avoidance_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->avoidance_force >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->avoidance_force >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->avoidance_force);
  }
  common::tools::HashUtils::appendHash(this->avoidance_force, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lod0 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lod0 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lod0);
  }
  common::tools::HashUtils::appendHash(this->lod0, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lod1 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->lod1 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->lod1);
  }
  common::tools::HashUtils::appendHash(this->lod1, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lod2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lod2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lod2);
  }
  common::tools::HashUtils::appendHash(this->lod2, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->sensing_ignore_camp_ids);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->public_cds);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v7 = data::getMapHashValue(&this->default_weather_neuron_mapping);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->use_server_pathfinding >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->use_server_pathfinding, v2 + 32, &this->use_server_pathfinding);
  common::tools::HashUtils::appendHash(this->use_server_pathfinding, (int32_t *)(v2 + 32));
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

// Line 478: range 000000000D57306C-000000000D573902
bool __cdecl data::ConfigMoveSyncInterval::fromJson(data::ConfigMoveSyncInterval *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  const Json::Value *v6; // rsi
  const Json::Value *lod0_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *lod1_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *lod2_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMoveSyncInterval::fromJson;
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
    "lod0",
    (const std::allocator<char> *)(v2 + 48));
  lod0_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( lod0_ptr && !data::ConfigSpecificFloatValue::fromJson(&this->lod0, lod0_ptr) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      488);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[26])"fromJson for: lod0 fails!");
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
      "lod1",
      (const std::allocator<char> *)(v2 + 64));
    lod1_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( lod1_ptr && !data::ConfigSpecificFloatValue::fromJson(&this->lod1, lod1_ptr) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        500);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[26])"fromJson for: lod1 fails!");
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
        "lod2",
        (const std::allocator<char> *)(v2 + 80));
      v6 = (const Json::Value *)(v2 + 352);
      lod2_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( lod2_ptr && (v6 = lod2_ptr, !data::ConfigSpecificFloatValue::fromJson(&this->lod2, lod2_ptr)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          512);
        common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[26])"fromJson for: lod2 fails!");
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

// Line 520: range 000000000D573904-000000000D573A82
int32_t __cdecl data::ConfigMoveSyncInterval::getHashValue(const data::ConfigMoveSyncInterval *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:521";
  *(_QWORD *)(v2 + 16) = data::ConfigMoveSyncInterval::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigSpecificFloatValue::getHashValue(&this->lod0);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigSpecificFloatValue::getHashValue(&this->lod1);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigSpecificFloatValue::getHashValue(&this->lod2);
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

// Line 530: range 000000000D573A84-000000000D574074
bool __cdecl data::ConfigGlobalMove::fromJson(data::ConfigGlobalMove *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *sync_interval_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *no_ground_stay_in_place_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalMove::fromJson;
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
    "syncInterval",
    (const std::allocator<char> *)(v2 + 32));
  sync_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( sync_interval_ptr && !data::ConfigMoveSyncInterval::fromJson(&this->sync_interval, sync_interval_ptr) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      540);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: syncInterval fails!");
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
      "noGroundStayInPlace",
      (const std::allocator<char> *)(v2 + 48));
    no_ground_stay_in_place_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( no_ground_stay_in_place_ptr && !fromJson<bool>(no_ground_stay_in_place_ptr, &this->no_ground_stay_in_place) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        552);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[41])"fromJson for: noGroundStayInPlace fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this - 31) & 7;
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

// Line 560: range 000000000D574076-000000000D574202
int32_t __cdecl data::ConfigGlobalMove::getHashValue(const data::ConfigGlobalMove *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:561";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalMove::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigMoveSyncInterval::getHashValue(&this->sync_interval);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->no_ground_stay_in_place >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->no_ground_stay_in_place, v2 + 32, &this->no_ground_stay_in_place);
  common::tools::HashUtils::appendHash(this->no_ground_stay_in_place, (int32_t *)(v2 + 32));
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

// Line 569: range 000000000D574204-000000000D574D1E
bool __cdecl data::ConfigAvatarHitBucketSetting::fromJson(
        data::ConfigAvatarHitBucketSetting *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *melee_bucket_count_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *melee_bucket_cd_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *ranged_bucket_count_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *ranged_bucket_cd_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarHitBucketSetting::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "meleeBucketCount",
    (const std::allocator<char> *)(v2 + 32));
  melee_bucket_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( melee_bucket_count_ptr && !fromJson<int>(melee_bucket_count_ptr, &this->melee_bucket_count) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      579);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[38])"fromJson for: meleeBucketCount fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "meleeBucketCD",
      (const std::allocator<char> *)(v2 + 48));
    melee_bucket_cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( melee_bucket_cd_ptr && !fromJson<float>(melee_bucket_cd_ptr, &this->melee_bucket_cd) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        591);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[35])"fromJson for: meleeBucketCD fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "rangedBucketCount",
        (const std::allocator<char> *)(v2 + 64));
      ranged_bucket_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( ranged_bucket_count_ptr && !fromJson<int>(ranged_bucket_count_ptr, &this->ranged_bucket_count) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          603);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[39])"fromJson for: rangedBucketCount fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "rangedBucketCD",
          (const std::allocator<char> *)(v2 + 80));
        ranged_bucket_cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( ranged_bucket_cd_ptr && !fromJson<float>(ranged_bucket_cd_ptr, &this->ranged_bucket_cd) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            615);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[36])"fromJson for: rangedBucketCD fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 16) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 623: range 000000000D574D20-000000000D574F80
int32_t __cdecl data::ConfigAvatarHitBucketSetting::getHashValue(const data::ConfigAvatarHitBucketSetting *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:624";
  *(_QWORD *)(v2 + 16) = data::ConfigAvatarHitBucketSetting::getHashValue;
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
  common::tools::HashUtils::appendHash(this->melee_bucket_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->melee_bucket_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->melee_bucket_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->melee_bucket_cd);
  }
  common::tools::HashUtils::appendHash(this->melee_bucket_cd, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_count >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_count >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ranged_bucket_count);
  }
  common::tools::HashUtils::appendHash(this->ranged_bucket_count, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ranged_bucket_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ranged_bucket_cd);
  }
  common::tools::HashUtils::appendHash(this->ranged_bucket_cd, (int32_t *)(v2 + 32));
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

// Line 634: range 000000000D574F82-000000000D575810
bool __cdecl data::ConfigBladeElementFx::fromJson(data::ConfigBladeElementFx *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  std::string *p_color_b; // rsi
  const Json::Value *slash_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *color_a_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *color_b_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBladeElementFx::fromJson;
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
    "slash",
    (const std::allocator<char> *)(v2 + 48));
  slash_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( slash_ptr && !fromJson<std::string>(slash_ptr, &this->slash) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      644);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[27])"fromJson for: slash fails!");
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
      "colorA",
      (const std::allocator<char> *)(v2 + 64));
    color_a_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( color_a_ptr && !fromJson<std::string>(color_a_ptr, &this->color_a) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        656);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[28])"fromJson for: colorA fails!");
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
        "colorB",
        (const std::allocator<char> *)(v2 + 80));
      p_color_b = (std::string *)(v2 + 352);
      color_b_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( color_b_ptr && (p_color_b = &this->color_b, !fromJson<std::string>(color_b_ptr, &this->color_b)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          668);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[28])"fromJson for: colorB fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_color_b, &this->is_json_loaded);
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

// Line 676: range 000000000D575812-000000000D575973
int32_t __cdecl data::ConfigBladeElementFx::getHashValue(const data::ConfigBladeElementFx *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:677";
  *(_QWORD *)(v2 + 16) = data::ConfigBladeElementFx::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->slash, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->color_a, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->color_b, (int32_t *)(v2 + 32));
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

// Line 685: range 000000000D575974-000000000D5765B5
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigBladeElementFxMap *m)
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
  data::ConfigBladeElementFx *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigBladeElementFx>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  bool result; // al
  char v23[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 16 7 cit:687 64 16 9 <unknown> 96 32 7 key:690 160 32 9 <unknown> 224 32 9 <unknown> 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 40 12 tmp_jval:686 496 40 12 key_jval:689 576 40 14 value_j"
                        "val:696 656 104 9 value:697";
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
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
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
      && (char)((v3 - 16 + 39) & 7) >= *(_BYTE *)(((v3 + 535) >> 3) + 0x7FFF8000) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        693);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
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
      *(_BYTE *)(v12 + 12) = 0;
      data::ConfigBladeElementFx::ConfigBladeElementFx((data::ConfigBladeElementFx *const)(v3 + 656));
      if ( !data::ConfigBladeElementFx::fromJson(
              (data::ConfigBladeElementFx *const)(v3 + 656),
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          700);
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
        v16 = std::unordered_map<std::string,data::ConfigBladeElementFx>::emplace<std::string&,data::ConfigBladeElementFx&>(
                m,
                (std::string *)(v3 + 96),
                (data::ConfigBladeElementFx *)(v3 + 656),
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            705);
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
      data::ConfigBladeElementFx::~ConfigBladeElementFx((data::ConfigBladeElementFx *const)(v3 + 656));
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
    *(_BYTE *)(v20 + 12) = -8;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return result;
};

// Line 714: range 000000000D5765B6-000000000D57685D
int32_t __cdecl data::getMapHashValue(const data::ConfigBladeElementFxMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBladeElementFx>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigBladeElementFx> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigBladeElementFx> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:715 64 8 15 __for_begin:716 96 8 13 __for_end:716";
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
  *(std::unordered_map<std::string,data::ConfigBladeElementFx>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigBladeElementFx>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigBladeElementFx>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigBladeElementFx>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigBladeElementFx>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigBladeElementFx>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigBladeElementFx>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigBladeElementFx>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBladeElementFx>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigBladeElementFx>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigBladeElementFx> >::type *)std::get<1ul,std::string const,data::ConfigBladeElementFx>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigBladeElementFx::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigBladeElementFx>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigBladeElementFx>,false,true> *const)(v2 + 64));
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

// Line 728: range 000000000D57685E-000000000D5784B8
bool __cdecl data::ConfigDefaultAbilities::fromJson(data::ConfigDefaultAbilities *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::StringArray *p_default_avatar_abilities; // rsi
  bool v7; // bl
  const Json::Value *monter_elite_ability_name_ptr; // [rsp+18h] [rbp-6D8h]
  const Json::Value *non_humanoid_move_abilities_ptr; // [rsp+20h] [rbp-6D0h]
  const Json::Value *level_default_abilities_ptr; // [rsp+28h] [rbp-6C8h]
  const Json::Value *level_element_abilities_ptr; // [rsp+30h] [rbp-6C0h]
  const Json::Value *evaluate_global_value_abilities_ptr; // [rsp+38h] [rbp-6B8h]
  const Json::Value *level_item_abilities_ptr; // [rsp+40h] [rbp-6B0h]
  const Json::Value *level_sbuff_abilities_ptr; // [rsp+48h] [rbp-6A8h]
  const Json::Value *dungeon_abilities_ptr; // [rsp+50h] [rbp-6A0h]
  const Json::Value *default_team_abilities_ptr; // [rsp+58h] [rbp-698h]
  const Json::Value *default_mplevel_abilities_ptr; // [rsp+60h] [rbp-690h]
  const Json::Value *default_avatar_abilities_ptr; // [rsp+68h] [rbp-688h]
  char v21[1664]; // [rsp+70h] [rbp-680h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "33 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigDefaultAbilities::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "monterEliteAbilityName",
    (const std::allocator<char> *)(v2 + 48));
  monter_elite_ability_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( monter_elite_ability_name_ptr
    && !fromJson<std::string>(monter_elite_ability_name_ptr, &this->monter_elite_ability_name) )
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      738);
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[44])"fromJson for: monterEliteAbilityName fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      "nonHumanoidMoveAbilities",
      (const std::allocator<char> *)(v2 + 64));
    non_humanoid_move_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( non_humanoid_move_abilities_ptr
      && !data::arrFromJson(non_humanoid_move_abilities_ptr, &this->non_humanoid_move_abilities) )
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        750);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[46])"fromJson for: nonHumanoidMoveAbilities fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "levelDefaultAbilities",
        (const std::allocator<char> *)(v2 + 80));
      level_default_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( level_default_abilities_ptr
        && !data::arrFromJson(level_default_abilities_ptr, &this->level_default_abilities) )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          762);
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[43])"fromJson for: levelDefaultAbilities fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          "levelElementAbilities",
          (const std::allocator<char> *)(v2 + 96));
        level_element_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( level_element_abilities_ptr
          && !data::arrFromJson(level_element_abilities_ptr, &this->level_element_abilities) )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            774);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[43])"fromJson for: levelElementAbilities fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            "evaluateGlobalValueAbilities",
            (const std::allocator<char> *)(v2 + 112));
          evaluate_global_value_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( evaluate_global_value_abilities_ptr
            && !data::arrFromJson(evaluate_global_value_abilities_ptr, &this->evaluate_global_value_abilities) )
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              786);
            common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[50])"fromJson for: evaluateGlobalValueAbilities fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              "levelItemAbilities",
              (const std::allocator<char> *)(v2 + 128));
            level_item_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( level_item_abilities_ptr && !data::arrFromJson(level_item_abilities_ptr, &this->level_item_abilities) )
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                798);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[40])"fromJson for: levelItemAbilities fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 992),
                "levelSBuffAbilities",
                (const std::allocator<char> *)(v2 + 144));
              level_sbuff_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( level_sbuff_abilities_ptr
                && !data::arrFromJson(level_sbuff_abilities_ptr, &this->level_sbuff_abilities) )
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  810);
                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[41])"fromJson for: levelSBuffAbilities fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1120),
                  "dungeonAbilities",
                  (const std::allocator<char> *)(v2 + 160));
                dungeon_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( dungeon_abilities_ptr && !data::arrFromJson(dungeon_abilities_ptr, &this->dungeon_abilities) )
                {
                  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1184, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1184),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    822);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[38])"fromJson for: dungeonAbilities fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1248),
                    "defaultTeamAbilities",
                    (const std::allocator<char> *)(v2 + 176));
                  default_team_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( default_team_abilities_ptr
                    && !data::arrFromJson(default_team_abilities_ptr, &this->default_team_abilities) )
                  {
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1312, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1312),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      834);
                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[42])"fromJson for: defaultTeamAbilities fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1376),
                      "defaultMPLevelAbilities",
                      (const std::allocator<char> *)(v2 + 192));
                    default_mplevel_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( default_mplevel_abilities_ptr
                      && !data::arrFromJson(default_mplevel_abilities_ptr, &this->default_mplevel_abilities) )
                    {
                      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1440, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1440),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        846);
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[45])"fromJson for: defaultMPLevelAbilities fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1504),
                        "defaultAvatarAbilities",
                        (const std::allocator<char> *)(v2 + 208));
                      p_default_avatar_abilities = (data::StringArray *)(v2 + 1504);
                      default_avatar_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( default_avatar_abilities_ptr
                        && (p_default_avatar_abilities = &this->default_avatar_abilities,
                            !data::arrFromJson(default_avatar_abilities_ptr, &this->default_avatar_abilities)) )
                      {
                        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1568, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1568),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          858);
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[44])"fromJson for: defaultAvatarAbilities fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                        v5 = 0;
                      }
                      else
                      {
                        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                          __asan_report_store1(&this->is_json_loaded, p_default_avatar_abilities, &this->is_json_loaded);
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
  v7 = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v21);
  }
  return v7;
};

// Line 866: range 000000000D5784BA-000000000D578733
int32_t __cdecl data::ConfigDefaultAbilities::getHashValue(const data::ConfigDefaultAbilities *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t v8; // eax
  int32_t v9; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t result; // eax
  char v16[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:867";
  *(_QWORD *)(v2 + 16) = data::ConfigDefaultAbilities::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->monter_elite_ability_name, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->non_humanoid_move_abilities);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->level_default_abilities);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getArrHashValue(&this->level_element_abilities);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::getArrHashValue(&this->evaluate_global_value_abilities);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::getArrHashValue(&this->level_item_abilities);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::getArrHashValue(&this->level_sbuff_abilities);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  v11 = data::getArrHashValue(&this->dungeon_abilities);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::getArrHashValue(&this->default_team_abilities);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::getArrHashValue(&this->default_mplevel_abilities);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::getArrHashValue(&this->default_avatar_abilities);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v16 == (char *)v2 )
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

// Line 883: range 000000000D578734-000000000D578A10
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ElementReactionTypeList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  bool result; // al
  std::vector<data::ElementReactionType> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 48 4 8 elem:889 64 32 9 <unknown>";
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
      if ( !fromJson<data::ElementReactionType>(elem_jval, (data::ElementReactionType *)(v3 + 48)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "vecFromJson",
          892);
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
        std::vector<data::ElementReactionType>::push_back(
          va,
          (const std::vector<data::ElementReactionType>::value_type *)(v3 + 48));
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

// Line 902: range 000000000D578A11-000000000D578C92
int32_t __cdecl data::getVecHashValue(const data::ElementReactionTypeList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::ElementReactionType *v5; // rax
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
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:903 64 8 15 __for_begin:904 96 8 13 __for_end:904";
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
  *(std::vector<data::ElementReactionType>::const_iterator *)(v2 + 64) = std::vector<data::ElementReactionType>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ElementReactionType>::const_iterator *)(v2 + 96) = std::vector<data::ElementReactionType>::end(vec);
  while ( __gnu_cxx::operator!=<data::ElementReactionType const*,std::vector<data::ElementReactionType>>(
            (const __gnu_cxx::__normal_iterator<const data::ElementReactionType*,std::vector<data::ElementReactionType> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ElementReactionType*,std::vector<data::ElementReactionType> > *)(v2 + 96)) )
  {
    v5 = (data::ElementReactionType *)__gnu_cxx::__normal_iterator<data::ElementReactionType const*,std::vector<data::ElementReactionType>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementReactionType*,std::vector<data::ElementReactionType> > *const)(v2 + 64));
    elem = (int32_t *)v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    common::tools::HashUtils::appendHash(*elem, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ElementReactionType const*,std::vector<data::ElementReactionType>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementReactionType*,std::vector<data::ElementReactionType> > *const)(v2 + 64));
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

// Line 912: range 000000000D578C93-000000000D579BC6
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigRejectElementReactionMap *m)
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
  std::vector<data::ElementReactionType> *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false,false>,bool> v18; // rax
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
  *(_QWORD *)(v3 + 8) = "15 48 8 7 key:917 80 8 9 <unknown> 112 8 9 <unknown> 144 16 7 cit:914 176 16 9 <unknown> 208 24 "
                        "9 value:930 272 32 11 key_str:918 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> 528 3"
                        "2 9 <unknown> 592 32 9 <unknown> 656 40 12 tmp_jval:913 736 40 12 key_jval:916 816 40 14 value_jval:929";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = -218959360;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -219021312;
  v5[536862738] = 62194;
  v5[536862739] = -219021312;
  v5[536862740] = 62194;
  v5[536862741] = -234881024;
  v5[536862742] = -218959118;
  v5[536862744] = -218959360;
  v5[536862745] = 62194;
  v5[536862746] = -218103808;
  v5[536862747] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 656), jval);
  if ( *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 656));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 656));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 144),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 176));
    *(_WORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 775) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 7) & 7) >= *(_BYTE *)(((v3 + 775) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 736, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 736));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 272);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 736), (std::string *)(v3 + 272)) )
    {
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        921);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 336),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 81) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 400, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 400), (Json::Value_0 *)(v3 + 736));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 400));
      std::string::~string((void *)(v3 + 400));
      *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 272), (data::AbilityState *)(v3 + 48)) )
    {
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 17) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 464, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 464),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        926);
      v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
              (common::milog::MiLogStream *const)(v3 + 464),
              (const char (*)[21])"enumStrToVal fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 272));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
      *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 816) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 144));
      Json::Value::Value((Json::Value *)(v3 + 816), v12);
      v13 = ((v3 + 208) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      std::vector<data::ElementReactionType>::vector((std::vector<data::ElementReactionType> *const)(v3 + 208));
      if ( !data::vecFromJson((const Json::Value *)(v3 + 816), (data::ElementReactionTypeList *)(v3 + 208)) )
      {
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 528) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 559) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 528, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 528),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          933);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 528),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v3 + 48);
        v16 = (__int64)data::enumValToStr(*(data::AbilityState *)(v3 + 48));
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
          v16 = __asan_report_store8(v3 + 80, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 80) = v16;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v15, (const char *const *)(v3 + 80));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 528));
        *(_DWORD *)(((v3 + 528) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v17 = 0;
      }
      else
      {
        v18 = std::unordered_map<data::AbilityState,std::vector<data::ElementReactionType>>::emplace<data::AbilityState&,std::vector<data::ElementReactionType>&>(
                m,
                (data::AbilityState *)(v3 + 48),
                (std::vector<data::ElementReactionType> *)(v3 + 208),
                (data::AbilityState *)(v3 + 48),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 592) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 623) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 592, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 592),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            938);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 592),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
            __asan_report_load8(v3 + 48);
          v20 = (__int64)data::enumValToStr(*(data::AbilityState *)(v3 + 48));
          if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
            v20 = __asan_report_store8(v3 + 112, "key duplicate: ");
          *(_QWORD *)(v3 + 112) = v20;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v3 + 112));
          *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 592));
          *(_DWORD *)(((v3 + 592) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v17 = 0;
        }
        else
        {
          v17 = 1;
        }
      }
      std::vector<data::ElementReactionType>::~vector((std::vector<data::ElementReactionType> *const)(v3 + 208));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 816));
      v9 = v17 == 1;
    }
    std::string::~string((void *)(v3 + 272));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 736));
    v21 = ((v3 + 736) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
    v22 = ((v3 + 816) >> 3) + 2147450880;
    *(_DWORD *)v22 = -117901064;
    *(_BYTE *)(v22 + 4) = -8;
    v23 = ((v3 + 208) >> 3) + 2147450880;
    *(_WORD *)v23 = -1800;
    *(_BYTE *)(v23 + 2) = -8;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 144));
  }
  v24 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -1800;
  if ( v24 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
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

// Line 947: range 000000000D579BC7-000000000D579E84
int32_t __cdecl data::getMapHashValue(const data::ConfigRejectElementReactionMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t VecHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::AbilityState,std::vector<data::ElementReactionType> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::AbilityState,std::vector<data::ElementReactionType> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:948 64 8 15 __for_begin:949 96 8 13 __for_end:949";
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
  *(std::unordered_map<data::AbilityState,std::vector<data::ElementReactionType>>::const_iterator *)(v2 + 64) = std::unordered_map<data::AbilityState,std::vector<data::ElementReactionType>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::AbilityState,std::vector<data::ElementReactionType>>::const_iterator *)(v2 + 96) = std::unordered_map<data::AbilityState,std::vector<data::ElementReactionType>>::end(map);
  while ( std::__detail::operator!=<std::pair<data::AbilityState const,std::vector<data::ElementReactionType>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::AbilityState const,std::vector<data::ElementReactionType>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::AbilityState const,std::vector<data::ElementReactionType>>(v7);
    val = (std::tuple_element<1,const std::pair<const data::AbilityState,std::vector<data::ElementReactionType> > >::type *)std::get<1ul,data::AbilityState const,std::vector<data::ElementReactionType>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
      __asan_report_load8(key);
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    VecHashValue = data::getVecHashValue(val);
    common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::AbilityState const,std::vector<data::ElementReactionType>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::AbilityState,std::vector<data::ElementReactionType> >,false,false> *const)(v2 + 64));
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

// Line 961: range 000000000D579E86-000000000D57BACE
bool __cdecl data::ConfigGlobalShakeOff::fromJson(data::ConfigGlobalShakeOff *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *reduce_durability_ptr; // [rsp+18h] [rbp-6D8h]
  const Json::Value *interval_ptr; // [rsp+20h] [rbp-6D0h]
  const Json::Value *shake_life_time_ptr; // [rsp+28h] [rbp-6C8h]
  const Json::Value *shake_value_ptr; // [rsp+30h] [rbp-6C0h]
  const Json::Value *shake_period_ptr; // [rsp+38h] [rbp-6B8h]
  const Json::Value *shake_smooth_ratio_ptr; // [rsp+40h] [rbp-6B0h]
  const Json::Value *shake_along_angle_ptr; // [rsp+48h] [rbp-6A8h]
  const Json::Value *shake_rot_angle_ptr; // [rsp+50h] [rbp-6A0h]
  const Json::Value *shake_noise_ratio_ptr; // [rsp+58h] [rbp-698h]
  const Json::Value *shake_dir_ratio_ptr; // [rsp+60h] [rbp-690h]
  const Json::Value *shake_zratio_ptr; // [rsp+68h] [rbp-688h]
  char v21[1664]; // [rsp+70h] [rbp-680h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1632LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "33 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkno"
                        "wn> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknow"
                        "n> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unkno"
                        "wn> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <u"
                        "nknown> 1504 32 9 <unknown> 1568 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalShakeOff::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "reduceDurability",
    (const std::allocator<char> *)(v2 + 48));
  reduce_durability_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( reduce_durability_ptr && !fromJson<float>(reduce_durability_ptr, &this->reduce_durability) )
  {
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      971);
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[38])"fromJson for: reduceDurability fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      "interval",
      (const std::allocator<char> *)(v2 + 64));
    interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( interval_ptr && !fromJson<float>(interval_ptr, &this->interval) )
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        983);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[30])"fromJson for: interval fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "shakeLifeTime",
        (const std::allocator<char> *)(v2 + 80));
      shake_life_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( shake_life_time_ptr && !fromJson<float>(shake_life_time_ptr, &this->shake_life_time) )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          995);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[35])"fromJson for: shakeLifeTime fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          "shakeValue",
          (const std::allocator<char> *)(v2 + 96));
        shake_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( shake_value_ptr && !fromJson<float>(shake_value_ptr, &this->shake_value) )
        {
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 672, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 672),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            1007);
          common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[32])"fromJson for: shakeValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            "shakePeriod",
            (const std::allocator<char> *)(v2 + 112));
          shake_period_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( shake_period_ptr && !fromJson<float>(shake_period_ptr, &this->shake_period) )
          {
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              1019);
            common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[33])"fromJson for: shakePeriod fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 864),
              "shakeSmoothRatio",
              (const std::allocator<char> *)(v2 + 128));
            shake_smooth_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( shake_smooth_ratio_ptr && !fromJson<float>(shake_smooth_ratio_ptr, &this->shake_smooth_ratio) )
            {
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 928, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 928),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                1031);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[38])"fromJson for: shakeSmoothRatio fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 992),
                "shakeAlongAngle",
                (const std::allocator<char> *)(v2 + 144));
              shake_along_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( shake_along_angle_ptr && !fromJson<float>(shake_along_angle_ptr, &this->shake_along_angle) )
              {
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  1043);
                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[37])"fromJson for: shakeAlongAngle fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1120),
                  "shakeRotAngle",
                  (const std::allocator<char> *)(v2 + 160));
                shake_rot_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( shake_rot_angle_ptr && !fromJson<float>(shake_rot_angle_ptr, &this->shake_rot_angle) )
                {
                  *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1184, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1184),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    1055);
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[35])"fromJson for: shakeRotAngle fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1248),
                    "shakeNoiseRatio",
                    (const std::allocator<char> *)(v2 + 176));
                  shake_noise_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( shake_noise_ratio_ptr && !fromJson<float>(shake_noise_ratio_ptr, &this->shake_noise_ratio) )
                  {
                    *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1312, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1312),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      1067);
                    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[37])"fromJson for: shakeNoiseRatio fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1376),
                      "shakeDirRatio",
                      (const std::allocator<char> *)(v2 + 192));
                    shake_dir_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( shake_dir_ratio_ptr && !fromJson<float>(shake_dir_ratio_ptr, &this->shake_dir_ratio) )
                    {
                      *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1440, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1440),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        1079);
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[35])"fromJson for: shakeDirRatio fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1504),
                        "shakeZRatio",
                        (const std::allocator<char> *)(v2 + 208));
                      shake_zratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( shake_zratio_ptr && !fromJson<float>(shake_zratio_ptr, &this->shake_zratio) )
                      {
                        *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1568, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1568),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          1091);
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[33])"fromJson for: shakeZRatio fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                        v5 = 0;
                      }
                      else
                      {
                        v6 = ((_BYTE)this + 44) & 7;
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
      }
    }
  }
  v8 = v5;
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1632LL, v21);
  }
  return v8;
};

// Line 1099: range 000000000D57BAD0-000000000D57BF6D
int32_t __cdecl data::ConfigGlobalShakeOff::getHashValue(const data::ConfigGlobalShakeOff *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1100";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalShakeOff::getHashValue;
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
  common::tools::HashUtils::appendHash(this->reduce_durability, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->interval >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->interval);
  }
  common::tools::HashUtils::appendHash(this->interval, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_life_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_life_time >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_life_time);
  }
  common::tools::HashUtils::appendHash(this->shake_life_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_value >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_value);
  }
  common::tools::HashUtils::appendHash(this->shake_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_period >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_period >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_period);
  }
  common::tools::HashUtils::appendHash(this->shake_period, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_smooth_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_smooth_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_smooth_ratio);
  }
  common::tools::HashUtils::appendHash(this->shake_smooth_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_along_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_along_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_along_angle);
  }
  common::tools::HashUtils::appendHash(this->shake_along_angle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_rot_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_rot_angle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_rot_angle);
  }
  common::tools::HashUtils::appendHash(this->shake_rot_angle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_noise_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_noise_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_noise_ratio);
  }
  common::tools::HashUtils::appendHash(this->shake_noise_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_dir_ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_dir_ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_dir_ratio);
  }
  common::tools::HashUtils::appendHash(this->shake_dir_ratio, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shake_zratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shake_zratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shake_zratio);
  }
  common::tools::HashUtils::appendHash(this->shake_zratio, (int32_t *)(v2 + 32));
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

// Line 1117: range 000000000D57BF6E-000000000D57C8F9
bool __cdecl data::ConfigElementShieldResistance::fromJson(
        data::ConfigElementShieldResistance *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  data::Int32Array *p_restraint; // rsi
  Json::Value *element_type_ptr; // [rsp+18h] [rbp-268h]
  const Json::Value *damage_ratio_ptr; // [rsp+20h] [rbp-260h]
  const Json::Value *restraint_ptr; // [rsp+28h] [rbp-258h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigElementShieldResistance::fromJson;
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
    "elementType",
    (const std::allocator<char> *)(v2 + 48));
  element_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !element_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)element_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->element_type);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1127);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[33])"fromJson for: elementType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "damageRatio",
      (const std::allocator<char> *)(v2 + 64));
    damage_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( damage_ratio_ptr && !data::arrFromJson(damage_ratio_ptr, &this->damage_ratio) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1139);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[33])"fromJson for: damageRatio fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "restraint",
        (const std::allocator<char> *)(v2 + 80));
      p_restraint = (data::Int32Array *)(v2 + 416);
      restraint_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( restraint_ptr && (p_restraint = &this->restraint, !data::arrFromJson(restraint_ptr, &this->restraint)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1151);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[31])"fromJson for: restraint fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_restraint, &this->is_json_loaded);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 1159: range 000000000D57C8FA-000000000D57CA9D
int32_t __cdecl data::ConfigElementShieldResistance::getHashValue(
        const data::ConfigElementShieldResistance *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1160";
  *(_QWORD *)(v2 + 16) = data::ConfigElementShieldResistance::getHashValue;
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
  common::tools::HashUtils::appendHash(this->element_type, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->damage_ratio);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->restraint);
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

// Line 1168: range 000000000D57CA9E-000000000D57D9CE
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigElementShieldResistanceMap *m)
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
  _DWORD *v13; // rax
  data::ConfigElementShieldResistance *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  _DWORD *v23; // rax
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
  *(_QWORD *)(v3 + 8) = "15 32 4 8 key:1173 48 8 9 <unknown> 80 8 9 <unknown> 112 16 8 cit:1170 144 16 9 <unknown> 176 32"
                        " 12 key_str:1174 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496"
                        " 32 9 <unknown> 560 40 13 tmp_jval:1169 640 40 13 key_jval:1172 720 40 15 value_jval:1185 800 64 10 value:1186";
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1177);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 176), (data::ElementType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1182);
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
      v13 = (_DWORD *)(((v3 + 800) >> 3) + 2147450880);
      *v13 = 0;
      v13[1] = 0;
      data::ConfigElementShieldResistance::ConfigElementShieldResistance((data::ConfigElementShieldResistance *const)(v3 + 800));
      if ( !data::ConfigElementShieldResistance::fromJson(
              (data::ConfigElementShieldResistance *const)(v3 + 800),
              (const Json::Value *)(v3 + 720)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          1189);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v16 = (__int64)data::enumValToStr((data::ElementType)*(_DWORD *)(v3 + 32));
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
        v18 = std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::emplace<data::ElementType&,data::ConfigElementShieldResistance&>(
                m,
                (data::ElementType *)(v3 + 32),
                (data::ConfigElementShieldResistance *)(v3 + 800),
                (data::ElementType *)(v3 + 32),
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            1194);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v20 = (__int64)data::enumValToStr((data::ElementType)*(_DWORD *)(v3 + 32));
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
      data::ConfigElementShieldResistance::~ConfigElementShieldResistance((data::ConfigElementShieldResistance *const)(v3 + 800));
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
    v23 = (_DWORD *)(((v3 + 800) >> 3) + 2147450880);
    *v23 = -117901064;
    v23[1] = -117901064;
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

// Line 1203: range 000000000D57D9CF-000000000D57DC9F
int32_t __cdecl data::getMapHashValue(const data::ConfigElementShieldResistanceMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::ElementType,data::ConfigElementShieldResistance> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::ElementType,data::ConfigElementShieldResistance> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1204 64 8 16 __for_begin:1205 96 8 14 __for_end:1205";
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
  *(std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::const_iterator *)(v2 + 64) = std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::const_iterator *)(v2 + 96) = std::unordered_map<data::ElementType,data::ConfigElementShieldResistance>::end(map);
  while ( std::__detail::operator!=<std::pair<data::ElementType const,data::ConfigElementShieldResistance>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::ElementType const,data::ConfigElementShieldResistance>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::ElementType const,data::ConfigElementShieldResistance>(v7);
    val = (std::tuple_element<1,const std::pair<const data::ElementType,data::ConfigElementShieldResistance> >::type *)std::get<1ul,data::ElementType const,data::ConfigElementShieldResistance>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigElementShieldResistance::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::ElementType const,data::ConfigElementShieldResistance>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ElementType,data::ConfigElementShieldResistance>,false,false> *const)(v2 + 64));
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

// Line 1217: range 000000000D57DCA0-000000000D57E283
bool __cdecl data::ConfigElementShield::fromJson(data::ConfigElementShield *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigElementShieldResistanceMap *p_shield_damage_ratios_map; // rsi
  const Json::Value *row_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *shield_damage_ratios_map_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigElementShield::fromJson;
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
    off_1A21F500,
    (const std::allocator<char> *)(v2 + 32));
  row_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( row_ptr && !data::arrFromJson(row_ptr, &this->row) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1227);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[25])"fromJson for: row fails!");
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
      "shieldDamageRatiosMap",
      (const std::allocator<char> *)(v2 + 48));
    p_shield_damage_ratios_map = (data::ConfigElementShieldResistanceMap *)(v2 + 192);
    shield_damage_ratios_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( shield_damage_ratios_map_ptr
      && (p_shield_damage_ratios_map = &this->shield_damage_ratios_map,
          !data::mapFromJson(shield_damage_ratios_map_ptr, &this->shield_damage_ratios_map)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1239);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[43])"fromJson for: shieldDamageRatiosMap fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_shield_damage_ratios_map, &this->is_json_loaded);
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

// Line 1247: range 000000000D57E284-000000000D57E3DF
int32_t __cdecl data::ConfigElementShield::getHashValue(const data::ConfigElementShield *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1248";
  *(_QWORD *)(v2 + 16) = data::ConfigElementShield::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->row);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->shield_damage_ratios_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 1256: range 000000000D57E3E0-000000000D57EC6E
bool __cdecl data::ConfigEliteShieldResistance::fromJson(
        data::ConfigEliteShieldResistance *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::FloatArray *p_damage_suffer_ratio; // rsi
  const Json::Value *type_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *damage_ratio_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *damage_suffer_ratio_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigEliteShieldResistance::fromJson;
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
    "type",
    (const std::allocator<char> *)(v2 + 48));
  type_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( type_ptr && !fromJson<std::string>(type_ptr, &this->type) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1266);
    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[26])"fromJson for: type fails!");
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
      "damageRatio",
      (const std::allocator<char> *)(v2 + 64));
    damage_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( damage_ratio_ptr && !data::arrFromJson(damage_ratio_ptr, &this->damage_ratio) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1278);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[33])"fromJson for: damageRatio fails!");
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
        "damageSufferRatio",
        (const std::allocator<char> *)(v2 + 80));
      p_damage_suffer_ratio = (data::FloatArray *)(v2 + 352);
      damage_suffer_ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( damage_suffer_ratio_ptr
        && (p_damage_suffer_ratio = &this->damage_suffer_ratio,
            !data::arrFromJson(damage_suffer_ratio_ptr, &this->damage_suffer_ratio)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1290);
        common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[39])"fromJson for: damageSufferRatio fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_damage_suffer_ratio, &this->is_json_loaded);
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

// Line 1298: range 000000000D57EC70-000000000D57EDE3
int32_t __cdecl data::ConfigEliteShieldResistance::getHashValue(const data::ConfigEliteShieldResistance *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1299";
  *(_QWORD *)(v2 + 16) = data::ConfigEliteShieldResistance::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->type, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->damage_ratio);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->damage_suffer_ratio);
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

// Line 1307: range 000000000D57EDE4-000000000D57F9F8
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigEliteShieldResistanceMap *m)
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
  data::ConfigEliteShieldResistance *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:1309 80 16 9 <unknown> 112 32 8 key:1312 176 32 9 <unknown> 240 32 9 <unknown> 30"
                        "4 32 9 <unknown> 368 32 9 <unknown> 432 40 13 tmp_jval:1308 512 40 13 key_jval:1311 592 40 15 va"
                        "lue_jval:1318 672 88 10 value:1319";
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
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1315);
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
      *(_DWORD *)(v12 + 4) = 0;
      *(_WORD *)(v12 + 8) = 0;
      *(_BYTE *)(v12 + 10) = 0;
      data::ConfigEliteShieldResistance::ConfigEliteShieldResistance((data::ConfigEliteShieldResistance *const)(v3 + 672));
      if ( !data::ConfigEliteShieldResistance::fromJson(
              (data::ConfigEliteShieldResistance *const)(v3 + 672),
              (const Json::Value *)(v3 + 592)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          1322);
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
        v16 = std::unordered_map<std::string,data::ConfigEliteShieldResistance>::emplace<std::string&,data::ConfigEliteShieldResistance&>(
                m,
                (std::string *)(v3 + 112),
                (data::ConfigEliteShieldResistance *)(v3 + 672),
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            1327);
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
      data::ConfigEliteShieldResistance::~ConfigEliteShieldResistance((data::ConfigEliteShieldResistance *const)(v3 + 672));
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
    *(_DWORD *)(v20 + 4) = -117901064;
    *(_WORD *)(v20 + 8) = -1800;
    *(_BYTE *)(v20 + 10) = -8;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 1336: range 000000000D57F9F9-000000000D57FCA0
int32_t __cdecl data::getMapHashValue(const data::ConfigEliteShieldResistanceMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigEliteShieldResistance> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigEliteShieldResistance> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1337 64 8 16 __for_begin:1338 96 8 14 __for_end:1338";
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
  *(std::unordered_map<std::string,data::ConfigEliteShieldResistance>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigEliteShieldResistance>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigEliteShieldResistance>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigEliteShieldResistance>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigEliteShieldResistance>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigEliteShieldResistance>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigEliteShieldResistance>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigEliteShieldResistance>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigEliteShieldResistance>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigEliteShieldResistance> >::type *)std::get<1ul,std::string const,data::ConfigEliteShieldResistance>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigEliteShieldResistance::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigEliteShieldResistance>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigEliteShieldResistance>,false,true> *const)(v2 + 64));
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

// Line 1350: range 000000000D57FCA2-000000000D580285
bool __cdecl data::ConfigEliteShield::fromJson(data::ConfigEliteShield *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigEliteShieldResistanceMap *p_shield_damage_ratios_map; // rsi
  const Json::Value *row_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *shield_damage_ratios_map_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigEliteShield::fromJson;
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
    off_1A21F500,
    (const std::allocator<char> *)(v2 + 32));
  row_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( row_ptr && !data::arrFromJson(row_ptr, &this->row) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1360);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[25])"fromJson for: row fails!");
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
      "shieldDamageRatiosMap",
      (const std::allocator<char> *)(v2 + 48));
    p_shield_damage_ratios_map = (data::ConfigEliteShieldResistanceMap *)(v2 + 192);
    shield_damage_ratios_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( shield_damage_ratios_map_ptr
      && (p_shield_damage_ratios_map = &this->shield_damage_ratios_map,
          !data::mapFromJson(shield_damage_ratios_map_ptr, &this->shield_damage_ratios_map)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1372);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[43])"fromJson for: shieldDamageRatiosMap fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_shield_damage_ratios_map, &this->is_json_loaded);
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

// Line 1380: range 000000000D580286-000000000D5803E1
int32_t __cdecl data::ConfigEliteShield::getHashValue(const data::ConfigEliteShield *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1381";
  *(_QWORD *)(v2 + 16) = data::ConfigEliteShield::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->row);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->shield_damage_ratios_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
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

// Line 1389: range 000000000D5803E2-000000000D5822A1
bool __cdecl data::ConfigGlobalSwitch::fromJson(data::ConfigGlobalSwitch *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *enable_multi_player_ptr; // [rsp+10h] [rbp-760h]
  const Json::Value *enable_animator_interleave_ptr; // [rsp+18h] [rbp-758h]
  const Json::Value *enable_mixin_modifier_detach_callback_ptr; // [rsp+20h] [rbp-750h]
  const Json::Value *enable_packet_process_time_limit_ptr; // [rsp+28h] [rbp-748h]
  const Json::Value *enable_uitemp_fix_ptr; // [rsp+30h] [rbp-740h]
  const Json::Value *enable_equip_data_item_fix_ptr; // [rsp+38h] [rbp-738h]
  const Json::Value *cache_entity_light_de_active_ptr; // [rsp+40h] [rbp-730h]
  const Json::Value *enablemax_delay_packet_ms_ptr; // [rsp+48h] [rbp-728h]
  const Json::Value *max_delay_packet_ms_ptr; // [rsp+50h] [rbp-720h]
  const Json::Value *enable_force_sync_postion_ptr; // [rsp+58h] [rbp-718h]
  const Json::Value *max_force_distance_ptr; // [rsp+60h] [rbp-710h]
  const Json::Value *enable_ability_invoke_after_ready_ptr; // [rsp+68h] [rbp-708h]
  char v22[1792]; // [rsp+70h] [rbp-700h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1760LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "36 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown"
                        "> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>"
                        " 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown>"
                        " 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unkn"
                        "own> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalSwitch::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234753535;
  v4[536862723] = -234753535;
  v4[536862724] = -234753535;
  v4[536862725] = -234753535;
  v4[536862726] = -234753535;
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
  v4[536862756] = -218959118;
  v4[536862758] = -218959118;
  v4[536862760] = -218959118;
  v4[536862762] = -218959118;
  v4[536862764] = -218959118;
  v4[536862766] = -218959118;
  v4[536862768] = -218959118;
  v4[536862770] = -218959118;
  v4[536862772] = -218959118;
  v4[536862774] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 224),
    "enableMultiPlayer",
    (const std::allocator<char> *)(v2 + 32));
  enable_multi_player_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( enable_multi_player_ptr && !fromJson<bool>(enable_multi_player_ptr, &this->enable_multi_player) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1399);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[39])"fromJson for: enableMultiPlayer fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 352),
      "enableAnimatorInterleave",
      (const std::allocator<char> *)(v2 + 48));
    enable_animator_interleave_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( enable_animator_interleave_ptr
      && !fromJson<bool>(enable_animator_interleave_ptr, &this->enable_animator_interleave) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1411);
      common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[46])"fromJson for: enableAnimatorInterleave fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "enableMixinModifierDetachCallback",
        (const std::allocator<char> *)(v2 + 64));
      enable_mixin_modifier_detach_callback_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( enable_mixin_modifier_detach_callback_ptr
        && !fromJson<bool>(enable_mixin_modifier_detach_callback_ptr, &this->enable_mixin_modifier_detach_callback) )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1423);
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[55])"fromJson for: enableMixinModifierDetachCallback fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 608),
          "enablePacketProcessTimeLimit",
          (const std::allocator<char> *)(v2 + 80));
        enable_packet_process_time_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( enable_packet_process_time_limit_ptr
          && !fromJson<bool>(enable_packet_process_time_limit_ptr, &this->enable_packet_process_time_limit) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            1435);
          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[50])"fromJson for: enablePacketProcessTimeLimit fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 736),
            "enableUITempFix",
            (const std::allocator<char> *)(v2 + 96));
          enable_uitemp_fix_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( enable_uitemp_fix_ptr && !fromJson<bool>(enable_uitemp_fix_ptr, &this->enable_uitemp_fix) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              1447);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[37])"fromJson for: enableUITempFix fails!");
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
              "enableEquipDataItemFix",
              (const std::allocator<char> *)(v2 + 112));
            enable_equip_data_item_fix_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( enable_equip_data_item_fix_ptr
              && !fromJson<bool>(enable_equip_data_item_fix_ptr, &this->enable_equip_data_item_fix) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                1459);
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[44])"fromJson for: enableEquipDataItemFix fails!");
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
                "cacheEntityLightDeActive",
                (const std::allocator<char> *)(v2 + 128));
              cache_entity_light_de_active_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( cache_entity_light_de_active_ptr
                && !fromJson<bool>(cache_entity_light_de_active_ptr, &this->cache_entity_light_de_active) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  1471);
                common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[46])"fromJson for: cacheEntityLightDeActive fails!");
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
                  "enablemaxDelayPacketMs",
                  (const std::allocator<char> *)(v2 + 144));
                enablemax_delay_packet_ms_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( enablemax_delay_packet_ms_ptr
                  && !fromJson<bool>(enablemax_delay_packet_ms_ptr, &this->enablemax_delay_packet_ms) )
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
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    1483);
                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[44])"fromJson for: enablemaxDelayPacketMs fails!");
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
                    "maxDelayPacketMs",
                    (const std::allocator<char> *)(v2 + 160));
                  max_delay_packet_ms_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( max_delay_packet_ms_ptr
                    && !fromJson<unsigned int>(max_delay_packet_ms_ptr, &this->max_delay_packet_ms) )
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
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      1495);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[38])"fromJson for: maxDelayPacketMs fails!");
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
                      "enableForceSyncPostion",
                      (const std::allocator<char> *)(v2 + 176));
                    enable_force_sync_postion_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( enable_force_sync_postion_ptr
                      && !fromJson<bool>(enable_force_sync_postion_ptr, &this->enable_force_sync_postion) )
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
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        1507);
                      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[44])"fromJson for: enableForceSyncPostion fails!");
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
                        "maxForceDistance",
                        (const std::allocator<char> *)(v2 + 192));
                      max_force_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( max_force_distance_ptr && !fromJson<float>(max_force_distance_ptr, &this->max_force_distance) )
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
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          1519);
                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[38])"fromJson for: maxForceDistance fails!");
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
                          "enableAbilityInvokeAfterReady",
                          (const std::allocator<char> *)(v2 + 208));
                        enable_ability_invoke_after_ready_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                        std::string::~string((void *)(v2 + 1632));
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( enable_ability_invoke_after_ready_ptr
                          && !fromJson<bool>(
                                enable_ability_invoke_after_ready_ptr,
                                &this->enable_ability_invoke_after_ready) )
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
                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                            "fromJson",
                            1531);
                          common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                            (common::milog::MiLogStream *const)(v2 + 1696),
                            (const char (*)[51])"fromJson for: enableAbilityInvokeAfterReady fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                          v5 = 0;
                        }
                        else
                        {
                          v6 = ((_BYTE)this + 21) & 7;
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
        }
      }
    }
  }
  v8 = v5;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1760LL, v22);
  }
  return v8;
};

// Line 1539: range 000000000D5822A2-000000000D582785
int32_t __cdecl data::ConfigGlobalSwitch::getHashValue(const data::ConfigGlobalSwitch *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  __int64 v23; // rsi
  __int64 v24; // rdx
  int32_t result; // eax
  char v26[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1540";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalSwitch::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->enable_multi_player, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 1) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->enable_animator_interleave >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->enable_animator_interleave >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->enable_animator_interleave, v7, v8);
  common::tools::HashUtils::appendHash(this->enable_animator_interleave, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this + 2) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->enable_mixin_modifier_detach_callback >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->enable_mixin_modifier_detach_callback >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->enable_mixin_modifier_detach_callback, v9, v10);
  common::tools::HashUtils::appendHash(this->enable_mixin_modifier_detach_callback, (int32_t *)(v2 + 32));
  v11 = ((_BYTE)this + 3) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->enable_packet_process_time_limit >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->enable_packet_process_time_limit >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&this->enable_packet_process_time_limit, v11, v12);
  common::tools::HashUtils::appendHash(this->enable_packet_process_time_limit, (int32_t *)(v2 + 32));
  v13 = ((_BYTE)this + 4) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->enable_uitemp_fix >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->enable_uitemp_fix >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&this->enable_uitemp_fix, v13, v14);
  common::tools::HashUtils::appendHash(this->enable_uitemp_fix, (int32_t *)(v2 + 32));
  v15 = ((_BYTE)this + 5) & 7;
  v16 = (*(_BYTE *)(((unsigned __int64)&this->enable_equip_data_item_fix >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v15 >= *(_BYTE *)(((unsigned __int64)&this->enable_equip_data_item_fix >> 3) + 0x7FFF8000));
  if ( (_BYTE)v16 )
    __asan_report_load1(&this->enable_equip_data_item_fix, v15, v16);
  common::tools::HashUtils::appendHash(this->enable_equip_data_item_fix, (int32_t *)(v2 + 32));
  v17 = ((_BYTE)this + 6) & 7;
  v18 = (*(_BYTE *)(((unsigned __int64)&this->cache_entity_light_de_active >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((unsigned __int64)&this->cache_entity_light_de_active >> 3) + 0x7FFF8000));
  if ( (_BYTE)v18 )
    __asan_report_load1(&this->cache_entity_light_de_active, v17, v18);
  common::tools::HashUtils::appendHash(this->cache_entity_light_de_active, (int32_t *)(v2 + 32));
  v19 = ((_BYTE)this + 7) & 7;
  v20 = (*(_BYTE *)(((unsigned __int64)&this->enablemax_delay_packet_ms >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v19 >= *(_BYTE *)(((unsigned __int64)&this->enablemax_delay_packet_ms >> 3) + 0x7FFF8000));
  if ( (_BYTE)v20 )
    __asan_report_load1(&this->enablemax_delay_packet_ms, v19, v20);
  common::tools::HashUtils::appendHash(this->enablemax_delay_packet_ms, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_delay_packet_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_delay_packet_ms >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_delay_packet_ms);
  }
  common::tools::HashUtils::appendHash(this->max_delay_packet_ms, (int32_t *)(v2 + 32));
  v21 = ((_BYTE)this + 12) & 7;
  v22 = (*(_BYTE *)(((unsigned __int64)&this->enable_force_sync_postion >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v21 >= *(_BYTE *)(((unsigned __int64)&this->enable_force_sync_postion >> 3) + 0x7FFF8000));
  if ( (_BYTE)v22 )
    __asan_report_load1(&this->enable_force_sync_postion, v21, v22);
  common::tools::HashUtils::appendHash(this->enable_force_sync_postion, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_force_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_force_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->max_force_distance);
  }
  common::tools::HashUtils::appendHash(this->max_force_distance, (int32_t *)(v2 + 32));
  v23 = ((_BYTE)this + 20) & 7;
  v24 = (*(_BYTE *)(((unsigned __int64)&this->enable_ability_invoke_after_ready >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v23 >= *(_BYTE *)(((unsigned __int64)&this->enable_ability_invoke_after_ready >> 3) + 0x7FFF8000));
  if ( (_BYTE)v24 )
    __asan_report_load1(&this->enable_ability_invoke_after_ready, v23, v24);
  common::tools::HashUtils::appendHash(this->enable_ability_invoke_after_ready, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v26 == (char *)v2 )
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

// Line 1558: range 000000000D582786-000000000D583528
bool __cdecl data::ConfigGlobalLockTarget::fromJson(data::ConfigGlobalLockTarget *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *lock_weight_out_camera_param_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *lock_weight_relock_param_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *clear_lock_target_out_combat_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *clear_lock_target_in_combat_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *force_lock_target_in_combat_ptr; // [rsp+38h] [rbp-328h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalLockTarget::fromJson;
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
    "lockWeightOutCameraParam",
    (const std::allocator<char> *)(v2 + 48));
  lock_weight_out_camera_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( lock_weight_out_camera_param_ptr
    && !fromJson<float>(lock_weight_out_camera_param_ptr, &this->lock_weight_out_camera_param) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1568);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[46])"fromJson for: lockWeightOutCameraParam fails!");
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
      "lockWeightRelockParam",
      (const std::allocator<char> *)(v2 + 64));
    lock_weight_relock_param_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( lock_weight_relock_param_ptr && !fromJson<float>(lock_weight_relock_param_ptr, &this->lock_weight_relock_param) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1580);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[43])"fromJson for: lockWeightRelockParam fails!");
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
        "clearLockTargetOutCombat",
        (const std::allocator<char> *)(v2 + 80));
      clear_lock_target_out_combat_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( clear_lock_target_out_combat_ptr
        && !fromJson<float>(clear_lock_target_out_combat_ptr, &this->clear_lock_target_out_combat) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1592);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[46])"fromJson for: clearLockTargetOutCombat fails!");
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
          "clearLockTargetInCombat",
          (const std::allocator<char> *)(v2 + 96));
        clear_lock_target_in_combat_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( clear_lock_target_in_combat_ptr
          && !fromJson<float>(clear_lock_target_in_combat_ptr, &this->clear_lock_target_in_combat) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            1604);
          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[45])"fromJson for: clearLockTargetInCombat fails!");
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
            "forceLockTargetInCombat",
            (const std::allocator<char> *)(v2 + 112));
          force_lock_target_in_combat_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( force_lock_target_in_combat_ptr
            && !fromJson<float>(force_lock_target_in_combat_ptr, &this->force_lock_target_in_combat) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              1616);
            common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[45])"fromJson for: forceLockTargetInCombat fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            v6 = ((_BYTE)this + 20) & 7;
            v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v7 )
              __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 1624: range 000000000D58352A-000000000D5837E1
int32_t __cdecl data::ConfigGlobalLockTarget::getHashValue(const data::ConfigGlobalLockTarget *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1625";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalLockTarget::getHashValue;
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
  common::tools::HashUtils::appendHash(this->lock_weight_out_camera_param, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->lock_weight_relock_param >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->lock_weight_relock_param >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->lock_weight_relock_param);
  }
  common::tools::HashUtils::appendHash(this->lock_weight_relock_param, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_lock_target_out_combat >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_lock_target_out_combat >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->clear_lock_target_out_combat);
  }
  common::tools::HashUtils::appendHash(this->clear_lock_target_out_combat, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_lock_target_in_combat >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->clear_lock_target_in_combat >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->clear_lock_target_in_combat);
  }
  common::tools::HashUtils::appendHash(this->clear_lock_target_in_combat, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->force_lock_target_in_combat >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->force_lock_target_in_combat >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->force_lock_target_in_combat);
  }
  common::tools::HashUtils::appendHash(this->force_lock_target_in_combat, (int32_t *)(v2 + 32));
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

// Line 1635: range 000000000D5837E2-000000000D58471A
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ElementReactionTypeStringMap *m)
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
  std::string *v13; // r8
  common::milog::MiLogStream *v14; // r14
  __int64 v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::ElementReactionType,std::string >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // r14
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[912]; // [rsp+20h] [rbp-390h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(864LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 4 8 key:1640 48 8 9 <unknown> 80 8 9 <unknown> 112 16 8 cit:1637 144 16 9 <unknown> 176 32"
                        " 12 key_str:1641 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 10 value:1653 4"
                        "96 32 9 <unknown> 560 32 9 <unknown> 624 40 13 tmp_jval:1636 704 40 13 key_jval:1639 784 40 15 value_jval:1652";
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
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 704), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1644);
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
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 704));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( !data::enumStrToVal((const std::string *)(v3 + 176), (data::ElementReactionType *)(v3 + 32)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1649);
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
      v11 = ((v3 + 784) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 112));
      Json::Value::Value((Json::Value *)(v3 + 784), v12);
      *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
      std::string::basic_string(v3 + 432);
      if ( !fromJson<std::string>((const Json::Value *)(v3 + 784), (std::string *)(v3 + 432)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          1656);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 496),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 32);
        v15 = (__int64)data::enumValToStr((data::ElementReactionType)*(_DWORD *)(v3 + 32));
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
          v15 = __asan_report_store8(v3 + 48, "value fromJson fails, key: ");
        *(_QWORD *)(v3 + 48) = v15;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v14, (const char *const *)(v3 + 48));
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
        *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<data::ElementReactionType,std::string>::emplace<data::ElementReactionType&,std::string&>(
                m,
                (data::ElementReactionType *)(v3 + 32),
                (std::string *)(v3 + 432),
                (data::ElementReactionType *)(v3 + 32),
                v13);
        if ( !v17.second )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            1661);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 560),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 32);
          v19 = (__int64)data::enumValToStr((data::ElementReactionType)*(_DWORD *)(v3 + 32));
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
            v19 = __asan_report_store8(v3 + 80, "key duplicate: ");
          *(_QWORD *)(v3 + 80) = v19;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v18, (const char *const *)(v3 + 80));
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
          *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      std::string::~string((void *)(v3 + 432));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 784));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 704));
    v20 = ((v3 + 704) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v21 = ((v3 + 784) >> 3) + 2147450880;
    *(_DWORD *)v21 = -117901064;
    *(_BYTE *)(v21 + 4) = -8;
    *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_44;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 112));
  }
  v22 = 1;
LABEL_44:
  *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 624));
  if ( v24 == (char *)v3 )
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

// Line 1670: range 000000000D58471B-000000000D5849E2
int32_t __cdecl data::getMapHashValue(const data::ElementReactionTypeStringMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::ElementReactionType,std::string >,false,false>::reference v6; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::ElementReactionType,std::string > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::ElementReactionType,std::string > >::type *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1671 64 8 16 __for_begin:1672 96 8 14 __for_end:1672";
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
  *(std::unordered_map<data::ElementReactionType,std::string>::const_iterator *)(v2 + 64) = std::unordered_map<data::ElementReactionType,std::string>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::ElementReactionType,std::string>::const_iterator *)(v2 + 96) = std::unordered_map<data::ElementReactionType,std::string>::end(map);
  while ( std::__detail::operator!=<std::pair<data::ElementReactionType const,std::string>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::ElementReactionType,std::string >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::ElementReactionType,std::string >,false> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<data::ElementReactionType const,std::string>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::ElementReactionType,std::string >,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::ElementReactionType const,std::string>(v6);
    val = (std::tuple_element<1,const std::pair<const data::ElementReactionType,std::string > >::type *)std::get<1ul,data::ElementReactionType const,std::string>(v6);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    common::tools::HashUtils::appendHash(val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::ElementReactionType const,std::string>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::ElementReactionType,std::string >,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v9 == (char *)v2 )
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

// Line 1684: range 000000000D5849E4-000000000D585EA3
bool __cdecl data::ConfigElementUI::fromJson(data::ConfigElementUI *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::ElementReactionTypeStringMap *p_reaction_elem_path; // rsi
  bool v7; // bl
  const Json::Value *show_icon_entity_types_ptr; // [rsp+10h] [rbp-500h]
  const Json::Value *show_reaction_entity_types_ptr; // [rsp+18h] [rbp-4F8h]
  const Json::Value *icon_recover_time_ptr; // [rsp+20h] [rbp-4F0h]
  const Json::Value *icon_disappear_time_ptr; // [rsp+28h] [rbp-4E8h]
  const Json::Value *icon_disappear_round_ptr; // [rsp+30h] [rbp-4E0h]
  const Json::Value *icon_show_distance_ptr; // [rsp+38h] [rbp-4D8h]
  const Json::Value *override_elem_path_ptr; // [rsp+40h] [rbp-4D0h]
  const Json::Value *reaction_elem_path_ptr; // [rsp+48h] [rbp-4C8h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigElementUI::fromJson;
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
    "showIconEntityTypes",
    (const std::allocator<char> *)(v2 + 32));
  show_icon_entity_types_ptr = jsonValueFind(jval, (const std::string *)(v2 + 160));
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( show_icon_entity_types_ptr && !data::arrFromJson(show_icon_entity_types_ptr, &this->show_icon_entity_types) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1694);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[41])"fromJson for: showIconEntityTypes fails!");
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
      "showReactionEntityTypes",
      (const std::allocator<char> *)(v2 + 48));
    show_reaction_entity_types_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( show_reaction_entity_types_ptr
      && !data::arrFromJson(show_reaction_entity_types_ptr, &this->show_reaction_entity_types) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1706);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[45])"fromJson for: showReactionEntityTypes fails!");
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
        "iconRecoverTime",
        (const std::allocator<char> *)(v2 + 64));
      icon_recover_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( icon_recover_time_ptr && !fromJson<float>(icon_recover_time_ptr, &this->icon_recover_time) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1718);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[37])"fromJson for: iconRecoverTime fails!");
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
          "iconDisappearTime",
          (const std::allocator<char> *)(v2 + 80));
        icon_disappear_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
        std::string::~string((void *)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( icon_disappear_time_ptr && !fromJson<float>(icon_disappear_time_ptr, &this->icon_disappear_time) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            1730);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 608),
            (const char (*)[39])"fromJson for: iconDisappearTime fails!");
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
            "iconDisappearRound",
            (const std::allocator<char> *)(v2 + 96));
          icon_disappear_round_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
          std::string::~string((void *)(v2 + 672));
          *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( icon_disappear_round_ptr
            && !fromJson<unsigned int>(icon_disappear_round_ptr, &this->icon_disappear_round) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              1742);
            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[40])"fromJson for: iconDisappearRound fails!");
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
              "iconShowDistance",
              (const std::allocator<char> *)(v2 + 112));
            icon_show_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
            std::string::~string((void *)(v2 + 800));
            *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( icon_show_distance_ptr && !fromJson<float>(icon_show_distance_ptr, &this->icon_show_distance) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                1754);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 864),
                (const char (*)[38])"fromJson for: iconShowDistance fails!");
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
                "overrideElemPath",
                (const std::allocator<char> *)(v2 + 128));
              override_elem_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
              std::string::~string((void *)(v2 + 928));
              *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( override_elem_path_ptr && !data::mapFromJson(override_elem_path_ptr, &this->override_elem_path) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  1766);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 992),
                  (const char (*)[38])"fromJson for: overrideElemPath fails!");
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
                  "reactionElemPath",
                  (const std::allocator<char> *)(v2 + 144));
                p_reaction_elem_path = (data::ElementReactionTypeStringMap *)(v2 + 1056);
                reaction_elem_path_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
                std::string::~string((void *)(v2 + 1056));
                *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( reaction_elem_path_ptr
                  && (p_reaction_elem_path = &this->reaction_elem_path,
                      !data::mapFromJson(reaction_elem_path_ptr, &this->reaction_elem_path)) )
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
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    1778);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)(v2 + 1120),
                    (const char (*)[38])"fromJson for: reactionElemPath fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                  v5 = 0;
                }
                else
                {
                  if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                    __asan_report_store1(&this->is_json_loaded, p_reaction_elem_path, &this->is_json_loaded);
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
  v7 = v5;
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
  return v7;
};

// Line 1786: range 000000000D585EA4-000000000D586172
int32_t __cdecl data::ConfigElementUI::getHashValue(const data::ConfigElementUI *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
  int32_t v6; // eax
  int32_t MapHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1787";
  *(_QWORD *)(v2 + 16) = data::ConfigElementUI::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  ArrHashValue = data::getArrHashValue(&this->show_icon_entity_types);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->show_reaction_entity_types);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->icon_recover_time >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->icon_recover_time >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->icon_recover_time);
  }
  common::tools::HashUtils::appendHash(this->icon_recover_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->icon_disappear_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->icon_disappear_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->icon_disappear_time);
  }
  common::tools::HashUtils::appendHash(this->icon_disappear_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->icon_disappear_round >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->icon_disappear_round >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->icon_disappear_round);
  }
  common::tools::HashUtils::appendHash(this->icon_disappear_round, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->icon_show_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->icon_show_distance >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->icon_show_distance);
  }
  common::tools::HashUtils::appendHash(this->icon_show_distance, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->override_elem_path);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v8 = data::getMapHashValue(&this->reaction_elem_path);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
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

// Line 1801: range 000000000D586174-000000000D5864CE
bool __cdecl data::ConfigLogSetting::fromJson(data::ConfigLogSetting *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *send_engine_log_to_server_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLogSetting::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "sendEngineLogToServer",
    (const std::allocator<char> *)(v2 + 48));
  send_engine_log_to_server_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( send_engine_log_to_server_ptr && !fromJson<bool>(send_engine_log_to_server_ptr, &this->send_engine_log_to_server) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1811);
    common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[43])"fromJson for: sendEngineLogToServer fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 1) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 1819: range 000000000D5864D0-000000000D58663A
int32_t __cdecl data::ConfigLogSetting::getHashValue(const data::ConfigLogSetting *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1820";
  *(_QWORD *)(v2 + 16) = data::ConfigLogSetting::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->send_engine_log_to_server, (int32_t *)(v2 + 32));
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

// Line 1827: range 000000000D58663C-000000000D587151
bool __cdecl data::ConfigAttackAttenuation::fromJson(
        data::ConfigAttackAttenuation *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::FloatArray *p_damage_sequence; // rsi
  const Json::Value *reset_cycle_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *durability_sequence_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *enbreak_sequence_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *damage_sequence_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAttackAttenuation::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "resetCycle",
    (const std::allocator<char> *)(v2 + 32));
  reset_cycle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( reset_cycle_ptr && !fromJson<float>(reset_cycle_ptr, &this->reset_cycle) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1837);
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[32])"fromJson for: resetCycle fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "durabilitySequence",
      (const std::allocator<char> *)(v2 + 48));
    durability_sequence_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( durability_sequence_ptr && !data::arrFromJson(durability_sequence_ptr, &this->durability_sequence) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1849);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[40])"fromJson for: durabilitySequence fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "enbreakSequence",
        (const std::allocator<char> *)(v2 + 64));
      enbreak_sequence_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( enbreak_sequence_ptr && !data::arrFromJson(enbreak_sequence_ptr, &this->enbreak_sequence) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1861);
        common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[37])"fromJson for: enbreakSequence fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "damageSequence",
          (const std::allocator<char> *)(v2 + 80));
        p_damage_sequence = (data::FloatArray *)(v2 + 480);
        damage_sequence_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( damage_sequence_ptr
          && (p_damage_sequence = &this->damage_sequence, !data::arrFromJson(
                                                             damage_sequence_ptr,
                                                             &this->damage_sequence)) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            1873);
          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[36])"fromJson for: damageSequence fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
            __asan_report_store1(&this->is_json_loaded, p_damage_sequence, &this->is_json_loaded);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 1881: range 000000000D587152-000000000D587318
int32_t __cdecl data::ConfigAttackAttenuation::getHashValue(const data::ConfigAttackAttenuation *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1882";
  *(_QWORD *)(v2 + 16) = data::ConfigAttackAttenuation::getHashValue;
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
  common::tools::HashUtils::appendHash(this->reset_cycle, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->durability_sequence);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v6 = data::getArrHashValue(&this->enbreak_sequence);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::getArrHashValue(&this->damage_sequence);
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

// Line 1891: range 000000000D587319-000000000D587F2D
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigAttackAttenuationMap *m)
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
  data::ConfigAttackAttenuation *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigAttackAttenuation>,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:1893 80 16 9 <unknown> 112 32 8 key:1896 176 32 9 <unknown> 240 32 9 <unknown> 30"
                        "4 32 9 <unknown> 368 32 9 <unknown> 432 40 13 tmp_jval:1892 512 40 13 key_jval:1895 592 40 15 va"
                        "lue_jval:1902 672 88 10 value:1903";
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
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        1899);
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
      *(_DWORD *)(v12 + 4) = 0;
      *(_WORD *)(v12 + 8) = 0;
      *(_BYTE *)(v12 + 10) = 0;
      data::ConfigAttackAttenuation::ConfigAttackAttenuation((data::ConfigAttackAttenuation *const)(v3 + 672));
      if ( !data::ConfigAttackAttenuation::fromJson(
              (data::ConfigAttackAttenuation *const)(v3 + 672),
              (const Json::Value *)(v3 + 592)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          1906);
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
        v16 = std::unordered_map<std::string,data::ConfigAttackAttenuation>::emplace<std::string&,data::ConfigAttackAttenuation&>(
                m,
                (std::string *)(v3 + 112),
                (data::ConfigAttackAttenuation *)(v3 + 672),
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            1911);
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
      data::ConfigAttackAttenuation::~ConfigAttackAttenuation((data::ConfigAttackAttenuation *const)(v3 + 672));
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
    *(_DWORD *)(v20 + 4) = -117901064;
    *(_WORD *)(v20 + 8) = -1800;
    *(_BYTE *)(v20 + 10) = -8;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 1920: range 000000000D587F2E-000000000D5881D5
int32_t __cdecl data::getMapHashValue(const data::ConfigAttackAttenuationMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAttackAttenuation>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigAttackAttenuation> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigAttackAttenuation> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:1921 64 8 16 __for_begin:1922 96 8 14 __for_end:1922";
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
  *(std::unordered_map<std::string,data::ConfigAttackAttenuation>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigAttackAttenuation>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigAttackAttenuation>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigAttackAttenuation>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigAttackAttenuation>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackAttenuation>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigAttackAttenuation>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAttackAttenuation>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAttackAttenuation>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigAttackAttenuation>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigAttackAttenuation> >::type *)std::get<1ul,std::string const,data::ConfigAttackAttenuation>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigAttackAttenuation::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigAttackAttenuation>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigAttackAttenuation>,false,true> *const)(v2 + 64));
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

// Line 1934: range 000000000D5881D6-000000000D588A69
bool __cdecl data::ConfigGadgetCreationLimit::fromJson(
        data::ConfigGadgetCreationLimit *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *tag_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *gadget_ids_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *max_value_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetCreationLimit::fromJson;
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
    off_1A2212E0,
    (const std::allocator<char> *)(v2 + 48));
  tag_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( tag_ptr && !fromJson<std::string>(tag_ptr, &this->tag) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      1944);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[25])"fromJson for: tag fails!");
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
      "gadgetIDs",
      (const std::allocator<char> *)(v2 + 64));
    gadget_ids_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( gadget_ids_ptr && !data::arrFromJson(gadget_ids_ptr, &this->gadget_ids) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        1956);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[31])"fromJson for: gadgetIDs fails!");
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
        "maxValue",
        (const std::allocator<char> *)(v2 + 80));
      max_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( max_value_ptr && !fromJson<unsigned int>(max_value_ptr, &this->max_value) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          1968);
        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[30])"fromJson for: maxValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        v6 = ((_BYTE)this + 60) & 7;
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

// Line 1976: range 000000000D588A6A-000000000D588C05
int32_t __cdecl data::ConfigGadgetCreationLimit::getHashValue(const data::ConfigGadgetCreationLimit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:1977";
  *(_QWORD *)(v2 + 16) = data::ConfigGadgetCreationLimit::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->tag, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->gadget_ids);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->max_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->max_value);
  }
  common::tools::HashUtils::appendHash(this->max_value, (int32_t *)(v2 + 32));
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

// Line 1985: range 000000000D588C06-000000000D588F96
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigGadgetCreationLimits *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  _DWORD *v6; // rax
  int v7; // r14d
  data::ConfigGadgetCreationLimit *v8; // rdx
  _DWORD *v9; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 64 9 elem:1991";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
      *v6 = 0;
      v6[1] = 0;
      data::ConfigGadgetCreationLimit::ConfigGadgetCreationLimit((data::ConfigGadgetCreationLimit *const)(v2 + 96));
      if ( !data::ConfigGadgetCreationLimit::fromJson((data::ConfigGadgetCreationLimit *const)(v2 + 96), elem_jval) )
      {
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 127) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "vecFromJson",
          1994);
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
        v8 = std::move<data::ConfigGadgetCreationLimit &>((data::ConfigGadgetCreationLimit *)(v2 + 96));
        std::vector<data::ConfigGadgetCreationLimit>::emplace_back<data::ConfigGadgetCreationLimit>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigGadgetCreationLimit::~ConfigGadgetCreationLimit((data::ConfigGadgetCreationLimit *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
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

// Line 2004: range 000000000D588F97-000000000D5891E3
int32_t __cdecl data::getVecHashValue(const data::ConfigGadgetCreationLimits *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigGadgetCreationLimit*,std::vector<data::ConfigGadgetCreationLimit> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2005 64 8 16 __for_begin:2006 96 8 14 __for_end:2006";
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
  *(std::vector<data::ConfigGadgetCreationLimit>::const_iterator *)(v2 + 64) = std::vector<data::ConfigGadgetCreationLimit>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigGadgetCreationLimit>::const_iterator *)(v2 + 96) = std::vector<data::ConfigGadgetCreationLimit>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigGadgetCreationLimit const*,std::vector<data::ConfigGadgetCreationLimit>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigGadgetCreationLimit*,std::vector<data::ConfigGadgetCreationLimit> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigGadgetCreationLimit*,std::vector<data::ConfigGadgetCreationLimit> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigGadgetCreationLimit const*,std::vector<data::ConfigGadgetCreationLimit>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigGadgetCreationLimit*,std::vector<data::ConfigGadgetCreationLimit> > *const)(v2 + 64));
    HashValue = data::ConfigGadgetCreationLimit::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigGadgetCreationLimit const*,std::vector<data::ConfigGadgetCreationLimit>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigGadgetCreationLimit*,std::vector<data::ConfigGadgetCreationLimit> > *const)(v2 + 64));
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

// Line 2015: range 000000000D5891E4-000000000D589CFE
bool __cdecl data::ConfigLuaSafetyCheckSwitch::fromJson(
        data::ConfigLuaSafetyCheckSwitch *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *tick_world_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *tick_world_cd_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *tick_chest_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *tick_monster_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLuaSafetyCheckSwitch::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "tickWorld",
    (const std::allocator<char> *)(v2 + 32));
  tick_world_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( tick_world_ptr && !fromJson<bool>(tick_world_ptr, &this->tick_world) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2025);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[31])"fromJson for: tickWorld fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "tickWorldCD",
      (const std::allocator<char> *)(v2 + 48));
    tick_world_cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( tick_world_cd_ptr && !fromJson<unsigned int>(tick_world_cd_ptr, &this->tick_world_cd) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2037);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[33])"fromJson for: tickWorldCD fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "tickChest",
        (const std::allocator<char> *)(v2 + 64));
      tick_chest_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( tick_chest_ptr && !fromJson<bool>(tick_chest_ptr, &this->tick_chest) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2049);
        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[31])"fromJson for: tickChest fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "tickMonster",
          (const std::allocator<char> *)(v2 + 80));
        tick_monster_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( tick_monster_ptr && !fromJson<bool>(tick_monster_ptr, &this->tick_monster) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            2061);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[33])"fromJson for: tickMonster fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 10) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 2069: range 000000000D589D00-000000000D589F5F
int32_t __cdecl data::ConfigLuaSafetyCheckSwitch::getHashValue(const data::ConfigLuaSafetyCheckSwitch *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2070";
  *(_QWORD *)(v2 + 16) = data::ConfigLuaSafetyCheckSwitch::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->tick_world, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->tick_world_cd >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tick_world_cd >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->tick_world_cd);
  }
  common::tools::HashUtils::appendHash(this->tick_world_cd, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 8) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->tick_chest >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->tick_chest >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->tick_chest, v7, v8);
  common::tools::HashUtils::appendHash(this->tick_chest, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this + 9) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->tick_monster >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->tick_monster >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->tick_monster, v9, v10);
  common::tools::HashUtils::appendHash(this->tick_monster, (int32_t *)(v2 + 32));
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

// Line 2080: range 000000000D589F60-000000000D58A7F3
bool __cdecl data::ConfigGlobalInteraction::fromJson(
        data::ConfigGlobalInteraction *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *talk_enable_angle_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *head_ctrl_enable_angle_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *head_ctrl_disable_angle_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalInteraction::fromJson;
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
    "talkEnableAngle",
    (const std::allocator<char> *)(v2 + 48));
  talk_enable_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( talk_enable_angle_ptr && !fromJson<float>(talk_enable_angle_ptr, &this->talk_enable_angle) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2090);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[37])"fromJson for: talkEnableAngle fails!");
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
      "headCtrlEnableAngle",
      (const std::allocator<char> *)(v2 + 64));
    head_ctrl_enable_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( head_ctrl_enable_angle_ptr && !fromJson<float>(head_ctrl_enable_angle_ptr, &this->head_ctrl_enable_angle) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2102);
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[41])"fromJson for: headCtrlEnableAngle fails!");
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
        "headCtrlDisableAngle",
        (const std::allocator<char> *)(v2 + 80));
      head_ctrl_disable_angle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( head_ctrl_disable_angle_ptr && !fromJson<float>(head_ctrl_disable_angle_ptr, &this->head_ctrl_disable_angle) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2114);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[42])"fromJson for: headCtrlDisableAngle fails!");
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

// Line 2122: range 000000000D58A7F4-000000000D58AA05
int32_t __cdecl data::ConfigGlobalInteraction::getHashValue(const data::ConfigGlobalInteraction *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2123";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalInteraction::getHashValue;
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
  common::tools::HashUtils::appendHash(this->talk_enable_angle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->head_ctrl_enable_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->head_ctrl_enable_angle >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->head_ctrl_enable_angle);
  }
  common::tools::HashUtils::appendHash(this->head_ctrl_enable_angle, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->head_ctrl_disable_angle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->head_ctrl_disable_angle >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->head_ctrl_disable_angle);
  }
  common::tools::HashUtils::appendHash(this->head_ctrl_disable_angle, (int32_t *)(v2 + 32));
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

// Line 2132: range 000000000D58AA06-000000000D58B520
bool __cdecl data::ConfigGlobalDither::fromJson(data::ConfigGlobalDither *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *dither_min_range_ptr; // [rsp+10h] [rbp-2A0h]
  const Json::Value *dither_max_range_ptr; // [rsp+18h] [rbp-298h]
  const Json::Value *default_detect_height_ptr; // [rsp+20h] [rbp-290h]
  const Json::Value *detect_height_check_step_ptr; // [rsp+28h] [rbp-288h]
  char v12[640]; // [rsp+30h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "12 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 "
                        "9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9"
                        " <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalDither::fromJson;
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
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "ditherMinRange",
    (const std::allocator<char> *)(v2 + 32));
  dither_min_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( dither_min_range_ptr && !fromJson<float>(dither_min_range_ptr, &this->dither_min_range) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2142);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[36])"fromJson for: ditherMinRange fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 224),
      "ditherMaxRange",
      (const std::allocator<char> *)(v2 + 48));
    dither_max_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( dither_max_range_ptr && !fromJson<float>(dither_max_range_ptr, &this->dither_max_range) )
    {
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2154);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[36])"fromJson for: ditherMaxRange fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 352),
        "defaultDetectHeight",
        (const std::allocator<char> *)(v2 + 64));
      default_detect_height_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( default_detect_height_ptr && !fromJson<float>(default_detect_height_ptr, &this->default_detect_height) )
      {
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2166);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[41])"fromJson for: defaultDetectHeight fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 480),
          "detectHeightCheckStep",
          (const std::allocator<char> *)(v2 + 80));
        detect_height_check_step_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
        std::string::~string((void *)(v2 + 480));
        *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( detect_height_check_step_ptr
          && !fromJson<unsigned int>(detect_height_check_step_ptr, &this->detect_height_check_step) )
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            2178);
          common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
            (common::milog::MiLogStream *const)(v2 + 544),
            (const char (*)[43])"fromJson for: detectHeightCheckStep fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          result = 0;
        }
        else
        {
          v6 = ((_BYTE)this + 16) & 7;
          v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
          if ( (_BYTE)v7 )
            __asan_report_store1(&this->is_json_loaded, v6, v7);
          this->is_json_loaded = 1;
          result = 1;
        }
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 2186: range 000000000D58B522-000000000D58B784
int32_t __cdecl data::ConfigGlobalDither::getHashValue(const data::ConfigGlobalDither *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2187";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalDither::getHashValue;
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
  common::tools::HashUtils::appendHash(this->dither_min_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->dither_max_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->dither_max_range >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->dither_max_range);
  }
  common::tools::HashUtils::appendHash(this->dither_max_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_detect_height >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_detect_height >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->default_detect_height);
  }
  common::tools::HashUtils::appendHash(this->default_detect_height, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->detect_height_check_step >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->detect_height_check_step >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->detect_height_check_step);
  }
  common::tools::HashUtils::appendHash(this->detect_height_check_step, (int32_t *)(v2 + 32));
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

// Line 2197: range 000000000D58B786-000000000D58C223
bool __cdecl data::ConfigElementDecrate::fromJson(data::ConfigElementDecrate *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  bool v7; // r14
  __int64 v8; // rsi
  __int64 v9; // rdx
  Json::Value *elem1_ptr; // [rsp+18h] [rbp-2A8h]
  Json::Value *elem2_ptr; // [rsp+20h] [rbp-2A0h]
  const Json::Value *ratio_ptr; // [rsp+28h] [rbp-298h]
  char v13[656]; // [rsp+30h] [rbp-290h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigElementDecrate::fromJson;
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
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 96),
    "elem1",
    (const std::allocator<char> *)(v2 + 48));
  elem1_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !elem1_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)elem1_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->elem1);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2207);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[27])"fromJson for: elem1 fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "elem2",
      (const std::allocator<char> *)(v2 + 64));
    elem2_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !elem2_ptr )
      goto LABEL_18;
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 352, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 352), (Json::Value_0 *)elem2_ptr);
    v7 = !data::enumStrToVal((const std::string *)(v2 + 352), &this->elem2);
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    if ( v7 )
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2219);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[27])"fromJson for: elem2 fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      result = 0;
    }
    else
    {
LABEL_18:
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 480),
        "ratio",
        (const std::allocator<char> *)(v2 + 80));
      ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( ratio_ptr && !fromJson<float>(ratio_ptr, &this->ratio) )
      {
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 544, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 544),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2231);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[27])"fromJson for: ratio fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        result = 0;
      }
      else
      {
        v8 = ((_BYTE)this + 12) & 7;
        v9 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v9 )
          __asan_report_store1(&this->is_json_loaded, v8, v9);
        this->is_json_loaded = 1;
        result = 1;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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

// Line 2239: range 000000000D58C224-000000000D58C431
int32_t __cdecl data::ConfigElementDecrate::getHashValue(const data::ConfigElementDecrate *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2240";
  *(_QWORD *)(v2 + 16) = data::ConfigElementDecrate::getHashValue;
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
  common::tools::HashUtils::appendHash(this->elem1, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->elem2 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elem2 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->elem2);
  }
  common::tools::HashUtils::appendHash(this->elem2, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ratio);
  }
  common::tools::HashUtils::appendHash(this->ratio, (int32_t *)(v2 + 32));
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

// Line 2248: range 000000000D58C432-000000000D58C811
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ConfigElementDecrateArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  data::ConfigElementDecrate *v10; // rdx
  bool result; // al
  std::vector<data::ConfigElementDecrate> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 9 elem:2254 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
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
      *(_DWORD *)(v3 + 40) = 1065353216;
      v8 = ((_BYTE)v3 + 44) & 7;
      v9 = (*(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(v3 + 44, v8, v9);
      *(_BYTE *)(v3 + 44) = 0;
      if ( !data::ConfigElementDecrate::fromJson((data::ConfigElementDecrate *const)(v3 + 32), elem_jval) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "arrFromJson",
          2257);
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
        v10 = std::move<data::ConfigElementDecrate &>((data::ConfigElementDecrate *)(v3 + 32));
        std::vector<data::ConfigElementDecrate>::emplace_back<data::ConfigElementDecrate>(va, v10, v10);
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

// Line 2267: range 000000000D58C812-000000000D58CA5E
int32_t __cdecl data::getArrHashValue(const data::ConfigElementDecrateArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigElementDecrate*,std::vector<data::ConfigElementDecrate> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2268 64 8 16 __for_begin:2269 96 8 14 __for_end:2269";
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
  *(std::vector<data::ConfigElementDecrate>::const_iterator *)(v2 + 64) = std::vector<data::ConfigElementDecrate>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigElementDecrate>::const_iterator *)(v2 + 96) = std::vector<data::ConfigElementDecrate>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigElementDecrate const*,std::vector<data::ConfigElementDecrate>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigElementDecrate*,std::vector<data::ConfigElementDecrate> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigElementDecrate*,std::vector<data::ConfigElementDecrate> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigElementDecrate const*,std::vector<data::ConfigElementDecrate>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigElementDecrate*,std::vector<data::ConfigElementDecrate> > *const)(v2 + 64));
    HashValue = data::ConfigElementDecrate::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigElementDecrate const*,std::vector<data::ConfigElementDecrate>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigElementDecrate*,std::vector<data::ConfigElementDecrate> > *const)(v2 + 64));
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

// Line 2277: range 000000000D58CA5F-000000000D58D64C
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigElementDecrateGroup *m)
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
  std::vector<data::ConfigElementDecrate> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:2279 80 16 9 <unknown> 112 24 10 value:2289 176 32 8 key:2282 240 32 9 <unknown> "
                        "304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 13 tmp_jval:2278 576 40 13 key_j"
                        "val:2281 656 40 15 value_jval:2288";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
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
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2285);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v11);
      v12 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<data::ConfigElementDecrate>::vector((std::vector<data::ConfigElementDecrate> *const)(v3 + 112));
      if ( !data::arrFromJson((const Json::Value *)(v3 + 656), (data::ConfigElementDecrateArray *)(v3 + 112)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          2292);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,std::vector<data::ConfigElementDecrate>>::emplace<std::string&,std::vector<data::ConfigElementDecrate>&>(
                m,
                (std::string *)(v3 + 176),
                (std::vector<data::ConfigElementDecrate> *)(v3 + 112),
                (std::string *)(v3 + 176),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            2297);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::vector<data::ConfigElementDecrate>::~vector((std::vector<data::ConfigElementDecrate> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v18 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
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
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 2306: range 000000000D58D64D-000000000D58D8F4
int32_t __cdecl data::getMapHashValue(const data::ConfigElementDecrateGroup *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::vector<data::ConfigElementDecrate> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::vector<data::ConfigElementDecrate> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2307 64 8 16 __for_begin:2308 96 8 14 __for_end:2308";
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
  *(std::unordered_map<std::string,std::vector<data::ConfigElementDecrate>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::vector<data::ConfigElementDecrate>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::vector<data::ConfigElementDecrate>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::vector<data::ConfigElementDecrate>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::vector<data::ConfigElementDecrate>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::ConfigElementDecrate>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::vector<data::ConfigElementDecrate>>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,std::vector<data::ConfigElementDecrate> > >::type *)std::get<1ul,std::string const,std::vector<data::ConfigElementDecrate>>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    ArrHashValue = data::getArrHashValue(val);
    common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::ConfigElementDecrate>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ConfigElementDecrate> >,false,true> *const)(v2 + 64));
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

// Line 2319: range 000000000D58D8F5-000000000D58E635
bool __cdecl data::mapFromJson(const Json::Value *jval, data::IntFloatMap *m)
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
  float *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,float>,false,false>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  int v20; // edx
  char v22[816]; // [rsp+20h] [rbp-330h] BYREF

  v3 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(768LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 48 4 8 key:2324 64 4 10 value:2337 80 16 8 cit:2321 112 16 9 <unknown> 144 32 12 key_str:2325"
                        " 208 32 9 <unknown> 272 32 9 <unknown> 336 32 9 <unknown> 400 32 9 <unknown> 464 32 9 <unknown> "
                        "528 40 13 tmp_jval:2320 608 40 13 key_jval:2323 688 40 15 value_jval:2336";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862723] = 62194;
  v5[536862724] = 62194;
  v5[536862725] = -219021312;
  v5[536862726] = 62194;
  v5[536862727] = -219021312;
  v5[536862728] = 62194;
  v5[536862729] = -219021312;
  v5[536862730] = 62194;
  v5[536862731] = -219021312;
  v5[536862732] = 62194;
  v5[536862733] = -219021312;
  v5[536862734] = 62194;
  v5[536862735] = -219021312;
  v5[536862736] = 62194;
  v5[536862737] = -234881024;
  v5[536862738] = -218959118;
  v5[536862740] = -218959360;
  v5[536862741] = 62194;
  v5[536862742] = -218103808;
  v5[536862743] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 528), jval);
  if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 528));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 528));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 80),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 112));
    *(_WORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 121) & 7) >= *(_BYTE *)(((v3 + 647) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 608, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 608));
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 144);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 608), (std::string *)(v3 + 144)) )
    {
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 208) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 239) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 208, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 208),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2328);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 208),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 272) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 47) & 7) >= *(_BYTE *)(((v3 + 303) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 272, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 272), (Json::Value_0 *)(v3 + 608));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 272));
      std::string::~string((void *)(v3 + 272));
      *(_DWORD *)(((v3 + 272) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 208));
      *(_DWORD *)(((v3 + 208) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 144), (int *)(v3 + 48), 1) )
    {
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 336) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 111) & 7) >= *(_BYTE *)(((v3 + 367) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 336, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 336),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2333);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 336),
              (const char (*)[17])"strToNum fails: ");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, (const std::string *)(v3 + 144));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 336));
      *(_DWORD *)(((v3 + 336) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v11 = ((v3 + 688) >> 3) + 2147450880;
      *(_DWORD *)v11 = 0;
      *(_BYTE *)(v11 + 4) = 0;
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 80));
      Json::Value::Value((Json::Value *)(v3 + 688), v12);
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<float>((const Json::Value *)(v3 + 688), (float *)(v3 + 64)) )
      {
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 112 + 31) & 7) >= *(_BYTE *)(((v3 + 431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 400),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          2340);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 400),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v14, (const int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 400));
        *(_DWORD *)(((v3 + 400) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<int,float>::emplace<int &,float &>(
                m,
                (int *)(v3 + 48),
                (float *)(v3 + 64),
                (int *)(v3 + 48),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 48 + 31) & 7) >= *(_BYTE *)(((v3 + 495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 464),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            2345);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 464),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 464));
          *(_DWORD *)(((v3 + 464) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 688));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 144));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 608));
    v18 = ((v3 + 608) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 144) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 688) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v20 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 80));
  }
  v20 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
  if ( v20 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 528));
  if ( v22 == (char *)v3 )
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

// Line 2354: range 000000000D58E636-000000000D58E93A
int32_t __cdecl data::getMapHashValue(const data::IntFloatMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,float>,false,false>::reference v6; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  float *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2355 64 8 16 __for_begin:2356 96 8 14 __for_end:2356";
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
  *(std::unordered_map<int,float>::const_iterator *)(v2 + 64) = std::unordered_map<int,float>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,float>::const_iterator *)(v2 + 96) = std::unordered_map<int,float>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,float>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,float>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,float>,false> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<int const,float>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,float>,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,float>(v6);
    val = (float *)std::get<1ul,int const,float>(v6);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(val);
    }
    common::tools::HashUtils::appendHash(*val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,float>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,float>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v9 == (char *)v2 )
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

// Line 2368: range 000000000D58E93C-000000000D58EF24
bool __cdecl data::ConfigElementReactionCoefficients::fromJson(
        data::ConfigElementReactionCoefficients *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *coefficient_overdose_grass_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *coefficient_overdose_electric_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigElementReactionCoefficients::fromJson;
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
    "coefficientOverdoseGrass",
    (const std::allocator<char> *)(v2 + 32));
  coefficient_overdose_grass_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( coefficient_overdose_grass_ptr
    && !fromJson<float>(coefficient_overdose_grass_ptr, &this->coefficient_overdose_grass) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2378);
    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[46])"fromJson for: coefficientOverdoseGrass fails!");
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
      "coefficientOverdoseElectric",
      (const std::allocator<char> *)(v2 + 48));
    coefficient_overdose_electric_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( coefficient_overdose_electric_ptr
      && !fromJson<float>(coefficient_overdose_electric_ptr, &this->coefficient_overdose_electric) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2390);
      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[49])"fromJson for: coefficientOverdoseElectric fails!");
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

// Line 2398: range 000000000D58EF26-000000000D58F0E4
int32_t __cdecl data::ConfigElementReactionCoefficients::getHashValue(
        const data::ConfigElementReactionCoefficients *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2399";
  *(_QWORD *)(v2 + 16) = data::ConfigElementReactionCoefficients::getHashValue;
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
  common::tools::HashUtils::appendHash(this->coefficient_overdose_grass, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->coefficient_overdose_electric >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->coefficient_overdose_electric >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->coefficient_overdose_electric);
  }
  common::tools::HashUtils::appendHash(this->coefficient_overdose_electric, (int32_t *)(v2 + 32));
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

// Line 2407: range 000000000D58F0E6-000000000D58F7CB
bool __cdecl data::ElementConvertToChargeBarValueMixinItem::fromJson(
        data::ElementConvertToChargeBarValueMixinItem *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *element_type_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *ratio_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::ElementConvertToChargeBarValueMixinItem::fromJson;
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
    "elementType",
    (const std::allocator<char> *)(v2 + 32));
  element_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !element_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)element_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->element_type);
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2417);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[33])"fromJson for: elementType fails!");
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
      "ratio",
      (const std::allocator<char> *)(v2 + 48));
    ratio_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ratio_ptr && !fromJson<float>(ratio_ptr, &this->ratio) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2429);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[27])"fromJson for: ratio fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      v7 = ((_BYTE)this + 8) & 7;
      v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
      if ( (_BYTE)v8 )
        __asan_report_store1(&this->is_json_loaded, v7, v8);
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

// Line 2437: range 000000000D58F7CC-000000000D58F988
int32_t __cdecl data::ElementConvertToChargeBarValueMixinItem::getHashValue(
        const data::ElementConvertToChargeBarValueMixinItem *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2438";
  *(_QWORD *)(v2 + 16) = data::ElementConvertToChargeBarValueMixinItem::getHashValue;
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
  common::tools::HashUtils::appendHash(this->element_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->ratio >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->ratio);
  }
  common::tools::HashUtils::appendHash(this->ratio, (int32_t *)(v2 + 32));
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

// Line 2445: range 000000000D58F989-000000000D58FD25
bool __cdecl data::arrFromJson(const Json::Value *jval, data::ElementConvertToChargeBarValueMixinItemArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  data::ElementConvertToChargeBarValueMixinItem *v8; // rdx
  bool result; // al
  std::vector<data::ElementConvertToChargeBarValueMixinItem> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 32 12 9 elem:2451 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
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
      if ( !data::ElementConvertToChargeBarValueMixinItem::fromJson(
              (data::ElementConvertToChargeBarValueMixinItem *const)(v3 + 32),
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "arrFromJson",
          2454);
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
        v8 = std::move<data::ElementConvertToChargeBarValueMixinItem &>((data::ElementConvertToChargeBarValueMixinItem *)(v3 + 32));
        std::vector<data::ElementConvertToChargeBarValueMixinItem>::emplace_back<data::ElementConvertToChargeBarValueMixinItem>(
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

// Line 2464: range 000000000D58FD26-000000000D58FF72
int32_t __cdecl data::getArrHashValue(const data::ElementConvertToChargeBarValueMixinItemArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ElementConvertToChargeBarValueMixinItem*,std::vector<data::ElementConvertToChargeBarValueMixinItem> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2465 64 8 16 __for_begin:2466 96 8 14 __for_end:2466";
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
  *(std::vector<data::ElementConvertToChargeBarValueMixinItem>::const_iterator *)(v2 + 64) = std::vector<data::ElementConvertToChargeBarValueMixinItem>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ElementConvertToChargeBarValueMixinItem>::const_iterator *)(v2 + 96) = std::vector<data::ElementConvertToChargeBarValueMixinItem>::end(vec);
  while ( __gnu_cxx::operator!=<data::ElementConvertToChargeBarValueMixinItem const*,std::vector<data::ElementConvertToChargeBarValueMixinItem>>(
            (const __gnu_cxx::__normal_iterator<const data::ElementConvertToChargeBarValueMixinItem*,std::vector<data::ElementConvertToChargeBarValueMixinItem> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ElementConvertToChargeBarValueMixinItem*,std::vector<data::ElementConvertToChargeBarValueMixinItem> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ElementConvertToChargeBarValueMixinItem const*,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::operator*((const __gnu_cxx::__normal_iterator<const data::ElementConvertToChargeBarValueMixinItem*,std::vector<data::ElementConvertToChargeBarValueMixinItem> > *const)(v2 + 64));
    HashValue = data::ElementConvertToChargeBarValueMixinItem::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ElementConvertToChargeBarValueMixinItem const*,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::operator++((__gnu_cxx::__normal_iterator<const data::ElementConvertToChargeBarValueMixinItem*,std::vector<data::ElementConvertToChargeBarValueMixinItem> > *const)(v2 + 64));
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

// Line 2474: range 000000000D58FF73-000000000D590B60
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ElementConvertToChargeBarValueMixinItemGroup *m)
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
  std::vector<data::ElementConvertToChargeBarValueMixinItem> *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,false,true>,bool> v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  int v21; // edx
  char v23[784]; // [rsp+20h] [rbp-310h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(736LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 16 8 cit:2476 80 16 9 <unknown> 112 24 10 value:2486 176 32 8 key:2479 240 32 9 <unknown> "
                        "304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 40 13 tmp_jval:2475 576 40 13 key_j"
                        "val:2478 656 40 15 value_jval:2485";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
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
  v5[536862736] = -234881024;
  v5[536862737] = -218959118;
  v5[536862739] = -218959360;
  v5[536862740] = 62194;
  v5[536862741] = -218103808;
  v5[536862742] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 496), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 496));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 496));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
    if ( !v6 )
      break;
    v7 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v7 = 0;
    *(_BYTE *)(v7 + 4) = 0;
    if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 103) & 7) >= *(_BYTE *)(((v3 + 615) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 576, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v3 + 576));
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v3 + 176);
    if ( !fromJson<std::string>((const Json::Value *)(v3 + 576), (std::string *)(v3 + 176)) )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 47) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2482);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 111) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v3 + 304), (Json::Value_0 *)(v3 + 576));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, (const std::string *)(v3 + 304));
      std::string::~string((void *)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = 0;
      v9 = 0;
    }
    else
    {
      v10 = ((v3 + 656) >> 3) + 2147450880;
      *(_DWORD *)v10 = 0;
      *(_BYTE *)(v10 + 4) = 0;
      v11 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 656), v11);
      v12 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v12 = 0;
      *(_BYTE *)(v12 + 2) = 0;
      std::vector<data::ElementConvertToChargeBarValueMixinItem>::vector((std::vector<data::ElementConvertToChargeBarValueMixinItem> *const)(v3 + 112));
      if ( !data::arrFromJson(
              (const Json::Value *)(v3 + 656),
              (data::ElementConvertToChargeBarValueMixinItemArray *)(v3 + 112)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          2489);
        v14 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v14, (const std::string *)(v3 + 176));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v15 = 0;
      }
      else
      {
        v16 = std::unordered_map<std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::emplace<std::string&,std::vector<data::ElementConvertToChargeBarValueMixinItem>&>(
                m,
                (std::string *)(v3 + 176),
                (std::vector<data::ElementConvertToChargeBarValueMixinItem> *)(v3 + 112),
                (std::string *)(v3 + 176),
                v13);
        if ( !v16.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            2494);
          v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, (const std::string *)(v3 + 176));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v15 = 0;
        }
        else
        {
          v15 = 1;
        }
      }
      std::vector<data::ElementConvertToChargeBarValueMixinItem>::~vector((std::vector<data::ElementConvertToChargeBarValueMixinItem> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 656));
      v9 = v15 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 576));
    v18 = ((v3 + 576) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v19 = ((v3 + 656) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    v20 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v20 = -1800;
    *(_BYTE *)(v20 + 2) = -8;
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
  Json::Value::~Value((Json::Value_0 *const)(v3 + 496));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8058) = -168430091;
  }
  return v2;
};

// Line 2503: range 000000000D590B61-000000000D590E08
int32_t __cdecl data::getMapHashValue(const data::ElementConvertToChargeBarValueMixinItemGroup *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> > >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2504 64 8 16 __for_begin:2505 96 8 14 __for_end:2505";
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
  *(std::unordered_map<std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem>>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,std::vector<data::ElementConvertToChargeBarValueMixinItem>>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::ElementConvertToChargeBarValueMixinItem>>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,std::vector<data::ElementConvertToChargeBarValueMixinItem>>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> > >::type *)std::get<1ul,std::string const,std::vector<data::ElementConvertToChargeBarValueMixinItem>>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    ArrHashValue = data::getArrHashValue(val);
    common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,std::vector<data::ElementConvertToChargeBarValueMixinItem>>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,std::vector<data::ElementConvertToChargeBarValueMixinItem> >,false,true> *const)(v2 + 64));
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

// Line 2517: range 000000000D590E0A-000000000D593E52
bool __cdecl data::ConfigSliceFrameWatch::fromJson(data::ConfigSliceFrameWatch *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *amortized_tick_massive_entity_budget_ptr; // [rsp+18h] [rbp-B98h]
  const Json::Value *shared_slice_frame_game_system_time_ptr; // [rsp+20h] [rbp-B90h]
  const Json::Value *resources_manager_asset_job_min_time_ptr; // [rsp+28h] [rbp-B88h]
  const Json::Value *resources_manager_asset_job_max_time_ptr; // [rsp+30h] [rbp-B80h]
  const Json::Value *resources_manager_instantiate_min_time_ptr; // [rsp+38h] [rbp-B78h]
  const Json::Value *resources_manager_instantiate_max_time_ptr; // [rsp+40h] [rbp-B70h]
  const Json::Value *resources_manager_unload_min_time_ptr; // [rsp+48h] [rbp-B68h]
  const Json::Value *resources_manager_unload_max_time_ptr; // [rsp+50h] [rbp-B60h]
  const Json::Value *resources_manager_instantiate_job_time_ptr; // [rsp+58h] [rbp-B58h]
  const Json::Value *level_appear_disappear_time_msdefault_ptr; // [rsp+60h] [rbp-B50h]
  const Json::Value *level_appear_disappear_wrrweight_ptr; // [rsp+68h] [rbp-B48h]
  const Json::Value *init_component_common_slicing_time_default_ptr; // [rsp+70h] [rbp-B40h]
  const Json::Value *remove_entity_time_msdefault_ptr; // [rsp+78h] [rbp-B38h]
  const Json::Value *remove_enity_wrrweight_ptr; // [rsp+80h] [rbp-B30h]
  const Json::Value *sectr_wrrweight_default_ptr; // [rsp+88h] [rbp-B28h]
  const Json::Value *timer_manager_time_ms_ptr; // [rsp+90h] [rbp-B20h]
  const Json::Value *use_legacy_generic_object_pool_ptr; // [rsp+98h] [rbp-B18h]
  const Json::Value *significance_task_thread_lod_ptr; // [rsp+A0h] [rbp-B10h]
  const Json::Value *loading_use_sync_load_ptr; // [rsp+A8h] [rbp-B08h]
  char v29[2816]; // [rsp+B0h] [rbp-B00h] BYREF

  v2 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2784LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "57 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 3"
                        "2 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32"
                        " 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 3"
                        "2 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 14"
                        "40 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown"
                        "> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unk"
                        "nown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 "
                        "<unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 3"
                        "2 9 <unknown> 2720 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigSliceFrameWatch::fromJson;
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
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "amortizedTickMassiveEntityBudget",
    (const std::allocator<char> *)(v2 + 48));
  amortized_tick_massive_entity_budget_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( amortized_tick_massive_entity_budget_ptr
    && !fromJson<float>(amortized_tick_massive_entity_budget_ptr, &this->amortized_tick_massive_entity_budget) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2527);
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      (common::milog::MiLogStream *const)(v2 + 416),
      (const char (*)[54])"fromJson for: amortizedTickMassiveEntityBudget fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      "sharedSliceFrameGameSystemTime",
      (const std::allocator<char> *)(v2 + 64));
    shared_slice_frame_game_system_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( shared_slice_frame_game_system_time_ptr
      && !fromJson<float>(shared_slice_frame_game_system_time_ptr, &this->shared_slice_frame_game_system_time) )
    {
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 544, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 544),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2539);
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
        (common::milog::MiLogStream *const)(v2 + 544),
        (const char (*)[52])"fromJson for: sharedSliceFrameGameSystemTime fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        "resourcesManagerAssetJobMinTime",
        (const std::allocator<char> *)(v2 + 80));
      resources_manager_asset_job_min_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( resources_manager_asset_job_min_time_ptr
        && !fromJson<float>(resources_manager_asset_job_min_time_ptr, &this->resources_manager_asset_job_min_time) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2551);
        common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
          (common::milog::MiLogStream *const)(v2 + 672),
          (const char (*)[53])"fromJson for: resourcesManagerAssetJobMinTime fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          "resourcesManagerAssetJobMaxTime",
          (const std::allocator<char> *)(v2 + 96));
        resources_manager_asset_job_max_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( resources_manager_asset_job_max_time_ptr
          && !fromJson<float>(resources_manager_asset_job_max_time_ptr, &this->resources_manager_asset_job_max_time) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            2563);
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
            (common::milog::MiLogStream *const)(v2 + 800),
            (const char (*)[53])"fromJson for: resourcesManagerAssetJobMaxTime fails!");
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
            "resourcesManagerInstantiateMinTime",
            (const std::allocator<char> *)(v2 + 112));
          resources_manager_instantiate_min_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( resources_manager_instantiate_min_time_ptr
            && !fromJson<float>(
                  resources_manager_instantiate_min_time_ptr,
                  &this->resources_manager_instantiate_min_time) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              2575);
            common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[56])"fromJson for: resourcesManagerInstantiateMinTime fails!");
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
              "resourcesManagerInstantiateMaxTime",
              (const std::allocator<char> *)(v2 + 128));
            resources_manager_instantiate_max_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( resources_manager_instantiate_max_time_ptr
              && !fromJson<float>(
                    resources_manager_instantiate_max_time_ptr,
                    &this->resources_manager_instantiate_max_time) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                2587);
              common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[56])"fromJson for: resourcesManagerInstantiateMaxTime fails!");
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
                "resourcesManagerUnloadMinTime",
                (const std::allocator<char> *)(v2 + 144));
              resources_manager_unload_min_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( resources_manager_unload_min_time_ptr
                && !fromJson<float>(resources_manager_unload_min_time_ptr, &this->resources_manager_unload_min_time) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  2599);
                common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                  (common::milog::MiLogStream *const)(v2 + 1184),
                  (const char (*)[51])"fromJson for: resourcesManagerUnloadMinTime fails!");
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
                  "resourcesManagerUnloadMaxTime",
                  (const std::allocator<char> *)(v2 + 160));
                resources_manager_unload_max_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( resources_manager_unload_max_time_ptr
                  && !fromJson<float>(resources_manager_unload_max_time_ptr, &this->resources_manager_unload_max_time) )
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
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    2611);
                  common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                    (common::milog::MiLogStream *const)(v2 + 1312),
                    (const char (*)[51])"fromJson for: resourcesManagerUnloadMaxTime fails!");
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
                    "resourcesManagerInstantiateJobTime",
                    (const std::allocator<char> *)(v2 + 176));
                  resources_manager_instantiate_job_time_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( resources_manager_instantiate_job_time_ptr
                    && !fromJson<float>(
                          resources_manager_instantiate_job_time_ptr,
                          &this->resources_manager_instantiate_job_time) )
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
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      2623);
                    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[56])"fromJson for: resourcesManagerInstantiateJobTime fails!");
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
                      "levelAppearDisappearTimeMSDefault",
                      (const std::allocator<char> *)(v2 + 192));
                    level_appear_disappear_time_msdefault_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                    std::string::~string((void *)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( level_appear_disappear_time_msdefault_ptr
                      && !fromJson<float>(
                            level_appear_disappear_time_msdefault_ptr,
                            &this->level_appear_disappear_time_msdefault) )
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
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        2635);
                      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                        (common::milog::MiLogStream *const)(v2 + 1568),
                        (const char (*)[55])"fromJson for: levelAppearDisappearTimeMSDefault fails!");
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
                        "levelAppearDisappearWRRWeight",
                        (const std::allocator<char> *)(v2 + 208));
                      level_appear_disappear_wrrweight_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                      std::string::~string((void *)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( level_appear_disappear_wrrweight_ptr
                        && !fromJson<int>(level_appear_disappear_wrrweight_ptr, &this->level_appear_disappear_wrrweight) )
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
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          2647);
                        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                          (common::milog::MiLogStream *const)(v2 + 1696),
                          (const char (*)[51])"fromJson for: levelAppearDisappearWRRWeight fails!");
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
                          "InitComponentCommonSlicingTimeDefault",
                          (const std::allocator<char> *)(v2 + 224));
                        init_component_common_slicing_time_default_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 1760));
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( init_component_common_slicing_time_default_ptr
                          && !fromJson<float>(
                                init_component_common_slicing_time_default_ptr,
                                &this->init_component_common_slicing_time_default) )
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
                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                            "fromJson",
                            2659);
                          common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                            (common::milog::MiLogStream *const)(v2 + 1824),
                            (const char (*)[59])"fromJson for: InitComponentCommonSlicingTimeDefault fails!");
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
                            "removeEntityTimeMSDefault",
                            (const std::allocator<char> *)(v2 + 240));
                          remove_entity_time_msdefault_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                          std::string::~string((void *)(v2 + 1888));
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( remove_entity_time_msdefault_ptr
                            && !fromJson<float>(remove_entity_time_msdefault_ptr, &this->remove_entity_time_msdefault) )
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
                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                              "fromJson",
                              2671);
                            common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                              (common::milog::MiLogStream *const)(v2 + 1952),
                              (const char (*)[47])"fromJson for: removeEntityTimeMSDefault fails!");
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
                              "removeEnityWRRWeight",
                              (const std::allocator<char> *)(v2 + 256));
                            remove_enity_wrrweight_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                            std::string::~string((void *)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( remove_enity_wrrweight_ptr
                              && !fromJson<int>(remove_enity_wrrweight_ptr, &this->remove_enity_wrrweight) )
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
                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                "fromJson",
                                2683);
                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                (common::milog::MiLogStream *const)(v2 + 2080),
                                (const char (*)[42])"fromJson for: removeEnityWRRWeight fails!");
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
                                "sectrWRRWeightDefault",
                                (const std::allocator<char> *)(v2 + 272));
                              sectr_wrrweight_default_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                              std::string::~string((void *)(v2 + 2144));
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( sectr_wrrweight_default_ptr
                                && !fromJson<int>(sectr_wrrweight_default_ptr, &this->sectr_wrrweight_default) )
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
                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                  "fromJson",
                                  2695);
                                common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2208),
                                  (const char (*)[43])"fromJson for: sectrWRRWeightDefault fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2272),
                                  "timerManagerTimeMS",
                                  (const std::allocator<char> *)(v2 + 288));
                                timer_manager_time_ms_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2272));
                                std::string::~string((void *)(v2 + 2272));
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( timer_manager_time_ms_ptr
                                  && !fromJson<float>(timer_manager_time_ms_ptr, &this->timer_manager_time_ms) )
                                {
                                  *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2336, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2336),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                    "fromJson",
                                    2707);
                                  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2336),
                                    (const char (*)[40])"fromJson for: timerManagerTimeMS fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2400),
                                    "UseLegacyGenericObjectPool",
                                    (const std::allocator<char> *)(v2 + 304));
                                  use_legacy_generic_object_pool_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 2400));
                                  std::string::~string((void *)(v2 + 2400));
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( use_legacy_generic_object_pool_ptr
                                    && !fromJson<bool>(
                                          use_legacy_generic_object_pool_ptr,
                                          &this->use_legacy_generic_object_pool) )
                                  {
                                    *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2464, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2464),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                      "fromJson",
                                      2719);
                                    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2464),
                                      (const char (*)[48])"fromJson for: UseLegacyGenericObjectPool fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2528),
                                      "significanceTaskThreadLOD",
                                      (const std::allocator<char> *)(v2 + 320));
                                    significance_task_thread_lod_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 2528));
                                    std::string::~string((void *)(v2 + 2528));
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( significance_task_thread_lod_ptr
                                      && !fromJson<int>(
                                            significance_task_thread_lod_ptr,
                                            &this->significance_task_thread_lod) )
                                    {
                                      *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2592, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2592),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                        "fromJson",
                                        2731);
                                      common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2592),
                                        (const char (*)[47])"fromJson for: significanceTaskThreadLOD fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2656),
                                        "loadingUseSyncLoad",
                                        (const std::allocator<char> *)(v2 + 336));
                                      loading_use_sync_load_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2656));
                                      std::string::~string((void *)(v2 + 2656));
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( loading_use_sync_load_ptr
                                        && !fromJson<bool>(loading_use_sync_load_ptr, &this->loading_use_sync_load) )
                                      {
                                        *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2720, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2720),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                          "fromJson",
                                          2743);
                                        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2720),
                                          (const char (*)[40])"fromJson for: loadingUseSyncLoad fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        v6 = ((_BYTE)this + 73) & 7;
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
  if ( v29 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8130) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8158) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2784LL, v29);
  }
  return v8;
};

// Line 2751: range 000000000D593E54-000000000D594577
int32_t __cdecl data::ConfigSliceFrameWatch::getHashValue(const data::ConfigSliceFrameWatch *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2752";
  *(_QWORD *)(v2 + 16) = data::ConfigSliceFrameWatch::getHashValue;
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
  common::tools::HashUtils::appendHash(this->amortized_tick_massive_entity_budget, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->shared_slice_frame_game_system_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->shared_slice_frame_game_system_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->shared_slice_frame_game_system_time);
  }
  common::tools::HashUtils::appendHash(this->shared_slice_frame_game_system_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_asset_job_min_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_asset_job_min_time >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_asset_job_min_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_asset_job_min_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_asset_job_max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_asset_job_max_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_asset_job_max_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_asset_job_max_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_min_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_min_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_instantiate_min_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_instantiate_min_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_max_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_instantiate_max_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_instantiate_max_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_unload_min_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_unload_min_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_unload_min_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_unload_min_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_unload_max_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_unload_max_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_unload_max_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_unload_max_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_job_time >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->resources_manager_instantiate_job_time >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->resources_manager_instantiate_job_time);
  }
  common::tools::HashUtils::appendHash(this->resources_manager_instantiate_job_time, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_appear_disappear_time_msdefault >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_appear_disappear_time_msdefault >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_appear_disappear_time_msdefault);
  }
  common::tools::HashUtils::appendHash(this->level_appear_disappear_time_msdefault, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_appear_disappear_wrrweight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_appear_disappear_wrrweight >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_appear_disappear_wrrweight);
  }
  common::tools::HashUtils::appendHash(this->level_appear_disappear_wrrweight, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->init_component_common_slicing_time_default >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->init_component_common_slicing_time_default >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->init_component_common_slicing_time_default);
  }
  common::tools::HashUtils::appendHash(this->init_component_common_slicing_time_default, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->remove_entity_time_msdefault >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remove_entity_time_msdefault >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->remove_entity_time_msdefault);
  }
  common::tools::HashUtils::appendHash(this->remove_entity_time_msdefault, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->remove_enity_wrrweight >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->remove_enity_wrrweight >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->remove_enity_wrrweight);
  }
  common::tools::HashUtils::appendHash(this->remove_enity_wrrweight, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->sectr_wrrweight_default >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 56) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->sectr_wrrweight_default >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->sectr_wrrweight_default);
  }
  common::tools::HashUtils::appendHash(this->sectr_wrrweight_default, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->timer_manager_time_ms >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->timer_manager_time_ms >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->timer_manager_time_ms);
  }
  common::tools::HashUtils::appendHash(this->timer_manager_time_ms, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 64) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->use_legacy_generic_object_pool >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->use_legacy_generic_object_pool >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->use_legacy_generic_object_pool, v5, v6);
  common::tools::HashUtils::appendHash(this->use_legacy_generic_object_pool, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->significance_task_thread_lod >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->significance_task_thread_lod >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->significance_task_thread_lod);
  }
  common::tools::HashUtils::appendHash(this->significance_task_thread_lod, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 72) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->loading_use_sync_load >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->loading_use_sync_load >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->loading_use_sync_load, v7, v8);
  common::tools::HashUtils::appendHash(this->loading_use_sync_load, (int32_t *)(v2 + 32));
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

// Line 2777: range 000000000D594578-000000000D59531A
bool __cdecl data::ConfigBoolForPlatforms::fromJson(data::ConfigBoolForPlatforms *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *ps4_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *android_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *ios_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *pc_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *editor_ptr; // [rsp+38h] [rbp-328h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBoolForPlatforms::fromJson;
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
    "ps4",
    (const std::allocator<char> *)(v2 + 48));
  ps4_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( ps4_ptr && !fromJson<bool>(ps4_ptr, &this->ps4) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2787);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[25])"fromJson for: ps4 fails!");
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
      "android",
      (const std::allocator<char> *)(v2 + 64));
    android_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( android_ptr && !fromJson<bool>(android_ptr, &this->android) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2799);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[29])"fromJson for: android fails!");
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
        off_1A2236C0,
        (const std::allocator<char> *)(v2 + 80));
      ios_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( ios_ptr && !fromJson<bool>(ios_ptr, &this->ios) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2811);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[25])"fromJson for: ios fails!");
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
          "pc",
          (const std::allocator<char> *)(v2 + 96));
        pc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( pc_ptr && !fromJson<bool>(pc_ptr, &this->pc) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            2823);
          common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[24])"fromJson for: pc fails!");
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
            "editor",
            (const std::allocator<char> *)(v2 + 112));
          editor_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( editor_ptr && !fromJson<bool>(editor_ptr, &this->editor) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              2835);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[28])"fromJson for: editor fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            v6 = ((_BYTE)this + 5) & 7;
            v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
            if ( (_BYTE)v7 )
              __asan_report_store1(&this->is_json_loaded, v6, v7);
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

// Line 2843: range 000000000D59531C-000000000D5955CE
int32_t __cdecl data::ConfigBoolForPlatforms::getHashValue(const data::ConfigBoolForPlatforms *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rsi
  __int64 v14; // rdx
  int32_t result; // eax
  char v16[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2844";
  *(_QWORD *)(v2 + 16) = data::ConfigBoolForPlatforms::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  v5 = (unsigned __int8)this & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(this, v5, v6);
  common::tools::HashUtils::appendHash(this->ps4, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 1) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->android >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->android >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->android, v7, v8);
  common::tools::HashUtils::appendHash(this->android, (int32_t *)(v2 + 32));
  v9 = ((_BYTE)this + 2) & 7;
  v10 = (*(_BYTE *)(((unsigned __int64)&this->ios >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v9 >= *(_BYTE *)(((unsigned __int64)&this->ios >> 3) + 0x7FFF8000));
  if ( (_BYTE)v10 )
    __asan_report_load1(&this->ios, v9, v10);
  common::tools::HashUtils::appendHash(this->ios, (int32_t *)(v2 + 32));
  v11 = ((_BYTE)this + 3) & 7;
  v12 = (*(_BYTE *)(((unsigned __int64)&this->pc >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v11 >= *(_BYTE *)(((unsigned __int64)&this->pc >> 3) + 0x7FFF8000));
  if ( (_BYTE)v12 )
    __asan_report_load1(&this->pc, v11, v12);
  common::tools::HashUtils::appendHash(this->pc, (int32_t *)(v2 + 32));
  v13 = ((_BYTE)this + 4) & 7;
  v14 = (*(_BYTE *)(((unsigned __int64)&this->editor >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((unsigned __int64)&this->editor >> 3) + 0x7FFF8000));
  if ( (_BYTE)v14 )
    __asan_report_load1(&this->editor, v13, v14);
  common::tools::HashUtils::appendHash(this->editor, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v16 == (char *)v2 )
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

// Line 2855: range 000000000D5955D0-000000000D595BB8
bool __cdecl data::ConfigIK::fromJson(data::ConfigIK *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *remote_move_ik_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *remote_climb_ik_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigIK::fromJson;
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
    "remoteMoveIK",
    (const std::allocator<char> *)(v2 + 32));
  remote_move_ik_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( remote_move_ik_ptr && !data::ConfigBoolForPlatforms::fromJson(&this->remote_move_ik, remote_move_ik_ptr) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2865);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: remoteMoveIK fails!");
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
      "remoteClimbIK",
      (const std::allocator<char> *)(v2 + 48));
    remote_climb_ik_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( remote_climb_ik_ptr && !data::ConfigBoolForPlatforms::fromJson(&this->remote_climb_ik, remote_climb_ik_ptr) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2877);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[35])"fromJson for: remoteClimbIK fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
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

// Line 2885: range 000000000D595BBA-000000000D595D15
int32_t __cdecl data::ConfigIK::getHashValue(const data::ConfigIK *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2886";
  *(_QWORD *)(v2 + 16) = data::ConfigIK::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigBoolForPlatforms::getHashValue(&this->remote_move_ik);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigBoolForPlatforms::getHashValue(&this->remote_climb_ik);
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

// Line 2894: range 000000000D595D16-000000000D5966A6
bool __cdecl data::EquipSizeData::fromJson(data::EquipSizeData *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  Json::Value *equip_type_ptr; // [rsp+18h] [rbp-268h]
  const Json::Value *put_away_size_ptr; // [rsp+20h] [rbp-260h]
  const Json::Value *take_out_size_ptr; // [rsp+28h] [rbp-258h]
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
  *(_QWORD *)(v2 + 16) = data::EquipSizeData::fromJson;
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
    "equipType",
    (const std::allocator<char> *)(v2 + 48));
  equip_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( !equip_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 160, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 160), (Json::Value_0 *)equip_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 160), &this->equip_type);
  std::string::~string((void *)(v2 + 160));
  *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
  if ( v5 )
  {
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      2904);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 224),
      (const char (*)[31])"fromJson for: equipType fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
    result = 0;
  }
  else
  {
LABEL_11:
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 288),
      "putAwaySize",
      (const std::allocator<char> *)(v2 + 64));
    put_away_size_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
    std::string::~string((void *)(v2 + 288));
    *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( put_away_size_ptr && !fromJson<float>(put_away_size_ptr, &this->put_away_size) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        2916);
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        (common::milog::MiLogStream *const)(v2 + 352),
        (const char (*)[33])"fromJson for: putAwaySize fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      result = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 416),
        "takeOutSize",
        (const std::allocator<char> *)(v2 + 80));
      take_out_size_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
      std::string::~string((void *)(v2 + 416));
      *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( take_out_size_ptr && !fromJson<float>(take_out_size_ptr, &this->take_out_size) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          2928);
        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
          (common::milog::MiLogStream *const)(v2 + 480),
          (const char (*)[33])"fromJson for: takeOutSize fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
        result = 0;
      }
      else
      {
        v7 = ((_BYTE)this + 12) & 7;
        v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
        if ( (_BYTE)v8 )
          __asan_report_store1(&this->is_json_loaded, v7, v8);
        this->is_json_loaded = 1;
        result = 1;
      }
    }
  }
  if ( v12 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
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

// Line 2936: range 000000000D5966A8-000000000D5968B7
int32_t __cdecl data::EquipSizeData::getHashValue(const data::EquipSizeData *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:2937";
  *(_QWORD *)(v2 + 16) = data::EquipSizeData::getHashValue;
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
  common::tools::HashUtils::appendHash(this->equip_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->put_away_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->put_away_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->put_away_size);
  }
  common::tools::HashUtils::appendHash(this->put_away_size, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->take_out_size >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->take_out_size >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->take_out_size);
  }
  common::tools::HashUtils::appendHash(this->take_out_size, (int32_t *)(v2 + 32));
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

// Line 2945: range 000000000D5968B8-000000000D596C9D
bool __cdecl data::arrFromJson(const Json::Value *jval, data::EquipSizeDataArray *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // rdx
  data::EquipSizeData *v10; // rdx
  bool result; // al
  std::vector<data::EquipSizeData> *va; // [rsp+0h] [rbp-D0h]
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
  *(_QWORD *)(v3 + 8) = "2 32 16 9 elem:2951 64 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = data::arrFromJson;
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
      *(_DWORD *)(v3 + 36) = 1065353216;
      if ( *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 40) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 40, v7);
      *(_DWORD *)(v3 + 40) = 1065353216;
      v8 = ((_BYTE)v3 + 44) & 7;
      v9 = (*(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((v3 + 44) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v9 )
        __asan_report_store1(v3 + 44, v8, v9);
      *(_BYTE *)(v3 + 44) = 0;
      if ( !data::EquipSizeData::fromJson((data::EquipSizeData *const)(v3 + 32), elem_jval) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "arrFromJson",
          2954);
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
        v10 = std::move<data::EquipSizeData &>((data::EquipSizeData *)(v3 + 32));
        std::vector<data::EquipSizeData>::emplace_back<data::EquipSizeData>(va, v10, v10);
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

// Line 2964: range 000000000D596C9E-000000000D596EEA
int32_t __cdecl data::getArrHashValue(const data::EquipSizeDataArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::EquipSizeData*,std::vector<data::EquipSizeData> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:2965 64 8 16 __for_begin:2966 96 8 14 __for_end:2966";
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
  *(std::vector<data::EquipSizeData>::const_iterator *)(v2 + 64) = std::vector<data::EquipSizeData>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::EquipSizeData>::const_iterator *)(v2 + 96) = std::vector<data::EquipSizeData>::end(vec);
  while ( __gnu_cxx::operator!=<data::EquipSizeData const*,std::vector<data::EquipSizeData>>(
            (const __gnu_cxx::__normal_iterator<const data::EquipSizeData*,std::vector<data::EquipSizeData> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::EquipSizeData*,std::vector<data::EquipSizeData> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::EquipSizeData const*,std::vector<data::EquipSizeData>>::operator*((const __gnu_cxx::__normal_iterator<const data::EquipSizeData*,std::vector<data::EquipSizeData> > *const)(v2 + 64));
    HashValue = data::EquipSizeData::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::EquipSizeData const*,std::vector<data::EquipSizeData>>::operator++((__gnu_cxx::__normal_iterator<const data::EquipSizeData*,std::vector<data::EquipSizeData> > *const)(v2 + 64));
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

// Line 2974: range 000000000D596EEB-000000000D597C99
bool __cdecl data::mapFromJson(const Json::Value *jval, data::EquipSizeDataArrayMap *m)
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
  std::vector<data::EquipSizeData> *v14; // r8
  common::milog::MiLogStream *v15; // rax
  int v16; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<int const,std::vector<data::EquipSizeData> >,false,false>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  unsigned __int64 v21; // rax
  int v22; // edx
  char v24[848]; // [rsp+20h] [rbp-350h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(800LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "13 32 4 8 key:2979 48 16 8 cit:2976 80 16 9 <unknown> 112 24 10 value:2992 176 32 12 key_str:298"
                        "0 240 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unknown>"
                        " 560 40 13 tmp_jval:2975 640 40 13 key_jval:2978 720 40 15 value_jval:2991";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
  v5[536862722] = 62194;
  v5[536862723] = 62194;
  v5[536862724] = -218959360;
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
  v5[536862743] = -218103808;
  v5[536862744] = -202116109;
  Json::Value::Value((Json::Value *)(v3 + 560), jval);
  if ( *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v3 + 560));
  while ( 1 )
  {
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v3 + 560));
    v6 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v3 + 48),
           (const Json::ValueIteratorBase::SelfType *)(v3 + 80));
    *(_WORD *)(((v3 + 80) >> 3) + 0x7FFF8000) = -1800;
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
        && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2983);
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
    else if ( common::tools::StringUtils::strToNum<int>((const std::string *)(v3 + 176), (int *)(v3 + 32), 1) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        2988);
      v10 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
              (common::milog::MiLogStream *const)(v3 + 368),
              (const char (*)[17])"strToNum fails: ");
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
      v12 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v3 + 48));
      Json::Value::Value((Json::Value *)(v3 + 720), v12);
      v13 = ((v3 + 112) >> 3) + 2147450880;
      *(_WORD *)v13 = 0;
      *(_BYTE *)(v13 + 2) = 0;
      std::vector<data::EquipSizeData>::vector((std::vector<data::EquipSizeData> *const)(v3 + 112));
      if ( !data::arrFromJson((const Json::Value *)(v3 + 720), (data::EquipSizeDataArray *)(v3 + 112)) )
      {
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 432, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 432),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          2995);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 432),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<int,(int *)0>(v15, (const int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
        *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v16 = 0;
      }
      else
      {
        v17 = std::unordered_map<int,std::vector<data::EquipSizeData>>::emplace<int &,std::vector<data::EquipSizeData>&>(
                m,
                (int *)(v3 + 32),
                (std::vector<data::EquipSizeData> *)(v3 + 112),
                (int *)(v3 + 32),
                v14);
        if ( !v17.second )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            3000);
          v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 496),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<int,(int *)0>(v18, (const int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
          *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v16 = 0;
        }
        else
        {
          v16 = 1;
        }
      }
      std::vector<data::EquipSizeData>::~vector((std::vector<data::EquipSizeData> *const)(v3 + 112));
      Json::Value::~Value((Json::Value_0 *const)(v3 + 720));
      v9 = v16 == 1;
    }
    std::string::~string((void *)(v3 + 176));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 640));
    v19 = ((v3 + 640) >> 3) + 2147450880;
    *(_DWORD *)v19 = -117901064;
    *(_BYTE *)(v19 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
    v20 = ((v3 + 720) >> 3) + 2147450880;
    *(_DWORD *)v20 = -117901064;
    *(_BYTE *)(v20 + 4) = -8;
    v21 = ((v3 + 112) >> 3) + 2147450880;
    *(_WORD *)v21 = -1800;
    *(_BYTE *)(v21 + 2) = -8;
    if ( !v9 )
    {
      v22 = 0;
      goto LABEL_36;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v22 = 1;
LABEL_36:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v22 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 560));
  if ( v24 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8060) = -168430091;
  }
  return v2;
};

// Line 3009: range 000000000D597C9A-000000000D597F6A
int32_t __cdecl data::getMapHashValue(const data::EquipSizeDataArrayMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t ArrHashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<int const,std::vector<data::EquipSizeData> >,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  int32_t *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<int const,std::vector<data::EquipSizeData> > >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3010 64 8 16 __for_begin:3011 96 8 14 __for_end:3011";
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
  *(std::unordered_map<int,std::vector<data::EquipSizeData>>::const_iterator *)(v2 + 64) = std::unordered_map<int,std::vector<data::EquipSizeData>>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<int,std::vector<data::EquipSizeData>>::const_iterator *)(v2 + 96) = std::unordered_map<int,std::vector<data::EquipSizeData>>::end(map);
  while ( std::__detail::operator!=<std::pair<int const,std::vector<data::EquipSizeData>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::vector<data::EquipSizeData> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<int const,std::vector<data::EquipSizeData> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<int const,std::vector<data::EquipSizeData>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<int const,std::vector<data::EquipSizeData> >,false,false> *const)(v2 + 64));
    key = std::get<0ul,int const,std::vector<data::EquipSizeData>>(v7);
    val = (std::tuple_element<1,const std::pair<int const,std::vector<data::EquipSizeData> > >::type *)std::get<1ul,int const,std::vector<data::EquipSizeData>>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    ArrHashValue = data::getArrHashValue(val);
    common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<int const,std::vector<data::EquipSizeData>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<int const,std::vector<data::EquipSizeData> >,false,false> *const)(v2 + 64));
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

// Line 3023: range 000000000D597F6C-000000000D598554
bool __cdecl data::ConfigBigWorldEnvironmentDamageClamp::fromJson(
        data::ConfigBigWorldEnvironmentDamageClamp *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *reduce_level_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *world_level_cut_threshhold_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigBigWorldEnvironmentDamageClamp::fromJson;
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
    "reduceLevel",
    (const std::allocator<char> *)(v2 + 32));
  reduce_level_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( reduce_level_ptr && !fromJson<int>(reduce_level_ptr, &this->reduce_level) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3033);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[33])"fromJson for: reduceLevel fails!");
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
      "worldLevelCutThreshhold",
      (const std::allocator<char> *)(v2 + 48));
    world_level_cut_threshhold_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( world_level_cut_threshhold_ptr
      && !fromJson<int>(world_level_cut_threshhold_ptr, &this->world_level_cut_threshhold) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3045);
      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[45])"fromJson for: worldLevelCutThreshhold fails!");
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

// Line 3053: range 000000000D598556-000000000D598710
int32_t __cdecl data::ConfigBigWorldEnvironmentDamageClamp::getHashValue(
        const data::ConfigBigWorldEnvironmentDamageClamp *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3054";
  *(_QWORD *)(v2 + 16) = data::ConfigBigWorldEnvironmentDamageClamp::getHashValue;
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
  common::tools::HashUtils::appendHash(this->reduce_level, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_cut_threshhold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->world_level_cut_threshhold >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->world_level_cut_threshhold);
  }
  common::tools::HashUtils::appendHash(this->world_level_cut_threshhold, (int32_t *)(v2 + 32));
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

// Line 3062: range 000000000D598712-000000000D59A1CA
bool __cdecl data::ConfigTDPlayTowerData::fromJson(data::ConfigTDPlayTowerData *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  char v6; // al
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  Json::Value *tower_type_ptr; // [rsp+10h] [rbp-680h]
  const Json::Value *damage_per_level_ptr; // [rsp+18h] [rbp-678h]
  const Json::Value *elem_mastery_per_level_ptr; // [rsp+20h] [rbp-670h]
  const Json::Value *elem_mastery_per_per_stack_ptr; // [rsp+28h] [rbp-668h]
  const Json::Value *damage__a__per_stack_ptr; // [rsp+30h] [rbp-660h]
  const Json::Value *damage__b__per_stack_ptr; // [rsp+38h] [rbp-658h]
  const Json::Value *attack_speed__a_ptr; // [rsp+40h] [rbp-650h]
  const Json::Value *attack_speed__b_ptr; // [rsp+48h] [rbp-648h]
  const Json::Value *attack_range__a_ptr; // [rsp+50h] [rbp-640h]
  const Json::Value *attack_range__b_ptr; // [rsp+58h] [rbp-638h]
  char v21[1584]; // [rsp+60h] [rbp-630h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1536LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "31 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unkn"
                        "own> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unkno"
                        "wn> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknow"
                        "n> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unkn"
                        "own> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigTDPlayTowerData::fromJson;
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
  v4[536862767] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "towerType",
    (const std::allocator<char> *)(v2 + 32));
  tower_type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !tower_type_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 256, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 256), (Json::Value_0 *)tower_type_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 256), &this->tower_type);
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3072);
    common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
      (common::milog::MiLogStream *const)(v2 + 320),
      (const char (*)[31])"fromJson for: towerType fails!");
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
      "damagePerLevel",
      (const std::allocator<char> *)(v2 + 48));
    damage_per_level_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( damage_per_level_ptr && !fromJson<float>(damage_per_level_ptr, &this->damage_per_level) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3084);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 448),
        (const char (*)[36])"fromJson for: damagePerLevel fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v6 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        "elemMasteryPerLevel",
        (const std::allocator<char> *)(v2 + 64));
      elem_mastery_per_level_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( elem_mastery_per_level_ptr && !fromJson<float>(elem_mastery_per_level_ptr, &this->elem_mastery_per_level) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          3096);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[41])"fromJson for: elemMasteryPerLevel fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v6 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          "elemMasteryPerPerStack",
          (const std::allocator<char> *)(v2 + 80));
        elem_mastery_per_per_stack_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( elem_mastery_per_per_stack_ptr
          && !fromJson<float>(elem_mastery_per_per_stack_ptr, &this->elem_mastery_per_per_stack) )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            3108);
          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[44])"fromJson for: elemMasteryPerPerStack fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v6 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            "damage_A_PerStack",
            (const std::allocator<char> *)(v2 + 96));
          damage__a__per_stack_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( damage__a__per_stack_ptr && !fromJson<float>(damage__a__per_stack_ptr, &this->damage__a__per_stack) )
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
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              3120);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)(v2 + 832),
              (const char (*)[39])"fromJson for: damage_A_PerStack fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            v6 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              "damage_B_PerStack",
              (const std::allocator<char> *)(v2 + 112));
            damage__b__per_stack_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( damage__b__per_stack_ptr && !fromJson<float>(damage__b__per_stack_ptr, &this->damage__b__per_stack) )
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
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                3132);
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[39])"fromJson for: damage_B_PerStack fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              v6 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                "attackSpeed_A",
                (const std::allocator<char> *)(v2 + 128));
              attack_speed__a_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( attack_speed__a_ptr && !fromJson<float>(attack_speed__a_ptr, &this->attack_speed__a) )
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
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  3144);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)(v2 + 1088),
                  (const char (*)[35])"fromJson for: attackSpeed_A fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                v6 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1152),
                  "attackSpeed_B",
                  (const std::allocator<char> *)(v2 + 144));
                attack_speed__b_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
                std::string::~string((void *)(v2 + 1152));
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( attack_speed__b_ptr && !fromJson<float>(attack_speed__b_ptr, &this->attack_speed__b) )
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
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    3156);
                  common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[35])"fromJson for: attackSpeed_B fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                  v6 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1280),
                    "attackRange_A",
                    (const std::allocator<char> *)(v2 + 160));
                  attack_range__a_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
                  std::string::~string((void *)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( attack_range__a_ptr && !fromJson<float>(attack_range__a_ptr, &this->attack_range__a) )
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
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      3168);
                    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                      (common::milog::MiLogStream *const)(v2 + 1344),
                      (const char (*)[35])"fromJson for: attackRange_A fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                    v6 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1408),
                      "attackRange_B",
                      (const std::allocator<char> *)(v2 + 176));
                    attack_range__b_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
                    std::string::~string((void *)(v2 + 1408));
                    *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( attack_range__b_ptr && !fromJson<float>(attack_range__b_ptr, &this->attack_range__b) )
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
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        3180);
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        (common::milog::MiLogStream *const)(v2 + 1472),
                        (const char (*)[35])"fromJson for: attackRange_B fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                      v6 = 0;
                    }
                    else
                    {
                      v7 = ((_BYTE)this + 40) & 7;
                      v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                      if ( (_BYTE)v8 )
                        __asan_report_store1(&this->is_json_loaded, v7, v8);
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
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1536LL, v21);
  }
  return v9;
};

// Line 3188: range 000000000D59A1CC-000000000D59A615
int32_t __cdecl data::ConfigTDPlayTowerData::getHashValue(const data::ConfigTDPlayTowerData *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3189";
  *(_QWORD *)(v2 + 16) = data::ConfigTDPlayTowerData::getHashValue;
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
  common::tools::HashUtils::appendHash(this->tower_type, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->damage_per_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage_per_level >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage_per_level);
  }
  common::tools::HashUtils::appendHash(this->damage_per_level, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_mastery_per_level >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elem_mastery_per_level >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->elem_mastery_per_level);
  }
  common::tools::HashUtils::appendHash(this->elem_mastery_per_level, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->elem_mastery_per_per_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->elem_mastery_per_per_stack >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->elem_mastery_per_per_stack);
  }
  common::tools::HashUtils::appendHash(this->elem_mastery_per_per_stack, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->damage__a__per_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage__a__per_stack >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage__a__per_stack);
  }
  common::tools::HashUtils::appendHash(this->damage__a__per_stack, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->damage__b__per_stack >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->damage__b__per_stack >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->damage__b__per_stack);
  }
  common::tools::HashUtils::appendHash(this->damage__b__per_stack, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_speed__a >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 24) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_speed__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_speed__a);
  }
  common::tools::HashUtils::appendHash(this->attack_speed__a, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_speed__b >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_speed__b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_speed__b);
  }
  common::tools::HashUtils::appendHash(this->attack_speed__b, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_range__a >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 32) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_range__a >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_range__a);
  }
  common::tools::HashUtils::appendHash(this->attack_range__a, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_range__b >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_range__b >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_range__b);
  }
  common::tools::HashUtils::appendHash(this->attack_range__b, (int32_t *)(v2 + 32));
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

// Line 3204: range 000000000D59A616-000000000D59B5B0
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigTDPlayTowerDataMap *m)
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
  data::ConfigTDPlayTowerData *v14; // r8
  common::milog::MiLogStream *v15; // r14
  __int64 v16; // rax
  int v17; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  int v24; // edx
  bool result; // al
  char v26[944]; // [rsp+20h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 48 4 8 key:3209 64 8 9 <unknown> 96 8 9 <unknown> 128 16 8 cit:3206 160 16 9 <unknown> 192 32"
                        " 12 key_str:3210 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512"
                        " 32 9 <unknown> 576 40 13 tmp_jval:3205 656 40 13 key_jval:3208 736 40 15 value_jval:3221 816 44 10 value:3222";
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
  v5[536862746] = 0x4000000;
  v5[536862747] = -202116109;
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
      && (char)((v3 - 73) & 7) >= *(_BYTE *)(((v3 + 695) >> 3) + 0x7FFF8000) )
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
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        3213);
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
    else if ( !data::enumStrToVal((const std::string *)(v3 + 192), (data::TDPlayTowerType *)(v3 + 48)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        3218);
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
      *(_WORD *)(v13 + 4) = 1024;
      if ( *(char *)(((v3 + 816) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 859) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 91) & 7) >= *(_BYTE *)(((v3 + 859) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 816, 44LL);
      }
      *(_QWORD *)(v3 + 816) = 0LL;
      *(_QWORD *)(v3 + 824) = 0LL;
      *(_QWORD *)(v3 + 832) = 0LL;
      *(_QWORD *)(v3 + 840) = 0LL;
      *(_QWORD *)(v3 + 848) = 0LL;
      *(_DWORD *)(v3 + 856) = 0;
      if ( !data::ConfigTDPlayTowerData::fromJson(
              (data::ConfigTDPlayTowerData *const)(v3 + 816),
              (const Json::Value *)(v3 + 736)) )
      {
        *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 448, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 448),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          3225);
        v15 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 448),
                (const char (*)[28])"value fromJson fails, key: ");
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 48);
        v16 = (__int64)data::enumValToStr((data::TDPlayTowerType)*(_DWORD *)(v3 + 48));
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
        v18 = std::unordered_map<data::TDPlayTowerType,data::ConfigTDPlayTowerData>::emplace<data::TDPlayTowerType&,data::ConfigTDPlayTowerData&>(
                m,
                (data::TDPlayTowerType *)(v3 + 48),
                (data::ConfigTDPlayTowerData *)(v3 + 816),
                (data::TDPlayTowerType *)(v3 + 48),
                v14);
        if ( !v18.second )
        {
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            3230);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"key duplicate: ");
          *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 48);
          v20 = (__int64)data::enumValToStr((data::TDPlayTowerType)*(_DWORD *)(v3 + 48));
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
    *(_WORD *)(v23 + 4) = -1800;
    if ( !v9 )
    {
      v24 = 0;
      goto LABEL_46;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 128));
  }
  v24 = 1;
LABEL_46:
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
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

// Line 3239: range 000000000D59B5B1-000000000D59B881
int32_t __cdecl data::getMapHashValue(const data::ConfigTDPlayTowerDataMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false,false>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3240 64 8 16 __for_begin:3241 96 8 14 __for_end:3241";
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
  *(std::unordered_map<data::TDPlayTowerType,data::ConfigTDPlayTowerData>::const_iterator *)(v2 + 64) = std::unordered_map<data::TDPlayTowerType,data::ConfigTDPlayTowerData>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<data::TDPlayTowerType,data::ConfigTDPlayTowerData>::const_iterator *)(v2 + 96) = std::unordered_map<data::TDPlayTowerType,data::ConfigTDPlayTowerData>::end(map);
  while ( std::__detail::operator!=<std::pair<data::TDPlayTowerType const,data::ConfigTDPlayTowerData>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<data::TDPlayTowerType const,data::ConfigTDPlayTowerData>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false,false> *const)(v2 + 64));
    key = std::get<0ul,data::TDPlayTowerType const,data::ConfigTDPlayTowerData>(v7);
    val = (std::tuple_element<1,const std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData> >::type *)std::get<1ul,data::TDPlayTowerType const,data::ConfigTDPlayTowerData>(v7);
    if ( *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)key & 7) + 3) >= *(_BYTE *)(((unsigned __int64)key >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(key);
    }
    common::tools::HashUtils::appendHash(*key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigTDPlayTowerData::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<data::TDPlayTowerType const,data::ConfigTDPlayTowerData>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::TDPlayTowerType,data::ConfigTDPlayTowerData>,false,false> *const)(v2 + 64));
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

// Line 3252: range 000000000D59B882-000000000D59C41E
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigCombatMap *m)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // al
  unsigned __int64 v6; // rax
  common::milog::MiLogStream *v7; // r15
  _BOOL4 v8; // r15d
  unsigned __int64 v9; // rax
  const Json::Value *v10; // rax
  data::ConfigCombat *v11; // r8
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigCombat>,false,true>,bool> v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rax
  int v18; // edx
  bool v20; // [rsp+Fh] [rbp-4C1h]
  char v21[1200]; // [rsp+20h] [rbp-4B0h] BYREF

  v2 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1152LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 16 8 cit:3254 64 16 9 <unknown> 96 32 8 key:3257 160 32 9 <unknown> 224 32 9 <unknown> 288"
                        " 32 9 <unknown> 352 32 9 <unknown> 416 40 13 tmp_jval:3253 496 40 13 key_jval:3256 576 40 15 val"
                        "ue_jval:3263 656 432 10 value:3264";
  *(_QWORD *)(v2 + 16) = data::mapFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862722] = -219021312;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959360;
  v4[536862735] = 62194;
  v4[536862736] = -234881024;
  v4[536862737] = -218959118;
  v4[536862739] = -218959360;
  v4[536862740] = 62194;
  v4[536862754] = -202116109;
  v4[536862755] = -202116109;
  Json::Value::Value((Json::Value *)(v2 + 416), jval);
  if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store16();
  Json::Value::begin((Json::Value_0 *const)(v2 + 416));
  while ( 1 )
  {
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
    if ( *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store16();
    Json::Value::end((Json::Value_0 *const)(v2 + 416));
    v5 = Json::ValueIteratorBase::operator!=(
           (const Json::ValueIteratorBase *const)(v2 + 32),
           (const Json::ValueIteratorBase::SelfType *)(v2 + 64));
    *(_WORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -1800;
    if ( !v5 )
      break;
    v6 = ((v2 + 496) >> 3) + 2147450880;
    *(_DWORD *)v6 = 0;
    *(_BYTE *)(v6 + 4) = 0;
    if ( *(char *)(((v2 + 496) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 535) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 23) & 7) >= *(_BYTE *)(((v2 + 535) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 496, 40LL);
    }
    Json::ValueIteratorBase::key((Json::ValueIteratorBase *)(v2 + 496));
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    std::string::basic_string(v2 + 96);
    if ( !fromJson<std::string>((const Json::Value *)(v2 + 496), (std::string *)(v2 + 96)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        3260);
      v7 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 224), (Json::Value_0 *)(v2 + 496));
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, (const std::string *)(v2 + 224));
      std::string::~string((void *)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      v20 = 0;
      v8 = 0;
    }
    else
    {
      v9 = ((v2 + 576) >> 3) + 2147450880;
      *(_DWORD *)v9 = 0;
      *(_BYTE *)(v9 + 4) = 0;
      v10 = Json::ValueIterator::operator*((Json::ValueIterator *const)(v2 + 32));
      Json::Value::Value((Json::Value *)(v2 + 576), v10);
      __asan_unpoison_stack_memory(v2 + 656, 432LL);
      data::ConfigCombat::ConfigCombat((data::ConfigCombat *const)(v2 + 656));
      if ( !data::ConfigCombat::fromJson((data::ConfigCombat *const)(v2 + 656), (const Json::Value *)(v2 + 576)) )
      {
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          3267);
        v12 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, (const std::string *)(v2 + 96));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
        v20 = 0;
        v13 = 0;
      }
      else
      {
        v14 = std::unordered_map<std::string,data::ConfigCombat>::emplace<std::string&,data::ConfigCombat&>(
                m,
                (std::string *)(v2 + 96),
                (data::ConfigCombat *)(v2 + 656),
                (std::string *)(v2 + 96),
                v11);
        if ( !v14.second )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            3272);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, (const std::string *)(v2 + 96));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
          v20 = 0;
          v13 = 0;
        }
        else
        {
          v13 = 1;
        }
      }
      data::ConfigCombat::~ConfigCombat((data::ConfigCombat *const)(v2 + 656));
      Json::Value::~Value((Json::Value_0 *const)(v2 + 576));
      v8 = v13 == 1;
    }
    std::string::~string((void *)(v2 + 96));
    Json::Value::~Value((Json::Value_0 *const)(v2 + 496));
    v16 = ((v2 + 496) >> 3) + 2147450880;
    *(_DWORD *)v16 = -117901064;
    *(_BYTE *)(v16 + 4) = -8;
    *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
    v17 = ((v2 + 576) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    __asan_poison_stack_memory(v2 + 656, 432LL);
    if ( !v8 )
    {
      v18 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v2 + 32));
  }
  v18 = 1;
LABEL_32:
  *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
  if ( v18 == 1 )
    v20 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v2 + 416));
  if ( v21 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8088) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862736) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450936 - (((_DWORD)v4 + 2147450944) & 0xFFFFFFF8) + 88) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1152LL, v21);
  }
  return v20;
};

// Line 3281: range 000000000D59C41F-000000000D59C6C6
int32_t __cdecl data::getMapHashValue(const data::ConfigCombatMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigCombat>,false,true>::reference v7; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ConfigCombat> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ConfigCombat> >::type *val; // [rsp+28h] [rbp-A8h]
  char v10[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3282 64 8 16 __for_begin:3283 96 8 14 __for_end:3283";
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
  *(std::unordered_map<std::string,data::ConfigCombat>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ConfigCombat>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ConfigCombat>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ConfigCombat>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ConfigCombat>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigCombat>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ConfigCombat>,true> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigCombat>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigCombat>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ConfigCombat>(v7);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ConfigCombat> >::type *)std::get<1ul,std::string const,data::ConfigCombat>(v7);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    HashValue = data::ConfigCombat::getHashValue(val);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ConfigCombat>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ConfigCombat>,false,true> *const)(v2 + 64));
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

// Line 3295: range 000000000D59C6C8-000000000D59CCAB
bool __cdecl data::ConfigTDPlay::fromJson(data::ConfigTDPlay *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigTDPlayTowerDataMap *p_tower_datas; // rsi
  const Json::Value *attack_speed__c_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *tower_datas_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigTDPlay::fromJson;
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
    "attackSpeed_C",
    (const std::allocator<char> *)(v2 + 32));
  attack_speed__c_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( attack_speed__c_ptr && !fromJson<float>(attack_speed__c_ptr, &this->attack_speed__c) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3305);
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[35])"fromJson for: attackSpeed_C fails!");
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
      "towerDatas",
      (const std::allocator<char> *)(v2 + 48));
    p_tower_datas = (data::ConfigTDPlayTowerDataMap *)(v2 + 192);
    tower_datas_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( tower_datas_ptr
      && (p_tower_datas = &this->tower_datas, !data::mapFromJson(tower_datas_ptr, &this->tower_datas)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3317);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[32])"fromJson for: towerDatas fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_tower_datas, &this->is_json_loaded);
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

// Line 3325: range 000000000D59CCAC-000000000D59CE30
int32_t __cdecl data::ConfigTDPlay::getHashValue(const data::ConfigTDPlay *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3326";
  *(_QWORD *)(v2 + 16) = data::ConfigTDPlay::getHashValue;
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
  common::tools::HashUtils::appendHash(this->attack_speed__c, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->tower_datas);
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

// Line 3334: range 000000000D59CE32-000000000D59D18C
bool __cdecl data::ConfigSafeTypeReportData::fromJson(
        data::ConfigSafeTypeReportData *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *max_count_ptr; // [rsp+18h] [rbp-E8h]
  char v9[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigSafeTypeReportData::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "maxCount",
    (const std::allocator<char> *)(v2 + 48));
  max_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( max_count_ptr && !fromJson<int>(max_count_ptr, (int *)this) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3344);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[30])"fromJson for: maxCount fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    v6 = ((_BYTE)this + 4) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_store1(&this->is_json_loaded, v6, v7);
    this->is_json_loaded = 1;
    result = 1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
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

// Line 3352: range 000000000D59D18E-000000000D59D2F7
int32_t __cdecl data::ConfigSafeTypeReportData::getHashValue(const data::ConfigSafeTypeReportData *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3353";
  *(_QWORD *)(v2 + 16) = data::ConfigSafeTypeReportData::getHashValue;
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
  common::tools::HashUtils::appendHash(this->max_count, (int32_t *)(v2 + 32));
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

// Line 3360: range 000000000D59D2F8-000000000D59D8DB
bool __cdecl data::ConfigMixinCheckModifierWhiteList::fromJson(
        data::ConfigMixinCheckModifierWhiteList *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::StringList *p_modifier_list; // rsi
  const Json::Value *ability_list_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *modifier_list_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigMixinCheckModifierWhiteList::fromJson;
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
    "abilityList",
    (const std::allocator<char> *)(v2 + 32));
  ability_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ability_list_ptr && !data::vecFromJson(ability_list_ptr, &this->ability_list) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3370);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[33])"fromJson for: abilityList fails!");
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
      "modifierList",
      (const std::allocator<char> *)(v2 + 48));
    p_modifier_list = (data::StringList *)(v2 + 192);
    modifier_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( modifier_list_ptr
      && (p_modifier_list = &this->modifier_list, !data::vecFromJson(modifier_list_ptr, &this->modifier_list)) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3382);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[34])"fromJson for: modifierList fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_modifier_list, &this->is_json_loaded);
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

// Line 3390: range 000000000D59D8DC-000000000D59DA37
int32_t __cdecl data::ConfigMixinCheckModifierWhiteList::getHashValue(
        const data::ConfigMixinCheckModifierWhiteList *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3391";
  *(_QWORD *)(v2 + 16) = data::ConfigMixinCheckModifierWhiteList::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->ability_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->modifier_list);
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

// Line 3399: range 000000000D59DA38-000000000D59E020
bool __cdecl data::ConfigOvergrowEnvironmentLimit::fromJson(
        data::ConfigOvergrowEnvironmentLimit *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *modifier_list_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *cd_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigOvergrowEnvironmentLimit::fromJson;
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
    "modifierList",
    (const std::allocator<char> *)(v2 + 32));
  modifier_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( modifier_list_ptr && !data::vecFromJson(modifier_list_ptr, &this->modifier_list) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3409);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: modifierList fails!");
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
      "cd",
      (const std::allocator<char> *)(v2 + 48));
    cd_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( cd_ptr && !fromJson<float>(cd_ptr, &this->cd) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3421);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[24])"fromJson for: cd fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 28) & 7;
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

// Line 3429: range 000000000D59E022-000000000D59E1A7
int32_t __cdecl data::ConfigOvergrowEnvironmentLimit::getHashValue(
        const data::ConfigOvergrowEnvironmentLimit *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3430";
  *(_QWORD *)(v2 + 16) = data::ConfigOvergrowEnvironmentLimit::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  VecHashValue = data::getVecHashValue(&this->modifier_list);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->cd >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->cd);
  }
  common::tools::HashUtils::appendHash(this->cd, (int32_t *)(v2 + 32));
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

// Line 3438: range 000000000D59E1A8-000000000D59E790
bool __cdecl data::GlobalValueRegister::fromJson(data::GlobalValueRegister *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *key_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *is_vector_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::GlobalValueRegister::fromJson;
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
    off_1A204540,
    (const std::allocator<char> *)(v2 + 32));
  key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( key_ptr && !fromJson<std::string>(key_ptr, &this->key) )
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
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3448);
    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[25])"fromJson for: key fails!");
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
      "isVector",
      (const std::allocator<char> *)(v2 + 48));
    is_vector_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( is_vector_ptr && !fromJson<bool>(is_vector_ptr, &this->is_vector) )
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
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3460);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[30])"fromJson for: isVector fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 33) & 7;
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

// Line 3468: range 000000000D59E792-000000000D59E910
int32_t __cdecl data::GlobalValueRegister::getHashValue(const data::GlobalValueRegister *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:3469";
  *(_QWORD *)(v2 + 16) = data::GlobalValueRegister::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->key, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_vector >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_vector, v2 + 32, &this->is_vector);
  common::tools::HashUtils::appendHash(this->is_vector, (int32_t *)(v2 + 32));
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

// Line 3476: range 000000000D59E911-000000000D59ECC5
bool __cdecl data::arrFromJson(const Json::Value *jval, data::GlobalValueRegisterArray *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // eax
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::GlobalValueRegister *v8; // rdx
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
  *(_QWORD *)(v2 + 8) = "2 48 32 9 <unknown> 112 40 9 elem:3482";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
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
      data::GlobalValueRegister::GlobalValueRegister((data::GlobalValueRegister *const)(v2 + 112));
      if ( !data::GlobalValueRegister::fromJson((data::GlobalValueRegister *const)(v2 + 112), elem_jval) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "arrFromJson",
          3485);
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
        v8 = std::move<data::GlobalValueRegister &>((data::GlobalValueRegister *)(v2 + 112));
        std::vector<data::GlobalValueRegister>::emplace_back<data::GlobalValueRegister>(v, v8, v8);
        v7 = 1;
      }
      data::GlobalValueRegister::~GlobalValueRegister((data::GlobalValueRegister *const)(v2 + 112));
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

// Line 3495: range 000000000D59ECC6-000000000D59EF12
int32_t __cdecl data::getArrHashValue(const data::GlobalValueRegisterArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::GlobalValueRegister*,std::vector<data::GlobalValueRegister> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3496 64 8 16 __for_begin:3497 96 8 14 __for_end:3497";
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
  *(std::vector<data::GlobalValueRegister>::const_iterator *)(v2 + 64) = std::vector<data::GlobalValueRegister>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::GlobalValueRegister>::const_iterator *)(v2 + 96) = std::vector<data::GlobalValueRegister>::end(vec);
  while ( __gnu_cxx::operator!=<data::GlobalValueRegister const*,std::vector<data::GlobalValueRegister>>(
            (const __gnu_cxx::__normal_iterator<const data::GlobalValueRegister*,std::vector<data::GlobalValueRegister> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::GlobalValueRegister*,std::vector<data::GlobalValueRegister> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::GlobalValueRegister const*,std::vector<data::GlobalValueRegister>>::operator*((const __gnu_cxx::__normal_iterator<const data::GlobalValueRegister*,std::vector<data::GlobalValueRegister> > *const)(v2 + 64));
    HashValue = data::GlobalValueRegister::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::GlobalValueRegister const*,std::vector<data::GlobalValueRegister>>::operator++((__gnu_cxx::__normal_iterator<const data::GlobalValueRegister*,std::vector<data::GlobalValueRegister> > *const)(v2 + 64));
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

// Line 3505: range 000000000D59EF13-000000000D59FA80
bool __cdecl data::mapFromJson(const Json::Value *jval, data::AttacktagElementReactionMap *m)
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
  data::ElementReactionType *v12; // r8
  common::milog::MiLogStream *v13; // rax
  int v14; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ElementReactionType>,false,true>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  int v19; // edx
  char v21[720]; // [rsp+20h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 32 4 10 value:3517 48 16 8 cit:3507 80 16 9 <unknown> 112 32 8 key:3510 176 32 9 <unknown> 24"
                        "0 32 9 <unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 40 13 tmp_jval:3506 512 40 13 key_jva"
                        "l:3509 592 40 15 value_jval:3516";
  *(_QWORD *)(v3 + 16) = data::mapFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61956;
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
  v5[536862739] = -218103808;
  v5[536862740] = -202116109;
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
        && (char)((v3 - 96 + 47) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 176, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 176),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "mapFromJson",
        3513);
      v8 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             (common::milog::MiLogStream *const)(v3 + 176),
             (const char (*)[21])"key fromJson fails: ");
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 111) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
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
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( !fromJson<data::ElementReactionType>((const Json::Value *)(v3 + 592), (data::ElementReactionType *)(v3 + 32)) )
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
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "mapFromJson",
          3520);
        v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[28])"value fromJson fails, key: ");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, (const std::string *)(v3 + 112));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v14 = 0;
      }
      else
      {
        v15 = std::unordered_map<std::string,data::ElementReactionType>::emplace<std::string&,data::ElementReactionType&>(
                m,
                (std::string *)(v3 + 112),
                (data::ElementReactionType *)(v3 + 32),
                (std::string *)(v3 + 112),
                v12);
        if ( !v15.second )
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
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "mapFromJson",
            3525);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 368),
                  (const char (*)[16])"key duplicate: ");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, (const std::string *)(v3 + 112));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
          *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
          v2 = 0;
          v14 = 0;
        }
        else
        {
          v14 = 1;
        }
      }
      Json::Value::~Value((Json::Value_0 *const)(v3 + 592));
      v9 = v14 == 1;
    }
    std::string::~string((void *)(v3 + 112));
    Json::Value::~Value((Json::Value_0 *const)(v3 + 512));
    v17 = ((v3 + 512) >> 3) + 2147450880;
    *(_DWORD *)v17 = -117901064;
    *(_BYTE *)(v17 + 4) = -8;
    *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
    v18 = ((v3 + 592) >> 3) + 2147450880;
    *(_DWORD *)v18 = -117901064;
    *(_BYTE *)(v18 + 4) = -8;
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( !v9 )
    {
      v19 = 0;
      goto LABEL_32;
    }
    Json::ValueIterator::operator++((Json::ValueIterator *const)(v3 + 48));
  }
  v19 = 1;
LABEL_32:
  *(_WORD *)(((v3 + 48) >> 3) + 0x7FFF8000) = -1800;
  if ( v19 == 1 )
    v2 = 1;
  Json::Value::~Value((Json::Value_0 *const)(v3 + 432));
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 3534: range 000000000D59FA81-000000000D59FD48
int32_t __cdecl data::getMapHashValue(const data::AttacktagElementReactionMap *map)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  std::__detail::_Node_const_iterator<std::pair<const std::string,data::ElementReactionType>,false,true>::reference v6; // [rsp+18h] [rbp-B8h]
  std::tuple_element<0,std::pair<const std::string,data::ElementReactionType> >::type *key; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<const std::string,data::ElementReactionType> >::type *val; // [rsp+28h] [rbp-A8h]
  char v9[160]; // [rsp+30h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 14 hash_code:3535 64 8 16 __for_begin:3536 96 8 14 __for_end:3536";
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
  *(std::unordered_map<std::string,data::ElementReactionType>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,data::ElementReactionType>::begin(map);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::unordered_map<std::string,data::ElementReactionType>::const_iterator *)(v2 + 96) = std::unordered_map<std::string,data::ElementReactionType>::end(map);
  while ( std::__detail::operator!=<std::pair<std::string const,data::ElementReactionType>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ElementReactionType>,true> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,data::ElementReactionType>,true> *)(v2 + 96)) )
  {
    v6 = std::__detail::_Node_const_iterator<std::pair<std::string const,data::ElementReactionType>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,data::ElementReactionType>,false,true> *const)(v2 + 64));
    key = std::get<0ul,std::string const,data::ElementReactionType>(v6);
    val = (std::tuple_element<1,const std::pair<const std::string,data::ElementReactionType> >::type *)std::get<1ul,std::string const,data::ElementReactionType>(v6);
    common::tools::HashUtils::appendHash(key, (int32_t *)(v2 + 48));
    if ( *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)val & 7) + 3) >= *(_BYTE *)(((unsigned __int64)val >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(val);
    }
    common::tools::HashUtils::appendHash(*val, (int32_t *)(v2 + 48));
    std::__detail::_Node_const_iterator<std::pair<std::string const,data::ElementReactionType>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,data::ElementReactionType>,false,true> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 48);
  result = *(_DWORD *)(v2 + 48);
  if ( v9 == (char *)v2 )
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

// Line 3548: range 000000000D59FD4A-000000000D5A78A2
bool __cdecl data::ConfigGlobalCombat::fromJson(data::ConfigGlobalCombat *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  unsigned __int64 v6; // rax
  void (__fastcall **v7)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64); // rcx
  std::shared_ptr<data::ConfigFireGrassAirflowField> *v9; // rax
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rdx
  data::AttacktagElementReactionMap *p_attacktag_to_elementreaction_dictionary; // rsi
  bool v13; // bl
  char v15; // [rsp+Fh] [rbp-1D21h]
  const Json::Value *hit_data_ptr; // [rsp+20h] [rbp-1D10h]
  const Json::Value *collision_data_ptr; // [rsp+28h] [rbp-1D08h]
  const Json::Value *ai_data_ptr; // [rsp+30h] [rbp-1D00h]
  const Json::Value *move_data_ptr; // [rsp+38h] [rbp-1CF8h]
  const Json::Value *default_avatar_hit_bucket_setting_ptr; // [rsp+40h] [rbp-1CF0h]
  const Json::Value *element_blade_data_ptr; // [rsp+48h] [rbp-1CE8h]
  const Json::Value *fire_grass_airflow_data_ptr; // [rsp+50h] [rbp-1CE0h]
  const Json::Value *miscs_ptr; // [rsp+58h] [rbp-1CD8h]
  const Json::Value *default_abilities_ptr; // [rsp+60h] [rbp-1CD0h]
  const Json::Value *elem_react_damage_ptr; // [rsp+68h] [rbp-1CC8h]
  const Json::Value *elem_amplify_damage_ptr; // [rsp+70h] [rbp-1CC0h]
  const Json::Value *elem_prority_ptr; // [rsp+78h] [rbp-1CB8h]
  const Json::Value *shake_off_ptr; // [rsp+80h] [rbp-1CB0h]
  const Json::Value *element_shield_ptr; // [rsp+88h] [rbp-1CA8h]
  const Json::Value *elite_shield_ptr; // [rsp+90h] [rbp-1CA0h]
  const Json::Value *global_switch_ptr; // [rsp+98h] [rbp-1C98h]
  const Json::Value *lock_target_ptr; // [rsp+A0h] [rbp-1C90h]
  const Json::Value *elem_ui_ptr; // [rsp+A8h] [rbp-1C88h]
  const Json::Value *reject_element_reaction_ptr; // [rsp+B0h] [rbp-1C80h]
  const Json::Value *log_setting_ptr; // [rsp+B8h] [rbp-1C78h]
  const Json::Value *attack_attenuation_ptr; // [rsp+C0h] [rbp-1C70h]
  const Json::Value *gadget_creation_limits_ptr; // [rsp+C8h] [rbp-1C68h]
  const Json::Value *lua_safety_switch_ptr; // [rsp+D0h] [rbp-1C60h]
  const Json::Value *temp_component_budget_ptr; // [rsp+D8h] [rbp-1C58h]
  const Json::Value *global_interaction_ptr; // [rsp+E0h] [rbp-1C50h]
  const Json::Value *lamp_offset_ptr; // [rsp+E8h] [rbp-1C48h]
  const Json::Value *ability_state_trigger_abilities_ptr; // [rsp+F0h] [rbp-1C40h]
  const Json::Value *dither_ptr; // [rsp+F8h] [rbp-1C38h]
  const Json::Value *element_decrate_group_ptr; // [rsp+100h] [rbp-1C30h]
  const Json::Value *slice_frame_watch_ptr; // [rsp+108h] [rbp-1C28h]
  const Json::Value *ik_ptr; // [rsp+110h] [rbp-1C20h]
  const Json::Value *avatar_equip_size_datas_ptr; // [rsp+118h] [rbp-1C18h]
  const Json::Value *manekin_equip_size_datas_ptr; // [rsp+120h] [rbp-1C10h]
  const Json::Value *big_world_environment_damage_clamp_ptr; // [rsp+128h] [rbp-1C08h]
  const Json::Value *td_play_ptr; // [rsp+130h] [rbp-1C00h]
  const Json::Value *game_anim_safe_type_ptr; // [rsp+138h] [rbp-1BF8h]
  const Json::Value *element_convert_to_charge_bar_value_mixin_item_group_ptr; // [rsp+140h] [rbp-1BF0h]
  const Json::Value *charge_bar_mixin_global_value_key_ptr; // [rsp+148h] [rbp-1BE8h]
  const Json::Value *element_reaction_coefficients_ptr; // [rsp+150h] [rbp-1BE0h]
  const Json::Value *battle_fervor_formula_ptr; // [rsp+158h] [rbp-1BD8h]
  const Json::Value *combat_template_ptr; // [rsp+160h] [rbp-1BD0h]
  const Json::Value *combat_anti_cheat_attack_tag_white_list_ptr; // [rsp+168h] [rbp-1BC8h]
  const Json::Value *mixin_check_modifier_white_list_ptr; // [rsp+170h] [rbp-1BC0h]
  const Json::Value *footprint_zones_ptr; // [rsp+178h] [rbp-1BB8h]
  const Json::Value *mushroom_config_idlist_ptr; // [rsp+180h] [rbp-1BB0h]
  const Json::Value *overgrow_environment_limit_ptr; // [rsp+188h] [rbp-1BA8h]
  const Json::Value *global_value_list_ptr; // [rsp+190h] [rbp-1BA0h]
  const Json::Value *attacktag_to_elementreaction_dictionary_ptr; // [rsp+198h] [rbp-1B98h]
  char v65[7056]; // [rsp+1A0h] [rbp-1B90h] BYREF

  v2 = (unsigned __int64)v65;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(7008LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "146 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 1 9 <unknown> 752 1 9 <unknown> 768 1 9 <unknown> 784 1 9 <unknown> 8"
                        "00 16 9 <unknown> 832 16 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 10"
                        "56 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown"
                        "> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unk"
                        "nown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 "
                        "<unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 3"
                        "2 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 25"
                        "92 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown"
                        "> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unk"
                        "nown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 "
                        "<unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 3"
                        "2 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 41"
                        "28 32 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unknown> 4384 32 9 <unknown"
                        "> 4448 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 <unknown> 4704 32 9 <unk"
                        "nown> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 32 9 <unknown> 5024 32 9 "
                        "<unknown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 5280 32 9 <unknown> 5344 3"
                        "2 9 <unknown> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown> 5600 32 9 <unknown> 56"
                        "64 32 9 <unknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unknown> 5920 32 9 <unknown"
                        "> 5984 32 9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 <unknown> 6240 32 9 <unk"
                        "nown> 6304 32 9 <unknown> 6368 32 9 <unknown> 6432 32 9 <unknown> 6496 32 9 <unknown> 6560 32 9 "
                        "<unknown> 6624 32 9 <unknown> 6688 32 9 <unknown> 6752 32 9 <unknown> 6816 32 9 <unknown> 6880 3"
                        "2 9 <unknown> 6944 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalCombat::fromJson;
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
  v4[536862736] = -234753535;
  v4[536862737] = -234753535;
  v4[536862738] = -234753535;
  v4[536862739] = -234753535;
  v4[536862740] = -234753535;
  v4[536862741] = -234753535;
  v4[536862742] = -234753535;
  v4[536862743] = -234753535;
  v4[536862744] = -234753535;
  v4[536862745] = -219021312;
  v4[536862746] = -219021312;
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
  v4[536862790] = -218959118;
  v4[536862792] = -218959118;
  v4[536862794] = -218959118;
  v4[536862796] = -218959118;
  v4[536862798] = -218959118;
  v4[536862800] = -218959118;
  v4[536862802] = -218959118;
  v4[536862804] = -218959118;
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -218959118;
  v4[536862826] = -218959118;
  v4[536862828] = -218959118;
  v4[536862830] = -218959118;
  v4[536862832] = -218959118;
  v4[536862834] = -218959118;
  v4[536862836] = -218959118;
  v4[536862838] = -218959118;
  v4[536862840] = -218959118;
  v4[536862842] = -218959118;
  v4[536862844] = -218959118;
  v4[536862846] = -218959118;
  v4[536862848] = -218959118;
  v4[536862850] = -218959118;
  v4[536862852] = -218959118;
  v4[536862854] = -218959118;
  v4[536862856] = -218959118;
  v4[536862858] = -218959118;
  v4[536862860] = -218959118;
  v4[536862862] = -218959118;
  v4[536862864] = -218959118;
  v4[536862866] = -218959118;
  v4[536862868] = -218959118;
  v4[536862870] = -218959118;
  v4[536862872] = -218959118;
  v4[536862874] = -218959118;
  v4[536862876] = -218959118;
  v4[536862878] = -218959118;
  v4[536862880] = -218959118;
  v4[536862882] = -218959118;
  v4[536862884] = -218959118;
  v4[536862886] = -218959118;
  v4[536862888] = -218959118;
  v4[536862890] = -218959118;
  v4[536862892] = -218959118;
  v4[536862894] = -218959118;
  v4[536862896] = -218959118;
  v4[536862898] = -218959118;
  v4[536862900] = -218959118;
  v4[536862902] = -218959118;
  v4[536862904] = -218959118;
  v4[536862906] = -218959118;
  v4[536862908] = -218959118;
  v4[536862910] = -218959118;
  v4[536862912] = -218959118;
  v4[536862914] = -218959118;
  v4[536862916] = -218959118;
  v4[536862918] = -218959118;
  v4[536862920] = -218959118;
  v4[536862922] = -218959118;
  v4[536862924] = -218959118;
  v4[536862926] = -218959118;
  v4[536862928] = -218959118;
  v4[536862930] = -218959118;
  v4[536862932] = -218959118;
  v4[536862934] = -218959118;
  v4[536862936] = -218959118;
  v4[536862938] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 864),
    "hitData",
    (const std::allocator<char> *)(v2 + 32));
  hit_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
  std::string::~string((void *)(v2 + 864));
  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( hit_data_ptr && !data::ConfigGlobalHit::fromJson(&this->hit_data, hit_data_ptr) )
  {
    *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 928, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 928),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/json_data_auto/ConfigGlobalCombat.cpp",
      "fromJson",
      3558);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 928),
      (const char (*)[29])"fromJson for: hitData fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 992),
      "collisionData",
      (const std::allocator<char> *)(v2 + 48));
    collision_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
    std::string::~string((void *)(v2 + 992));
    *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( collision_data_ptr && !data::ConfigGlobalCollision::fromJson(&this->collision_data, collision_data_ptr) )
    {
      *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/json_data_auto/ConfigGlobalCombat.cpp",
        "fromJson",
        3570);
      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
        (common::milog::MiLogStream *const)(v2 + 1056),
        (const char (*)[35])"fromJson for: collisionData fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 1120),
        "aiData",
        (const std::allocator<char> *)(v2 + 64));
      ai_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
      std::string::~string((void *)(v2 + 1120));
      *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( ai_data_ptr && !data::ConfigGlobalAI::fromJson(&this->ai_data, ai_data_ptr) )
      {
        *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigGlobalCombat.cpp",
          "fromJson",
          3582);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
          (common::milog::MiLogStream *const)(v2 + 1184),
          (const char (*)[28])"fromJson for: aiData fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1248),
          "moveData",
          (const std::allocator<char> *)(v2 + 80));
        move_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
        std::string::~string((void *)(v2 + 1248));
        *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( move_data_ptr && !data::ConfigGlobalMove::fromJson(&this->move_data, move_data_ptr) )
        {
          *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1312) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1343) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1312, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1312),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigGlobalCombat.cpp",
            "fromJson",
            3594);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 1312),
            (const char (*)[30])"fromJson for: moveData fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1376),
            "defaultAvatarHitBucketSetting",
            (const std::allocator<char> *)(v2 + 96));
          default_avatar_hit_bucket_setting_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
          std::string::~string((void *)(v2 + 1376));
          *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( default_avatar_hit_bucket_setting_ptr
            && !data::ConfigAvatarHitBucketSetting::fromJson(
                  &this->default_avatar_hit_bucket_setting,
                  default_avatar_hit_bucket_setting_ptr) )
          {
            *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 1440) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1471) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 1440, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 1440),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ConfigGlobalCombat.cpp",
              "fromJson",
              3606);
            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              (common::milog::MiLogStream *const)(v2 + 1440),
              (const char (*)[51])"fromJson for: defaultAvatarHitBucketSetting fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1504),
              "elementBladeData",
              (const std::allocator<char> *)(v2 + 112));
            element_blade_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
            std::string::~string((void *)(v2 + 1504));
            *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( element_blade_data_ptr && !data::mapFromJson(element_blade_data_ptr, &this->element_blade_data) )
            {
              *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 1568) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1599) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 1568, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 1568),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                "fromJson",
                3618);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 1568),
                (const char (*)[38])"fromJson for: elementBladeData fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1632),
                "fireGrassAirflowData",
                (const std::allocator<char> *)(v2 + 128));
              fire_grass_airflow_data_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
              std::string::~string((void *)(v2 + 1632));
              *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( fire_grass_airflow_data_ptr )
              {
                *(_WORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
                v6 = (unsigned __int64)std::__shared_ptr_access<data::ConfigFireGrassAirflowFieldFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFireGrassAirflowFieldFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigFireGrassAirflowFieldFactory::instance_ptr);
                if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
                  v6 = __asan_report_load8(v6);
                v7 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v6;
                if ( *(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
                  v6 = __asan_report_load8(*(_QWORD *)v6);
                v8 = *v7;
                if ( *(_WORD *)(((v2 + 832) >> 3) + 0x7FFF8000) )
                  v6 = __asan_report_store16();
                v8(v2 + 832, v6);
                v9 = std::shared_ptr<data::ConfigFireGrassAirflowField>::operator=(
                       &this->fire_grass_airflow_data,
                       (std::shared_ptr<data::ConfigFireGrassAirflowField> *)(v2 + 832));
                if ( std::operator==<data::ConfigFireGrassAirflowField>(v9, 0LL) )
                  goto LABEL_50;
                v10 = (unsigned __int64)std::__shared_ptr_access<data::ConfigFireGrassAirflowField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFireGrassAirflowField,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->fire_grass_airflow_data);
                if ( *(_BYTE *)((v10 >> 3) + 0x7FFF8000) )
                  v10 = __asan_report_load8(v10);
                v11 = *(_QWORD *)v10 + 48LL;
                if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
                  v10 = __asan_report_load8(*(_QWORD *)v10 + 48LL);
                if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64, const Json::Value *))v11)(
                       v10,
                       fire_grass_airflow_data_ptr) != 1 )
LABEL_50:
                  v15 = 1;
                else
                  v15 = 0;
                std::shared_ptr<data::ConfigFireGrassAirflowField>::~shared_ptr((std::shared_ptr<data::ConfigFireGrassAirflowField> *const)(v2 + 832));
                *(_WORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -1800;
                if ( v15 )
                {
                  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1696) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1727) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1696, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1696),
                    &common::milog::MiLogDefault::default_log_obj_,
                    1u,
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    3632);
                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)(v2 + 1696),
                    (const char (*)[42])"fromJson for: fireGrassAirflowData fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                  *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                }
              }
              else
              {
                *(_WORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                if ( *(_WORD *)(((v2 + 800) >> 3) + 0x7FFF8000) )
                  __asan_report_store16();
                common::tools::perf::make_shared<data::ConfigFireGrassAirflowField>();
                std::shared_ptr<data::ConfigFireGrassAirflowField>::operator=(
                  &this->fire_grass_airflow_data,
                  (std::shared_ptr<data::ConfigFireGrassAirflowField> *)(v2 + 800));
                std::shared_ptr<data::ConfigFireGrassAirflowField>::~shared_ptr((std::shared_ptr<data::ConfigFireGrassAirflowField> *const)(v2 + 800));
                *(_WORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -1800;
              }
              *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1760),
                "miscs",
                (const std::allocator<char> *)(v2 + 144));
              miscs_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
              std::string::~string((void *)(v2 + 1760));
              *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( miscs_ptr && !data::ConfigGloablMiscs::fromJson(&this->miscs, miscs_ptr) )
              {
                *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1824) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1855) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1824, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1824),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                  "fromJson",
                  3643);
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  (common::milog::MiLogStream *const)(v2 + 1824),
                  (const char (*)[27])"fromJson for: miscs fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1888),
                  "defaultAbilities",
                  (const std::allocator<char> *)(v2 + 160));
                default_abilities_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                std::string::~string((void *)(v2 + 1888));
                *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( default_abilities_ptr
                  && !data::ConfigDefaultAbilities::fromJson(&this->default_abilities, default_abilities_ptr) )
                {
                  *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1952) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 1983) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1952, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1952),
                    &common::milog::MiLogDefault::default_log_obj_,
                    3u,
                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                    "fromJson",
                    3655);
                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                    (common::milog::MiLogStream *const)(v2 + 1952),
                    (const char (*)[38])"fromJson for: defaultAbilities fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 2016),
                    "elemReactDamage",
                    (const std::allocator<char> *)(v2 + 176));
                  elem_react_damage_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                  std::string::~string((void *)(v2 + 2016));
                  *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( elem_react_damage_ptr && !data::mapFromJson(elem_react_damage_ptr, &this->elem_react_damage) )
                  {
                    *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 2080) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2111) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 2080, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 2080),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                      "fromJson",
                      3667);
                    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                      (common::milog::MiLogStream *const)(v2 + 2080),
                      (const char (*)[37])"fromJson for: elemReactDamage fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 2144),
                      "elemAmplifyDamage",
                      (const std::allocator<char> *)(v2 + 192));
                    elem_amplify_damage_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                    std::string::~string((void *)(v2 + 2144));
                    *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( elem_amplify_damage_ptr
                      && !data::mapFromJson(elem_amplify_damage_ptr, &this->elem_amplify_damage) )
                    {
                      *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 2208) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2239) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 2208, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 2208),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                        "fromJson",
                        3679);
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        (common::milog::MiLogStream *const)(v2 + 2208),
                        (const char (*)[39])"fromJson for: elemAmplifyDamage fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2272),
                        "elemPrority",
                        (const std::allocator<char> *)(v2 + 208));
                      elem_prority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2272));
                      std::string::~string((void *)(v2 + 2272));
                      *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( elem_prority_ptr && !data::arrFromJson(elem_prority_ptr, &this->elem_prority) )
                      {
                        *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 2336) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2367) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 2336, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 2336),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                          "fromJson",
                          3691);
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v2 + 2336),
                          (const char (*)[33])"fromJson for: elemPrority fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2400),
                          "shakeOff",
                          (const std::allocator<char> *)(v2 + 224));
                        shake_off_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2400));
                        std::string::~string((void *)(v2 + 2400));
                        *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( shake_off_ptr && !data::ConfigGlobalShakeOff::fromJson(&this->shake_off, shake_off_ptr) )
                        {
                          *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 2464) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2495) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 2464, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 2464),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                            "fromJson",
                            3703);
                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            (common::milog::MiLogStream *const)(v2 + 2464),
                            (const char (*)[30])"fromJson for: shakeOff fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2528),
                            "elementShield",
                            (const std::allocator<char> *)(v2 + 240));
                          element_shield_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2528));
                          std::string::~string((void *)(v2 + 2528));
                          *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( element_shield_ptr
                            && !data::ConfigElementShield::fromJson(&this->element_shield, element_shield_ptr) )
                          {
                            *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2592) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2623) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2592, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2592),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                              "fromJson",
                              3715);
                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                              (common::milog::MiLogStream *const)(v2 + 2592),
                              (const char (*)[35])"fromJson for: elementShield fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2656),
                              "eliteShield",
                              (const std::allocator<char> *)(v2 + 256));
                            elite_shield_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2656));
                            std::string::~string((void *)(v2 + 2656));
                            *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( elite_shield_ptr
                              && !data::ConfigEliteShield::fromJson(&this->elite_shield, elite_shield_ptr) )
                            {
                              *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2720) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 2751) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2720, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2720),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                "fromJson",
                                3727);
                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                (common::milog::MiLogStream *const)(v2 + 2720),
                                (const char (*)[33])"fromJson for: eliteShield fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2784),
                                "globalSwitch",
                                (const std::allocator<char> *)(v2 + 272));
                              global_switch_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2784));
                              std::string::~string((void *)(v2 + 2784));
                              *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( global_switch_ptr
                                && !data::ConfigGlobalSwitch::fromJson(&this->global_switch, global_switch_ptr) )
                              {
                                *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2848) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2848, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2848),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                  "fromJson",
                                  3739);
                                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2848),
                                  (const char (*)[34])"fromJson for: globalSwitch fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2912),
                                  "lockTarget",
                                  (const std::allocator<char> *)(v2 + 288));
                                lock_target_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2912));
                                std::string::~string((void *)(v2 + 2912));
                                *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( lock_target_ptr
                                  && !data::ConfigGlobalLockTarget::fromJson(&this->lock_target, lock_target_ptr) )
                                {
                                  *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2976, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2976),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                    "fromJson",
                                    3751);
                                  common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2976),
                                    (const char (*)[32])"fromJson for: lockTarget fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 3040),
                                    "elemUI",
                                    (const std::allocator<char> *)(v2 + 304));
                                  elem_ui_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3040));
                                  std::string::~string((void *)(v2 + 3040));
                                  *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( elem_ui_ptr && !data::ConfigElementUI::fromJson(&this->elem_ui, elem_ui_ptr) )
                                  {
                                    *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 3104, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 3104),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                      "fromJson",
                                      3763);
                                    common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                      (common::milog::MiLogStream *const)(v2 + 3104),
                                      (const char (*)[28])"fromJson for: elemUI fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 3168),
                                      "rejectElementReaction",
                                      (const std::allocator<char> *)(v2 + 320));
                                    reject_element_reaction_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3168));
                                    std::string::~string((void *)(v2 + 3168));
                                    *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( reject_element_reaction_ptr
                                      && !data::mapFromJson(reject_element_reaction_ptr, &this->reject_element_reaction) )
                                    {
                                      *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 3232, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 3232),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                        "fromJson",
                                        3775);
                                      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                        (common::milog::MiLogStream *const)(v2 + 3232),
                                        (const char (*)[43])"fromJson for: rejectElementReaction fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3296),
                                        "logSetting",
                                        (const std::allocator<char> *)(v2 + 336));
                                      log_setting_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3296));
                                      std::string::~string((void *)(v2 + 3296));
                                      *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( log_setting_ptr
                                        && !data::ConfigLogSetting::fromJson(&this->log_setting, log_setting_ptr) )
                                      {
                                        *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3360, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3360),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                          "fromJson",
                                          3787);
                                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3360),
                                          (const char (*)[32])"fromJson for: logSetting fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3424),
                                          "attackAttenuation",
                                          (const std::allocator<char> *)(v2 + 352));
                                        attack_attenuation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3424));
                                        std::string::~string((void *)(v2 + 3424));
                                        *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( attack_attenuation_ptr
                                          && !data::mapFromJson(attack_attenuation_ptr, &this->attack_attenuation) )
                                        {
                                          *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3488, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3488),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                            "fromJson",
                                            3799);
                                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3488),
                                            (const char (*)[39])"fromJson for: attackAttenuation fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3552),
                                            "gadgetCreationLimits",
                                            (const std::allocator<char> *)(v2 + 368));
                                          gadget_creation_limits_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 3552));
                                          std::string::~string((void *)(v2 + 3552));
                                          *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( gadget_creation_limits_ptr
                                            && !data::vecFromJson(
                                                  gadget_creation_limits_ptr,
                                                  &this->gadget_creation_limits) )
                                          {
                                            *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3616) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3616, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3616),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                              "fromJson",
                                              3811);
                                            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3616),
                                              (const char (*)[42])"fromJson for: gadgetCreationLimits fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3616));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3680),
                                              "luaSafetySwitch",
                                              (const std::allocator<char> *)(v2 + 384));
                                            lua_safety_switch_ptr = jsonValueFind(
                                                                      jval,
                                                                      (const std::string *)(v2 + 3680));
                                            std::string::~string((void *)(v2 + 3680));
                                            *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( lua_safety_switch_ptr
                                              && !data::ConfigLuaSafetyCheckSwitch::fromJson(
                                                    &this->lua_safety_switch,
                                                    lua_safety_switch_ptr) )
                                            {
                                              *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3744) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3744, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3744),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                "fromJson",
                                                3823);
                                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3744),
                                                (const char (*)[37])"fromJson for: luaSafetySwitch fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3744));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3808),
                                                "tempComponentBudget",
                                                (const std::allocator<char> *)(v2 + 400));
                                              temp_component_budget_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 3808));
                                              std::string::~string((void *)(v2 + 3808));
                                              *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( temp_component_budget_ptr
                                                && !data::mapFromJson(
                                                      temp_component_budget_ptr,
                                                      &this->temp_component_budget) )
                                              {
                                                *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3872) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3872, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3872),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                  "fromJson",
                                                  3835);
                                                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3872),
                                                  (const char (*)[41])"fromJson for: tempComponentBudget fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3872));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 416);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3936),
                                                  "globalInteraction",
                                                  (const std::allocator<char> *)(v2 + 416));
                                                global_interaction_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 3936));
                                                std::string::~string((void *)(v2 + 3936));
                                                *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 416);
                                                *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                if ( global_interaction_ptr
                                                  && !data::ConfigGlobalInteraction::fromJson(
                                                        &this->global_interaction,
                                                        global_interaction_ptr) )
                                                {
                                                  *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 4000) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4031) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 4000, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 4000),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                    "fromJson",
                                                    3847);
                                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 4000),
                                                    (const char (*)[39])"fromJson for: globalInteraction fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4000));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 432);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 4064),
                                                    "lampOffset",
                                                    (const std::allocator<char> *)(v2 + 432));
                                                  lamp_offset_ptr = jsonValueFind(
                                                                      jval,
                                                                      (const std::string *)(v2 + 4064));
                                                  std::string::~string((void *)(v2 + 4064));
                                                  *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 432);
                                                  *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                  if ( lamp_offset_ptr
                                                    && !data::vecFromJson(lamp_offset_ptr, &this->lamp_offset) )
                                                  {
                                                    *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 4128) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 4159) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4159) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 4128, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 4128),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                      "fromJson",
                                                      3859);
                                                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 4128),
                                                      (const char (*)[32])"fromJson for: lampOffset fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4128));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 448);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 4192),
                                                      "abilityStateTriggerAbilities",
                                                      (const std::allocator<char> *)(v2 + 448));
                                                    ability_state_trigger_abilities_ptr = jsonValueFind(
                                                                                            jval,
                                                                                            (const std::string *)(v2 + 4192));
                                                    std::string::~string((void *)(v2 + 4192));
                                                    *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 448);
                                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                    if ( ability_state_trigger_abilities_ptr
                                                      && !data::mapFromJson(
                                                            ability_state_trigger_abilities_ptr,
                                                            &this->ability_state_trigger_abilities) )
                                                    {
                                                      *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4256) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4287) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4287) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4256, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4256),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                        "fromJson",
                                                        3871);
                                                      common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4256),
                                                        (const char (*)[50])"fromJson for: abilityStateTriggerAbilities fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4256));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 464);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4320),
                                                        "dither",
                                                        (const std::allocator<char> *)(v2 + 464));
                                                      dither_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4320));
                                                      std::string::~string((void *)(v2 + 4320));
                                                      *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 464);
                                                      *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                      if ( dither_ptr
                                                        && !data::ConfigGlobalDither::fromJson(
                                                              &this->dither,
                                                              dither_ptr) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4384) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4415) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4415) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4384, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4384),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                          "fromJson",
                                                          3883);
                                                        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4384),
                                                          (const char (*)[28])"fromJson for: dither fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4384));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 480);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4448),
                                                          "elementDecrateGroup",
                                                          (const std::allocator<char> *)(v2 + 480));
                                                        element_decrate_group_ptr = jsonValueFind(
                                                                                      jval,
                                                                                      (const std::string *)(v2 + 4448));
                                                        std::string::~string((void *)(v2 + 4448));
                                                        *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 480);
                                                        *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                        if ( element_decrate_group_ptr
                                                          && !data::mapFromJson(
                                                                element_decrate_group_ptr,
                                                                &this->element_decrate_group) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4512) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4543) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4512, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4512),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                            "fromJson",
                                                            3895);
                                                          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4512),
                                                            (const char (*)[41])"fromJson for: elementDecrateGroup fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4512));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 496);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4576),
                                                            "sliceFrameWatch",
                                                            (const std::allocator<char> *)(v2 + 496));
                                                          slice_frame_watch_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 4576));
                                                          std::string::~string((void *)(v2 + 4576));
                                                          *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 496);
                                                          *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                          if ( slice_frame_watch_ptr
                                                            && !data::ConfigSliceFrameWatch::fromJson(
                                                                  &this->slice_frame_watch,
                                                                  slice_frame_watch_ptr) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4640) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4640, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4640),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                              "fromJson",
                                                              3907);
                                                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4640),
                                                              (const char (*)[37])"fromJson for: sliceFrameWatch fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4640));
                                                            v5 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 512);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4704),
                                                              "ik",
                                                              (const std::allocator<char> *)(v2 + 512));
                                                            ik_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 4704));
                                                            std::string::~string((void *)(v2 + 4704));
                                                            *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 512);
                                                            *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                            if ( ik_ptr && !data::ConfigIK::fromJson(&this->ik, ik_ptr) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4768) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4768, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4768),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                "fromJson",
                                                                3919);
                                                              common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4768),
                                                                (const char (*)[24])"fromJson for: ik fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4768));
                                                              v5 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 528);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4832),
                                                                "avatarEquipSizeDatas",
                                                                (const std::allocator<char> *)(v2 + 528));
                                                              avatar_equip_size_datas_ptr = jsonValueFind(
                                                                                              jval,
                                                                                              (const std::string *)(v2 + 4832));
                                                              std::string::~string((void *)(v2 + 4832));
                                                              *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 528);
                                                              *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                              if ( avatar_equip_size_datas_ptr
                                                                && !data::mapFromJson(
                                                                      avatar_equip_size_datas_ptr,
                                                                      &this->avatar_equip_size_datas) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4896) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4896, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4896),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                  "fromJson",
                                                                  3931);
                                                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4896),
                                                                  (const char (*)[42])"fromJson for: avatarEquipSizeDatas fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4896));
                                                                v5 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 544);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4960),
                                                                  "manekinEquipSizeDatas",
                                                                  (const std::allocator<char> *)(v2 + 544));
                                                                manekin_equip_size_datas_ptr = jsonValueFind(
                                                                                                 jval,
                                                                                                 (const std::string *)(v2 + 4960));
                                                                std::string::~string((void *)(v2 + 4960));
                                                                *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 544);
                                                                *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                if ( manekin_equip_size_datas_ptr
                                                                  && !data::mapFromJson(
                                                                        manekin_equip_size_datas_ptr,
                                                                        &this->manekin_equip_size_datas) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 5024) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 5024, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 5024),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                    "fromJson",
                                                                    3943);
                                                                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 5024),
                                                                    (const char (*)[43])"fromJson for: manekinEquipSizeDatas fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5024));
                                                                  v5 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 560);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 5088),
                                                                    "bigWorldEnvironmentDamageClamp",
                                                                    (const std::allocator<char> *)(v2 + 560));
                                                                  big_world_environment_damage_clamp_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5088));
                                                                  std::string::~string((void *)(v2 + 5088));
                                                                  *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 560);
                                                                  *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( big_world_environment_damage_clamp_ptr
                                                                    && !data::ConfigBigWorldEnvironmentDamageClamp::fromJson(
                                                                          &this->big_world_environment_damage_clamp,
                                                                          big_world_environment_damage_clamp_ptr) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 5152) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 5183) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5183) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 5152, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 5152),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                      "fromJson",
                                                                      3955);
                                                                    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 5152),
                                                                      (const char (*)[52])"fromJson for: bigWorldEnvironm"
                                                                                          "entDamageClamp fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5152));
                                                                    v5 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 576);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 5216),
                                                                      "tdPlay",
                                                                      (const std::allocator<char> *)(v2 + 576));
                                                                    td_play_ptr = jsonValueFind(
                                                                                    jval,
                                                                                    (const std::string *)(v2 + 5216));
                                                                    std::string::~string((void *)(v2 + 5216));
                                                                    *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 576);
                                                                    *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( td_play_ptr
                                                                      && !data::ConfigTDPlay::fromJson(
                                                                            &this->td_play,
                                                                            td_play_ptr) )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5280) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5311) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 5311) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5280, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5280),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        3u,
                                                                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                        "fromJson",
                                                                        3967);
                                                                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5280),
                                                                        (const char (*)[28])"fromJson for: tdPlay fails!");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5280));
                                                                      v5 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 592);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5344),
                                                                        "gameAnimSafeType",
                                                                        (const std::allocator<char> *)(v2 + 592));
                                                                      game_anim_safe_type_ptr = jsonValueFind(
                                                                                                  jval,
                                                                                                  (const std::string *)(v2 + 5344));
                                                                      std::string::~string((void *)(v2 + 5344));
                                                                      *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 592);
                                                                      *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( game_anim_safe_type_ptr
                                                                        && !data::ConfigSafeTypeReportData::fromJson(
                                                                              &this->game_anim_safe_type,
                                                                              game_anim_safe_type_ptr) )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 5408) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 5439) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5439) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 5408, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 5408),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          3u,
                                                                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                          "fromJson",
                                                                          3979);
                                                                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5408),
                                                                          (const char (*)[38])"fromJson for: gameAnimSafeType fails!");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5408));
                                                                        v5 = 0;
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = 0;
                                                                        *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 608);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 5472),
                                                                          "elementConvertToChargeBarValueMixinItemGroup",
                                                                          (const std::allocator<char> *)(v2 + 608));
                                                                        element_convert_to_charge_bar_value_mixin_item_group_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5472));
                                                                        std::string::~string((void *)(v2 + 5472));
                                                                        *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 608);
                                                                        *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( element_convert_to_charge_bar_value_mixin_item_group_ptr
                                                                          && !data::mapFromJson(
                                                                                element_convert_to_charge_bar_value_mixin_item_group_ptr,
                                                                                &this->element_convert_to_charge_bar_value_mixin_item_group) )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 5536) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 5567) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 5567) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 5536, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 5536),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            3u,
                                                                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                            "fromJson",
                                                                            3991);
                                                                          common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5536),
                                                                            (const char (*)[66])"fromJson for: elementCon"
                                                                                                "vertToChargeBarValueMixi"
                                                                                                "nItemGroup fails!");
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5536));
                                                                          v5 = 0;
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = 0;
                                                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                                          std::allocator<char>::allocator(v2 + 624);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            (std::string *const)(v2 + 5600),
                                                                            "chargeBarMixinGlobalValueKey",
                                                                            (const std::allocator<char> *)(v2 + 624));
                                                                          charge_bar_mixin_global_value_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5600));
                                                                          std::string::~string((void *)(v2 + 5600));
                                                                          *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = -117901064;
                                                                          std::allocator<char>::~allocator(v2 + 624);
                                                                          *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                          if ( charge_bar_mixin_global_value_key_ptr
                                                                            && !fromJson<std::string>(
                                                                                  charge_bar_mixin_global_value_key_ptr,
                                                                                  &this->charge_bar_mixin_global_value_key) )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5664) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 5664) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 5695) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5695) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 5664, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 5664),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              3u,
                                                                              "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                              "fromJson",
                                                                              4003);
                                                                            common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5664),
                                                                              (const char (*)[50])"fromJson for: chargeBa"
                                                                                                  "rMixinGlobalValueKey fails!");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5664));
                                                                            v5 = 0;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = 0;
                                                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                                            std::allocator<char>::allocator(v2 + 640);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              (std::string *const)(v2 + 5728),
                                                                              "elementReactionCoefficients",
                                                                              (const std::allocator<char> *)(v2 + 640));
                                                                            element_reaction_coefficients_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5728));
                                                                            std::string::~string((void *)(v2 + 5728));
                                                                            *(_DWORD *)(((v2 + 5728) >> 3) + 0x7FFF8000) = -117901064;
                                                                            std::allocator<char>::~allocator(v2 + 640);
                                                                            *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                                            if ( element_reaction_coefficients_ptr
                                                                              && !data::ConfigElementReactionCoefficients::fromJson(
                                                                                    &this->element_reaction_coefficients,
                                                                                    element_reaction_coefficients_ptr) )
                                                                            {
                                                                              *(_DWORD *)(((v2 + 5792) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v2 + 5792) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v2 + 5823) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 5823) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v2 + 5792, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v2 + 5792),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                3u,
                                                                                "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                "fromJson",
                                                                                4015);
                                                                              common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                                                (common::milog::MiLogStream *const)(v2 + 5792),
                                                                                (const char (*)[49])"fromJson for: elementReactionCoefficients fails!");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5792));
                                                                              v5 = 0;
                                                                            }
                                                                            else
                                                                            {
                                                                              *(_DWORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = 0;
                                                                              *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                                              std::allocator<char>::allocator(v2 + 656);
                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                (std::string *const)(v2 + 5856),
                                                                                "battleFervorFormula",
                                                                                (const std::allocator<char> *)(v2 + 656));
                                                                              battle_fervor_formula_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5856));
                                                                              std::string::~string((void *)(v2 + 5856));
                                                                              *(_DWORD *)(((v2 + 5856) >> 3) + 0x7FFF8000) = -117901064;
                                                                              std::allocator<char>::~allocator(v2 + 656);
                                                                              *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                                              if ( battle_fervor_formula_ptr
                                                                                && !data::ConfigBattleFervorFormula::fromJson(
                                                                                      &this->battle_fervor_formula,
                                                                                      battle_fervor_formula_ptr) )
                                                                              {
                                                                                *(_DWORD *)(((v2 + 5920) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                if ( *(char *)(((v2 + 5920) >> 3)
                                                                                             + 0x7FFF8000) < 0
                                                                                  || *(_BYTE *)(((v2 + 5951) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 5951) >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_store_n(v2 + 5920, 32LL);
                                                                                }
                                                                                common::milog::MiLogStream::create(
                                                                                  (common::milog::MiLogStream *)(v2 + 5920),
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  3u,
                                                                                  "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                  "fromJson",
                                                                                  4027);
                                                                                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                                                  (common::milog::MiLogStream *const)(v2 + 5920),
                                                                                  (const char (*)[41])"fromJson for: battleFervorFormula fails!");
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5920));
                                                                                v5 = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)(((v2 + 5984) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 672);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 5984),
                                                                                  "combatTemplate",
                                                                                  (const std::allocator<char> *)(v2 + 672));
                                                                                combat_template_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5984));
                                                                                std::string::~string((void *)(v2 + 5984));
                                                                                *(_DWORD *)(((v2 + 5984) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 672);
                                                                                *(_BYTE *)(((v2 + 672) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( combat_template_ptr
                                                                                  && !data::mapFromJson(
                                                                                        combat_template_ptr,
                                                                                        &this->combat_template) )
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6048) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v2 + 6048) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v2 + 6079) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 6079) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v2 + 6048,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v2 + 6048),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    3u,
                                                                                    "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                    "fromJson",
                                                                                    4039);
                                                                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                                    (common::milog::MiLogStream *const)(v2 + 6048),
                                                                                    (const char (*)[36])"fromJson for: combatTemplate fails!");
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6048));
                                                                                  v5 = 0;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 6112) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 688) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 688);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 6112),
                                                                                    "combatAntiCheatAttackTagWhiteList",
                                                                                    (const std::allocator<char> *)(v2 + 688));
                                                                                  combat_anti_cheat_attack_tag_white_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6112));
                                                                                  std::string::~string((void *)(v2 + 6112));
                                                                                  *(_DWORD *)(((v2 + 6112) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 688);
                                                                                  *(_BYTE *)(((v2 + 688) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( combat_anti_cheat_attack_tag_white_list_ptr
                                                                                    && !data::vecFromJson(
                                                                                          combat_anti_cheat_attack_tag_white_list_ptr,
                                                                                          &this->combat_anti_cheat_attack_tag_white_list) )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6176) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 6176) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 6207) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 6207) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 6176,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 6176),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      3u,
                                                                                      "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                      "fromJson",
                                                                                      4051);
                                                                                    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                                                                                      (common::milog::MiLogStream *const)(v2 + 6176),
                                                                                      (const char (*)[55])"fromJson for: combatAntiCheatAttackTagWhiteList fails!");
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6176));
                                                                                    v5 = 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 6240) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 704) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 704);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 6240),
                                                                                      "mixinCheckModifierWhiteList",
                                                                                      (const std::allocator<char> *)(v2 + 704));
                                                                                    mixin_check_modifier_white_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6240));
                                                                                    std::string::~string((void *)(v2 + 6240));
                                                                                    *(_DWORD *)(((v2 + 6240) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 704);
                                                                                    *(_BYTE *)(((v2 + 704) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( mixin_check_modifier_white_list_ptr
                                                                                      && !data::ConfigMixinCheckModifierWhiteList::fromJson(
                                                                                            &this->mixin_check_modifier_white_list,
                                                                                            mixin_check_modifier_white_list_ptr) )
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6304) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v2 + 6304) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v2 + 6335) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 6335) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v2 + 6304,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v2 + 6304),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        3u,
                                                                                        "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                        "fromJson",
                                                                                        4063);
                                                                                      common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                                                        (common::milog::MiLogStream *const)(v2 + 6304),
                                                                                        (const char (*)[49])"fromJson for: mixinCheckModifierWhiteList fails!");
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6304));
                                                                                      v5 = 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6368) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 720) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 720);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 6368),
                                                                                        "footprintZones",
                                                                                        (const std::allocator<char> *)(v2 + 720));
                                                                                      footprint_zones_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6368));
                                                                                      std::string::~string((void *)(v2 + 6368));
                                                                                      *(_DWORD *)(((v2 + 6368) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 720);
                                                                                      *(_BYTE *)(((v2 + 720) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( footprint_zones_ptr
                                                                                        && !data::mapFromJson(
                                                                                              footprint_zones_ptr,
                                                                                              &this->footprint_zones) )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6432) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 6432) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 6463) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 6463) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v2 + 6432,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v2 + 6432),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          3u,
                                                                                          "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                          "fromJson",
                                                                                          4075);
                                                                                        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                                          (common::milog::MiLogStream *const)(v2 + 6432),
                                                                                          (const char (*)[36])"fromJson for: footprintZones fails!");
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6432));
                                                                                        v5 = 0;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6496) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        *(_BYTE *)(((v2 + 736) >> 3)
                                                                                                 + 0x7FFF8000) = 1;
                                                                                        std::allocator<char>::allocator(v2 + 736);
                                                                                        std::string::basic_string<std::allocator<char>>(
                                                                                          (std::string *const)(v2 + 6496),
                                                                                          "MushroomConfigIDList",
                                                                                          (const std::allocator<char> *)(v2 + 736));
                                                                                        mushroom_config_idlist_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6496));
                                                                                        std::string::~string((void *)(v2 + 6496));
                                                                                        *(_DWORD *)(((v2 + 6496) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        std::allocator<char>::~allocator(v2 + 736);
                                                                                        *(_BYTE *)(((v2 + 736) >> 3)
                                                                                                 + 0x7FFF8000) = -8;
                                                                                        if ( mushroom_config_idlist_ptr
                                                                                          && !data::vecFromJson(
                                                                                                mushroom_config_idlist_ptr,
                                                                                                &this->mushroom_config_idlist) )
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 6560) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v2 + 6560) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v2 + 6591) >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 6591) >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_store_n(
                                                                                              v2 + 6560,
                                                                                              32LL);
                                                                                          }
                                                                                          common::milog::MiLogStream::create(
                                                                                            (common::milog::MiLogStream *)(v2 + 6560),
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            3u,
                                                                                            "./src/json_data_auto/ConfigGlobalCombat.cpp",
                                                                                            "fromJson",
                                                                                            4087);
                                                                                          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                                            (common::milog::MiLogStream *const)(v2 + 6560),
                                                                                            (const char (*)[42])"fromJson for: MushroomConfigIDList fails!");
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6560));
                                                                                          v5 = 0;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 6624) >> 3) + 0x7FFF8000) = 0;
                                                                                          *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = 1;
                                                                                          std::allocator<char>::allocator(v2 + 752);
                                                                                          std::string::basic_string<std::allocator<char>>(
                                                                                            (std::string *const)(v2 + 6624),
                                                                                            "overgrowEnvironmentLimit",
                                                                                            (const std::allocator<char> *)(v2 + 752));
                                                                                          overgrow_environment_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6624));
                                                                                          std::string::~string((void *)(v2 + 6624));
                                                                                          *(_DWORD *)(((v2 + 6624) >> 3) + 0x7FFF8000) = -117901064;
                                                                                          std::allocator<char>::~allocator(v2 + 752);
                                                                                          *(_BYTE *)(((v2 + 752) >> 3) + 0x7FFF8000) = -8;
                                                                                          if ( overgrow_environment_limit_ptr
                                                                                            && !data::ConfigOvergrowEnvironmentLimit::fromJson(
                                                                                                  &this->overgrow_environment_limit,
                                                                                                  overgrow_environment_limit_ptr) )
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 6688) >> 3) + 0x7FFF8000) = 0;
                                                                                            if ( *(char *)(((v2 + 6688) >> 3) + 0x7FFF8000) < 0
                                                                                              || *(_BYTE *)(((v2 + 6719) >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 6719) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_store_n(
                                                                                                v2 + 6688,
                                                                                                32LL);
                                                                                            }
                                                                                            common::milog::MiLogStream::create(
                                                                                              (common::milog::MiLogStream *)(v2 + 6688),
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              3u,
                                                                                              "./src/json_data_auto/Confi"
                                                                                              "gGlobalCombat.cpp",
                                                                                              "fromJson",
                                                                                              4099);
                                                                                            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                                                              (common::milog::MiLogStream *const)(v2 + 6688),
                                                                                              (const char (*)[46])"fromJson for: overgrowEnvironmentLimit fails!");
                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6688));
                                                                                            v5 = 0;
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(((v2 + 6752) >> 3) + 0x7FFF8000) = 0;
                                                                                            *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = 1;
                                                                                            std::allocator<char>::allocator(v2 + 768);
                                                                                            std::string::basic_string<std::allocator<char>>(
                                                                                              (std::string *const)(v2 + 6752),
                                                                                              "globalValueList",
                                                                                              (const std::allocator<char> *)(v2 + 768));
                                                                                            global_value_list_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6752));
                                                                                            std::string::~string((void *)(v2 + 6752));
                                                                                            *(_DWORD *)(((v2 + 6752) >> 3) + 0x7FFF8000) = -117901064;
                                                                                            std::allocator<char>::~allocator(v2 + 768);
                                                                                            *(_BYTE *)(((v2 + 768) >> 3) + 0x7FFF8000) = -8;
                                                                                            if ( global_value_list_ptr
                                                                                              && !data::arrFromJson(
                                                                                                    global_value_list_ptr,
                                                                                                    &this->global_value_list) )
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 6816) >> 3) + 0x7FFF8000) = 0;
                                                                                              if ( *(char *)(((v2 + 6816) >> 3) + 0x7FFF8000) < 0
                                                                                                || *(_BYTE *)(((v2 + 6847) >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 6847) >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_store_n(
                                                                                                  v2 + 6816,
                                                                                                  32LL);
                                                                                              }
                                                                                              common::milog::MiLogStream::create(
                                                                                                (common::milog::MiLogStream *)(v2 + 6816),
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                3u,
                                                                                                "./src/json_data_auto/Con"
                                                                                                "figGlobalCombat.cpp",
                                                                                                "fromJson",
                                                                                                4111);
                                                                                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                                                (common::milog::MiLogStream *const)(v2 + 6816),
                                                                                                (const char (*)[37])"fromJson for: globalValueList fails!");
                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6816));
                                                                                              v5 = 0;
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_DWORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) = 0;
                                                                                              *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = 1;
                                                                                              std::allocator<char>::allocator(v2 + 784);
                                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                                (std::string *const)(v2 + 6880),
                                                                                                "attacktagToElementreactionDictionary",
                                                                                                (const std::allocator<char> *)(v2 + 784));
                                                                                              p_attacktag_to_elementreaction_dictionary = (data::AttacktagElementReactionMap *)(v2 + 6880);
                                                                                              attacktag_to_elementreaction_dictionary_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6880));
                                                                                              std::string::~string((void *)(v2 + 6880));
                                                                                              *(_DWORD *)(((v2 + 6880) >> 3) + 0x7FFF8000) = -117901064;
                                                                                              std::allocator<char>::~allocator(v2 + 784);
                                                                                              *(_BYTE *)(((v2 + 784) >> 3) + 0x7FFF8000) = -8;
                                                                                              if ( attacktag_to_elementreaction_dictionary_ptr
                                                                                                && (p_attacktag_to_elementreaction_dictionary = &this->attacktag_to_elementreaction_dictionary,
                                                                                                    !data::mapFromJson(attacktag_to_elementreaction_dictionary_ptr, &this->attacktag_to_elementreaction_dictionary)) )
                                                                                              {
                                                                                                *(_DWORD *)(((v2 + 6944) >> 3) + 0x7FFF8000) = 0;
                                                                                                if ( *(char *)(((v2 + 6944) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v2 + 6975) >> 3) + 0x7FFF8000) != 0 && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 6975) >> 3) + 0x7FFF8000) )
                                                                                                  __asan_report_store_n(
                                                                                                    v2 + 6944,
                                                                                                    32LL);
                                                                                                common::milog::MiLogStream::create(
                                                                                                  (common::milog::MiLogStream *)(v2 + 6944),
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  3u,
                                                                                                  "./src/json_data_auto/C"
                                                                                                  "onfigGlobalCombat.cpp",
                                                                                                  "fromJson",
                                                                                                  4123);
                                                                                                common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                                                                                                  (common::milog::MiLogStream *const)(v2 + 6944),
                                                                                                  (const char (*)[58])"fromJson for: attacktagToElementreactionDictionary fails!");
                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6944));
                                                                                                v5 = 0;
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                                                                                  __asan_report_store1(
                                                                                                    &this->is_json_loaded,
                                                                                                    p_attacktag_to_elementreaction_dictionary,
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
  v13 = v5;
  if ( v65 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF806C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 116) & 0xFFFFFFF8) >> 3));
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D0) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8108) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8110) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8118) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8128) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8130) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8138) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8140) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8148) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8150) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8160) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8168) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8170) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8178) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8180) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8188) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8190) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8198) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8200) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8208) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8210) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8218) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8220) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8228) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8230) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8238) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8240) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8248) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8250) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8258) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8260) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8268) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8270) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8278) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8280) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8288) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8290) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8298) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82A0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82A8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82B0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82B8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82C0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82C8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82D0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82D8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82E0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82E8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF82F0) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF82F8) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8300) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8308) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8310) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8318) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8320) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8328) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8330) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8338) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8340) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8348) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8350) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8358) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8360) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8368) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 7008LL, v65);
  }
  return v13;
};

// Line 4131: range 000000000D5A78A4-000000000D5A8079
int32_t __cdecl data::ConfigGlobalCombat::getHashValue(const data::ConfigGlobalCombat *const this)
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
  int32_t MapHashValue; // eax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rdx
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t ArrHashValue; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t v22; // eax
  int32_t v23; // eax
  int32_t v24; // eax
  int32_t v25; // eax
  int32_t v26; // eax
  int32_t v27; // eax
  int32_t VecHashValue; // eax
  int32_t v29; // eax
  int32_t v30; // eax
  int32_t v31; // eax
  int32_t v32; // eax
  int32_t v33; // eax
  int32_t v34; // eax
  int32_t v35; // eax
  int32_t v36; // eax
  int32_t v37; // eax
  int32_t v38; // eax
  int32_t v39; // eax
  int32_t v40; // eax
  int32_t v41; // eax
  int32_t v42; // eax
  int32_t v43; // eax
  int32_t v44; // eax
  int32_t v45; // eax
  int32_t v46; // eax
  int32_t v47; // eax
  int32_t v48; // eax
  int32_t v49; // eax
  int32_t v50; // eax
  int32_t v51; // eax
  int32_t v52; // eax
  int32_t v53; // eax
  int32_t result; // eax
  char v55[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v55;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 14 hash_code:4132";
  *(_QWORD *)(v2 + 16) = data::ConfigGlobalCombat::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigGlobalHit::getHashValue(&this->hit_data);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigGlobalCollision::getHashValue(&this->collision_data);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigGlobalAI::getHashValue(&this->ai_data);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::ConfigGlobalMove::getHashValue(&this->move_data);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigAvatarHitBucketSetting::getHashValue(&this->default_avatar_hit_bucket_setting);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->element_blade_data);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  if ( std::operator!=<data::ConfigFireGrassAirflowField>(0LL, &this->fire_grass_airflow_data) )
  {
    v11 = (unsigned __int64)std::__shared_ptr_access<data::ConfigFireGrassAirflowField,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigFireGrassAirflowField,(__gnu_cxx::_Lock_policy)2,false,false> *const)&this->fire_grass_airflow_data);
    if ( *(_BYTE *)((v11 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(v11);
    v12 = *(_QWORD *)v11 + 56LL;
    if ( *(_BYTE *)((v12 >> 3) + 0x7FFF8000) )
      v11 = __asan_report_load8(*(_QWORD *)v11 + 56LL);
    v13 = (*(__int64 (__fastcall **)(unsigned __int64))v12)(v11);
    common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  }
  v14 = data::ConfigGloablMiscs::getHashValue(&this->miscs);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  v15 = data::ConfigDefaultAbilities::getHashValue(&this->default_abilities);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::getMapHashValue(&this->elem_react_damage);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::getMapHashValue(&this->elem_amplify_damage);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->elem_prority);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v19 = data::ConfigGlobalShakeOff::getHashValue(&this->shake_off);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::ConfigElementShield::getHashValue(&this->element_shield);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::ConfigEliteShield::getHashValue(&this->elite_shield);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  v22 = data::ConfigGlobalSwitch::getHashValue(&this->global_switch);
  common::tools::HashUtils::appendHash(v22, (int32_t *)(v2 + 32));
  v23 = data::ConfigGlobalLockTarget::getHashValue(&this->lock_target);
  common::tools::HashUtils::appendHash(v23, (int32_t *)(v2 + 32));
  v24 = data::ConfigElementUI::getHashValue(&this->elem_ui);
  common::tools::HashUtils::appendHash(v24, (int32_t *)(v2 + 32));
  v25 = data::getMapHashValue(&this->reject_element_reaction);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  v26 = data::ConfigLogSetting::getHashValue(&this->log_setting);
  common::tools::HashUtils::appendHash(v26, (int32_t *)(v2 + 32));
  v27 = data::getMapHashValue(&this->attack_attenuation);
  common::tools::HashUtils::appendHash(v27, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->gadget_creation_limits);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  v29 = data::ConfigLuaSafetyCheckSwitch::getHashValue(&this->lua_safety_switch);
  common::tools::HashUtils::appendHash(v29, (int32_t *)(v2 + 32));
  v30 = data::getMapHashValue(&this->temp_component_budget);
  common::tools::HashUtils::appendHash(v30, (int32_t *)(v2 + 32));
  v31 = data::ConfigGlobalInteraction::getHashValue(&this->global_interaction);
  common::tools::HashUtils::appendHash(v31, (int32_t *)(v2 + 32));
  v32 = data::getVecHashValue(&this->lamp_offset);
  common::tools::HashUtils::appendHash(v32, (int32_t *)(v2 + 32));
  v33 = data::getMapHashValue(&this->ability_state_trigger_abilities);
  common::tools::HashUtils::appendHash(v33, (int32_t *)(v2 + 32));
  v34 = data::ConfigGlobalDither::getHashValue(&this->dither);
  common::tools::HashUtils::appendHash(v34, (int32_t *)(v2 + 32));
  v35 = data::getMapHashValue(&this->element_decrate_group);
  common::tools::HashUtils::appendHash(v35, (int32_t *)(v2 + 32));
  v36 = data::ConfigSliceFrameWatch::getHashValue(&this->slice_frame_watch);
  common::tools::HashUtils::appendHash(v36, (int32_t *)(v2 + 32));
  v37 = data::ConfigIK::getHashValue(&this->ik);
  common::tools::HashUtils::appendHash(v37, (int32_t *)(v2 + 32));
  v38 = data::getMapHashValue(&this->avatar_equip_size_datas);
  common::tools::HashUtils::appendHash(v38, (int32_t *)(v2 + 32));
  v39 = data::getMapHashValue(&this->manekin_equip_size_datas);
  common::tools::HashUtils::appendHash(v39, (int32_t *)(v2 + 32));
  v40 = data::ConfigBigWorldEnvironmentDamageClamp::getHashValue(&this->big_world_environment_damage_clamp);
  common::tools::HashUtils::appendHash(v40, (int32_t *)(v2 + 32));
  v41 = data::ConfigTDPlay::getHashValue(&this->td_play);
  common::tools::HashUtils::appendHash(v41, (int32_t *)(v2 + 32));
  v42 = data::ConfigSafeTypeReportData::getHashValue(&this->game_anim_safe_type);
  common::tools::HashUtils::appendHash(v42, (int32_t *)(v2 + 32));
  v43 = data::getMapHashValue(&this->element_convert_to_charge_bar_value_mixin_item_group);
  common::tools::HashUtils::appendHash(v43, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->charge_bar_mixin_global_value_key, (int32_t *)(v2 + 32));
  v44 = data::ConfigElementReactionCoefficients::getHashValue(&this->element_reaction_coefficients);
  common::tools::HashUtils::appendHash(v44, (int32_t *)(v2 + 32));
  v45 = data::ConfigBattleFervorFormula::getHashValue(&this->battle_fervor_formula);
  common::tools::HashUtils::appendHash(v45, (int32_t *)(v2 + 32));
  v46 = data::getMapHashValue(&this->combat_template);
  common::tools::HashUtils::appendHash(v46, (int32_t *)(v2 + 32));
  v47 = data::getVecHashValue(&this->combat_anti_cheat_attack_tag_white_list);
  common::tools::HashUtils::appendHash(v47, (int32_t *)(v2 + 32));
  v48 = data::ConfigMixinCheckModifierWhiteList::getHashValue(&this->mixin_check_modifier_white_list);
  common::tools::HashUtils::appendHash(v48, (int32_t *)(v2 + 32));
  v49 = data::getMapHashValue(&this->footprint_zones);
  common::tools::HashUtils::appendHash(v49, (int32_t *)(v2 + 32));
  v50 = data::getVecHashValue(&this->mushroom_config_idlist);
  common::tools::HashUtils::appendHash(v50, (int32_t *)(v2 + 32));
  v51 = data::ConfigOvergrowEnvironmentLimit::getHashValue(&this->overgrow_environment_limit);
  common::tools::HashUtils::appendHash(v51, (int32_t *)(v2 + 32));
  v52 = data::getArrHashValue(&this->global_value_list);
  common::tools::HashUtils::appendHash(v52, (int32_t *)(v2 + 32));
  v53 = data::getMapHashValue(&this->attacktag_to_elementreaction_dictionary);
  common::tools::HashUtils::appendHash(v53, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v55 == (char *)v2 )
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
