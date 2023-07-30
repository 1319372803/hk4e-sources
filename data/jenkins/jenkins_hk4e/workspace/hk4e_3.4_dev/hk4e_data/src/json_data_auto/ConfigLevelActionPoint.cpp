// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelActionPoint.cpp

// Line 20: range 0000000011F4B5FE-0000000011F4CE3F
bool __cdecl data::ConfigActionPoint::fromJson(data::ConfigActionPoint *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  const Json::Value *local_id_ptr; // [rsp+18h] [rbp-5F8h]
  Json::Value *type_ptr; // [rsp+20h] [rbp-5F0h]
  const Json::Value *pos_ptr; // [rsp+28h] [rbp-5E8h]
  const Json::Value *rot_ptr; // [rsp+30h] [rbp-5E0h]
  const Json::Value *capacity_ptr; // [rsp+38h] [rbp-5D8h]
  const Json::Value *act_zone_inner_radius_ptr; // [rsp+40h] [rbp-5D0h]
  const Json::Value *act_zone_outer_radius_ptr; // [rsp+48h] [rbp-5C8h]
  const Json::Value *freestyle_ptr; // [rsp+50h] [rbp-5C0h]
  const Json::Value *face_center_ptr; // [rsp+58h] [rbp-5B8h]
  char v20[1456]; // [rsp+60h] [rbp-5B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1408LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "28 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 32 9 <unknown> 256 32 9 <un"
                        "known> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unk"
                        "nown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unkn"
                        "own> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <u"
                        "nknown> 1280 32 9 <unknown> 1344 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigActionPoint::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
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
  v4[536862763] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 192),
    "localId",
    (const std::allocator<char> *)(v2 + 48));
  local_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
  std::string::~string((void *)(v2 + 192));
  *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( local_id_ptr && !fromJson<unsigned int>(local_id_ptr, &this->local_id) )
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
      "./src/json_data_auto/ConfigLevelActionPoint.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 256),
      (const char (*)[29])"fromJson for: localId fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 320),
      "type",
      (const std::allocator<char> *)(v2 + 64));
    type_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 320));
    std::string::~string((void *)(v2 + 320));
    *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( !type_ptr )
      goto LABEL_16;
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 384, 32LL);
    }
    Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 384), (Json::Value_0 *)type_ptr);
    v6 = !data::enumStrToVal((const std::string *)(v2 + 384), &this->type);
    std::string::~string((void *)(v2 + 384));
    *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
    if ( v6 )
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
        "./src/json_data_auto/ConfigLevelActionPoint.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        (common::milog::MiLogStream *const)(v2 + 448),
        (const char (*)[26])"fromJson for: type fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      v5 = 0;
    }
    else
    {
LABEL_16:
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 512),
        off_1A8B06A0,
        (const std::allocator<char> *)(v2 + 80));
      pos_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
      std::string::~string((void *)(v2 + 512));
      *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( pos_ptr && !data::Vector::fromJson(&this->pos, pos_ptr) )
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
          "./src/json_data_auto/ConfigLevelActionPoint.cpp",
          "fromJson",
          54);
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          (common::milog::MiLogStream *const)(v2 + 576),
          (const char (*)[25])"fromJson for: pos fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 640),
          off_1A8B0720,
          (const std::allocator<char> *)(v2 + 96));
        rot_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
        std::string::~string((void *)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( rot_ptr && !data::Vector::fromJson(&this->rot, rot_ptr) )
        {
          *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 704) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 735) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 704, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 704),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/json_data_auto/ConfigLevelActionPoint.cpp",
            "fromJson",
            66);
          common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            (common::milog::MiLogStream *const)(v2 + 704),
            (const char (*)[25])"fromJson for: rot fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 768),
            "capacity",
            (const std::allocator<char> *)(v2 + 112));
          capacity_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
          std::string::~string((void *)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( capacity_ptr && !fromJson<int>(capacity_ptr, &this->capacity) )
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
              "./src/json_data_auto/ConfigLevelActionPoint.cpp",
              "fromJson",
              78);
            common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v2 + 832),
              (const char (*)[30])"fromJson for: capacity fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 896),
              "actZoneInnerRadius",
              (const std::allocator<char> *)(v2 + 128));
            act_zone_inner_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
            std::string::~string((void *)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( act_zone_inner_radius_ptr && !fromJson<float>(act_zone_inner_radius_ptr, &this->act_zone_inner_radius) )
            {
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v2 + 960) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 991) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 960, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 960),
                &common::milog::MiLogDefault::default_log_obj_,
                3u,
                "./src/json_data_auto/ConfigLevelActionPoint.cpp",
                "fromJson",
                90);
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[40])"fromJson for: actZoneInnerRadius fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1024),
                "actZoneOuterRadius",
                (const std::allocator<char> *)(v2 + 144));
              act_zone_outer_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
              std::string::~string((void *)(v2 + 1024));
              *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( act_zone_outer_radius_ptr
                && !fromJson<float>(act_zone_outer_radius_ptr, &this->act_zone_outer_radius) )
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
                  "./src/json_data_auto/ConfigLevelActionPoint.cpp",
                  "fromJson",
                  102);
                common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  (common::milog::MiLogStream *const)(v2 + 1088),
                  (const char (*)[40])"fromJson for: actZoneOuterRadius fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1152),
                  "freestyle",
                  (const std::allocator<char> *)(v2 + 160));
                freestyle_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
                std::string::~string((void *)(v2 + 1152));
                *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( freestyle_ptr && !fromJson<int>(freestyle_ptr, &this->freestyle) )
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
                    "./src/json_data_auto/ConfigLevelActionPoint.cpp",
                    "fromJson",
                    114);
                  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                    (common::milog::MiLogStream *const)(v2 + 1216),
                    (const char (*)[31])"fromJson for: freestyle fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1280),
                    "faceCenter",
                    (const std::allocator<char> *)(v2 + 176));
                  face_center_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
                  std::string::~string((void *)(v2 + 1280));
                  *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( face_center_ptr && !fromJson<bool>(face_center_ptr, &this->face_center) )
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
                      "./src/json_data_auto/ConfigLevelActionPoint.cpp",
                      "fromJson",
                      126);
                    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      (common::milog::MiLogStream *const)(v2 + 1344),
                      (const char (*)[32])"fromJson for: faceCenter fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                    v5 = 0;
                  }
                  else
                  {
                    v7 = ((_BYTE)this + 57) & 7;
                    v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                    if ( (_BYTE)v8 )
                      __asan_report_store1(&this->is_json_loaded, v7, v8);
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
  v9 = v5;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8024) = 0LL;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF80AC) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1408LL, v20);
  }
  return v9;
};

// Line 134: range 0000000011F4CE40-0000000011F4D1CC
int32_t __cdecl data::ConfigActionPoint::getHashValue(const data::ConfigActionPoint *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:135";
  *(_QWORD *)(v2 + 16) = data::ConfigActionPoint::getHashValue;
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
  common::tools::HashUtils::appendHash(this->local_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->type >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->type);
  }
  common::tools::HashUtils::appendHash(this->type, (int32_t *)(v2 + 32));
  HashValue = data::Vector::getHashValue(&this->pos);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::Vector::getHashValue(&this->rot);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->capacity >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 40) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->capacity >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->capacity);
  }
  common::tools::HashUtils::appendHash(this->capacity, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->act_zone_inner_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->act_zone_inner_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->act_zone_inner_radius);
  }
  common::tools::HashUtils::appendHash(this->act_zone_inner_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->act_zone_outer_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 48) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->act_zone_outer_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->act_zone_outer_radius);
  }
  common::tools::HashUtils::appendHash(this->act_zone_outer_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->freestyle >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->freestyle >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->freestyle);
  }
  common::tools::HashUtils::appendHash(this->freestyle, (int32_t *)(v2 + 32));
  v7 = ((_BYTE)this + 56) & 7;
  v8 = (*(_BYTE *)(((unsigned __int64)&this->face_center >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->face_center >> 3) + 0x7FFF8000));
  if ( (_BYTE)v8 )
    __asan_report_load1(&this->face_center, v7, v8);
  common::tools::HashUtils::appendHash(this->face_center, (int32_t *)(v2 + 32));
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

// Line 149: range 0000000011F4D1CD-0000000011F4D8E3
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigActionPointList *v)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  int v6; // eax
  _DWORD *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  data::ConfigActionPoint *v19; // rdx
  _DWORD *v20; // rdx
  bool result; // al
  std::vector<data::ConfigActionPoint> *va; // [rsp+0h] [rbp-110h]
  Json::Value *jvala; // [rsp+8h] [rbp-108h]
  uint32_t i; // [rsp+14h] [rbp-FCh]
  const Json::Value *elem_jval; // [rsp+18h] [rbp-F8h]
  char v26[240]; // [rsp+20h] [rbp-F0h] BYREF

  jvala = (Json::Value *)jval;
  LODWORD(va) = (_DWORD)v;
  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 32 9 <unknown> 96 60 8 elem:155";
  *(_QWORD *)(v3 + 16) = data::vecFromJson;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862722] = -218959118;
  v5[536862724] = 0x4000000;
  v5[536862725] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jvala); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[](jvala, i, (int)va, (char)jvala);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v6 = 0;
    }
    else
    {
      v7 = (_DWORD *)(((v3 + 96) >> 3) + 2147450880);
      *v7 = 0;
      v7[1] = 0x4000000;
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 96, i);
      *(_DWORD *)(v3 + 96) = 0;
      v8 = (((_BYTE)v3 + 100) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 100) & 7) + 3) >= *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 100, v8);
      }
      *(_DWORD *)(v3 + 100) = 0;
      if ( *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 104, v8);
      *(_DWORD *)(v3 + 104) = 0;
      v9 = (((_BYTE)v3 + 108) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 108) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 108) & 7) + 3) >= *(_BYTE *)(((v3 + 108) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 108, v9);
      }
      *(_DWORD *)(v3 + 108) = 0;
      if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 112, v9);
      *(_DWORD *)(v3 + 112) = 0;
      v10 = ((_BYTE)v3 + 116) & 7;
      v11 = (*(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((v3 + 116) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v11 )
        __asan_report_store1(v3 + 116, v10, v11);
      *(_BYTE *)(v3 + 116) = 0;
      if ( *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 120) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 120, v10);
      *(_DWORD *)(v3 + 120) = 0;
      v12 = (((_BYTE)v3 + 124) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 + 124) & 7) + 3) >= *(_BYTE *)(((v3 + 124) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 124, v12);
      }
      *(_DWORD *)(v3 + 124) = 0;
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 128, v12);
      *(_DWORD *)(v3 + 128) = 0;
      v13 = ((_BYTE)v3 - 124) & 7;
      v14 = (*(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v13 >= *(_BYTE *)(((v3 + 132) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v14 )
        __asan_report_store1(v3 + 132, v13, v14);
      *(_BYTE *)(v3 + 132) = 0;
      if ( *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 136) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 136, v13);
      *(_DWORD *)(v3 + 136) = 99;
      v15 = (((_BYTE)v3 - 116) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 116) & 7) + 3) >= *(_BYTE *)(((v3 + 140) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 140, v15);
      }
      *(_DWORD *)(v3 + 140) = 1065353216;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 144, v15);
      *(_DWORD *)(v3 + 144) = 0x40000000;
      v16 = (((_BYTE)v3 - 108) & 7u) + 3;
      if ( *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) != 0
        && (char)(((v3 - 108) & 7) + 3) >= *(_BYTE *)(((v3 + 148) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(v3 + 148, v16);
      }
      *(_DWORD *)(v3 + 148) = 0;
      if ( *(char *)(((v3 + 152) >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(v3 + 152, v16, v3 + 152);
      *(_BYTE *)(v3 + 152) = 1;
      v17 = ((_BYTE)v3 - 103) & 7;
      v18 = (*(_BYTE *)(((v3 + 153) >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v17 >= *(_BYTE *)(((v3 + 153) >> 3) + 0x7FFF8000));
      if ( (_BYTE)v18 )
        __asan_report_store1(v3 + 153, v17, v18);
      *(_BYTE *)(v3 + 153) = 0;
      if ( !data::ConfigActionPoint::fromJson((data::ConfigActionPoint *const)(v3 + 96), elem_jval) )
      {
        *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 127) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigLevelActionPoint.cpp",
          "vecFromJson",
          158);
        common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 32),
          (const char (*)[16])"fromJson fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
        *(_DWORD *)(((v3 + 32) >> 3) + 0x7FFF8000) = -117901064;
        v2 = 0;
        v6 = 1;
      }
      else
      {
        v19 = std::move<data::ConfigActionPoint &>((data::ConfigActionPoint *)(v3 + 96));
        std::vector<data::ConfigActionPoint>::emplace_back<data::ConfigActionPoint>(va, v19, v19);
        v6 = 2;
      }
    }
    v20 = (_DWORD *)(((v3 + 96) >> 3) + 2147450880);
    *v20 = -117901064;
    v20[1] = -117901064;
    if ( v6 && v6 != 2 )
      goto LABEL_49;
  }
  v2 = 1;
LABEL_49:
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 168: range 0000000011F4D8E4-0000000011F4DB30
int32_t __cdecl data::getVecHashValue(const data::ConfigActionPointList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigActionPoint*,std::vector<data::ConfigActionPoint> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:169 64 8 15 __for_begin:170 96 8 13 __for_end:170";
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
  *(std::vector<data::ConfigActionPoint>::const_iterator *)(v2 + 64) = std::vector<data::ConfigActionPoint>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigActionPoint>::const_iterator *)(v2 + 96) = std::vector<data::ConfigActionPoint>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigActionPoint const*,std::vector<data::ConfigActionPoint>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigActionPoint*,std::vector<data::ConfigActionPoint> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigActionPoint*,std::vector<data::ConfigActionPoint> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigActionPoint const*,std::vector<data::ConfigActionPoint>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigActionPoint*,std::vector<data::ConfigActionPoint> > *const)(v2 + 64));
    HashValue = data::ConfigActionPoint::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigActionPoint const*,std::vector<data::ConfigActionPoint>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigActionPoint*,std::vector<data::ConfigActionPoint> > *const)(v2 + 64));
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

// Line 179: range 0000000011F4DB32-0000000011F4E115
bool __cdecl data::ConfigLevelActionPoint::fromJson(data::ConfigLevelActionPoint *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::ConfigActionPointList *p_action_points; // rsi
  const Json::Value *scene_id_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *action_points_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigLevelActionPoint::fromJson;
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
    "sceneId",
    (const std::allocator<char> *)(v2 + 32));
  scene_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( scene_id_ptr && !fromJson<unsigned int>(scene_id_ptr, &this->scene_id) )
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
      "./src/json_data_auto/ConfigLevelActionPoint.cpp",
      "fromJson",
      189);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[29])"fromJson for: sceneId fails!");
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
      "actionPoints",
      (const std::allocator<char> *)(v2 + 48));
    p_action_points = (data::ConfigActionPointList *)(v2 + 192);
    action_points_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( action_points_ptr
      && (p_action_points = &this->action_points, !data::vecFromJson(action_points_ptr, &this->action_points)) )
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
        "./src/json_data_auto/ConfigLevelActionPoint.cpp",
        "fromJson",
        201);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[34])"fromJson for: actionPoints fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_action_points, &this->is_json_loaded);
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

// Line 209: range 0000000011F4E116-0000000011F4E298
int32_t __cdecl data::ConfigLevelActionPoint::getHashValue(const data::ConfigLevelActionPoint *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:210";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelActionPoint::getHashValue;
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
  common::tools::HashUtils::appendHash(this->scene_id, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->action_points);
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
