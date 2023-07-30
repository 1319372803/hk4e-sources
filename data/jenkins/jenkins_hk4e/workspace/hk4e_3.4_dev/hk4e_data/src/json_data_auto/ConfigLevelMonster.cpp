// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ConfigLevelMonster.cpp

// Line 20: range 0000000011F6A086-0000000011F6A66E
bool __cdecl data::ConfigLevelMonsterAIPatrol::fromJson(
        data::ConfigLevelMonsterAIPatrol *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *ai_patrol_group_id_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *ai_patrol_is_leader_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterAIPatrol::fromJson;
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
    "aiPatrolGroupId",
    (const std::allocator<char> *)(v2 + 32));
  ai_patrol_group_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( ai_patrol_group_id_ptr && !fromJson<unsigned int>(ai_patrol_group_id_ptr, (unsigned int *)this) )
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
      "./src/json_data_auto/ConfigLevelMonster.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[37])"fromJson for: aiPatrolGroupId fails!");
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
      "aiPatrolIsLeader",
      (const std::allocator<char> *)(v2 + 48));
    ai_patrol_is_leader_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( ai_patrol_is_leader_ptr && !fromJson<bool>(ai_patrol_is_leader_ptr, &this->ai_patrol_is_leader) )
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
        "./src/json_data_auto/ConfigLevelMonster.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[38])"fromJson for: aiPatrolIsLeader fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
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

// Line 50: range 0000000011F6A670-0000000011F6A82B
int32_t __cdecl data::ConfigLevelMonsterAIPatrol::getHashValue(const data::ConfigLevelMonsterAIPatrol *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:51";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterAIPatrol::getHashValue;
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
  common::tools::HashUtils::appendHash(this->ai_patrol_group_id, (int32_t *)(v2 + 32));
  v5 = ((_BYTE)this + 4) & 7;
  v6 = (*(_BYTE *)(((unsigned __int64)&this->ai_patrol_is_leader >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v5 >= *(_BYTE *)(((unsigned __int64)&this->ai_patrol_is_leader >> 3) + 0x7FFF8000));
  if ( (_BYTE)v6 )
    __asan_report_load1(&this->ai_patrol_is_leader, v5, v6);
  common::tools::HashUtils::appendHash(this->ai_patrol_is_leader, (int32_t *)(v2 + 32));
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

// Line 59: range 0000000011F6A82C-0000000011F6FF1F
bool __cdecl data::ConfigLevelMonsterUnit::fromJson(data::ConfigLevelMonsterUnit *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  bool v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rdx
  bool v9; // bl
  const Json::Value *group_id_ptr; // [rsp+10h] [rbp-14C0h]
  const Json::Value *map_inst_id_ptr; // [rsp+18h] [rbp-14B8h]
  const Json::Value *spawned_by_evt_pattern_ptr; // [rsp+20h] [rbp-14B0h]
  const Json::Value *route_id_ptr; // [rsp+28h] [rbp-14A8h]
  const Json::Value *ai_patrol_setting_ptr; // [rsp+30h] [rbp-14A0h]
  const Json::Value *ai_group_id_ptr; // [rsp+38h] [rbp-1498h]
  const Json::Value *override_defend_area_range_ptr; // [rsp+40h] [rbp-1490h]
  const Json::Value *defend_area_range_ptr; // [rsp+48h] [rbp-1488h]
  const Json::Value *override_force_alert_distance_ptr; // [rsp+50h] [rbp-1480h]
  const Json::Value *force_alert_distance_limit_ptr; // [rsp+58h] [rbp-1478h]
  const Json::Value *defend_area_id_ptr; // [rsp+60h] [rbp-1470h]
  const Json::Value *wander_area_id_ptr; // [rsp+68h] [rbp-1468h]
  const Json::Value *override_clear_threat_target_distance_ptr; // [rsp+70h] [rbp-1460h]
  const Json::Value *clear_threat_target_distance_ptr; // [rsp+78h] [rbp-1458h]
  const Json::Value *ai_neuron_setting_ptr; // [rsp+80h] [rbp-1450h]
  const Json::Value *ai_sensing_template_ptr; // [rsp+88h] [rbp-1448h]
  const Json::Value *force_combat_on_spawn_ptr; // [rsp+90h] [rbp-1440h]
  const Json::Value *disable_wander_ptr; // [rsp+98h] [rbp-1438h]
  const Json::Value *stand_on_distant_mesh_ptr; // [rsp+A0h] [rbp-1430h]
  const Json::Value *landing_point_id_ptr; // [rsp+A8h] [rbp-1428h]
  const Json::Value *extraction_point_id_ptr; // [rsp+B0h] [rbp-1420h]
  const Json::Value *override_use_navmesh_ptr; // [rsp+B8h] [rbp-1418h]
  const Json::Value *use_navmesh_ptr; // [rsp+C0h] [rbp-1410h]
  const Json::Value *override_to_the_moon_ptr; // [rsp+C8h] [rbp-1408h]
  const Json::Value *use_to_the_moon_ptr; // [rsp+D0h] [rbp-1400h]
  const Json::Value *billboard__has_uibar_ptr; // [rsp+D8h] [rbp-13F8h]
  const Json::Value *billboard__show_uibar_dis_ptr; // [rsp+E0h] [rbp-13F0h]
  const Json::Value *billboard__hide_uibar_dis_ptr; // [rsp+E8h] [rbp-13E8h]
  const Json::Value *billboard__uibar_need_enter_combat_ptr; // [rsp+F0h] [rbp-13E0h]
  Json::Value *billboard__hp_bar_style_ptr; // [rsp+F8h] [rbp-13D8h]
  const Json::Value *billboard__multi_bar_sort_id_ptr; // [rsp+100h] [rbp-13D0h]
  const Json::Value *billboard__multi_bar_num_ptr; // [rsp+108h] [rbp-13C8h]
  const Json::Value *reuse_not_remove_ability_tag_ptr; // [rsp+110h] [rbp-13C0h]
  const Json::Value *has_sneak_indicator_ptr; // [rsp+118h] [rbp-13B8h]
  char v45[5040]; // [rsp+120h] [rbp-13B0h] BYREF

  v2 = (unsigned __int64)v45;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(4992LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "103 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 "
                        "32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088"
                        " 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> "
                        "1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unkno"
                        "wn> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <u"
                        "nknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 "
                        "9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624"
                        " 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> "
                        "2944 32 9 <unknown> 3008 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unkno"
                        "wn> 3264 32 9 <unknown> 3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <u"
                        "nknown> 3584 32 9 <unknown> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 "
                        "9 <unknown> 3904 32 9 <unknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160"
                        " 32 9 <unknown> 4224 32 9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown> "
                        "4480 32 9 <unknown> 4544 32 9 <unknown> 4608 32 9 <unknown> 4672 32 9 <unknown> 4736 32 9 <unkno"
                        "wn> 4800 32 9 <unknown> 4864 32 9 <unknown> 4928 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterUnit::fromJson;
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
  v4[536862855] = -218959118;
  v4[536862857] = -218959118;
  v4[536862859] = -218959118;
  v4[536862861] = -218959118;
  v4[536862863] = -218959118;
  v4[536862865] = -218959118;
  v4[536862867] = -218959118;
  v4[536862869] = -218959118;
  v4[536862871] = -218959118;
  v4[536862873] = -218959118;
  v4[536862875] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 576),
    "groupId",
    (const std::allocator<char> *)(v2 + 32));
  group_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 576));
  std::string::~string((void *)(v2 + 576));
  *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( group_id_ptr && !fromJson<unsigned int>(group_id_ptr, &this->group_id) )
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
      "./src/json_data_auto/ConfigLevelMonster.cpp",
      "fromJson",
      69);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 640),
      (const char (*)[29])"fromJson for: groupId fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 704),
      "mapInstId",
      (const std::allocator<char> *)(v2 + 48));
    map_inst_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 704));
    std::string::~string((void *)(v2 + 704));
    *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( map_inst_id_ptr && !fromJson<unsigned int>(map_inst_id_ptr, &this->map_inst_id) )
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
        "./src/json_data_auto/ConfigLevelMonster.cpp",
        "fromJson",
        81);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 768),
        (const char (*)[31])"fromJson for: mapInstId fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 832),
        "spawnedByEvtPattern",
        (const std::allocator<char> *)(v2 + 64));
      spawned_by_evt_pattern_ptr = jsonValueFind(jval, (const std::string *)(v2 + 832));
      std::string::~string((void *)(v2 + 832));
      *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( spawned_by_evt_pattern_ptr && !fromJson<bool>(spawned_by_evt_pattern_ptr, &this->spawned_by_evt_pattern) )
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
          "./src/json_data_auto/ConfigLevelMonster.cpp",
          "fromJson",
          93);
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
          (common::milog::MiLogStream *const)(v2 + 896),
          (const char (*)[41])"fromJson for: spawnedByEvtPattern fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 960),
          "routeId",
          (const std::allocator<char> *)(v2 + 80));
        route_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 960));
        std::string::~string((void *)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( route_id_ptr && !fromJson<int>(route_id_ptr, &this->route_id) )
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
            "./src/json_data_auto/ConfigLevelMonster.cpp",
            "fromJson",
            105);
          common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            (common::milog::MiLogStream *const)(v2 + 1024),
            (const char (*)[29])"fromJson for: routeId fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1088),
            "aiPatrolSetting",
            (const std::allocator<char> *)(v2 + 96));
          ai_patrol_setting_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1088));
          std::string::~string((void *)(v2 + 1088));
          *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( ai_patrol_setting_ptr
            && !data::ConfigLevelMonsterAIPatrol::fromJson(&this->ai_patrol_setting, ai_patrol_setting_ptr) )
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
              "./src/json_data_auto/ConfigLevelMonster.cpp",
              "fromJson",
              117);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 1152),
              (const char (*)[37])"fromJson for: aiPatrolSetting fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1216),
              "aiGroupID",
              (const std::allocator<char> *)(v2 + 112));
            ai_group_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1216));
            std::string::~string((void *)(v2 + 1216));
            *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( ai_group_id_ptr && !fromJson<unsigned int>(ai_group_id_ptr, &this->ai_group_id) )
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
                "./src/json_data_auto/ConfigLevelMonster.cpp",
                "fromJson",
                129);
              common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                (common::milog::MiLogStream *const)(v2 + 1280),
                (const char (*)[31])"fromJson for: aiGroupID fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1344),
                "overrideDefendAreaRange",
                (const std::allocator<char> *)(v2 + 128));
              override_defend_area_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1344));
              std::string::~string((void *)(v2 + 1344));
              *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( override_defend_area_range_ptr
                && !fromJson<bool>(override_defend_area_range_ptr, &this->override_defend_area_range) )
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
                  "./src/json_data_auto/ConfigLevelMonster.cpp",
                  "fromJson",
                  141);
                common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  (common::milog::MiLogStream *const)(v2 + 1408),
                  (const char (*)[45])"fromJson for: overrideDefendAreaRange fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1472),
                  "defendAreaRange",
                  (const std::allocator<char> *)(v2 + 144));
                defend_area_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1472));
                std::string::~string((void *)(v2 + 1472));
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( defend_area_range_ptr && !fromJson<float>(defend_area_range_ptr, &this->defend_area_range) )
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
                    "./src/json_data_auto/ConfigLevelMonster.cpp",
                    "fromJson",
                    153);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1536),
                    (const char (*)[37])"fromJson for: defendAreaRange fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1600),
                    "overrideForceAlertDistance",
                    (const std::allocator<char> *)(v2 + 160));
                  override_force_alert_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1600));
                  std::string::~string((void *)(v2 + 1600));
                  *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( override_force_alert_distance_ptr
                    && !fromJson<bool>(override_force_alert_distance_ptr, &this->override_force_alert_distance) )
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
                      "./src/json_data_auto/ConfigLevelMonster.cpp",
                      "fromJson",
                      165);
                    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                      (common::milog::MiLogStream *const)(v2 + 1664),
                      (const char (*)[48])"fromJson for: overrideForceAlertDistance fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1728),
                      "forceAlertDistanceLimit",
                      (const std::allocator<char> *)(v2 + 176));
                    force_alert_distance_limit_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1728));
                    std::string::~string((void *)(v2 + 1728));
                    *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( force_alert_distance_limit_ptr
                      && !fromJson<float>(force_alert_distance_limit_ptr, &this->force_alert_distance_limit) )
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
                        "./src/json_data_auto/ConfigLevelMonster.cpp",
                        "fromJson",
                        177);
                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                        (common::milog::MiLogStream *const)(v2 + 1792),
                        (const char (*)[45])"fromJson for: forceAlertDistanceLimit fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1856),
                        "defendAreaID",
                        (const std::allocator<char> *)(v2 + 192));
                      defend_area_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1856));
                      std::string::~string((void *)(v2 + 1856));
                      *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( defend_area_id_ptr && !fromJson<unsigned int>(defend_area_id_ptr, &this->defend_area_id) )
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
                          "./src/json_data_auto/ConfigLevelMonster.cpp",
                          "fromJson",
                          189);
                        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                          (common::milog::MiLogStream *const)(v2 + 1920),
                          (const char (*)[34])"fromJson for: defendAreaID fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1984),
                          "wanderAreaID",
                          (const std::allocator<char> *)(v2 + 208));
                        wander_area_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1984));
                        std::string::~string((void *)(v2 + 1984));
                        *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( wander_area_id_ptr && !fromJson<unsigned int>(wander_area_id_ptr, &this->wander_area_id) )
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
                            "./src/json_data_auto/ConfigLevelMonster.cpp",
                            "fromJson",
                            201);
                          common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                            (common::milog::MiLogStream *const)(v2 + 2048),
                            (const char (*)[34])"fromJson for: wanderAreaID fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2112),
                            "overrideClearThreatTargetDistance",
                            (const std::allocator<char> *)(v2 + 224));
                          override_clear_threat_target_distance_ptr = jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 2112));
                          std::string::~string((void *)(v2 + 2112));
                          *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( override_clear_threat_target_distance_ptr
                            && !fromJson<bool>(
                                  override_clear_threat_target_distance_ptr,
                                  &this->override_clear_threat_target_distance) )
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
                              "./src/json_data_auto/ConfigLevelMonster.cpp",
                              "fromJson",
                              213);
                            common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                              (common::milog::MiLogStream *const)(v2 + 2176),
                              (const char (*)[55])"fromJson for: overrideClearThreatTargetDistance fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2240),
                              "clearThreatTargetDistance",
                              (const std::allocator<char> *)(v2 + 240));
                            clear_threat_target_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2240));
                            std::string::~string((void *)(v2 + 2240));
                            *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( clear_threat_target_distance_ptr
                              && !fromJson<float>(clear_threat_target_distance_ptr, &this->clear_threat_target_distance) )
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
                                "./src/json_data_auto/ConfigLevelMonster.cpp",
                                "fromJson",
                                225);
                              common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                (common::milog::MiLogStream *const)(v2 + 2304),
                                (const char (*)[47])"fromJson for: clearThreatTargetDistance fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2368),
                                "aiNeuronSetting",
                                (const std::allocator<char> *)(v2 + 256));
                              ai_neuron_setting_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2368));
                              std::string::~string((void *)(v2 + 2368));
                              *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( ai_neuron_setting_ptr
                                && !fromJson<std::string>(ai_neuron_setting_ptr, &this->ai_neuron_setting) )
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
                                  "./src/json_data_auto/ConfigLevelMonster.cpp",
                                  "fromJson",
                                  237);
                                common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2432),
                                  (const char (*)[37])"fromJson for: aiNeuronSetting fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2496),
                                  "aiSensingTemplate",
                                  (const std::allocator<char> *)(v2 + 272));
                                ai_sensing_template_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2496));
                                std::string::~string((void *)(v2 + 2496));
                                *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( ai_sensing_template_ptr
                                  && !fromJson<std::string>(ai_sensing_template_ptr, &this->ai_sensing_template) )
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
                                    "./src/json_data_auto/ConfigLevelMonster.cpp",
                                    "fromJson",
                                    249);
                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2560),
                                    (const char (*)[39])"fromJson for: aiSensingTemplate fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2624),
                                    "forceCombatOnSpawn",
                                    (const std::allocator<char> *)(v2 + 288));
                                  force_combat_on_spawn_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2624));
                                  std::string::~string((void *)(v2 + 2624));
                                  *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( force_combat_on_spawn_ptr
                                    && !fromJson<bool>(force_combat_on_spawn_ptr, &this->force_combat_on_spawn) )
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
                                      "./src/json_data_auto/ConfigLevelMonster.cpp",
                                      "fromJson",
                                      261);
                                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2688),
                                      (const char (*)[40])"fromJson for: forceCombatOnSpawn fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2752),
                                      "disableWander",
                                      (const std::allocator<char> *)(v2 + 304));
                                    disable_wander_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2752));
                                    std::string::~string((void *)(v2 + 2752));
                                    *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( disable_wander_ptr
                                      && !fromJson<bool>(disable_wander_ptr, &this->disable_wander) )
                                    {
                                      *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2816) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 2847) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2816, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2816),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ConfigLevelMonster.cpp",
                                        "fromJson",
                                        273);
                                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2816),
                                        (const char (*)[35])"fromJson for: disableWander fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2816));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2880),
                                        "standOnDistantMesh",
                                        (const std::allocator<char> *)(v2 + 320));
                                      stand_on_distant_mesh_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2880));
                                      std::string::~string((void *)(v2 + 2880));
                                      *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( stand_on_distant_mesh_ptr
                                        && !fromJson<bool>(stand_on_distant_mesh_ptr, &this->stand_on_distant_mesh) )
                                      {
                                        *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2944) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 2975) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2944, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2944),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ConfigLevelMonster.cpp",
                                          "fromJson",
                                          285);
                                        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2944),
                                          (const char (*)[40])"fromJson for: standOnDistantMesh fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2944));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3008),
                                          "landingPointID",
                                          (const std::allocator<char> *)(v2 + 336));
                                        landing_point_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3008));
                                        std::string::~string((void *)(v2 + 3008));
                                        *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( landing_point_id_ptr
                                          && !fromJson<unsigned int>(landing_point_id_ptr, &this->landing_point_id) )
                                        {
                                          *(_DWORD *)(((v2 + 3072) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3072) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3103) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3072, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3072),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ConfigLevelMonster.cpp",
                                            "fromJson",
                                            297);
                                          common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3072),
                                            (const char (*)[36])"fromJson for: landingPointID fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3072));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 352);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3136),
                                            "extractionPointID",
                                            (const std::allocator<char> *)(v2 + 352));
                                          extraction_point_id_ptr = jsonValueFind(
                                                                      jval,
                                                                      (const std::string *)(v2 + 3136));
                                          std::string::~string((void *)(v2 + 3136));
                                          *(_DWORD *)(((v2 + 3136) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 352);
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                          if ( extraction_point_id_ptr
                                            && !fromJson<unsigned int>(
                                                  extraction_point_id_ptr,
                                                  &this->extraction_point_id) )
                                          {
                                            *(_DWORD *)(((v2 + 3200) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3200) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3231) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3200, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3200),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ConfigLevelMonster.cpp",
                                              "fromJson",
                                              309);
                                            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3200),
                                              (const char (*)[39])"fromJson for: extractionPointID fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3200));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 368);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3264),
                                              "overrideUseNavmesh",
                                              (const std::allocator<char> *)(v2 + 368));
                                            override_use_navmesh_ptr = jsonValueFind(
                                                                         jval,
                                                                         (const std::string *)(v2 + 3264));
                                            std::string::~string((void *)(v2 + 3264));
                                            *(_DWORD *)(((v2 + 3264) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 368);
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                            if ( override_use_navmesh_ptr
                                              && !fromJson<bool>(override_use_navmesh_ptr, &this->override_use_navmesh) )
                                            {
                                              *(_DWORD *)(((v2 + 3328) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3328) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3359) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3328, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3328),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                "fromJson",
                                                321);
                                              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3328),
                                                (const char (*)[40])"fromJson for: overrideUseNavmesh fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3328));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 384);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3392),
                                                "useNavmesh",
                                                (const std::allocator<char> *)(v2 + 384));
                                              use_navmesh_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3392));
                                              std::string::~string((void *)(v2 + 3392));
                                              *(_DWORD *)(((v2 + 3392) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 384);
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                              if ( use_navmesh_ptr
                                                && !fromJson<bool>(use_navmesh_ptr, &this->use_navmesh) )
                                              {
                                                *(_DWORD *)(((v2 + 3456) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3456) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3487) >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3456, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3456),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                  "fromJson",
                                                  333);
                                                common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3456),
                                                  (const char (*)[32])"fromJson for: useNavmesh fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3456));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 400);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3520),
                                                  "overrideToTheMoon",
                                                  (const std::allocator<char> *)(v2 + 400));
                                                override_to_the_moon_ptr = jsonValueFind(
                                                                             jval,
                                                                             (const std::string *)(v2 + 3520));
                                                std::string::~string((void *)(v2 + 3520));
                                                *(_DWORD *)(((v2 + 3520) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 400);
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                                if ( override_to_the_moon_ptr
                                                  && !fromJson<bool>(
                                                        override_to_the_moon_ptr,
                                                        &this->override_to_the_moon) )
                                                {
                                                  *(_DWORD *)(((v2 + 3584) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3584) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3615) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3615) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3584, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3584),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                    "fromJson",
                                                    345);
                                                  common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3584),
                                                    (const char (*)[39])"fromJson for: overrideToTheMoon fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3584));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 416);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3648),
                                                    "useToTheMoon",
                                                    (const std::allocator<char> *)(v2 + 416));
                                                  use_to_the_moon_ptr = jsonValueFind(
                                                                          jval,
                                                                          (const std::string *)(v2 + 3648));
                                                  std::string::~string((void *)(v2 + 3648));
                                                  *(_DWORD *)(((v2 + 3648) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 416);
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                  if ( use_to_the_moon_ptr
                                                    && !fromJson<bool>(use_to_the_moon_ptr, &this->use_to_the_moon) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3712) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3712) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3743) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3743) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3712, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3712),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                      "fromJson",
                                                      357);
                                                    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3712),
                                                      (const char (*)[34])"fromJson for: useToTheMoon fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3712));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 432);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3776),
                                                      "billboard_HasUIBar",
                                                      (const std::allocator<char> *)(v2 + 432));
                                                    billboard__has_uibar_ptr = jsonValueFind(
                                                                                 jval,
                                                                                 (const std::string *)(v2 + 3776));
                                                    std::string::~string((void *)(v2 + 3776));
                                                    *(_DWORD *)(((v2 + 3776) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 432);
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                    if ( billboard__has_uibar_ptr
                                                      && !fromJson<bool>(
                                                            billboard__has_uibar_ptr,
                                                            &this->billboard__has_uibar) )
                                                    {
                                                      *(_DWORD *)(((v2 + 3840) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 3840) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 3871) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 3871) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 3840, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 3840),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                        "fromJson",
                                                        369);
                                                      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 3840),
                                                        (const char (*)[40])"fromJson for: billboard_HasUIBar fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3840));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 448);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 3904),
                                                        "billboard_ShowUIBarDis",
                                                        (const std::allocator<char> *)(v2 + 448));
                                                      billboard__show_uibar_dis_ptr = jsonValueFind(
                                                                                        jval,
                                                                                        (const std::string *)(v2 + 3904));
                                                      std::string::~string((void *)(v2 + 3904));
                                                      *(_DWORD *)(((v2 + 3904) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 448);
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                      if ( billboard__show_uibar_dis_ptr
                                                        && !fromJson<float>(
                                                              billboard__show_uibar_dis_ptr,
                                                              &this->billboard__show_uibar_dis) )
                                                      {
                                                        *(_DWORD *)(((v2 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 3968) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 3999) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 3999) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 3968, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 3968),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                          "fromJson",
                                                          381);
                                                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 3968),
                                                          (const char (*)[44])"fromJson for: billboard_ShowUIBarDis fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3968));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 464);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4032),
                                                          "billboard_HideUIBarDis",
                                                          (const std::allocator<char> *)(v2 + 464));
                                                        billboard__hide_uibar_dis_ptr = jsonValueFind(
                                                                                          jval,
                                                                                          (const std::string *)(v2 + 4032));
                                                        std::string::~string((void *)(v2 + 4032));
                                                        *(_DWORD *)(((v2 + 4032) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 464);
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                        if ( billboard__hide_uibar_dis_ptr
                                                          && !fromJson<float>(
                                                                billboard__hide_uibar_dis_ptr,
                                                                &this->billboard__hide_uibar_dis) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4096) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4127) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4127) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4096, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4096),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                            "fromJson",
                                                            393);
                                                          common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4096),
                                                            (const char (*)[44])"fromJson for: billboard_HideUIBarDis fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4096));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 480);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4160),
                                                            "billboard_UIBarNeedEnterCombat",
                                                            (const std::allocator<char> *)(v2 + 480));
                                                          billboard__uibar_need_enter_combat_ptr = jsonValueFind(
                                                                                                     jval,
                                                                                                     (const std::string *)(v2 + 4160));
                                                          std::string::~string((void *)(v2 + 4160));
                                                          *(_DWORD *)(((v2 + 4160) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 480);
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                          if ( billboard__uibar_need_enter_combat_ptr
                                                            && !fromJson<bool>(
                                                                  billboard__uibar_need_enter_combat_ptr,
                                                                  &this->billboard__uibar_need_enter_combat) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4224) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 4255) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4224, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4224),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                              "fromJson",
                                                              405);
                                                            common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4224),
                                                              (const char (*)[52])"fromJson for: billboard_UIBarNeedEnterCombat fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4224));
                                                            v5 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 496);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4288),
                                                              "billboard_HpBarStyle",
                                                              (const std::allocator<char> *)(v2 + 496));
                                                            billboard__hp_bar_style_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 4288));
                                                            std::string::~string((void *)(v2 + 4288));
                                                            *(_DWORD *)(((v2 + 4288) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 496);
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                            if ( !billboard__hp_bar_style_ptr )
                                                              goto LABEL_156;
                                                            *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4352) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4383) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 4383) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4352, 32LL);
                                                            }
                                                            Json::Value::asString[abi:cxx11](
                                                              (Json::String *)(v2 + 4352),
                                                              (Json::Value_0 *)billboard__hp_bar_style_ptr);
                                                            v6 = !data::enumStrToVal(
                                                                    (const std::string *)(v2 + 4352),
                                                                    &this->billboard__hp_bar_style);
                                                            std::string::~string((void *)(v2 + 4352));
                                                            *(_DWORD *)(((v2 + 4352) >> 3) + 0x7FFF8000) = -117901064;
                                                            if ( v6 )
                                                            {
                                                              *(_DWORD *)(((v2 + 4416) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4416) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4447) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4447) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4416, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4416),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                                "fromJson",
                                                                417);
                                                              common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4416),
                                                                (const char (*)[42])"fromJson for: billboard_HpBarStyle fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4416));
                                                              v5 = 0;
                                                            }
                                                            else
                                                            {
LABEL_156:
                                                              *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 512);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4480),
                                                                "billboard_MultiBarSortId",
                                                                (const std::allocator<char> *)(v2 + 512));
                                                              billboard__multi_bar_sort_id_ptr = jsonValueFind(
                                                                                                   jval,
                                                                                                   (const std::string *)(v2 + 4480));
                                                              std::string::~string((void *)(v2 + 4480));
                                                              *(_DWORD *)(((v2 + 4480) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 512);
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                              if ( billboard__multi_bar_sort_id_ptr
                                                                && !fromJson<unsigned int>(
                                                                      billboard__multi_bar_sort_id_ptr,
                                                                      &this->billboard__multi_bar_sort_id) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4544) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4544) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4575) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4575) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4544, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4544),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                                  "fromJson",
                                                                  429);
                                                                common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4544),
                                                                  (const char (*)[46])"fromJson for: billboard_MultiBarSortId fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4544));
                                                                v5 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 528);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4608),
                                                                  "billboard_MultiBarNum",
                                                                  (const std::allocator<char> *)(v2 + 528));
                                                                billboard__multi_bar_num_ptr = jsonValueFind(
                                                                                                 jval,
                                                                                                 (const std::string *)(v2 + 4608));
                                                                std::string::~string((void *)(v2 + 4608));
                                                                *(_DWORD *)(((v2 + 4608) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 528);
                                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                                if ( billboard__multi_bar_num_ptr
                                                                  && !fromJson<unsigned int>(
                                                                        billboard__multi_bar_num_ptr,
                                                                        &this->billboard__multi_bar_num) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 4672) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 4672) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 4703) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4703) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 4672, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 4672),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                                    "fromJson",
                                                                    441);
                                                                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 4672),
                                                                    (const char (*)[43])"fromJson for: billboard_MultiBarNum fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4672));
                                                                  v5 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 544);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 4736),
                                                                    "reuseNotRemoveAbilityTag",
                                                                    (const std::allocator<char> *)(v2 + 544));
                                                                  reuse_not_remove_ability_tag_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4736));
                                                                  std::string::~string((void *)(v2 + 4736));
                                                                  *(_DWORD *)(((v2 + 4736) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 544);
                                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( reuse_not_remove_ability_tag_ptr
                                                                    && !fromJson<std::string>(
                                                                          reuse_not_remove_ability_tag_ptr,
                                                                          &this->reuse_not_remove_ability_tag) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 4800) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 4800) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 4831) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 4800, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 4800),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                                      "fromJson",
                                                                      453);
                                                                    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 4800),
                                                                      (const char (*)[46])"fromJson for: reuseNotRemoveAbilityTag fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4800));
                                                                    v5 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 560);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 4864),
                                                                      "hasSneakIndicator",
                                                                      (const std::allocator<char> *)(v2 + 560));
                                                                    has_sneak_indicator_ptr = jsonValueFind(
                                                                                                jval,
                                                                                                (const std::string *)(v2 + 4864));
                                                                    std::string::~string((void *)(v2 + 4864));
                                                                    *(_DWORD *)(((v2 + 4864) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 560);
                                                                    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( has_sneak_indicator_ptr
                                                                      && !fromJson<bool>(
                                                                            has_sneak_indicator_ptr,
                                                                            &this->has_sneak_indicator) )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 4928) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 4928) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 4959) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 4959) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 4928, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 4928),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        3u,
                                                                        "./src/json_data_auto/ConfigLevelMonster.cpp",
                                                                        "fromJson",
                                                                        465);
                                                                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 4928),
                                                                        (const char (*)[39])"fromJson for: hasSneakIndicator fails!");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4928));
                                                                      v5 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      v7 = ((_BYTE)this - 47) & 7;
                                                                      v8 = (*(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3)
                                                                                     + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000));
                                                                      if ( (_BYTE)v8 )
                                                                        __asan_report_store1(
                                                                          &this->is_json_loaded,
                                                                          v7,
                                                                          v8);
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
  v9 = v5;
  if ( v45 == (char *)v2 )
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8144) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF814C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8154) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF815C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8164) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF816C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8174) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF817C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8184) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF818C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8194) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF819C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81A4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81AC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81B4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81BC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81C4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81CC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81D4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81DC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81E4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81EC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF81F4) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF81FC) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8204) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF820C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8214) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF821C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8224) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF822C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8234) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF823C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8244) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF824C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8254) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF825C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8264) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF826C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 4992LL, v45);
  }
  return v9;
};

// Line 473: range 0000000011F6FF20-0000000011F70A06
int32_t __cdecl data::ConfigLevelMonsterUnit::getHashValue(const data::ConfigLevelMonsterUnit *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rsi
  __int64 v25; // rdx
  int32_t result; // eax
  char v27[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:474";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterUnit::getHashValue;
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
  common::tools::HashUtils::appendHash(this->group_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->map_inst_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->map_inst_id);
  }
  common::tools::HashUtils::appendHash(this->map_inst_id, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->spawned_by_evt_pattern >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->spawned_by_evt_pattern, v2 + 32, &this->spawned_by_evt_pattern);
  common::tools::HashUtils::appendHash(this->spawned_by_evt_pattern, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->route_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->route_id);
  }
  common::tools::HashUtils::appendHash(this->route_id, (int32_t *)(v2 + 32));
  HashValue = data::ConfigLevelMonsterAIPatrol::getHashValue(&this->ai_patrol_setting);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->ai_group_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->ai_group_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->ai_group_id);
  }
  common::tools::HashUtils::appendHash(this->ai_group_id, (int32_t *)(v2 + 32));
  v6 = ((_BYTE)this + 28) & 7;
  v7 = (*(_BYTE *)(((unsigned __int64)&this->override_defend_area_range >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)&this->override_defend_area_range >> 3) + 0x7FFF8000));
  if ( (_BYTE)v7 )
    __asan_report_load1(&this->override_defend_area_range, v6, v7);
  common::tools::HashUtils::appendHash(this->override_defend_area_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->defend_area_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->defend_area_range);
  }
  common::tools::HashUtils::appendHash(this->defend_area_range, (int32_t *)(v2 + 32));
  v8 = ((_BYTE)this + 36) & 7;
  v9 = (*(_BYTE *)(((unsigned __int64)&this->override_force_alert_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v8 >= *(_BYTE *)(((unsigned __int64)&this->override_force_alert_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v9 )
    __asan_report_load1(&this->override_force_alert_distance, v8, v9);
  common::tools::HashUtils::appendHash(this->override_force_alert_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->force_alert_distance_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->force_alert_distance_limit);
  }
  common::tools::HashUtils::appendHash(this->force_alert_distance_limit, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->defend_area_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->defend_area_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->defend_area_id);
  }
  common::tools::HashUtils::appendHash(this->defend_area_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->wander_area_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wander_area_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wander_area_id);
  }
  common::tools::HashUtils::appendHash(this->wander_area_id, (int32_t *)(v2 + 32));
  v10 = ((_BYTE)this + 52) & 7;
  v11 = (*(_BYTE *)(((unsigned __int64)&this->override_clear_threat_target_distance >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v10 >= *(_BYTE *)(((unsigned __int64)&this->override_clear_threat_target_distance >> 3) + 0x7FFF8000));
  if ( (_BYTE)v11 )
    __asan_report_load1(&this->override_clear_threat_target_distance, v10, v11);
  common::tools::HashUtils::appendHash(this->override_clear_threat_target_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->clear_threat_target_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->clear_threat_target_distance);
  }
  common::tools::HashUtils::appendHash(this->clear_threat_target_distance, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->ai_neuron_setting, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->ai_sensing_template, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->force_combat_on_spawn >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->force_combat_on_spawn, v2 + 32, &this->force_combat_on_spawn);
  common::tools::HashUtils::appendHash(this->force_combat_on_spawn, (int32_t *)(v2 + 32));
  v12 = ((_BYTE)this - 127) & 7;
  v13 = (*(_BYTE *)(((unsigned __int64)&this->disable_wander >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v12 >= *(_BYTE *)(((unsigned __int64)&this->disable_wander >> 3) + 0x7FFF8000));
  if ( (_BYTE)v13 )
    __asan_report_load1(&this->disable_wander, v12, v13);
  common::tools::HashUtils::appendHash(this->disable_wander, (int32_t *)(v2 + 32));
  v14 = ((_BYTE)this - 126) & 7;
  v15 = (*(_BYTE *)(((unsigned __int64)&this->stand_on_distant_mesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v14 >= *(_BYTE *)(((unsigned __int64)&this->stand_on_distant_mesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v15 )
    __asan_report_load1(&this->stand_on_distant_mesh, v14, v15);
  common::tools::HashUtils::appendHash(this->stand_on_distant_mesh, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->landing_point_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->landing_point_id >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->landing_point_id);
  }
  common::tools::HashUtils::appendHash(this->landing_point_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->extraction_point_id >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->extraction_point_id >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->extraction_point_id);
  }
  common::tools::HashUtils::appendHash(this->extraction_point_id, (int32_t *)(v2 + 32));
  v16 = ((_BYTE)this - 116) & 7;
  v17 = (*(_BYTE *)(((unsigned __int64)&this->override_use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v16 >= *(_BYTE *)(((unsigned __int64)&this->override_use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v17 )
    __asan_report_load1(&this->override_use_navmesh, v16, v17);
  common::tools::HashUtils::appendHash(this->override_use_navmesh, (int32_t *)(v2 + 32));
  v18 = ((_BYTE)this - 115) & 7;
  v19 = (*(_BYTE *)(((unsigned __int64)&this->use_navmesh >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v18 >= *(_BYTE *)(((unsigned __int64)&this->use_navmesh >> 3) + 0x7FFF8000));
  if ( (_BYTE)v19 )
    __asan_report_load1(&this->use_navmesh, v18, v19);
  common::tools::HashUtils::appendHash(this->use_navmesh, (int32_t *)(v2 + 32));
  v20 = ((_BYTE)this - 114) & 7;
  v21 = (*(_BYTE *)(((unsigned __int64)&this->override_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v20 >= *(_BYTE *)(((unsigned __int64)&this->override_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v21 )
    __asan_report_load1(&this->override_to_the_moon, v20, v21);
  common::tools::HashUtils::appendHash(this->override_to_the_moon, (int32_t *)(v2 + 32));
  v22 = ((_BYTE)this - 113) & 7;
  v23 = (*(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v22 >= *(_BYTE *)(((unsigned __int64)&this->use_to_the_moon >> 3) + 0x7FFF8000));
  if ( (_BYTE)v23 )
    __asan_report_load1(&this->use_to_the_moon, v22, v23);
  common::tools::HashUtils::appendHash(this->use_to_the_moon, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->billboard__has_uibar >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->billboard__has_uibar, v2 + 32, &this->billboard__has_uibar);
  common::tools::HashUtils::appendHash(this->billboard__has_uibar, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__show_uibar_dis >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->billboard__show_uibar_dis);
  }
  common::tools::HashUtils::appendHash(this->billboard__show_uibar_dis, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__hide_uibar_dis >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->billboard__hide_uibar_dis);
  }
  common::tools::HashUtils::appendHash(this->billboard__hide_uibar_dis, (int32_t *)(v2 + 32));
  v24 = ((_BYTE)this - 100) & 7;
  v25 = (*(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v24 >= *(_BYTE *)(((unsigned __int64)&this->billboard__uibar_need_enter_combat >> 3) + 0x7FFF8000));
  if ( (_BYTE)v25 )
    __asan_report_load1(&this->billboard__uibar_need_enter_combat, v24, v25);
  common::tools::HashUtils::appendHash(this->billboard__uibar_need_enter_combat, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__hp_bar_style >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->billboard__hp_bar_style);
  }
  common::tools::HashUtils::appendHash(this->billboard__hp_bar_style, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_sort_id >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->billboard__multi_bar_sort_id);
  }
  common::tools::HashUtils::appendHash(this->billboard__multi_bar_sort_id, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->billboard__multi_bar_num >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->billboard__multi_bar_num);
  }
  common::tools::HashUtils::appendHash(this->billboard__multi_bar_num, (int32_t *)(v2 + 32));
  common::tools::HashUtils::appendHash(&this->reuse_not_remove_ability_tag, (int32_t *)(v2 + 32));
  if ( *(char *)(((unsigned __int64)&this->has_sneak_indicator >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->has_sneak_indicator, v2 + 32, &this->has_sneak_indicator);
  common::tools::HashUtils::appendHash(this->has_sneak_indicator, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v27 == (char *)v2 )
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

// Line 513: range 0000000011F70A07-0000000011F70E47
bool __cdecl data::vecFromJson(const Json::Value *jval, data::LevelMonsterList *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::ConfigLevelMonsterUnit *v8; // rdx
  unsigned __int64 v9; // rax
  bool result; // al
  int v11; // [rsp+0h] [rbp-1E0h]
  char v12; // [rsp+8h] [rbp-1D8h]
  bool v13; // [rsp+Fh] [rbp-1D1h]
  uint32_t i; // [rsp+24h] [rbp-1BCh]
  const Json::Value *elem_jval; // [rsp+28h] [rbp-1B8h]
  char v16[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 216 8 elem:519";
  *(_QWORD *)(v2 + 16) = data::vecFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862729] = -218103808;
  v4[536862730] = -202116109;
  v4[536862731] = -202116109;
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
      *(_DWORD *)(v6 + 16) = 0;
      *(_DWORD *)(v6 + 20) = 0;
      *(_WORD *)(v6 + 24) = 0;
      *(_BYTE *)(v6 + 26) = 0;
      data::ConfigLevelMonsterUnit::ConfigLevelMonsterUnit((data::ConfigLevelMonsterUnit *const)(v2 + 96));
      if ( !data::ConfigLevelMonsterUnit::fromJson((data::ConfigLevelMonsterUnit *const)(v2 + 96), elem_jval) )
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
          "./src/json_data_auto/ConfigLevelMonster.cpp",
          "vecFromJson",
          522);
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
        v8 = std::move<data::ConfigLevelMonsterUnit &>((data::ConfigLevelMonsterUnit *)(v2 + 96));
        std::vector<data::ConfigLevelMonsterUnit>::emplace_back<data::ConfigLevelMonsterUnit>(v, v8, v8);
        v7 = 1;
      }
      data::ConfigLevelMonsterUnit::~ConfigLevelMonsterUnit((data::ConfigLevelMonsterUnit *const)(v2 + 96));
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
    *(_DWORD *)(v9 + 16) = -117901064;
    *(_DWORD *)(v9 + 20) = -117901064;
    *(_WORD *)(v9 + 24) = -1800;
    *(_BYTE *)(v9 + 26) = -8;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 532: range 0000000011F70E48-0000000011F71094
int32_t __cdecl data::getVecHashValue(const data::LevelMonsterList *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::ConfigLevelMonsterUnit*,std::vector<data::ConfigLevelMonsterUnit> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:533 64 8 15 __for_begin:534 96 8 13 __for_end:534";
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
  *(std::vector<data::ConfigLevelMonsterUnit>::const_iterator *)(v2 + 64) = std::vector<data::ConfigLevelMonsterUnit>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::ConfigLevelMonsterUnit>::const_iterator *)(v2 + 96) = std::vector<data::ConfigLevelMonsterUnit>::end(vec);
  while ( __gnu_cxx::operator!=<data::ConfigLevelMonsterUnit const*,std::vector<data::ConfigLevelMonsterUnit>>(
            (const __gnu_cxx::__normal_iterator<const data::ConfigLevelMonsterUnit*,std::vector<data::ConfigLevelMonsterUnit> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::ConfigLevelMonsterUnit*,std::vector<data::ConfigLevelMonsterUnit> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::ConfigLevelMonsterUnit const*,std::vector<data::ConfigLevelMonsterUnit>>::operator*((const __gnu_cxx::__normal_iterator<const data::ConfigLevelMonsterUnit*,std::vector<data::ConfigLevelMonsterUnit> > *const)(v2 + 64));
    HashValue = data::ConfigLevelMonsterUnit::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::ConfigLevelMonsterUnit const*,std::vector<data::ConfigLevelMonsterUnit>>::operator++((__gnu_cxx::__normal_iterator<const data::ConfigLevelMonsterUnit*,std::vector<data::ConfigLevelMonsterUnit> > *const)(v2 + 64));
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

// Line 543: range 0000000011F71096-0000000011F71679
bool __cdecl data::ConfigLevelMonsterData::fromJson(data::ConfigLevelMonsterData *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::LevelMonsterList *p_monsters; // rsi
  const Json::Value *scene_id_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *monsters_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterData::fromJson;
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
      "./src/json_data_auto/ConfigLevelMonster.cpp",
      "fromJson",
      553);
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
      "monsters",
      (const std::allocator<char> *)(v2 + 48));
    p_monsters = (data::LevelMonsterList *)(v2 + 192);
    monsters_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( monsters_ptr && (p_monsters = &this->monsters, !data::vecFromJson(monsters_ptr, &this->monsters)) )
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
        "./src/json_data_auto/ConfigLevelMonster.cpp",
        "fromJson",
        565);
      common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[30])"fromJson for: monsters fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, p_monsters, &this->is_json_loaded);
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

// Line 573: range 0000000011F7167A-0000000011F717FC
int32_t __cdecl data::ConfigLevelMonsterData::getHashValue(const data::ConfigLevelMonsterData *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:574";
  *(_QWORD *)(v2 + 16) = data::ConfigLevelMonsterData::getHashValue;
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
  VecHashValue = data::getVecHashValue(&this->monsters);
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
