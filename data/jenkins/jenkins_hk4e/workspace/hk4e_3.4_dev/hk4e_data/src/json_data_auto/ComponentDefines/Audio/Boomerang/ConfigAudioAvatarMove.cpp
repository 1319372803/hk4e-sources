// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp

// Line 20: range 0000000011EA9DCC-0000000011EAD0B2
bool __cdecl data::ConfigAudioAvatarMove::fromJson(data::ConfigAudioAvatarMove *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  const Json::Value *v6; // rsi
  bool v7; // bl
  const Json::Value *fly_direction_rtpc_key_ptr; // [rsp+10h] [rbp-C20h]
  const Json::Value *fly_direction_rtpc_front_ptr; // [rsp+18h] [rbp-C18h]
  const Json::Value *fly_direction_rtpc_side_ptr; // [rsp+20h] [rbp-C10h]
  const Json::Value *fly_direction_rtpc_back_ptr; // [rsp+28h] [rbp-C08h]
  const Json::Value *fly_direction_rtpc_drop_ptr; // [rsp+30h] [rbp-C00h]
  const Json::Value *last_frame_speed_in_air_rtpc_key_ptr; // [rsp+38h] [rbp-BF8h]
  const Json::Value *event_fall_in_water_ptr; // [rsp+40h] [rbp-BF0h]
  const Json::Value *altitude_rtpc_key_ptr; // [rsp+48h] [rbp-BE8h]
  const Json::Value *slope_rtpc_key_ptr; // [rsp+50h] [rbp-BE0h]
  const Json::Value *fly_turn_event_ptr; // [rsp+58h] [rbp-BD8h]
  const Json::Value *fly_turn_event_interval_ptr; // [rsp+60h] [rbp-BD0h]
  const Json::Value *fly_speed_rtpc_key_ptr; // [rsp+68h] [rbp-BC8h]
  const Json::Value *airflow_speed_gain_ptr; // [rsp+70h] [rbp-BC0h]
  const Json::Value *airflow_gain_fade_length_ptr; // [rsp+78h] [rbp-BB8h]
  const Json::Value *climb_vertical_scaler_rtpc_key_ptr; // [rsp+80h] [rbp-BB0h]
  const Json::Value *climb_vertical_scaler_animator_key_ptr; // [rsp+88h] [rbp-BA8h]
  const Json::Value *camera_angle_xrtpc_key_ptr; // [rsp+90h] [rbp-BA0h]
  const Json::Value *camera_angle_yrtpc_key_ptr; // [rsp+98h] [rbp-B98h]
  const Json::Value *enter_speedup_field_event_ptr; // [rsp+A0h] [rbp-B90h]
  const Json::Value *fall_on_water_rtpc_key_ptr; // [rsp+A8h] [rbp-B88h]
  char v30[2944]; // [rsp+B0h] [rbp-B80h] BYREF

  v2 = (unsigned __int64)v30;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2912LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "60 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 32 9 <unknown> 416 32 "
                        "9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9"
                        " <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9"
                        " <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 "
                        "32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1"
                        "696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknow"
                        "n> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <un"
                        "known> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9"
                        " <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioAvatarMove::fromJson;
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
  v4[536862806] = -218959118;
  v4[536862808] = -218959118;
  v4[536862810] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 352),
    "flyDirectionRtpcKey",
    (const std::allocator<char> *)(v2 + 32));
  fly_direction_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
  std::string::~string((void *)(v2 + 352));
  *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( fly_direction_rtpc_key_ptr
    && !data::ConfigWwiseString::fromJson(&this->fly_direction_rtpc_key, fly_direction_rtpc_key_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      (common::milog::MiLogStream *const)(v2 + 416),
      (const char (*)[41])"fromJson for: flyDirectionRtpcKey fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 480),
      "flyDirectionRtpcFront",
      (const std::allocator<char> *)(v2 + 48));
    fly_direction_rtpc_front_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
    std::string::~string((void *)(v2 + 480));
    *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( fly_direction_rtpc_front_ptr && !fromJson<float>(fly_direction_rtpc_front_ptr, &this->fly_direction_rtpc_front) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
        (common::milog::MiLogStream *const)(v2 + 544),
        (const char (*)[43])"fromJson for: flyDirectionRtpcFront fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 608),
        "flyDirectionRtpcSide",
        (const std::allocator<char> *)(v2 + 64));
      fly_direction_rtpc_side_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
      std::string::~string((void *)(v2 + 608));
      *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( fly_direction_rtpc_side_ptr && !fromJson<float>(fly_direction_rtpc_side_ptr, &this->fly_direction_rtpc_side) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 672),
          (const char (*)[42])"fromJson for: flyDirectionRtpcSide fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 736),
          "flyDirectionRtpcBack",
          (const std::allocator<char> *)(v2 + 80));
        fly_direction_rtpc_back_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
        std::string::~string((void *)(v2 + 736));
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( fly_direction_rtpc_back_ptr
          && !fromJson<float>(fly_direction_rtpc_back_ptr, &this->fly_direction_rtpc_back) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 800),
            (const char (*)[42])"fromJson for: flyDirectionRtpcBack fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 864),
            "flyDirectionRtpcDrop",
            (const std::allocator<char> *)(v2 + 96));
          fly_direction_rtpc_drop_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
          std::string::~string((void *)(v2 + 864));
          *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( fly_direction_rtpc_drop_ptr
            && !fromJson<float>(fly_direction_rtpc_drop_ptr, &this->fly_direction_rtpc_drop) )
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
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[42])"fromJson for: flyDirectionRtpcDrop fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 992),
              "lastFrameSpeedInAirRtpcKey",
              (const std::allocator<char> *)(v2 + 112));
            last_frame_speed_in_air_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
            std::string::~string((void *)(v2 + 992));
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( last_frame_speed_in_air_rtpc_key_ptr
              && !data::ConfigWwiseString::fromJson(
                    &this->last_frame_speed_in_air_rtpc_key,
                    last_frame_speed_in_air_rtpc_key_ptr) )
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
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                (common::milog::MiLogStream *const)(v2 + 1056),
                (const char (*)[48])"fromJson for: lastFrameSpeedInAirRtpcKey fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1120),
                "eventFallInWater",
                (const std::allocator<char> *)(v2 + 128));
              event_fall_in_water_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
              std::string::~string((void *)(v2 + 1120));
              *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( event_fall_in_water_ptr
                && !data::ConfigWwiseString::fromJson(&this->event_fall_in_water, event_fall_in_water_ptr) )
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
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 1184),
                  (const char (*)[38])"fromJson for: eventFallInWater fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1248),
                  "altitudeRtpcKey",
                  (const std::allocator<char> *)(v2 + 144));
                altitude_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                std::string::~string((void *)(v2 + 1248));
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( altitude_rtpc_key_ptr
                  && !data::ConfigWwiseString::fromJson(&this->altitude_rtpc_key, altitude_rtpc_key_ptr) )
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
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1312),
                    (const char (*)[37])"fromJson for: altitudeRtpcKey fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1376),
                    "slopeRtpcKey",
                    (const std::allocator<char> *)(v2 + 160));
                  slope_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                  std::string::~string((void *)(v2 + 1376));
                  *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( slope_rtpc_key_ptr
                    && !data::ConfigWwiseString::fromJson(&this->slope_rtpc_key, slope_rtpc_key_ptr) )
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
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                      (common::milog::MiLogStream *const)(v2 + 1440),
                      (const char (*)[34])"fromJson for: slopeRtpcKey fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1504),
                      "flyTurnEvent",
                      (const std::allocator<char> *)(v2 + 176));
                    fly_turn_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                    std::string::~string((void *)(v2 + 1504));
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( fly_turn_event_ptr
                      && !data::ConfigWwiseString::fromJson(&this->fly_turn_event, fly_turn_event_ptr) )
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
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                        "fromJson",
                        138);
                      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                        (common::milog::MiLogStream *const)(v2 + 1568),
                        (const char (*)[34])"fromJson for: flyTurnEvent fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1632),
                        "flyTurnEventInterval",
                        (const std::allocator<char> *)(v2 + 192));
                      fly_turn_event_interval_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                      std::string::~string((void *)(v2 + 1632));
                      *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( fly_turn_event_interval_ptr
                        && !fromJson<float>(fly_turn_event_interval_ptr, &this->fly_turn_event_interval) )
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
                          3u,
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                          "fromJson",
                          150);
                        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                          (common::milog::MiLogStream *const)(v2 + 1696),
                          (const char (*)[42])"fromJson for: flyTurnEventInterval fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1760),
                          "flySpeedRtpcKey",
                          (const std::allocator<char> *)(v2 + 208));
                        fly_speed_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
                        std::string::~string((void *)(v2 + 1760));
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( fly_speed_rtpc_key_ptr
                          && !data::ConfigWwiseString::fromJson(&this->fly_speed_rtpc_key, fly_speed_rtpc_key_ptr) )
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
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                            "fromJson",
                            162);
                          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                            (common::milog::MiLogStream *const)(v2 + 1824),
                            (const char (*)[37])"fromJson for: flySpeedRtpcKey fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1888),
                            "airflowSpeedGain",
                            (const std::allocator<char> *)(v2 + 224));
                          airflow_speed_gain_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                          std::string::~string((void *)(v2 + 1888));
                          *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( airflow_speed_gain_ptr
                            && !fromJson<float>(airflow_speed_gain_ptr, &this->airflow_speed_gain) )
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
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                              "fromJson",
                              174);
                            common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                              (common::milog::MiLogStream *const)(v2 + 1952),
                              (const char (*)[38])"fromJson for: airflowSpeedGain fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2016),
                              "airflowGainFadeLength",
                              (const std::allocator<char> *)(v2 + 240));
                            airflow_gain_fade_length_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                            std::string::~string((void *)(v2 + 2016));
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( airflow_gain_fade_length_ptr
                              && !fromJson<float>(airflow_gain_fade_length_ptr, &this->airflow_gain_fade_length) )
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
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                "fromJson",
                                186);
                              common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                (common::milog::MiLogStream *const)(v2 + 2080),
                                (const char (*)[43])"fromJson for: airflowGainFadeLength fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2144),
                                "climbVerticalScalerRtpcKey",
                                (const std::allocator<char> *)(v2 + 256));
                              climb_vertical_scaler_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                              std::string::~string((void *)(v2 + 2144));
                              *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( climb_vertical_scaler_rtpc_key_ptr
                                && !data::ConfigWwiseString::fromJson(
                                      &this->climb_vertical_scaler_rtpc_key,
                                      climb_vertical_scaler_rtpc_key_ptr) )
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
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                  "fromJson",
                                  198);
                                common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2208),
                                  (const char (*)[48])"fromJson for: climbVerticalScalerRtpcKey fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2272),
                                  "climbVerticalScalerAnimatorKey",
                                  (const std::allocator<char> *)(v2 + 272));
                                climb_vertical_scaler_animator_key_ptr = jsonValueFind(
                                                                           jval,
                                                                           (const std::string *)(v2 + 2272));
                                std::string::~string((void *)(v2 + 2272));
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( climb_vertical_scaler_animator_key_ptr
                                  && !data::ConfigWwiseString::fromJson(
                                        &this->climb_vertical_scaler_animator_key,
                                        climb_vertical_scaler_animator_key_ptr) )
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
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                    "fromJson",
                                    210);
                                  common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2336),
                                    (const char (*)[52])"fromJson for: climbVerticalScalerAnimatorKey fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2400),
                                    "cameraAngleXRtpcKey",
                                    (const std::allocator<char> *)(v2 + 288));
                                  camera_angle_xrtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2400));
                                  std::string::~string((void *)(v2 + 2400));
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( camera_angle_xrtpc_key_ptr
                                    && !data::ConfigWwiseString::fromJson(
                                          &this->camera_angle_xrtpc_key,
                                          camera_angle_xrtpc_key_ptr) )
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
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                      "fromJson",
                                      222);
                                    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2464),
                                      (const char (*)[41])"fromJson for: cameraAngleXRtpcKey fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2528),
                                      "cameraAngleYRtpcKey",
                                      (const std::allocator<char> *)(v2 + 304));
                                    camera_angle_yrtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2528));
                                    std::string::~string((void *)(v2 + 2528));
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( camera_angle_yrtpc_key_ptr
                                      && !data::ConfigWwiseString::fromJson(
                                            &this->camera_angle_yrtpc_key,
                                            camera_angle_yrtpc_key_ptr) )
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
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                        "fromJson",
                                        234);
                                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2592),
                                        (const char (*)[41])"fromJson for: cameraAngleYRtpcKey fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2656),
                                        "enterSpeedupFieldEvent",
                                        (const std::allocator<char> *)(v2 + 320));
                                      enter_speedup_field_event_ptr = jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 2656));
                                      std::string::~string((void *)(v2 + 2656));
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( enter_speedup_field_event_ptr
                                        && !data::ConfigWwiseString::fromJson(
                                              &this->enter_speedup_field_event,
                                              enter_speedup_field_event_ptr) )
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
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                          "fromJson",
                                          246);
                                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2720),
                                          (const char (*)[44])"fromJson for: enterSpeedupFieldEvent fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2784),
                                          "fallOnWaterRtpcKey",
                                          (const std::allocator<char> *)(v2 + 336));
                                        v6 = (const Json::Value *)(v2 + 2784);
                                        fall_on_water_rtpc_key_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 2784));
                                        std::string::~string((void *)(v2 + 2784));
                                        *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( fall_on_water_rtpc_key_ptr
                                          && (v6 = fall_on_water_rtpc_key_ptr,
                                              !data::ConfigWwiseString::fromJson(
                                                 &this->fall_on_water_rtpc_key,
                                                 fall_on_water_rtpc_key_ptr)) )
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
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioAvatarMove.cpp",
                                            "fromJson",
                                            258);
                                          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2848),
                                            (const char (*)[40])"fromJson for: fallOnWaterRtpcKey fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                            __asan_report_store1(&this->is_json_loaded, v6, &this->is_json_loaded);
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
  v7 = v5;
  if ( v30 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8158) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8160) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8168) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2912LL, v30);
  }
  return v7;
};

// Line 266: range 0000000011EAD0B4-0000000011EAD5AD
int32_t __cdecl data::ConfigAudioAvatarMove::getHashValue(const data::ConfigAudioAvatarMove *const this)
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
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t result; // eax
  char v19[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:267";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioAvatarMove::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->fly_direction_rtpc_key);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_front >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_front >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fly_direction_rtpc_front);
  }
  common::tools::HashUtils::appendHash(this->fly_direction_rtpc_front, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_side >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_side >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fly_direction_rtpc_side);
  }
  common::tools::HashUtils::appendHash(this->fly_direction_rtpc_side, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_back >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_back >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fly_direction_rtpc_back);
  }
  common::tools::HashUtils::appendHash(this->fly_direction_rtpc_back, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_drop >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->fly_direction_rtpc_drop >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->fly_direction_rtpc_drop);
  }
  common::tools::HashUtils::appendHash(this->fly_direction_rtpc_drop, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->last_frame_speed_in_air_rtpc_key);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->event_fall_in_water);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::ConfigWwiseString::getHashValue(&this->altitude_rtpc_key);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigWwiseString::getHashValue(&this->slope_rtpc_key);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigWwiseString::getHashValue(&this->fly_turn_event);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->fly_turn_event_interval >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->fly_turn_event_interval >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->fly_turn_event_interval);
  }
  common::tools::HashUtils::appendHash(this->fly_turn_event_interval, (int32_t *)(v2 + 32));
  v11 = data::ConfigWwiseString::getHashValue(&this->fly_speed_rtpc_key);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->airflow_speed_gain >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->airflow_speed_gain >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->airflow_speed_gain);
  }
  common::tools::HashUtils::appendHash(this->airflow_speed_gain, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->airflow_gain_fade_length >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->airflow_gain_fade_length >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->airflow_gain_fade_length);
  }
  common::tools::HashUtils::appendHash(this->airflow_gain_fade_length, (int32_t *)(v2 + 32));
  v12 = data::ConfigWwiseString::getHashValue(&this->climb_vertical_scaler_rtpc_key);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::ConfigWwiseString::getHashValue(&this->climb_vertical_scaler_animator_key);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::ConfigWwiseString::getHashValue(&this->camera_angle_xrtpc_key);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  v15 = data::ConfigWwiseString::getHashValue(&this->camera_angle_yrtpc_key);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::ConfigWwiseString::getHashValue(&this->enter_speedup_field_event);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::ConfigWwiseString::getHashValue(&this->fall_on_water_rtpc_key);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v19 == (char *)v2 )
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
