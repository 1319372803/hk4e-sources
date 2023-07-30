// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigAudioArea2DAmbience.cpp

// Line 20: range 0000000013AE0796-0000000013AE356A
bool __cdecl data::ConfigAudioArea2DAmbience::fromJson(
        data::ConfigAudioArea2DAmbience *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::AudioStateOpArray *p_leave_states; // rsi
  bool v7; // bl
  const Json::Value *area_name_ptr; // [rsp+10h] [rbp-AF0h]
  const Json::Value *short_id_ptr; // [rsp+18h] [rbp-AE8h]
  const Json::Value *area_points_ptr; // [rsp+20h] [rbp-AE0h]
  const Json::Value *yzero_anchor_ptr; // [rsp+28h] [rbp-AD8h]
  const Json::Value *area_group_name_ptr; // [rsp+30h] [rbp-AD0h]
  const Json::Value *enable_height_check_ptr; // [rsp+38h] [rbp-AC8h]
  const Json::Value *top_ptr; // [rsp+40h] [rbp-AC0h]
  const Json::Value *bottom_ptr; // [rsp+48h] [rbp-AB8h]
  const Json::Value *is_ambience_ptr; // [rsp+50h] [rbp-AB0h]
  const Json::Value *enter_events_ptr; // [rsp+58h] [rbp-AA8h]
  const Json::Value *leave_events_ptr; // [rsp+60h] [rbp-AA0h]
  const Json::Value *is_reverb_ptr; // [rsp+68h] [rbp-A98h]
  const Json::Value *aux_bus_name_ptr; // [rsp+70h] [rbp-A90h]
  const Json::Value *priority_ptr; // [rsp+78h] [rbp-A88h]
  const Json::Value *exclude_other_ptr; // [rsp+80h] [rbp-A80h]
  const Json::Value *enable_change_states_ptr; // [rsp+88h] [rbp-A78h]
  const Json::Value *enter_states_ptr; // [rsp+90h] [rbp-A70h]
  const Json::Value *leave_states_ptr; // [rsp+98h] [rbp-A68h]
  char v28[2656]; // [rsp+A0h] [rbp-A60h] BYREF

  v2 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2624LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "54 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 1 9 <unknown> 304 1 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 3"
                        "2 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32"
                        " 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 "
                        "32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1"
                        "472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknow"
                        "n> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <un"
                        "known> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9"
                        " <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioArea2DAmbience::fromJson;
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
  v4[536862801] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 320),
    "areaName",
    (const std::allocator<char> *)(v2 + 32));
  area_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 320));
  std::string::~string((void *)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( area_name_ptr && !fromJson<std::string>(area_name_ptr, &this->area_name) )
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
      "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 384),
      (const char (*)[30])"fromJson for: areaName fails!");
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
      "shortID",
      (const std::allocator<char> *)(v2 + 48));
    short_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 448));
    std::string::~string((void *)(v2 + 448));
    *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( short_id_ptr && !fromJson<unsigned int>(short_id_ptr, &this->short_id) )
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
        "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        (common::milog::MiLogStream *const)(v2 + 512),
        (const char (*)[29])"fromJson for: shortID fails!");
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
        "areaPoints",
        (const std::allocator<char> *)(v2 + 64));
      area_points_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
      std::string::~string((void *)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( area_points_ptr && !data::vecFromJson(area_points_ptr, &this->area_points) )
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
          "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          (common::milog::MiLogStream *const)(v2 + 640),
          (const char (*)[32])"fromJson for: areaPoints fails!");
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
          "yZeroAnchor",
          (const std::allocator<char> *)(v2 + 80));
        yzero_anchor_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
        std::string::~string((void *)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( yzero_anchor_ptr && !fromJson<float>(yzero_anchor_ptr, &this->yzero_anchor) )
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
            "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)(v2 + 768),
            (const char (*)[33])"fromJson for: yZeroAnchor fails!");
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
            "areaGroupName",
            (const std::allocator<char> *)(v2 + 96));
          area_group_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( area_group_name_ptr && !data::ConfigWwiseString::fromJson(&this->area_group_name, area_group_name_ptr) )
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
              "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
              (common::milog::MiLogStream *const)(v2 + 896),
              (const char (*)[35])"fromJson for: areaGroupName fails!");
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
              "enableHeightCheck",
              (const std::allocator<char> *)(v2 + 112));
            enable_height_check_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
            std::string::~string((void *)(v2 + 960));
            *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( enable_height_check_ptr && !fromJson<bool>(enable_height_check_ptr, &this->enable_height_check) )
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
                "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[39])"fromJson for: enableHeightCheck fails!");
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
                off_1AC7DC80,
                (const std::allocator<char> *)(v2 + 128));
              top_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
              std::string::~string((void *)(v2 + 1088));
              *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( top_ptr && !fromJson<float>(top_ptr, &this->top) )
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
                  "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  (common::milog::MiLogStream *const)(v2 + 1152),
                  (const char (*)[25])"fromJson for: top fails!");
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
                  "bottom",
                  (const std::allocator<char> *)(v2 + 144));
                bottom_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
                std::string::~string((void *)(v2 + 1216));
                *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( bottom_ptr && !fromJson<float>(bottom_ptr, &this->bottom) )
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
                    "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                    (common::milog::MiLogStream *const)(v2 + 1280),
                    (const char (*)[28])"fromJson for: bottom fails!");
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
                    "isAmbience",
                    (const std::allocator<char> *)(v2 + 160));
                  is_ambience_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
                  std::string::~string((void *)(v2 + 1344));
                  *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( is_ambience_ptr && !fromJson<bool>(is_ambience_ptr, &this->is_ambience) )
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
                      "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)(v2 + 1408),
                      (const char (*)[32])"fromJson for: isAmbience fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1472),
                      "enterEvents",
                      (const std::allocator<char> *)(v2 + 176));
                    enter_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                    std::string::~string((void *)(v2 + 1472));
                    *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( enter_events_ptr && !data::arrFromJson(enter_events_ptr, &this->enter_events) )
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
                        "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                        "fromJson",
                        138);
                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                        (common::milog::MiLogStream *const)(v2 + 1536),
                        (const char (*)[33])"fromJson for: enterEvents fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1600),
                        "leaveEvents",
                        (const std::allocator<char> *)(v2 + 192));
                      leave_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                      std::string::~string((void *)(v2 + 1600));
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( leave_events_ptr && !data::arrFromJson(leave_events_ptr, &this->leave_events) )
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
                          "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                          "fromJson",
                          150);
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v2 + 1664),
                          (const char (*)[33])"fromJson for: leaveEvents fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1728),
                          "isReverb",
                          (const std::allocator<char> *)(v2 + 208));
                        is_reverb_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                        std::string::~string((void *)(v2 + 1728));
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( is_reverb_ptr && !fromJson<bool>(is_reverb_ptr, &this->is_reverb) )
                        {
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1792, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1792),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                            "fromJson",
                            162);
                          common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                            (common::milog::MiLogStream *const)(v2 + 1792),
                            (const char (*)[30])"fromJson for: isReverb fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1856),
                            "auxBusName",
                            (const std::allocator<char> *)(v2 + 224));
                          aux_bus_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                          std::string::~string((void *)(v2 + 1856));
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( aux_bus_name_ptr
                            && !data::ConfigWwiseString::fromJson(&this->aux_bus_name, aux_bus_name_ptr) )
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
                              "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                              "fromJson",
                              174);
                            common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                              (common::milog::MiLogStream *const)(v2 + 1920),
                              (const char (*)[32])"fromJson for: auxBusName fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 1984),
                              "priority",
                              (const std::allocator<char> *)(v2 + 240));
                            priority_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                            std::string::~string((void *)(v2 + 1984));
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( priority_ptr && !fromJson<int>(priority_ptr, &this->priority) )
                            {
                              *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2048, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2048),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                                "fromJson",
                                186);
                              common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                (common::milog::MiLogStream *const)(v2 + 2048),
                                (const char (*)[30])"fromJson for: priority fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2112),
                                "excludeOther",
                                (const std::allocator<char> *)(v2 + 256));
                              exclude_other_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2112));
                              std::string::~string((void *)(v2 + 2112));
                              *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( exclude_other_ptr && !fromJson<bool>(exclude_other_ptr, &this->exclude_other) )
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
                                  "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                                  "fromJson",
                                  198);
                                common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2176),
                                  (const char (*)[34])"fromJson for: excludeOther fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2240),
                                  "enableChangeStates",
                                  (const std::allocator<char> *)(v2 + 272));
                                enable_change_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                                std::string::~string((void *)(v2 + 2240));
                                *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( enable_change_states_ptr
                                  && !fromJson<bool>(enable_change_states_ptr, &this->enable_change_states) )
                                {
                                  *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2304, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2304),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                                    "fromJson",
                                    210);
                                  common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2304),
                                    (const char (*)[40])"fromJson for: enableChangeStates fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2368),
                                    "enterStates",
                                    (const std::allocator<char> *)(v2 + 288));
                                  enter_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                                  std::string::~string((void *)(v2 + 2368));
                                  *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( enter_states_ptr && !data::arrFromJson(enter_states_ptr, &this->enter_states) )
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
                                      "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                                      "fromJson",
                                      222);
                                    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2432),
                                      (const char (*)[33])"fromJson for: enterStates fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2496),
                                      "leaveStates",
                                      (const std::allocator<char> *)(v2 + 304));
                                    p_leave_states = (data::AudioStateOpArray *)(v2 + 2496);
                                    leave_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                                    std::string::~string((void *)(v2 + 2496));
                                    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( leave_states_ptr
                                      && (p_leave_states = &this->leave_states,
                                          !data::arrFromJson(leave_states_ptr, &this->leave_states)) )
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
                                        "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
                                        "fromJson",
                                        234);
                                      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2560),
                                        (const char (*)[33])"fromJson for: leaveStates fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                        __asan_report_store1(
                                          &this->is_json_loaded,
                                          p_leave_states,
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
  v7 = v5;
  if ( v28 == (char *)v2 )
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80BC) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8144) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2624LL, v28);
  }
  return v7;
};

// Line 242: range 0000000013AE356C-0000000013AE3A98
int32_t __cdecl data::ConfigAudioArea2DAmbience::getHashValue(const data::ConfigAudioArea2DAmbience *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t VecHashValue; // eax
  int32_t HashValue; // eax
  __int64 v7; // rsi
  __int64 v8; // rdx
  int32_t ArrHashValue; // eax
  int32_t v10; // eax
  int32_t v11; // eax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:243";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioArea2DAmbience::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  common::tools::HashUtils::appendHash(&this->area_name, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->short_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->short_id);
  }
  common::tools::HashUtils::appendHash(this->short_id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->area_points);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->yzero_anchor >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->yzero_anchor);
  }
  common::tools::HashUtils::appendHash(this->yzero_anchor, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->area_group_name);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->enable_height_check >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->enable_height_check, v2 + 32, &this->enable_height_check);
  common::tools::HashUtils::appendHash(this->enable_height_check, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->top >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->top);
  }
  common::tools::HashUtils::appendHash(this->top, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->bottom >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->bottom);
  }
  common::tools::HashUtils::appendHash(this->bottom, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 124) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_ambience >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->is_ambience, v7, v8);
  common::tools::HashUtils::appendHash(this->is_ambience, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->enter_events);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v10 = data::getArrHashValue(&this->leave_events);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->is_reverb >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_reverb, v2 + 32, &this->is_reverb);
  common::tools::HashUtils::appendHash(this->is_reverb, (int32_t *)(v2 + 32));
  v11 = data::ConfigWwiseString::getHashValue(&this->aux_bus_name);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->priority >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->priority);
  }
  common::tools::HashUtils::appendHash(this->priority, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this - 28) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->exclude_other >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->exclude_other, v12, v13);
  common::tools::HashUtils::appendHash(this->exclude_other, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this - 27) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->enable_change_states >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->enable_change_states, v14, v15);
  common::tools::HashUtils::appendHash(this->enable_change_states, (int32_t *)(v2 + 32));
  v16 = data::getArrHashValue(&this->enter_states);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::getArrHashValue(&this->leave_states);
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

// Line 266: range 0000000013AE3A99-0000000013AE3E96
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigAudioArea2DAmbienceList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // r14d
  int v6; // r14d
  data::ConfigAudioArea2DAmbience *v7; // rdx
  bool result; // al
  int v9; // [rsp+0h] [rbp-220h]
  char v10; // [rsp+8h] [rbp-218h]
  bool v11; // [rsp+Fh] [rbp-211h]
  uint32_t i; // [rsp+24h] [rbp-1FCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-1F8h]
  char v14[496]; // [rsp+30h] [rbp-1F0h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(448LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 288 8 elem:272";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862732] = -202116109;
  v4[536862733] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v9, v10);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      __asan_unpoison_stack_memory(v2 + 96, 288LL);
      data::ConfigAudioArea2DAmbience::ConfigAudioArea2DAmbience((data::ConfigAudioArea2DAmbience *const)(v2 + 96));
      if ( !data::ConfigAudioArea2DAmbience::fromJson((data::ConfigAudioArea2DAmbience *const)(v2 + 96), elem_jval) )
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
          "./src/json_data_auto/ConfigAudioArea2DAmbience.cpp",
          "vecFromJson",
          275);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v2 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
        *(_DWORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v11 = 0;
        v6 = 0;
      }
      else
      {
        v7 = std::move<data::ConfigAudioArea2DAmbience &>((data::ConfigAudioArea2DAmbience *)(v2 + 96));
        std::vector<data::ConfigAudioArea2DAmbience>::emplace_back<data::ConfigAudioArea2DAmbience>(v, v7, v7);
        v6 = 1;
      }
      data::ConfigAudioArea2DAmbience::~ConfigAudioArea2DAmbience((data::ConfigAudioArea2DAmbience *const)(v2 + 96));
      if ( v6 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    __asan_poison_stack_memory(v2 + 96, 288LL);
    if ( v5 && v5 != 2 )
      goto LABEL_20;
  }
  v11 = 1;
LABEL_20:
  result = v11;
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 285: range 0000000013AE3E97-0000000013AE40E3
int32_t __cdecl data::getVecHashValue(const data::ConfigAudioArea2DAmbienceList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigAudioArea2DAmbience*,std::vector<data::ConfigAudioArea2DAmbience> >::reference elem; // [rsp+18h] [rbp-A8h]
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
  *(std::vector<data::ConfigAudioArea2DAmbience>::const_iterator *)(v2 + 64) = std::vector<data::ConfigAudioArea2DAmbience>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigAudioArea2DAmbience>::const_iterator *)(v2 + 96) = std::vector<data::ConfigAudioArea2DAmbience>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigAudioArea2DAmbience const*,std::vector<data::ConfigAudioArea2DAmbience>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigAudioArea2DAmbience*,std::vector<data::ConfigAudioArea2DAmbience> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigAudioArea2DAmbience*,std::vector<data::ConfigAudioArea2DAmbience> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigAudioArea2DAmbience const*,std::vector<data::ConfigAudioArea2DAmbience>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigAudioArea2DAmbience*,std::vector<data::ConfigAudioArea2DAmbience> > *const)(v2 + 64));
    HashValue = data::ConfigAudioArea2DAmbience::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigAudioArea2DAmbience const*,std::vector<data::ConfigAudioArea2DAmbience>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigAudioArea2DAmbience*,std::vector<data::ConfigAudioArea2DAmbience> > *const)(v2 + 64));
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
