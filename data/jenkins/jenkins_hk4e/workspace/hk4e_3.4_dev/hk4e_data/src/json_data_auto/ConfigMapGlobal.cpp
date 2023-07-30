// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigMapGlobal.cpp

// Line 19: range 000000001203850D-00000000120388BA
bool __cdecl data::vecFromJson(const Json::Value *jval, data::ConfigVCustomMapMarkList *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // eax
  unsigned __int64 v6; // rax
  void (__fastcall **v7)(unsigned __int64, unsigned __int64); // rdx
  void (__fastcall *v8)(unsigned __int64, unsigned __int64); // rcx
  int v9; // r14d
  bool result; // al
  int v11; // [rsp+0h] [rbp-E0h]
  char v12; // [rsp+8h] [rbp-D8h]
  bool v13; // [rsp+Fh] [rbp-D1h]
  uint32_t i; // [rsp+24h] [rbp-BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-B8h]
  char v16[176]; // [rsp+30h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 16 11 elem_ptr:25 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -219021312;
  v4[536862723] = -202116109;
  for ( i = 0; i < Json::Value::size((const Json::Value_0 *const)jval); ++i )
  {
    elem_jval = (const Json::Value *)Json::Value::operator[]((Json::Value *)jval, i, v11, v12);
    if ( Json::Value::isNull((const Json::Value_0 *const)elem_jval) )
    {
      v5 = 0;
    }
    else
    {
      *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = 0;
      v6 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVCustomMapMarkFactory,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVCustomMapMarkFactory,(__gnu_cxx::_Lock_policy)2,false,false> *const)&data::ConfigVCustomMapMarkFactory::instance_ptr);
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v6 = __asan_report_load8(v6);
      v7 = *(void (__fastcall ***)(unsigned __int64, unsigned __int64))v6;
      if ( *(_BYTE *)((*(_QWORD *)v6 >> 3) + 0x7FFF8000LL) )
        v6 = __asan_report_load8(*(_QWORD *)v6);
      v8 = *v7;
      if ( *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) )
        v6 = __asan_report_store16();
      v8(v2 + 32, v6);
      if ( std::operator==<data::ConfigVCustomMapMark>(
             (const std::shared_ptr<data::ConfigVCustomMapMark> *)(v2 + 32),
             0LL) )
      {
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 64, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 64),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/json_data_auto/ConfigMapGlobal.cpp",
          "vecFromJson",
          28);
        common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
          (common::milog::MiLogStream *const)(v2 + 64),
          (const char (*)[46])"elem_ptr is nullptr: ConfigVCustomMapMarkList");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
        *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
        v13 = 0;
        v9 = 0;
      }
      else
      {
        std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::push_back(
          v,
          (const std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::value_type *)(v2 + 32));
        v9 = 1;
      }
      std::shared_ptr<data::ConfigVCustomMapMark>::~shared_ptr((std::shared_ptr<data::ConfigVCustomMapMark> *const)(v2 + 32));
      if ( v9 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    *(_WORD *)(((v2 + 32) >> 3) + 0x7FFF8000) = -1800;
    if ( v5 && v5 != 2 )
      goto LABEL_26;
  }
  v13 = 1;
LABEL_26:
  result = v13;
  if ( v16 == (char *)v2 )
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

// Line 38: range 00000000120388BB-0000000012038B76
int32_t __cdecl data::getVecHashValue(const data::ConfigVCustomMapMarkList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  int32_t v7; // eax
  int32_t result; // eax
  const std::shared_ptr<data::ConfigVCustomMapMark> *elem; // [rsp+18h] [rbp-A8h]
  char v10[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:39 64 8 14 __for_begin:40 96 8 12 __for_end:40";
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
  *(std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::const_iterator *)(v2 + 64) = std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::const_iterator *)(v2 + 96) = std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>::end(vec);
  while ( __gnu_cxx::operator!=<std::shared_ptr<data::ConfigVCustomMapMark> const*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>>(
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVCustomMapMark>*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVCustomMapMark>*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVCustomMapMark> const*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>>::operator*((const __gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVCustomMapMark>*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>> > *const)(v2 + 64));
    if ( std::operator!=<data::ConfigVCustomMapMark>(0LL, elem) )
    {
      v5 = (unsigned __int64)std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigVCustomMapMark,(__gnu_cxx::_Lock_policy)2,false,false> *const)elem);
      if ( *(_BYTE *)((v5 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(v5);
      v6 = *(_QWORD *)v5 + 56LL;
      if ( *(_BYTE *)((v6 >> 3) + 0x7FFF8000) )
        v5 = __asan_report_load8(*(_QWORD *)v5 + 56LL);
      v7 = (*(__int64 (__fastcall **)(unsigned __int64))v6)(v5);
      common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 48));
    }
    __gnu_cxx::__normal_iterator<std::shared_ptr<data::ConfigVCustomMapMark> const*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>>>::operator++((__gnu_cxx::__normal_iterator<const std::shared_ptr<data::ConfigVCustomMapMark>*,std::vector<std::shared_ptr<data::ConfigVCustomMapMark>> > *const)(v2 + 64));
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

// Line 52: range 0000000012038B78-000000001203B437
bool __cdecl data::ConfigMapGlobal::fromJson(data::ConfigMapGlobal *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  bool v8; // bl
  const Json::Value *mini_map_uiradius_ptr; // [rsp+10h] [rbp-9C0h]
  const Json::Value *mini_map_sight_radius_ptr; // [rsp+18h] [rbp-9B8h]
  const Json::Value *mini_map_scale_default_ptr; // [rsp+20h] [rbp-9B0h]
  const Json::Value *mini_map_scale_ranks_ptr; // [rsp+28h] [rbp-9A8h]
  const Json::Value *level_map_scale_default_ptr; // [rsp+30h] [rbp-9A0h]
  const Json::Value *level_map_scale_max_ptr; // [rsp+38h] [rbp-998h]
  const Json::Value *level_map_scale_min_ptr; // [rsp+40h] [rbp-990h]
  const Json::Value *level_map_trans_point_radius_ptr; // [rsp+48h] [rbp-988h]
  const Json::Value *level_map_custom_mark_cancel_radius_ptr; // [rsp+50h] [rbp-980h]
  const Json::Value *level_map_custom_mark_near_cancel_radius_ptr; // [rsp+58h] [rbp-978h]
  const Json::Value *custom_styles_ptr; // [rsp+60h] [rbp-970h]
  const Json::Value *mark_near_threshold_ptr; // [rsp+68h] [rbp-968h]
  const Json::Value *mark_selected_scale_ptr; // [rsp+70h] [rbp-960h]
  const Json::Value *reward_tip_slide_value_ptr; // [rsp+78h] [rbp-958h]
  const Json::Value *first_area_idhide_mini_map_ptr; // [rsp+80h] [rbp-950h]
  const Json::Value *mark_unlock_effect_delay_ptr; // [rsp+88h] [rbp-948h]
  char v26[2368]; // [rsp+90h] [rbp-940h] BYREF

  v2 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2336LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "48 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkno"
                        "wn> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 28"
                        "8 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608"
                        " 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 "
                        "32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 12"
                        "48 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown"
                        "> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unk"
                        "nown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 "
                        "<unknown> 2208 32 9 <unknown> 2272 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigMapGlobal::fromJson;
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
  v4[536862788] = -218959118;
  v4[536862790] = -218959118;
  v4[536862792] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 288),
    "miniMapUIRadius",
    (const std::allocator<char> *)(v2 + 32));
  mini_map_uiradius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 288));
  std::string::~string((void *)(v2 + 288));
  *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( mini_map_uiradius_ptr && !fromJson<float>(mini_map_uiradius_ptr, &this->mini_map_uiradius) )
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
      "./src/json_data_auto/ConfigMapGlobal.cpp",
      "fromJson",
      62);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 352),
      (const char (*)[37])"fromJson for: miniMapUIRadius fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 416),
      "miniMapSightRadius",
      (const std::allocator<char> *)(v2 + 48));
    mini_map_sight_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 416));
    std::string::~string((void *)(v2 + 416));
    *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( mini_map_sight_radius_ptr && !fromJson<float>(mini_map_sight_radius_ptr, &this->mini_map_sight_radius) )
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
        "./src/json_data_auto/ConfigMapGlobal.cpp",
        "fromJson",
        74);
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        (common::milog::MiLogStream *const)(v2 + 480),
        (const char (*)[40])"fromJson for: miniMapSightRadius fails!");
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
        "miniMapScaleDefault",
        (const std::allocator<char> *)(v2 + 64));
      mini_map_scale_default_ptr = jsonValueFind(jval, (const std::string *)(v2 + 544));
      std::string::~string((void *)(v2 + 544));
      *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( mini_map_scale_default_ptr && !fromJson<float>(mini_map_scale_default_ptr, &this->mini_map_scale_default) )
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
          "./src/json_data_auto/ConfigMapGlobal.cpp",
          "fromJson",
          86);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 608),
          (const char (*)[41])"fromJson for: miniMapScaleDefault fails!");
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
          "miniMapScaleRanks",
          (const std::allocator<char> *)(v2 + 80));
        mini_map_scale_ranks_ptr = jsonValueFind(jval, (const std::string *)(v2 + 672));
        std::string::~string((void *)(v2 + 672));
        *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( mini_map_scale_ranks_ptr && !data::vecFromJson(mini_map_scale_ranks_ptr, &this->mini_map_scale_ranks) )
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
            "./src/json_data_auto/ConfigMapGlobal.cpp",
            "fromJson",
            98);
          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
            (common::milog::MiLogStream *const)(v2 + 736),
            (const char (*)[39])"fromJson for: miniMapScaleRanks fails!");
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
            "levelMapScaleDefault",
            (const std::allocator<char> *)(v2 + 96));
          level_map_scale_default_ptr = jsonValueFind(jval, (const std::string *)(v2 + 800));
          std::string::~string((void *)(v2 + 800));
          *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( level_map_scale_default_ptr
            && !fromJson<float>(level_map_scale_default_ptr, &this->level_map_scale_default) )
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
              "./src/json_data_auto/ConfigMapGlobal.cpp",
              "fromJson",
              110);
            common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[42])"fromJson for: levelMapScaleDefault fails!");
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
              "levelMapScaleMax",
              (const std::allocator<char> *)(v2 + 112));
            level_map_scale_max_ptr = jsonValueFind(jval, (const std::string *)(v2 + 928));
            std::string::~string((void *)(v2 + 928));
            *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( level_map_scale_max_ptr && !fromJson<float>(level_map_scale_max_ptr, &this->level_map_scale_max) )
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
                "./src/json_data_auto/ConfigMapGlobal.cpp",
                "fromJson",
                122);
              common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v2 + 992),
                (const char (*)[38])"fromJson for: levelMapScaleMax fails!");
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
                "levelMapScaleMin",
                (const std::allocator<char> *)(v2 + 128));
              level_map_scale_min_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1056));
              std::string::~string((void *)(v2 + 1056));
              *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( level_map_scale_min_ptr && !fromJson<float>(level_map_scale_min_ptr, &this->level_map_scale_min) )
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
                  "./src/json_data_auto/ConfigMapGlobal.cpp",
                  "fromJson",
                  134);
                common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  (common::milog::MiLogStream *const)(v2 + 1120),
                  (const char (*)[38])"fromJson for: levelMapScaleMin fails!");
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
                  "levelMapTransPointRadius",
                  (const std::allocator<char> *)(v2 + 144));
                level_map_trans_point_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1184));
                std::string::~string((void *)(v2 + 1184));
                *(_DWORD *)(((v2 + 1184) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( level_map_trans_point_radius_ptr
                  && !fromJson<float>(level_map_trans_point_radius_ptr, &this->level_map_trans_point_radius) )
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
                    "./src/json_data_auto/ConfigMapGlobal.cpp",
                    "fromJson",
                    146);
                  common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    (common::milog::MiLogStream *const)(v2 + 1248),
                    (const char (*)[46])"fromJson for: levelMapTransPointRadius fails!");
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
                    "levelMapCustomMarkCancelRadius",
                    (const std::allocator<char> *)(v2 + 160));
                  level_map_custom_mark_cancel_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1312));
                  std::string::~string((void *)(v2 + 1312));
                  *(_DWORD *)(((v2 + 1312) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( level_map_custom_mark_cancel_radius_ptr
                    && !fromJson<float>(
                          level_map_custom_mark_cancel_radius_ptr,
                          &this->level_map_custom_mark_cancel_radius) )
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
                      "./src/json_data_auto/ConfigMapGlobal.cpp",
                      "fromJson",
                      158);
                    common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      (common::milog::MiLogStream *const)(v2 + 1376),
                      (const char (*)[52])"fromJson for: levelMapCustomMarkCancelRadius fails!");
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
                      "levelMapCustomMarkNearCancelRadius",
                      (const std::allocator<char> *)(v2 + 176));
                    level_map_custom_mark_near_cancel_radius_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1440));
                    std::string::~string((void *)(v2 + 1440));
                    *(_DWORD *)(((v2 + 1440) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( level_map_custom_mark_near_cancel_radius_ptr
                      && !fromJson<float>(
                            level_map_custom_mark_near_cancel_radius_ptr,
                            &this->level_map_custom_mark_near_cancel_radius) )
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
                        "./src/json_data_auto/ConfigMapGlobal.cpp",
                        "fromJson",
                        170);
                      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                        (common::milog::MiLogStream *const)(v2 + 1504),
                        (const char (*)[56])"fromJson for: levelMapCustomMarkNearCancelRadius fails!");
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
                        "customStyles",
                        (const std::allocator<char> *)(v2 + 192));
                      custom_styles_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1568));
                      std::string::~string((void *)(v2 + 1568));
                      *(_DWORD *)(((v2 + 1568) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( custom_styles_ptr && !data::vecFromJson(custom_styles_ptr, &this->custom_styles) )
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
                          "./src/json_data_auto/ConfigMapGlobal.cpp",
                          "fromJson",
                          182);
                        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          (common::milog::MiLogStream *const)(v2 + 1632),
                          (const char (*)[34])"fromJson for: customStyles fails!");
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
                          "MarkNearThreshold",
                          (const std::allocator<char> *)(v2 + 208));
                        mark_near_threshold_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1696));
                        std::string::~string((void *)(v2 + 1696));
                        *(_DWORD *)(((v2 + 1696) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( mark_near_threshold_ptr
                          && !fromJson<float>(mark_near_threshold_ptr, &this->mark_near_threshold) )
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
                            "./src/json_data_auto/ConfigMapGlobal.cpp",
                            "fromJson",
                            194);
                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                            (common::milog::MiLogStream *const)(v2 + 1760),
                            (const char (*)[39])"fromJson for: MarkNearThreshold fails!");
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
                            "MarkSelectedScale",
                            (const std::allocator<char> *)(v2 + 224));
                          mark_selected_scale_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1824));
                          std::string::~string((void *)(v2 + 1824));
                          *(_DWORD *)(((v2 + 1824) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( mark_selected_scale_ptr
                            && !fromJson<float>(mark_selected_scale_ptr, &this->mark_selected_scale) )
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
                              "./src/json_data_auto/ConfigMapGlobal.cpp",
                              "fromJson",
                              206);
                            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                              (common::milog::MiLogStream *const)(v2 + 1888),
                              (const char (*)[39])"fromJson for: MarkSelectedScale fails!");
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
                              "RewardTipSlideValue",
                              (const std::allocator<char> *)(v2 + 240));
                            reward_tip_slide_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1952));
                            std::string::~string((void *)(v2 + 1952));
                            *(_DWORD *)(((v2 + 1952) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( reward_tip_slide_value_ptr
                              && !fromJson<float>(reward_tip_slide_value_ptr, &this->reward_tip_slide_value) )
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
                                "./src/json_data_auto/ConfigMapGlobal.cpp",
                                "fromJson",
                                218);
                              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                (common::milog::MiLogStream *const)(v2 + 2016),
                                (const char (*)[41])"fromJson for: RewardTipSlideValue fails!");
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
                                "FirstAreaIDHideMiniMap",
                                (const std::allocator<char> *)(v2 + 256));
                              first_area_idhide_mini_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2080));
                              std::string::~string((void *)(v2 + 2080));
                              *(_DWORD *)(((v2 + 2080) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( first_area_idhide_mini_map_ptr
                                && !fromJson<unsigned int>(
                                      first_area_idhide_mini_map_ptr,
                                      &this->first_area_idhide_mini_map) )
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
                                  "./src/json_data_auto/ConfigMapGlobal.cpp",
                                  "fromJson",
                                  230);
                                common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2144),
                                  (const char (*)[44])"fromJson for: FirstAreaIDHideMiniMap fails!");
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
                                  "MarkUnlockEffectDelay",
                                  (const std::allocator<char> *)(v2 + 272));
                                mark_unlock_effect_delay_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2208));
                                std::string::~string((void *)(v2 + 2208));
                                *(_DWORD *)(((v2 + 2208) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( mark_unlock_effect_delay_ptr
                                  && !fromJson<float>(mark_unlock_effect_delay_ptr, &this->mark_unlock_effect_delay) )
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
                                    "./src/json_data_auto/ConfigMapGlobal.cpp",
                                    "fromJson",
                                    242);
                                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2272),
                                    (const char (*)[43])"fromJson for: MarkUnlockEffectDelay fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2272));
                                  v5 = 0;
                                }
                                else
                                {
                                  v6 = ((_BYTE)this + 108) & 7;
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
  v8 = v5;
  if ( v26 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8110) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8118) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8120) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2336LL, v26);
  }
  return v8;
};

// Line 250: range 000000001203B438-000000001203B9C9
int32_t __cdecl data::ConfigMapGlobal::getHashValue(const data::ConfigMapGlobal *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:251";
  *(_QWORD *)(v2 + 16) = data::ConfigMapGlobal::getHashValue;
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
  common::tools::HashUtils::appendHash(this->mini_map_uiradius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_map_sight_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mini_map_sight_radius >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mini_map_sight_radius);
  }
  common::tools::HashUtils::appendHash(this->mini_map_sight_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mini_map_scale_default >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mini_map_scale_default >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mini_map_scale_default);
  }
  common::tools::HashUtils::appendHash(this->mini_map_scale_default, (int32_t *)(v2 + 32));
  VecHashValue = data::getVecHashValue(&this->mini_map_scale_ranks);
  common::tools::HashUtils::appendHash(VecHashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_scale_default >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_map_scale_default >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_map_scale_default);
  }
  common::tools::HashUtils::appendHash(this->level_map_scale_default, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_scale_max >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_map_scale_max >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_map_scale_max);
  }
  common::tools::HashUtils::appendHash(this->level_map_scale_max, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_scale_min >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_map_scale_min >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_map_scale_min);
  }
  common::tools::HashUtils::appendHash(this->level_map_scale_min, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_trans_point_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_map_trans_point_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_map_trans_point_radius);
  }
  common::tools::HashUtils::appendHash(this->level_map_trans_point_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_custom_mark_cancel_radius >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->level_map_custom_mark_cancel_radius >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->level_map_custom_mark_cancel_radius);
  }
  common::tools::HashUtils::appendHash(this->level_map_custom_mark_cancel_radius, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->level_map_custom_mark_near_cancel_radius >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->level_map_custom_mark_near_cancel_radius >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->level_map_custom_mark_near_cancel_radius);
  }
  common::tools::HashUtils::appendHash(this->level_map_custom_mark_near_cancel_radius, (int32_t *)(v2 + 32));
  v6 = data::getVecHashValue(&this->custom_styles);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_near_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_near_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mark_near_threshold);
  }
  common::tools::HashUtils::appendHash(this->mark_near_threshold, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_selected_scale >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mark_selected_scale >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->mark_selected_scale);
  }
  common::tools::HashUtils::appendHash(this->mark_selected_scale, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->reward_tip_slide_value >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reward_tip_slide_value >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reward_tip_slide_value);
  }
  common::tools::HashUtils::appendHash(this->reward_tip_slide_value, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->first_area_idhide_mini_map >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->first_area_idhide_mini_map >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->first_area_idhide_mini_map);
  }
  common::tools::HashUtils::appendHash(this->first_area_idhide_mini_map, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->mark_unlock_effect_delay >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mark_unlock_effect_delay >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mark_unlock_effect_delay);
  }
  common::tools::HashUtils::appendHash(this->mark_unlock_effect_delay, (int32_t *)(v2 + 32));
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
