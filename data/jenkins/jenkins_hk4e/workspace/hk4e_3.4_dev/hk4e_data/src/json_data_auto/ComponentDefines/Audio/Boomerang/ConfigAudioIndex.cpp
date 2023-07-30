// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp

// Line 20: range 0000000011ED22C4-0000000011ED5D45
bool __cdecl data::ConfigAudioIndex::fromJson(data::ConfigAudioIndex *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::string *p_speech; // rsi
  bool v7; // bl
  const Json::Value *ambience_ptr; // [rsp+18h] [rbp-DF8h]
  const Json::Value *avatar_ptr; // [rsp+20h] [rbp-DF0h]
  const Json::Value *avatar_move_ptr; // [rsp+28h] [rbp-DE8h]
  const Json::Value *base_move_ptr; // [rsp+30h] [rbp-DE0h]
  const Json::Value *city_blocks_ptr; // [rsp+38h] [rbp-DD8h]
  const Json::Value *camera_ptr; // [rsp+40h] [rbp-DD0h]
  const Json::Value *combat_ptr; // [rsp+48h] [rbp-DC8h]
  const Json::Value *dialog_ptr; // [rsp+50h] [rbp-DC0h]
  const Json::Value *element_reactions_ptr; // [rsp+58h] [rbp-DB8h]
  const Json::Value *gadget_ptr; // [rsp+60h] [rbp-DB0h]
  const Json::Value *view_state_ptr; // [rsp+68h] [rbp-DA8h]
  const Json::Value *level_ptr; // [rsp+70h] [rbp-DA0h]
  const Json::Value *listener_ptr; // [rsp+78h] [rbp-D98h]
  const Json::Value *map_info_ptr; // [rsp+80h] [rbp-D90h]
  const Json::Value *music_ptr; // [rsp+88h] [rbp-D88h]
  const Json::Value *mutual_exclusions_ptr; // [rsp+90h] [rbp-D80h]
  const Json::Value *npc_ptr; // [rsp+98h] [rbp-D78h]
  const Json::Value *quest_ptr; // [rsp+A0h] [rbp-D70h]
  const Json::Value *resource_ptr; // [rsp+A8h] [rbp-D68h]
  const Json::Value *surface_type_ptr; // [rsp+B0h] [rbp-D60h]
  const Json::Value *ui_ptr; // [rsp+B8h] [rbp-D58h]
  const Json::Value *weather_ptr; // [rsp+C0h] [rbp-D50h]
  const Json::Value *speech_ptr; // [rsp+C8h] [rbp-D48h]
  char v33[3392]; // [rsp+D0h] [rbp-D40h] BYREF

  v2 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3360LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "69 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 1 9"
                        " <unknown> 400 1 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <"
                        "unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <u"
                        "nknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9"
                        " <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 "
                        "32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1"
                        "888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknow"
                        "n> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <un"
                        "known> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9"
                        " <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 "
                        "32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioIndex::fromJson;
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
  v4[536862810] = -218959118;
  v4[536862812] = -218959118;
  v4[536862814] = -218959118;
  v4[536862816] = -218959118;
  v4[536862818] = -218959118;
  v4[536862820] = -218959118;
  v4[536862822] = -218959118;
  v4[536862824] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 416),
    "ambience",
    (const std::allocator<char> *)(v2 + 48));
  ambience_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
  std::string::~string((void *)(v2 + 416));
  *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( ambience_ptr && !fromJson<std::string>(ambience_ptr, &this->ambience) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 480),
      (const char (*)[30])"fromJson for: ambience fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 544),
      "avatar",
      (const std::allocator<char> *)(v2 + 64));
    avatar_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
    std::string::~string((void *)(v2 + 544));
    *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( avatar_ptr && !fromJson<std::string>(avatar_ptr, &this->avatar) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 608),
        (const char (*)[28])"fromJson for: avatar fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 672),
        "avatarMove",
        (const std::allocator<char> *)(v2 + 80));
      avatar_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
      std::string::~string((void *)(v2 + 672));
      *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( avatar_move_ptr && !fromJson<std::string>(avatar_move_ptr, &this->avatar_move) )
      {
        *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 736) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 767) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 736, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 736),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 736),
          (const char (*)[32])"fromJson for: avatarMove fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 800),
          "baseMove",
          (const std::allocator<char> *)(v2 + 96));
        base_move_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
        std::string::~string((void *)(v2 + 800));
        *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( base_move_ptr && !fromJson<std::string>(base_move_ptr, &this->base_move) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
            (common::milog::MiLogStream *const)(v2 + 864),
            (const char (*)[30])"fromJson for: baseMove fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 928),
            "cityBlocks",
            (const std::allocator<char> *)(v2 + 112));
          city_blocks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
          std::string::~string((void *)(v2 + 928));
          *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( city_blocks_ptr && !fromJson<std::string>(city_blocks_ptr, &this->city_blocks) )
          {
            *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 992) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1023) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 992, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 992),
              &common::milog::MiLogDefault::default_log_obj_,
              3u,
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              (common::milog::MiLogStream *const)(v2 + 992),
              (const char (*)[32])"fromJson for: cityBlocks fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1056),
              "camera",
              (const std::allocator<char> *)(v2 + 128));
            camera_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
            std::string::~string((void *)(v2 + 1056));
            *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( camera_ptr && !fromJson<std::string>(camera_ptr, &this->camera) )
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
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                (common::milog::MiLogStream *const)(v2 + 1120),
                (const char (*)[28])"fromJson for: camera fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1184),
                "combat",
                (const std::allocator<char> *)(v2 + 144));
              combat_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
              std::string::~string((void *)(v2 + 1184));
              *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( combat_ptr && !fromJson<std::string>(combat_ptr, &this->combat) )
              {
                *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 1248) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1279) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 1248, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 1248),
                  &common::milog::MiLogDefault::default_log_obj_,
                  3u,
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                  (common::milog::MiLogStream *const)(v2 + 1248),
                  (const char (*)[28])"fromJson for: combat fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1312),
                  "dialog",
                  (const std::allocator<char> *)(v2 + 160));
                dialog_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
                std::string::~string((void *)(v2 + 1312));
                *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( dialog_ptr && !fromJson<std::string>(dialog_ptr, &this->dialog) )
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
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v2 + 1376),
                    (const char (*)[28])"fromJson for: dialog fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1440),
                    "elementReactions",
                    (const std::allocator<char> *)(v2 + 176));
                  element_reactions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
                  std::string::~string((void *)(v2 + 1440));
                  *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( element_reactions_ptr && !fromJson<std::string>(element_reactions_ptr, &this->element_reactions) )
                  {
                    *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v2 + 1504) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) != 0
                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1535) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v2 + 1504, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v2 + 1504),
                      &common::milog::MiLogDefault::default_log_obj_,
                      3u,
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                      (common::milog::MiLogStream *const)(v2 + 1504),
                      (const char (*)[38])"fromJson for: elementReactions fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1568),
                      "gadget",
                      (const std::allocator<char> *)(v2 + 192));
                    gadget_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
                    std::string::~string((void *)(v2 + 1568));
                    *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( gadget_ptr && !fromJson<std::string>(gadget_ptr, &this->gadget) )
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
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                        "fromJson",
                        138);
                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        (common::milog::MiLogStream *const)(v2 + 1632),
                        (const char (*)[28])"fromJson for: gadget fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1696),
                        "viewState",
                        (const std::allocator<char> *)(v2 + 208));
                      view_state_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1696));
                      std::string::~string((void *)(v2 + 1696));
                      *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( view_state_ptr && !fromJson<std::string>(view_state_ptr, &this->view_state) )
                      {
                        *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1760) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 1791) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1760, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1760),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                          "fromJson",
                          150);
                        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                          (common::milog::MiLogStream *const)(v2 + 1760),
                          (const char (*)[31])"fromJson for: viewState fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1760));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1824),
                          "level",
                          (const std::allocator<char> *)(v2 + 224));
                        level_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
                        std::string::~string((void *)(v2 + 1824));
                        *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( level_ptr && !fromJson<std::string>(level_ptr, &this->level) )
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
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                            "fromJson",
                            162);
                          common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                            (common::milog::MiLogStream *const)(v2 + 1888),
                            (const char (*)[27])"fromJson for: level fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1888));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1952),
                            "listener",
                            (const std::allocator<char> *)(v2 + 240));
                          listener_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                          std::string::~string((void *)(v2 + 1952));
                          *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( listener_ptr && !fromJson<std::string>(listener_ptr, &this->listener) )
                          {
                            *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 2016) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2047) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 2016, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 2016),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                              "fromJson",
                              174);
                            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                              (common::milog::MiLogStream *const)(v2 + 2016),
                              (const char (*)[30])"fromJson for: listener fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2016));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2080),
                              "mapInfo",
                              (const std::allocator<char> *)(v2 + 256));
                            map_info_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2080));
                            std::string::~string((void *)(v2 + 2080));
                            *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( map_info_ptr && !fromJson<std::string>(map_info_ptr, &this->map_info) )
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
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                "fromJson",
                                186);
                              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                (common::milog::MiLogStream *const)(v2 + 2144),
                                (const char (*)[29])"fromJson for: mapInfo fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2144));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2208),
                                "music",
                                (const std::allocator<char> *)(v2 + 272));
                              music_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2208));
                              std::string::~string((void *)(v2 + 2208));
                              *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( music_ptr && !fromJson<std::string>(music_ptr, &this->music) )
                              {
                                *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2272) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2303) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2272, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2272),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                  "fromJson",
                                  198);
                                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2272),
                                  (const char (*)[27])"fromJson for: music fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2336),
                                  "mutualExclusions",
                                  (const std::allocator<char> *)(v2 + 288));
                                mutual_exclusions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2336));
                                std::string::~string((void *)(v2 + 2336));
                                *(_DWORD *)(((v2 + 2336) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( mutual_exclusions_ptr
                                  && !fromJson<std::string>(mutual_exclusions_ptr, &this->mutual_exclusions) )
                                {
                                  *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2400) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2431) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2400, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2400),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                    "fromJson",
                                    210);
                                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2400),
                                    (const char (*)[38])"fromJson for: mutualExclusions fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2400));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2464),
                                    off_1A8A5220,
                                    (const std::allocator<char> *)(v2 + 304));
                                  npc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2464));
                                  std::string::~string((void *)(v2 + 2464));
                                  *(_DWORD *)(((v2 + 2464) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( npc_ptr && !fromJson<std::string>(npc_ptr, &this->npc) )
                                  {
                                    *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2528) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2559) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2528, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2528),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                      "fromJson",
                                      222);
                                    common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2528),
                                      (const char (*)[25])"fromJson for: npc fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2528));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2592),
                                      "quest",
                                      (const std::allocator<char> *)(v2 + 320));
                                    quest_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2592));
                                    std::string::~string((void *)(v2 + 2592));
                                    *(_DWORD *)(((v2 + 2592) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( quest_ptr && !fromJson<std::string>(quest_ptr, &this->quest) )
                                    {
                                      *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2656) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2687) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2656, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2656),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                        "fromJson",
                                        234);
                                      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2656),
                                        (const char (*)[27])"fromJson for: quest fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2656));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2720),
                                        "resource",
                                        (const std::allocator<char> *)(v2 + 336));
                                      resource_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2720));
                                      std::string::~string((void *)(v2 + 2720));
                                      *(_DWORD *)(((v2 + 2720) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( resource_ptr && !fromJson<std::string>(resource_ptr, &this->resource) )
                                      {
                                        *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2784) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 2815) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2784, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2784),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                          "fromJson",
                                          246);
                                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2784),
                                          (const char (*)[30])"fromJson for: resource fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2784));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2848),
                                          "surfaceType",
                                          (const std::allocator<char> *)(v2 + 352));
                                        surface_type_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2848));
                                        std::string::~string((void *)(v2 + 2848));
                                        *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( surface_type_ptr
                                          && !fromJson<std::string>(surface_type_ptr, &this->surface_type) )
                                        {
                                          *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 2912) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 2943) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 2912, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 2912),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                            "fromJson",
                                            258);
                                          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2912),
                                            (const char (*)[33])"fromJson for: surfaceType fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2912));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 2976),
                                            "ui",
                                            (const std::allocator<char> *)(v2 + 368));
                                          ui_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2976));
                                          std::string::~string((void *)(v2 + 2976));
                                          *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( ui_ptr && !fromJson<std::string>(ui_ptr, &this->ui) )
                                          {
                                            *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3040) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3071) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3040, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3040),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                              "fromJson",
                                              270);
                                            common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3040),
                                              (const char (*)[24])"fromJson for: ui fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3040));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 384);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3104),
                                              "weather",
                                              (const std::allocator<char> *)(v2 + 384));
                                            weather_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3104));
                                            std::string::~string((void *)(v2 + 3104));
                                            *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 384);
                                            *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                            if ( weather_ptr && !fromJson<std::string>(weather_ptr, &this->weather) )
                                            {
                                              *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3168) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 3199) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3168, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3168),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                                "fromJson",
                                                282);
                                              common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3168),
                                                (const char (*)[29])"fromJson for: weather fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3168));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 400);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3232),
                                                "speech",
                                                (const std::allocator<char> *)(v2 + 400));
                                              p_speech = (std::string *)(v2 + 3232);
                                              speech_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3232));
                                              std::string::~string((void *)(v2 + 3232));
                                              *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 400);
                                              *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                              if ( speech_ptr
                                                && (p_speech = &this->speech,
                                                    !fromJson<std::string>(speech_ptr, &this->speech)) )
                                              {
                                                *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3296) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3327) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 3327) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3296, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3296),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioIndex.cpp",
                                                  "fromJson",
                                                  294);
                                                common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3296),
                                                  (const char (*)[28])"fromJson for: speech fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3296));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                             + 0x7FFF8000) < 0 )
                                                  __asan_report_store1(
                                                    &this->is_json_loaded,
                                                    p_speech,
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
  v7 = v5;
  if ( v33 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8120) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8128) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8130) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8138) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8140) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8148) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8150) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8158) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8160) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8168) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8170) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8178) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8180) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8188) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8190) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8198) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81A0) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3360LL, v33);
  }
  return v7;
};

// Line 302: range 0000000011ED5D46-0000000011ED60A8
int32_t __cdecl data::ConfigAudioIndex::getHashValue(const data::ConfigAudioIndex *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:303";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioIndex::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->ambience, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->avatar, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->avatar_move, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->base_move, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->city_blocks, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->camera, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->combat, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->dialog, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->element_reactions, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->gadget, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->view_state, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->level, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->listener, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->map_info, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->music, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->mutual_exclusions, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->npc, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->quest, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->resource, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->surface_type, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->ui, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->weather, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->speech, (int32_t *)(v2 + 32));
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
