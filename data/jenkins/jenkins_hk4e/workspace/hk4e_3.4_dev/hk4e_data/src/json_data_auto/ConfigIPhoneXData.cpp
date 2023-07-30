// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigIPhoneXData.cpp

// Line 14: range 0000000011F31386-0000000011F33240
bool __cdecl data::ConfigIPhoneXAction::fromJson(data::ConfigIPhoneXAction *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  std::string *p_animation; // rsi
  bool v7; // bl
  const Json::Value *paths_ptr; // [rsp+10h] [rbp-760h]
  const Json::Value *indent_ptr; // [rsp+18h] [rbp-758h]
  const Json::Value *scale_ptr; // [rsp+20h] [rbp-750h]
  const Json::Value *top_ptr; // [rsp+28h] [rbp-748h]
  const Json::Value *bottom_ptr; // [rsp+30h] [rbp-740h]
  const Json::Value *left_ptr; // [rsp+38h] [rbp-738h]
  const Json::Value *right_ptr; // [rsp+40h] [rbp-730h]
  const Json::Value *posx_ptr; // [rsp+48h] [rbp-728h]
  const Json::Value *posy_ptr; // [rsp+50h] [rbp-720h]
  const Json::Value *active_ptr; // [rsp+58h] [rbp-718h]
  const Json::Value *first_active_ptr; // [rsp+60h] [rbp-710h]
  const Json::Value *animation_ptr; // [rsp+68h] [rbp-708h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigIPhoneXAction::fromJson;
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
    "paths",
    (const std::allocator<char> *)(v2 + 32));
  paths_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
  std::string::~string((void *)(v2 + 224));
  *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( paths_ptr && !data::vecFromJson(paths_ptr, &this->paths) )
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
      "./src/json_data_auto/ConfigIPhoneXData.cpp",
      "fromJson",
      24);
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
      (common::milog::MiLogStream *const)(v2 + 288),
      (const char (*)[27])"fromJson for: paths fails!");
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
      "indent",
      (const std::allocator<char> *)(v2 + 48));
    indent_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
    std::string::~string((void *)(v2 + 352));
    *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( indent_ptr && !fromJson<float>(indent_ptr, &this->indent) )
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
        "./src/json_data_auto/ConfigIPhoneXData.cpp",
        "fromJson",
        36);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        (common::milog::MiLogStream *const)(v2 + 416),
        (const char (*)[28])"fromJson for: indent fails!");
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
        "scale",
        (const std::allocator<char> *)(v2 + 64));
      scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 480));
      std::string::~string((void *)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( scale_ptr && !fromJson<float>(scale_ptr, &this->scale) )
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
          "./src/json_data_auto/ConfigIPhoneXData.cpp",
          "fromJson",
          48);
        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
          (common::milog::MiLogStream *const)(v2 + 544),
          (const char (*)[27])"fromJson for: scale fails!");
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
          off_1A8B2D40,
          (const std::allocator<char> *)(v2 + 80));
        top_ptr = jsonValueFind(jval, (const std::string *)(v2 + 608));
        std::string::~string((void *)(v2 + 608));
        *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( top_ptr && !fromJson<float>(top_ptr, &this->top) )
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
            "./src/json_data_auto/ConfigIPhoneXData.cpp",
            "fromJson",
            60);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)(v2 + 672),
            (const char (*)[25])"fromJson for: top fails!");
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
            "bottom",
            (const std::allocator<char> *)(v2 + 96));
          bottom_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
          std::string::~string((void *)(v2 + 736));
          *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( bottom_ptr && !fromJson<float>(bottom_ptr, &this->bottom) )
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
              "./src/json_data_auto/ConfigIPhoneXData.cpp",
              "fromJson",
              72);
            common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[28])"fromJson for: bottom fails!");
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
              "left",
              (const std::allocator<char> *)(v2 + 112));
            left_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
            std::string::~string((void *)(v2 + 864));
            *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( left_ptr && !fromJson<float>(left_ptr, &this->left) )
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
                "./src/json_data_auto/ConfigIPhoneXData.cpp",
                "fromJson",
                84);
              common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                (common::milog::MiLogStream *const)(v2 + 928),
                (const char (*)[26])"fromJson for: left fails!");
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
                "right",
                (const std::allocator<char> *)(v2 + 128));
              right_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
              std::string::~string((void *)(v2 + 992));
              *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( right_ptr && !fromJson<float>(right_ptr, &this->right) )
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
                  "./src/json_data_auto/ConfigIPhoneXData.cpp",
                  "fromJson",
                  96);
                common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                  (common::milog::MiLogStream *const)(v2 + 1056),
                  (const char (*)[27])"fromJson for: right fails!");
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
                  "posx",
                  (const std::allocator<char> *)(v2 + 144));
                posx_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
                std::string::~string((void *)(v2 + 1120));
                *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( posx_ptr && !fromJson<float>(posx_ptr, &this->posx) )
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
                    "./src/json_data_auto/ConfigIPhoneXData.cpp",
                    "fromJson",
                    108);
                  common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                    (common::milog::MiLogStream *const)(v2 + 1184),
                    (const char (*)[26])"fromJson for: posx fails!");
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
                    "posy",
                    (const std::allocator<char> *)(v2 + 160));
                  posy_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
                  std::string::~string((void *)(v2 + 1248));
                  *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( posy_ptr && !fromJson<float>(posy_ptr, &this->posy) )
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
                      "./src/json_data_auto/ConfigIPhoneXData.cpp",
                      "fromJson",
                      120);
                    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                      (common::milog::MiLogStream *const)(v2 + 1312),
                      (const char (*)[26])"fromJson for: posy fails!");
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
                      "active",
                      (const std::allocator<char> *)(v2 + 176));
                    active_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
                    std::string::~string((void *)(v2 + 1376));
                    *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( active_ptr && !fromJson<int>(active_ptr, &this->active) )
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
                        "./src/json_data_auto/ConfigIPhoneXData.cpp",
                        "fromJson",
                        132);
                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                        (common::milog::MiLogStream *const)(v2 + 1440),
                        (const char (*)[28])"fromJson for: active fails!");
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
                        "firstActive",
                        (const std::allocator<char> *)(v2 + 192));
                      first_active_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
                      std::string::~string((void *)(v2 + 1504));
                      *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( first_active_ptr && !fromJson<int>(first_active_ptr, &this->first_active) )
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
                          "./src/json_data_auto/ConfigIPhoneXData.cpp",
                          "fromJson",
                          144);
                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                          (common::milog::MiLogStream *const)(v2 + 1568),
                          (const char (*)[33])"fromJson for: firstActive fails!");
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
                          "animation",
                          (const std::allocator<char> *)(v2 + 208));
                        p_animation = (std::string *)(v2 + 1632);
                        animation_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                        std::string::~string((void *)(v2 + 1632));
                        *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( animation_ptr
                          && (p_animation = &this->animation, !fromJson<std::string>(animation_ptr, &this->animation)) )
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
                            "./src/json_data_auto/ConfigIPhoneXData.cpp",
                            "fromJson",
                            156);
                          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                            (common::milog::MiLogStream *const)(v2 + 1696),
                            (const char (*)[31])"fromJson for: animation fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                          v5 = 0;
                        }
                        else
                        {
                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                            __asan_report_store1(&this->is_json_loaded, p_animation, &this->is_json_loaded);
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
  v7 = v5;
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
  return v7;
};

// Line 164: range 0000000011F33241-0000000011F33E82
bool __cdecl data::mapFromJson(const Json::Value *jval, data::ConfigIPhoneXActionMap *m)
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
  data::ConfigIPhoneXAction *v13; // r8
  common::milog::MiLogStream *v14; // rax
  int v15; // r14d
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,data::ConfigIPhoneXAction>,false,true>,bool> v16; // rax
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
  *(_QWORD *)(v3 + 8) = "11 32 16 7 cit:166 64 16 9 <unknown> 96 32 7 key:169 160 32 9 <unknown> 224 32 9 <unknown> 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 40 12 tmp_jval:165 496 40 12 key_jval:168 576 40 14 value_j"
                        "val:175 656 104 9 value:176";
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
        "./src/json_data_auto/ConfigIPhoneXData.cpp",
        "mapFromJson",
        172);
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
      data::ConfigIPhoneXAction::ConfigIPhoneXAction((data::ConfigIPhoneXAction *const)(v3 + 656));
      if ( !data::ConfigIPhoneXAction::fromJson(
              (data::ConfigIPhoneXAction *const)(v3 + 656),
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
          "./src/json_data_auto/ConfigIPhoneXData.cpp",
          "mapFromJson",
          179);
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
        v16 = std::unordered_map<std::string,data::ConfigIPhoneXAction>::emplace<std::string&,data::ConfigIPhoneXAction&>(
                m,
                (std::string *)(v3 + 96),
                (data::ConfigIPhoneXAction *)(v3 + 656),
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
            "./src/json_data_auto/ConfigIPhoneXData.cpp",
            "mapFromJson",
            184);
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
      data::ConfigIPhoneXAction::~ConfigIPhoneXAction((data::ConfigIPhoneXAction *const)(v3 + 656));
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

// Line 192: range 0000000011F33E84-0000000011F3471A
bool __cdecl data::ConfigIPhoneXData::fromJson(data::ConfigIPhoneXData *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigIPhoneXActionMap *p_context_actions; // rsi
  const Json::Value *base_canvans_action_ptr; // [rsp+18h] [rbp-218h]
  const Json::Value *base_page_action_ptr; // [rsp+20h] [rbp-210h]
  const Json::Value *context_actions_ptr; // [rsp+28h] [rbp-208h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigIPhoneXData::fromJson;
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
    "baseCanvansAction",
    (const std::allocator<char> *)(v2 + 48));
  base_canvans_action_ptr = jsonValueFind(jval, (const std::string *)(v2 + 96));
  std::string::~string((void *)(v2 + 96));
  *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( base_canvans_action_ptr
    && !data::ConfigIPhoneXAction::fromJson(&this->base_canvans_action, base_canvans_action_ptr) )
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
      "./src/json_data_auto/ConfigIPhoneXData.cpp",
      "fromJson",
      202);
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
      (common::milog::MiLogStream *const)(v2 + 160),
      (const char (*)[39])"fromJson for: baseCanvansAction fails!");
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
      "basePageAction",
      (const std::allocator<char> *)(v2 + 64));
    base_page_action_ptr = jsonValueFind(jval, (const std::string *)(v2 + 224));
    std::string::~string((void *)(v2 + 224));
    *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( base_page_action_ptr && !data::ConfigIPhoneXAction::fromJson(&this->base_page_action, base_page_action_ptr) )
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
        "./src/json_data_auto/ConfigIPhoneXData.cpp",
        "fromJson",
        214);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 288),
        (const char (*)[36])"fromJson for: basePageAction fails!");
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
        "contextActions",
        (const std::allocator<char> *)(v2 + 80));
      p_context_actions = (data::ConfigIPhoneXActionMap *)(v2 + 352);
      context_actions_ptr = jsonValueFind(jval, (const std::string *)(v2 + 352));
      std::string::~string((void *)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( context_actions_ptr
        && (p_context_actions = &this->context_actions, !data::mapFromJson(context_actions_ptr, &this->context_actions)) )
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
          "./src/json_data_auto/ConfigIPhoneXData.cpp",
          "fromJson",
          226);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 416),
          (const char (*)[36])"fromJson for: contextActions fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
          __asan_report_store1(&this->is_json_loaded, p_context_actions, &this->is_json_loaded);
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
