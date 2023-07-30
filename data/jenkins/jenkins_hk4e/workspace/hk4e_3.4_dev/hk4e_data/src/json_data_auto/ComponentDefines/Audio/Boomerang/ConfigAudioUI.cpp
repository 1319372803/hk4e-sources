// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp

// Line 20: range 0000000013B80FCA-0000000013B815B2
bool __cdecl data::AudioUiSupport::fromJson(data::AudioUiSupport *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  __int64 v6; // rsi
  __int64 v7; // rdx
  const Json::Value *combo_rtpc_key_ptr; // [rsp+10h] [rbp-170h]
  const Json::Value *countdown_ptr; // [rsp+18h] [rbp-168h]
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
  *(_QWORD *)(v2 + 16) = data::AudioUiSupport::fromJson;
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
    "comboRtpcKey",
    (const std::allocator<char> *)(v2 + 32));
  combo_rtpc_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( combo_rtpc_key_ptr && !data::ConfigWwiseString::fromJson(&this->combo_rtpc_key, combo_rtpc_key_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: comboRtpcKey fails!");
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
      "countdown",
      (const std::allocator<char> *)(v2 + 48));
    countdown_ptr = jsonValueFind(jval, (const std::string *)(v2 + 192));
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( countdown_ptr && !fromJson<float>(countdown_ptr, &this->countdown) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        (common::milog::MiLogStream *const)(v2 + 256),
        (const char (*)[31])"fromJson for: countdown fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      result = 0;
    }
    else
    {
      v6 = ((_BYTE)this + 44) & 7;
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

// Line 50: range 0000000013B815B4-0000000013B81739
int32_t __cdecl data::AudioUiSupport::getHashValue(const data::AudioUiSupport *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:51";
  *(_QWORD *)(v2 + 16) = data::AudioUiSupport::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->combo_rtpc_key);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->countdown >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->countdown >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->countdown);
  }
  common::tools::HashUtils::appendHash(this->countdown, (int32_t *)(v2 + 32));
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

// Line 59: range 0000000013B8173A-0000000013B81A8F
bool __cdecl data::AudioUiEquip::fromJson(data::AudioUiEquip *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  const Json::Value *v5; // rsi
  bool result; // al
  const Json::Value *equip_on_event_ptr; // [rsp+18h] [rbp-E8h]
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
  *(_QWORD *)(v2 + 16) = data::AudioUiEquip::fromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862723] = -218959118;
  v4[536862725] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 64),
    "equipOnEvent",
    (const std::allocator<char> *)(v2 + 48));
  v5 = (const Json::Value *)(v2 + 64);
  equip_on_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( equip_on_event_ptr
    && (v5 = equip_on_event_ptr, !data::ConfigWwiseString::fromJson(&this->equip_on_event, equip_on_event_ptr)) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
      "fromJson",
      69);
    common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
      (common::milog::MiLogStream *const)(v2 + 128),
      (const char (*)[34])"fromJson for: equipOnEvent fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = 0;
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->is_json_loaded, v5, &this->is_json_loaded);
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

// Line 77: range 0000000013B81A90-0000000013B81BCA
int32_t __cdecl data::AudioUiEquip::getHashValue(const data::AudioUiEquip *const this)
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
  *(_QWORD *)(v2 + 8) = "1 32 4 12 hash_code:78";
  *(_QWORD *)(v2 + 16) = data::AudioUiEquip::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->equip_on_event);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
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

// Line 85: range 0000000013B81BCC-0000000013B88AAC
bool __cdecl data::ConfigAudioUi::fromJson(data::ConfigAudioUi *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  data::ConfigWwiseIntegerMap *p_loading_events_map; // rsi
  bool v7; // bl
  const Json::Value *support_ptr; // [rsp+10h] [rbp-1A60h]
  const Json::Value *equip_ptr; // [rsp+18h] [rbp-1A58h]
  const Json::Value *open_chest_event_ptr; // [rsp+20h] [rbp-1A50h]
  const Json::Value *join_team_event_ptr; // [rsp+28h] [rbp-1A48h]
  const Json::Value *element_state_key_ptr; // [rsp+30h] [rbp-1A40h]
  const Json::Value *element_state_default_value_ptr; // [rsp+38h] [rbp-1A38h]
  const Json::Value *element_state_value_map_ptr; // [rsp+40h] [rbp-1A30h]
  const Json::Value *character_appear_event_ptr; // [rsp+48h] [rbp-1A28h]
  const Json::Value *add_map_pin_event_ptr; // [rsp+50h] [rbp-1A20h]
  const Json::Value *remove_map_pin_event_ptr; // [rsp+58h] [rbp-1A18h]
  const Json::Value *enable_element_view_event_ptr; // [rsp+60h] [rbp-1A10h]
  const Json::Value *disable_element_view_event_ptr; // [rsp+68h] [rbp-1A08h]
  const Json::Value *dungeon_victory_event_ptr; // [rsp+70h] [rbp-1A00h]
  const Json::Value *dungeon_defeat_event_ptr; // [rsp+78h] [rbp-19F8h]
  const Json::Value *change_weapon_event_ptr; // [rsp+80h] [rbp-19F0h]
  const Json::Value *wear_relic_event_ptr; // [rsp+88h] [rbp-19E8h]
  const Json::Value *takeoff_relic_event_ptr; // [rsp+90h] [rbp-19E0h]
  const Json::Value *select_avatar_relic_event_ptr; // [rsp+98h] [rbp-19D8h]
  const Json::Value *add_equip_material_event_ptr; // [rsp+A0h] [rbp-19D0h]
  const Json::Value *talent_unlock_event_ptr; // [rsp+A8h] [rbp-19C8h]
  const Json::Value *change_avatar_success_event_ptr; // [rsp+B0h] [rbp-19C0h]
  const Json::Value *change_avatar_failed_event_ptr; // [rsp+B8h] [rbp-19B8h]
  const Json::Value *select_main_quest_event_ptr; // [rsp+C0h] [rbp-19B0h]
  const Json::Value *team_avatar_hold_up_ptr; // [rsp+C8h] [rbp-19A8h]
  const Json::Value *team_avatar_hold_down_ptr; // [rsp+D0h] [rbp-19A0h]
  const Json::Value *team_avatar_click_ptr; // [rsp+D8h] [rbp-1998h]
  const Json::Value *bag_drop_item_ptr; // [rsp+E0h] [rbp-1990h]
  const Json::Value *mail_delete_event_ptr; // [rsp+E8h] [rbp-1988h]
  const Json::Value *item_in_cdevent_ptr; // [rsp+F0h] [rbp-1980h]
  const Json::Value *pick_up_event_ptr; // [rsp+F8h] [rbp-1978h]
  const Json::Value *player_level_btn_event_ptr; // [rsp+100h] [rbp-1970h]
  const Json::Value *chest_pickup_fail_event_ptr; // [rsp+108h] [rbp-1968h]
  const Json::Value *enter_dungeon_success_event_ptr; // [rsp+110h] [rbp-1960h]
  const Json::Value *open_page_default_event_ptr; // [rsp+118h] [rbp-1958h]
  const Json::Value *close_page_default_event_ptr; // [rsp+120h] [rbp-1950h]
  const Json::Value *open_page_custom_events_ptr; // [rsp+128h] [rbp-1948h]
  const Json::Value *close_page_custom_events_ptr; // [rsp+130h] [rbp-1940h]
  const Json::Value *video_start_default_event_ptr; // [rsp+138h] [rbp-1938h]
  const Json::Value *video_end_default_event_ptr; // [rsp+140h] [rbp-1930h]
  const Json::Value *video_start_custom_events_ptr; // [rsp+148h] [rbp-1928h]
  const Json::Value *video_end_custom_events_ptr; // [rsp+150h] [rbp-1920h]
  const Json::Value *default_enable_delay_count_ptr; // [rsp+158h] [rbp-1918h]
  const Json::Value *character_select_music_end_event_ptr; // [rsp+160h] [rbp-1910h]
  const Json::Value *loading_events_map_ptr; // [rsp+168h] [rbp-1908h]
  char v54[6400]; // [rsp+170h] [rbp-1900h] BYREF

  v2 = (unsigned __int64)v54;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_7(6368LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "132 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                        " <unknown> 128 1 9 <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unkn"
                        "own> 208 1 9 <unknown> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 2"
                        "88 1 9 <unknown> 304 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9"
                        " <unknown> 384 1 9 <unknown> 400 1 9 <unknown> 416 1 9 <unknown> 432 1 9 <unknown> 448 1 9 <unkn"
                        "own> 464 1 9 <unknown> 480 1 9 <unknown> 496 1 9 <unknown> 512 1 9 <unknown> 528 1 9 <unknown> 5"
                        "44 1 9 <unknown> 560 1 9 <unknown> 576 1 9 <unknown> 592 1 9 <unknown> 608 1 9 <unknown> 624 1 9"
                        " <unknown> 640 1 9 <unknown> 656 1 9 <unknown> 672 1 9 <unknown> 688 1 9 <unknown> 704 1 9 <unkn"
                        "own> 720 1 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknow"
                        "n> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unk"
                        "nown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 "
                        "<unknown> 1632 32 9 <unknown> 1696 32 9 <unknown> 1760 32 9 <unknown> 1824 32 9 <unknown> 1888 3"
                        "2 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32 9 <unknown> 2144 32 9 <unknown> 22"
                        "08 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 2400 32 9 <unknown> 2464 32 9 <unknown"
                        "> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown> 2720 32 9 <unknown> 2784 32 9 <unk"
                        "nown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unknown> 3040 32 9 <unknown> 3104 32 9 "
                        "<unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <unknown> 3360 32 9 <unknown> 3424 3"
                        "2 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32 9 <unknown> 3680 32 9 <unknown> 37"
                        "44 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <unknown> 3936 32 9 <unknown> 4000 32 9 <unknown"
                        "> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 9 <unknown> 4256 32 9 <unknown> 4320 32 9 <unk"
                        "nown> 4384 32 9 <unknown> 4448 32 9 <unknown> 4512 32 9 <unknown> 4576 32 9 <unknown> 4640 32 9 "
                        "<unknown> 4704 32 9 <unknown> 4768 32 9 <unknown> 4832 32 9 <unknown> 4896 32 9 <unknown> 4960 3"
                        "2 9 <unknown> 5024 32 9 <unknown> 5088 32 9 <unknown> 5152 32 9 <unknown> 5216 32 9 <unknown> 52"
                        "80 32 9 <unknown> 5344 32 9 <unknown> 5408 32 9 <unknown> 5472 32 9 <unknown> 5536 32 9 <unknown"
                        "> 5600 32 9 <unknown> 5664 32 9 <unknown> 5728 32 9 <unknown> 5792 32 9 <unknown> 5856 32 9 <unk"
                        "nown> 5920 32 9 <unknown> 5984 32 9 <unknown> 6048 32 9 <unknown> 6112 32 9 <unknown> 6176 32 9 "
                        "<unknown> 6240 32 9 <unknown> 6304 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioUi::fromJson;
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
  v4[536862918] = -202116109;
  std::allocator<char>::allocator(v2 + 32);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 736),
    "support",
    (const std::allocator<char> *)(v2 + 32));
  support_ptr = jsonValueFind(jval, (const std::string *)(v2 + 736));
  std::string::~string((void *)(v2 + 736));
  *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( support_ptr && !data::AudioUiSupport::fromJson(&this->support, support_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
      "fromJson",
      95);
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
      (common::milog::MiLogStream *const)(v2 + 800),
      (const char (*)[29])"fromJson for: support fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 864),
      "equip",
      (const std::allocator<char> *)(v2 + 48));
    equip_ptr = jsonValueFind(jval, (const std::string *)(v2 + 864));
    std::string::~string((void *)(v2 + 864));
    *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( equip_ptr && !data::AudioUiEquip::fromJson(&this->equip, equip_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
        "fromJson",
        107);
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        (common::milog::MiLogStream *const)(v2 + 928),
        (const char (*)[27])"fromJson for: equip fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 992),
        "openChestEvent",
        (const std::allocator<char> *)(v2 + 64));
      open_chest_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 992));
      std::string::~string((void *)(v2 + 992));
      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 64);
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( open_chest_event_ptr && !data::ConfigWwiseString::fromJson(&this->open_chest_event, open_chest_event_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
          "fromJson",
          119);
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
          (common::milog::MiLogStream *const)(v2 + 1056),
          (const char (*)[36])"fromJson for: openChestEvent fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 1120),
          "joinTeamEvent",
          (const std::allocator<char> *)(v2 + 80));
        join_team_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1120));
        std::string::~string((void *)(v2 + 1120));
        *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 80);
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( join_team_event_ptr && !data::AudioOneTimeEvent::fromJson(&this->join_team_event, join_team_event_ptr) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
            "fromJson",
            131);
          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            (common::milog::MiLogStream *const)(v2 + 1184),
            (const char (*)[35])"fromJson for: joinTeamEvent fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 96);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 1248),
            "elementStateKey",
            (const std::allocator<char> *)(v2 + 96));
          element_state_key_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1248));
          std::string::~string((void *)(v2 + 1248));
          *(_DWORD *)(((v2 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 96);
          *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( element_state_key_ptr
            && !data::ConfigWwiseString::fromJson(&this->element_state_key, element_state_key_ptr) )
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
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
              "fromJson",
              143);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 1312),
              (const char (*)[37])"fromJson for: elementStateKey fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 112);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1376),
              "elementStateDefaultValue",
              (const std::allocator<char> *)(v2 + 112));
            element_state_default_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1376));
            std::string::~string((void *)(v2 + 1376));
            *(_DWORD *)(((v2 + 1376) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 112);
            *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
            if ( element_state_default_value_ptr
              && !data::ConfigWwiseString::fromJson(&this->element_state_default_value, element_state_default_value_ptr) )
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
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                "fromJson",
                155);
              common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                (common::milog::MiLogStream *const)(v2 + 1440),
                (const char (*)[46])"fromJson for: elementStateDefaultValue fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 128);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1504),
                "elementStateValueMap",
                (const std::allocator<char> *)(v2 + 128));
              element_state_value_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1504));
              std::string::~string((void *)(v2 + 1504));
              *(_DWORD *)(((v2 + 1504) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 128);
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              if ( element_state_value_map_ptr
                && !data::mapFromJson(element_state_value_map_ptr, &this->element_state_value_map) )
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
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                  "fromJson",
                  167);
                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                  (common::milog::MiLogStream *const)(v2 + 1568),
                  (const char (*)[42])"fromJson for: elementStateValueMap fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 144);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1632),
                  "characterAppearEvent",
                  (const std::allocator<char> *)(v2 + 144));
                character_appear_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1632));
                std::string::~string((void *)(v2 + 1632));
                *(_DWORD *)(((v2 + 1632) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 144);
                *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
                if ( character_appear_event_ptr
                  && !data::ConfigWwiseString::fromJson(&this->character_appear_event, character_appear_event_ptr) )
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
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                    "fromJson",
                    179);
                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    (common::milog::MiLogStream *const)(v2 + 1696),
                    (const char (*)[42])"fromJson for: characterAppearEvent fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 160);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1760),
                    "addMapPinEvent",
                    (const std::allocator<char> *)(v2 + 160));
                  add_map_pin_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1760));
                  std::string::~string((void *)(v2 + 1760));
                  *(_DWORD *)(((v2 + 1760) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 160);
                  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                  if ( add_map_pin_event_ptr
                    && !data::ConfigWwiseString::fromJson(&this->add_map_pin_event, add_map_pin_event_ptr) )
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
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                      "fromJson",
                      191);
                    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                      (common::milog::MiLogStream *const)(v2 + 1824),
                      (const char (*)[36])"fromJson for: addMapPinEvent fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1824));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 176);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1888),
                      "removeMapPinEvent",
                      (const std::allocator<char> *)(v2 + 176));
                    remove_map_pin_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1888));
                    std::string::~string((void *)(v2 + 1888));
                    *(_DWORD *)(((v2 + 1888) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 176);
                    *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                    if ( remove_map_pin_event_ptr
                      && !data::ConfigWwiseString::fromJson(&this->remove_map_pin_event, remove_map_pin_event_ptr) )
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
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                        "fromJson",
                        203);
                      common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                        (common::milog::MiLogStream *const)(v2 + 1952),
                        (const char (*)[39])"fromJson for: removeMapPinEvent fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1952));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 192);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 2016),
                        "enableElementViewEvent",
                        (const std::allocator<char> *)(v2 + 192));
                      enable_element_view_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2016));
                      std::string::~string((void *)(v2 + 2016));
                      *(_DWORD *)(((v2 + 2016) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 192);
                      *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                      if ( enable_element_view_event_ptr
                        && !data::ConfigWwiseString::fromJson(
                              &this->enable_element_view_event,
                              enable_element_view_event_ptr) )
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
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                          "fromJson",
                          215);
                        common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          (common::milog::MiLogStream *const)(v2 + 2080),
                          (const char (*)[44])"fromJson for: enableElementViewEvent fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2080));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 208);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 2144),
                          "disableElementViewEvent",
                          (const std::allocator<char> *)(v2 + 208));
                        disable_element_view_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2144));
                        std::string::~string((void *)(v2 + 2144));
                        *(_DWORD *)(((v2 + 2144) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 208);
                        *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                        if ( disable_element_view_event_ptr
                          && !data::ConfigWwiseString::fromJson(
                                &this->disable_element_view_event,
                                disable_element_view_event_ptr) )
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
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                            "fromJson",
                            227);
                          common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                            (common::milog::MiLogStream *const)(v2 + 2208),
                            (const char (*)[45])"fromJson for: disableElementViewEvent fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2208));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 224);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 2272),
                            "dungeonVictoryEvent",
                            (const std::allocator<char> *)(v2 + 224));
                          dungeon_victory_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2272));
                          std::string::~string((void *)(v2 + 2272));
                          *(_DWORD *)(((v2 + 2272) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 224);
                          *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                          if ( dungeon_victory_event_ptr
                            && !data::ConfigWwiseString::fromJson(
                                  &this->dungeon_victory_event,
                                  dungeon_victory_event_ptr) )
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
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                              "fromJson",
                              239);
                            common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                              (common::milog::MiLogStream *const)(v2 + 2336),
                              (const char (*)[41])"fromJson for: dungeonVictoryEvent fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2336));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 240);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2400),
                              "dungeonDefeatEvent",
                              (const std::allocator<char> *)(v2 + 240));
                            dungeon_defeat_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2400));
                            std::string::~string((void *)(v2 + 2400));
                            *(_DWORD *)(((v2 + 2400) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 240);
                            *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                            if ( dungeon_defeat_event_ptr
                              && !data::ConfigWwiseString::fromJson(
                                    &this->dungeon_defeat_event,
                                    dungeon_defeat_event_ptr) )
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
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                "fromJson",
                                251);
                              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                (common::milog::MiLogStream *const)(v2 + 2464),
                                (const char (*)[40])"fromJson for: dungeonDefeatEvent fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2464));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 256);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2528),
                                "changeWeaponEvent",
                                (const std::allocator<char> *)(v2 + 256));
                              change_weapon_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2528));
                              std::string::~string((void *)(v2 + 2528));
                              *(_DWORD *)(((v2 + 2528) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 256);
                              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                              if ( change_weapon_event_ptr
                                && !data::ConfigWwiseString::fromJson(
                                      &this->change_weapon_event,
                                      change_weapon_event_ptr) )
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
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                  "fromJson",
                                  263);
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2592),
                                  (const char (*)[39])"fromJson for: changeWeaponEvent fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2592));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 272);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2656),
                                  "wearRelicEvent",
                                  (const std::allocator<char> *)(v2 + 272));
                                wear_relic_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2656));
                                std::string::~string((void *)(v2 + 2656));
                                *(_DWORD *)(((v2 + 2656) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 272);
                                *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                                if ( wear_relic_event_ptr
                                  && !data::ConfigWwiseString::fromJson(&this->wear_relic_event, wear_relic_event_ptr) )
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
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                    "fromJson",
                                    275);
                                  common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2720),
                                    (const char (*)[36])"fromJson for: wearRelicEvent fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2720));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 288);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2784),
                                    "takeoffRelicEvent",
                                    (const std::allocator<char> *)(v2 + 288));
                                  takeoff_relic_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2784));
                                  std::string::~string((void *)(v2 + 2784));
                                  *(_DWORD *)(((v2 + 2784) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 288);
                                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                  if ( takeoff_relic_event_ptr
                                    && !data::ConfigWwiseString::fromJson(
                                          &this->takeoff_relic_event,
                                          takeoff_relic_event_ptr) )
                                  {
                                    *(_DWORD *)(((v2 + 2848) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2848) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 2879) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2848, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2848),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                      "fromJson",
                                      287);
                                    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2848),
                                      (const char (*)[39])"fromJson for: takeoffRelicEvent fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2848));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 304);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2912),
                                      "selectAvatarRelicEvent",
                                      (const std::allocator<char> *)(v2 + 304));
                                    select_avatar_relic_event_ptr = jsonValueFind(
                                                                      jval,
                                                                      (const std::string *)(v2 + 2912));
                                    std::string::~string((void *)(v2 + 2912));
                                    *(_DWORD *)(((v2 + 2912) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 304);
                                    *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                    if ( select_avatar_relic_event_ptr
                                      && !data::ConfigWwiseString::fromJson(
                                            &this->select_avatar_relic_event,
                                            select_avatar_relic_event_ptr) )
                                    {
                                      *(_DWORD *)(((v2 + 2976) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2976) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3007) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2976, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2976),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                        "fromJson",
                                        299);
                                      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2976),
                                        (const char (*)[44])"fromJson for: selectAvatarRelicEvent fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2976));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 320);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 3040),
                                        "addEquipMaterialEvent",
                                        (const std::allocator<char> *)(v2 + 320));
                                      add_equip_material_event_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 3040));
                                      std::string::~string((void *)(v2 + 3040));
                                      *(_DWORD *)(((v2 + 3040) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 320);
                                      *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                      if ( add_equip_material_event_ptr
                                        && !data::ConfigWwiseString::fromJson(
                                              &this->add_equip_material_event,
                                              add_equip_material_event_ptr) )
                                      {
                                        *(_DWORD *)(((v2 + 3104) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 3104) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3135) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 3104, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 3104),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                          "fromJson",
                                          311);
                                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                          (common::milog::MiLogStream *const)(v2 + 3104),
                                          (const char (*)[43])"fromJson for: addEquipMaterialEvent fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3104));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 336);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 3168),
                                          "talentUnlockEvent",
                                          (const std::allocator<char> *)(v2 + 336));
                                        talent_unlock_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 3168));
                                        std::string::~string((void *)(v2 + 3168));
                                        *(_DWORD *)(((v2 + 3168) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 336);
                                        *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                        if ( talent_unlock_event_ptr
                                          && !data::ConfigWwiseString::fromJson(
                                                &this->talent_unlock_event,
                                                talent_unlock_event_ptr) )
                                        {
                                          *(_DWORD *)(((v2 + 3232) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 3232) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3263) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 3232, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 3232),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                            "fromJson",
                                            323);
                                          common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                            (common::milog::MiLogStream *const)(v2 + 3232),
                                            (const char (*)[39])"fromJson for: talentUnlockEvent fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3232));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 352);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 3296),
                                            "changeAvatarSuccessEvent",
                                            (const std::allocator<char> *)(v2 + 352));
                                          change_avatar_success_event_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3296));
                                          std::string::~string((void *)(v2 + 3296));
                                          *(_DWORD *)(((v2 + 3296) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 352);
                                          *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                          if ( change_avatar_success_event_ptr
                                            && !data::ConfigWwiseString::fromJson(
                                                  &this->change_avatar_success_event,
                                                  change_avatar_success_event_ptr) )
                                          {
                                            *(_DWORD *)(((v2 + 3360) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3360) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3391) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3360, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3360),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                              "fromJson",
                                              335);
                                            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3360),
                                              (const char (*)[46])"fromJson for: changeAvatarSuccessEvent fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3360));
                                            v5 = 0;
                                          }
                                          else
                                          {
                                            *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = 0;
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                            std::allocator<char>::allocator(v2 + 368);
                                            std::string::basic_string<std::allocator<char>>(
                                              (std::string *const)(v2 + 3424),
                                              "changeAvatarFailedEvent",
                                              (const std::allocator<char> *)(v2 + 368));
                                            change_avatar_failed_event_ptr = jsonValueFind(
                                                                               jval,
                                                                               (const std::string *)(v2 + 3424));
                                            std::string::~string((void *)(v2 + 3424));
                                            *(_DWORD *)(((v2 + 3424) >> 3) + 0x7FFF8000) = -117901064;
                                            std::allocator<char>::~allocator(v2 + 368);
                                            *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                            if ( change_avatar_failed_event_ptr
                                              && !data::ConfigWwiseString::fromJson(
                                                    &this->change_avatar_failed_event,
                                                    change_avatar_failed_event_ptr) )
                                            {
                                              *(_DWORD *)(((v2 + 3488) >> 3) + 0x7FFF8000) = 0;
                                              if ( *(char *)(((v2 + 3488) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v2 + 3519) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3519) >> 3)
                                                                                          + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v2 + 3488, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v2 + 3488),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                3u,
                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                "fromJson",
                                                347);
                                              common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                (common::milog::MiLogStream *const)(v2 + 3488),
                                                (const char (*)[45])"fromJson for: changeAvatarFailedEvent fails!");
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3488));
                                              v5 = 0;
                                            }
                                            else
                                            {
                                              *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = 0;
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 1;
                                              std::allocator<char>::allocator(v2 + 384);
                                              std::string::basic_string<std::allocator<char>>(
                                                (std::string *const)(v2 + 3552),
                                                "selectMainQuestEvent",
                                                (const std::allocator<char> *)(v2 + 384));
                                              select_main_quest_event_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3552));
                                              std::string::~string((void *)(v2 + 3552));
                                              *(_DWORD *)(((v2 + 3552) >> 3) + 0x7FFF8000) = -117901064;
                                              std::allocator<char>::~allocator(v2 + 384);
                                              *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                              if ( select_main_quest_event_ptr
                                                && !data::ConfigWwiseString::fromJson(
                                                      &this->select_main_quest_event,
                                                      select_main_quest_event_ptr) )
                                              {
                                                *(_DWORD *)(((v2 + 3616) >> 3) + 0x7FFF8000) = 0;
                                                if ( *(char *)(((v2 + 3616) >> 3) + 0x7FFF8000) < 0
                                                  || *(_BYTE *)(((v2 + 3647) >> 3) + 0x7FFF8000) != 0
                                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3647) >> 3)
                                                                                            + 0x7FFF8000) )
                                                {
                                                  __asan_report_store_n(v2 + 3616, 32LL);
                                                }
                                                common::milog::MiLogStream::create(
                                                  (common::milog::MiLogStream *)(v2 + 3616),
                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                  3u,
                                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                  "fromJson",
                                                  359);
                                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                  (common::milog::MiLogStream *const)(v2 + 3616),
                                                  (const char (*)[42])"fromJson for: selectMainQuestEvent fails!");
                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3616));
                                                v5 = 0;
                                              }
                                              else
                                              {
                                                *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = 0;
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = 1;
                                                std::allocator<char>::allocator(v2 + 400);
                                                std::string::basic_string<std::allocator<char>>(
                                                  (std::string *const)(v2 + 3680),
                                                  "teamAvatarHoldUp",
                                                  (const std::allocator<char> *)(v2 + 400));
                                                team_avatar_hold_up_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 3680));
                                                std::string::~string((void *)(v2 + 3680));
                                                *(_DWORD *)(((v2 + 3680) >> 3) + 0x7FFF8000) = -117901064;
                                                std::allocator<char>::~allocator(v2 + 400);
                                                *(_BYTE *)(((v2 + 400) >> 3) + 0x7FFF8000) = -8;
                                                if ( team_avatar_hold_up_ptr
                                                  && !data::ConfigWwiseString::fromJson(
                                                        &this->team_avatar_hold_up,
                                                        team_avatar_hold_up_ptr) )
                                                {
                                                  *(_DWORD *)(((v2 + 3744) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v2 + 3744) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v2 + 3775) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 3775) >> 3)
                                                                                              + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v2 + 3744, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v2 + 3744),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    3u,
                                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                    "fromJson",
                                                    371);
                                                  common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                    (common::milog::MiLogStream *const)(v2 + 3744),
                                                    (const char (*)[38])"fromJson for: teamAvatarHoldUp fails!");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3744));
                                                  v5 = 0;
                                                }
                                                else
                                                {
                                                  *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = 0;
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 1;
                                                  std::allocator<char>::allocator(v2 + 416);
                                                  std::string::basic_string<std::allocator<char>>(
                                                    (std::string *const)(v2 + 3808),
                                                    "teamAvatarHoldDown",
                                                    (const std::allocator<char> *)(v2 + 416));
                                                  team_avatar_hold_down_ptr = jsonValueFind(
                                                                                jval,
                                                                                (const std::string *)(v2 + 3808));
                                                  std::string::~string((void *)(v2 + 3808));
                                                  *(_DWORD *)(((v2 + 3808) >> 3) + 0x7FFF8000) = -117901064;
                                                  std::allocator<char>::~allocator(v2 + 416);
                                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                                  if ( team_avatar_hold_down_ptr
                                                    && !data::ConfigWwiseString::fromJson(
                                                          &this->team_avatar_hold_down,
                                                          team_avatar_hold_down_ptr) )
                                                  {
                                                    *(_DWORD *)(((v2 + 3872) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v2 + 3872) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v2 + 3903) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 3903) >> 3)
                                                                                                + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v2 + 3872, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v2 + 3872),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      3u,
                                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                      "fromJson",
                                                      383);
                                                    common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                      (common::milog::MiLogStream *const)(v2 + 3872),
                                                      (const char (*)[40])"fromJson for: teamAvatarHoldDown fails!");
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3872));
                                                    v5 = 0;
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = 0;
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = 1;
                                                    std::allocator<char>::allocator(v2 + 432);
                                                    std::string::basic_string<std::allocator<char>>(
                                                      (std::string *const)(v2 + 3936),
                                                      "teamAvatarClick",
                                                      (const std::allocator<char> *)(v2 + 432));
                                                    team_avatar_click_ptr = jsonValueFind(
                                                                              jval,
                                                                              (const std::string *)(v2 + 3936));
                                                    std::string::~string((void *)(v2 + 3936));
                                                    *(_DWORD *)(((v2 + 3936) >> 3) + 0x7FFF8000) = -117901064;
                                                    std::allocator<char>::~allocator(v2 + 432);
                                                    *(_BYTE *)(((v2 + 432) >> 3) + 0x7FFF8000) = -8;
                                                    if ( team_avatar_click_ptr
                                                      && !data::ConfigWwiseString::fromJson(
                                                            &this->team_avatar_click,
                                                            team_avatar_click_ptr) )
                                                    {
                                                      *(_DWORD *)(((v2 + 4000) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v2 + 4000) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v2 + 4031) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4031) >> 3)
                                                                                                  + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v2 + 4000, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v2 + 4000),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        3u,
                                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                        "fromJson",
                                                        395);
                                                      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                        (common::milog::MiLogStream *const)(v2 + 4000),
                                                        (const char (*)[37])"fromJson for: teamAvatarClick fails!");
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4000));
                                                      v5 = 0;
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = 0;
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 1;
                                                      std::allocator<char>::allocator(v2 + 448);
                                                      std::string::basic_string<std::allocator<char>>(
                                                        (std::string *const)(v2 + 4064),
                                                        "bagDropItem",
                                                        (const std::allocator<char> *)(v2 + 448));
                                                      bag_drop_item_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 4064));
                                                      std::string::~string((void *)(v2 + 4064));
                                                      *(_DWORD *)(((v2 + 4064) >> 3) + 0x7FFF8000) = -117901064;
                                                      std::allocator<char>::~allocator(v2 + 448);
                                                      *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                                      if ( bag_drop_item_ptr
                                                        && !data::ConfigWwiseString::fromJson(
                                                              &this->bag_drop_item,
                                                              bag_drop_item_ptr) )
                                                      {
                                                        *(_DWORD *)(((v2 + 4128) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v2 + 4128) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v2 + 4159) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 4159) >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v2 + 4128, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v2 + 4128),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          3u,
                                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                          "fromJson",
                                                          407);
                                                        common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                          (common::milog::MiLogStream *const)(v2 + 4128),
                                                          (const char (*)[33])"fromJson for: bagDropItem fails!");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4128));
                                                        v5 = 0;
                                                      }
                                                      else
                                                      {
                                                        *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = 0;
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = 1;
                                                        std::allocator<char>::allocator(v2 + 464);
                                                        std::string::basic_string<std::allocator<char>>(
                                                          (std::string *const)(v2 + 4192),
                                                          "mailDeleteEvent",
                                                          (const std::allocator<char> *)(v2 + 464));
                                                        mail_delete_event_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 4192));
                                                        std::string::~string((void *)(v2 + 4192));
                                                        *(_DWORD *)(((v2 + 4192) >> 3) + 0x7FFF8000) = -117901064;
                                                        std::allocator<char>::~allocator(v2 + 464);
                                                        *(_BYTE *)(((v2 + 464) >> 3) + 0x7FFF8000) = -8;
                                                        if ( mail_delete_event_ptr
                                                          && !data::ConfigWwiseString::fromJson(
                                                                &this->mail_delete_event,
                                                                mail_delete_event_ptr) )
                                                        {
                                                          *(_DWORD *)(((v2 + 4256) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v2 + 4256) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v2 + 4287) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4287) >> 3) + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v2 + 4256, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v2 + 4256),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            3u,
                                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                            "fromJson",
                                                            419);
                                                          common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                            (common::milog::MiLogStream *const)(v2 + 4256),
                                                            (const char (*)[37])"fromJson for: mailDeleteEvent fails!");
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4256));
                                                          v5 = 0;
                                                        }
                                                        else
                                                        {
                                                          *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = 0;
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 1;
                                                          std::allocator<char>::allocator(v2 + 480);
                                                          std::string::basic_string<std::allocator<char>>(
                                                            (std::string *const)(v2 + 4320),
                                                            "itemInCDEvent",
                                                            (const std::allocator<char> *)(v2 + 480));
                                                          item_in_cdevent_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 4320));
                                                          std::string::~string((void *)(v2 + 4320));
                                                          *(_DWORD *)(((v2 + 4320) >> 3) + 0x7FFF8000) = -117901064;
                                                          std::allocator<char>::~allocator(v2 + 480);
                                                          *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                                          if ( item_in_cdevent_ptr
                                                            && !data::ConfigWwiseString::fromJson(
                                                                  &this->item_in_cdevent,
                                                                  item_in_cdevent_ptr) )
                                                          {
                                                            *(_DWORD *)(((v2 + 4384) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v2 + 4384) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v2 + 4415) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 4415) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v2 + 4384, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v2 + 4384),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              3u,
                                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                              "fromJson",
                                                              431);
                                                            common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                              (common::milog::MiLogStream *const)(v2 + 4384),
                                                              (const char (*)[35])"fromJson for: itemInCDEvent fails!");
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4384));
                                                            v5 = 0;
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = 0;
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = 1;
                                                            std::allocator<char>::allocator(v2 + 496);
                                                            std::string::basic_string<std::allocator<char>>(
                                                              (std::string *const)(v2 + 4448),
                                                              "pickUpEvent",
                                                              (const std::allocator<char> *)(v2 + 496));
                                                            pick_up_event_ptr = jsonValueFind(
                                                                                  jval,
                                                                                  (const std::string *)(v2 + 4448));
                                                            std::string::~string((void *)(v2 + 4448));
                                                            *(_DWORD *)(((v2 + 4448) >> 3) + 0x7FFF8000) = -117901064;
                                                            std::allocator<char>::~allocator(v2 + 496);
                                                            *(_BYTE *)(((v2 + 496) >> 3) + 0x7FFF8000) = -8;
                                                            if ( pick_up_event_ptr
                                                              && !data::ConfigWwiseString::fromJson(
                                                                    &this->pick_up_event,
                                                                    pick_up_event_ptr) )
                                                            {
                                                              *(_DWORD *)(((v2 + 4512) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v2 + 4512) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4543) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v2 + 4512, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v2 + 4512),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                3u,
                                                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                "fromJson",
                                                                443);
                                                              common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                (common::milog::MiLogStream *const)(v2 + 4512),
                                                                (const char (*)[33])"fromJson for: pickUpEvent fails!");
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4512));
                                                              v5 = 0;
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = 0;
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 1;
                                                              std::allocator<char>::allocator(v2 + 512);
                                                              std::string::basic_string<std::allocator<char>>(
                                                                (std::string *const)(v2 + 4576),
                                                                "playerLevelBtnEvent",
                                                                (const std::allocator<char> *)(v2 + 512));
                                                              player_level_btn_event_ptr = jsonValueFind(
                                                                                             jval,
                                                                                             (const std::string *)(v2 + 4576));
                                                              std::string::~string((void *)(v2 + 4576));
                                                              *(_DWORD *)(((v2 + 4576) >> 3) + 0x7FFF8000) = -117901064;
                                                              std::allocator<char>::~allocator(v2 + 512);
                                                              *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = -8;
                                                              if ( player_level_btn_event_ptr
                                                                && !data::ConfigWwiseString::fromJson(
                                                                      &this->player_level_btn_event,
                                                                      player_level_btn_event_ptr) )
                                                              {
                                                                *(_DWORD *)(((v2 + 4640) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v2 + 4640) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 4671) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v2 + 4640, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v2 + 4640),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  3u,
                                                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/"
                                                                  "ConfigAudioUI.cpp",
                                                                  "fromJson",
                                                                  455);
                                                                common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                                                  (common::milog::MiLogStream *const)(v2 + 4640),
                                                                  (const char (*)[41])"fromJson for: playerLevelBtnEvent fails!");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4640));
                                                                v5 = 0;
                                                              }
                                                              else
                                                              {
                                                                *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = 0;
                                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = 1;
                                                                std::allocator<char>::allocator(v2 + 528);
                                                                std::string::basic_string<std::allocator<char>>(
                                                                  (std::string *const)(v2 + 4704),
                                                                  "chestPickupFailEvent",
                                                                  (const std::allocator<char> *)(v2 + 528));
                                                                chest_pickup_fail_event_ptr = jsonValueFind(
                                                                                                jval,
                                                                                                (const std::string *)(v2 + 4704));
                                                                std::string::~string((void *)(v2 + 4704));
                                                                *(_DWORD *)(((v2 + 4704) >> 3) + 0x7FFF8000) = -117901064;
                                                                std::allocator<char>::~allocator(v2 + 528);
                                                                *(_BYTE *)(((v2 + 528) >> 3) + 0x7FFF8000) = -8;
                                                                if ( chest_pickup_fail_event_ptr
                                                                  && !data::ConfigWwiseString::fromJson(
                                                                        &this->chest_pickup_fail_event,
                                                                        chest_pickup_fail_event_ptr) )
                                                                {
                                                                  *(_DWORD *)(((v2 + 4768) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v2 + 4768) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 4799) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v2 + 4768, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v2 + 4768),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    3u,
                                                                    "./src/json_data_auto/ComponentDefines/Audio/Boomeran"
                                                                    "g/ConfigAudioUI.cpp",
                                                                    "fromJson",
                                                                    467);
                                                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                    (common::milog::MiLogStream *const)(v2 + 4768),
                                                                    (const char (*)[42])"fromJson for: chestPickupFailEvent fails!");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4768));
                                                                  v5 = 0;
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = 0;
                                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 1;
                                                                  std::allocator<char>::allocator(v2 + 544);
                                                                  std::string::basic_string<std::allocator<char>>(
                                                                    (std::string *const)(v2 + 4832),
                                                                    "enterDungeonSuccessEvent",
                                                                    (const std::allocator<char> *)(v2 + 544));
                                                                  enter_dungeon_success_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 4832));
                                                                  std::string::~string((void *)(v2 + 4832));
                                                                  *(_DWORD *)(((v2 + 4832) >> 3) + 0x7FFF8000) = -117901064;
                                                                  std::allocator<char>::~allocator(v2 + 544);
                                                                  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = -8;
                                                                  if ( enter_dungeon_success_event_ptr
                                                                    && !data::ConfigWwiseString::fromJson(
                                                                          &this->enter_dungeon_success_event,
                                                                          enter_dungeon_success_event_ptr) )
                                                                  {
                                                                    *(_DWORD *)(((v2 + 4896) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v2 + 4896) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 4927) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v2 + 4896, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v2 + 4896),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      3u,
                                                                      "./src/json_data_auto/ComponentDefines/Audio/Boomer"
                                                                      "ang/ConfigAudioUI.cpp",
                                                                      "fromJson",
                                                                      479);
                                                                    common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                                                                      (common::milog::MiLogStream *const)(v2 + 4896),
                                                                      (const char (*)[46])"fromJson for: enterDungeonSuccessEvent fails!");
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 4896));
                                                                    v5 = 0;
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = 0;
                                                                    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = 1;
                                                                    std::allocator<char>::allocator(v2 + 560);
                                                                    std::string::basic_string<std::allocator<char>>(
                                                                      (std::string *const)(v2 + 4960),
                                                                      "openPageDefaultEvent",
                                                                      (const std::allocator<char> *)(v2 + 560));
                                                                    open_page_default_event_ptr = jsonValueFind(
                                                                                                    jval,
                                                                                                    (const std::string *)(v2 + 4960));
                                                                    std::string::~string((void *)(v2 + 4960));
                                                                    *(_DWORD *)(((v2 + 4960) >> 3) + 0x7FFF8000) = -117901064;
                                                                    std::allocator<char>::~allocator(v2 + 560);
                                                                    *(_BYTE *)(((v2 + 560) >> 3) + 0x7FFF8000) = -8;
                                                                    if ( open_page_default_event_ptr
                                                                      && !data::ConfigWwiseString::fromJson(
                                                                            &this->open_page_default_event,
                                                                            open_page_default_event_ptr) )
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5024) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v2 + 5024) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 5055) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v2 + 5024, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v2 + 5024),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        3u,
                                                                        "./src/json_data_auto/ComponentDefines/Audio/Boom"
                                                                        "erang/ConfigAudioUI.cpp",
                                                                        "fromJson",
                                                                        491);
                                                                      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                        (common::milog::MiLogStream *const)(v2 + 5024),
                                                                        (const char (*)[42])"fromJson for: openPageDefaultEvent fails!");
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5024));
                                                                      v5 = 0;
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = 0;
                                                                      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = 1;
                                                                      std::allocator<char>::allocator(v2 + 576);
                                                                      std::string::basic_string<std::allocator<char>>(
                                                                        (std::string *const)(v2 + 5088),
                                                                        "closePageDefaultEvent",
                                                                        (const std::allocator<char> *)(v2 + 576));
                                                                      close_page_default_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5088));
                                                                      std::string::~string((void *)(v2 + 5088));
                                                                      *(_DWORD *)(((v2 + 5088) >> 3) + 0x7FFF8000) = -117901064;
                                                                      std::allocator<char>::~allocator(v2 + 576);
                                                                      *(_BYTE *)(((v2 + 576) >> 3) + 0x7FFF8000) = -8;
                                                                      if ( close_page_default_event_ptr
                                                                        && !data::ConfigWwiseString::fromJson(
                                                                              &this->close_page_default_event,
                                                                              close_page_default_event_ptr) )
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5152) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v2 + 5152) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v2 + 5183) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 5183) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v2 + 5152, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v2 + 5152),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          3u,
                                                                          "./src/json_data_auto/ComponentDefines/Audio/Bo"
                                                                          "omerang/ConfigAudioUI.cpp",
                                                                          "fromJson",
                                                                          503);
                                                                        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                                          (common::milog::MiLogStream *const)(v2 + 5152),
                                                                          (const char (*)[43])"fromJson for: closePageDef"
                                                                                              "aultEvent fails!");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5152));
                                                                        v5 = 0;
                                                                      }
                                                                      else
                                                                      {
                                                                        *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = 0;
                                                                        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = 1;
                                                                        std::allocator<char>::allocator(v2 + 592);
                                                                        std::string::basic_string<std::allocator<char>>(
                                                                          (std::string *const)(v2 + 5216),
                                                                          "openPageCustomEvents",
                                                                          (const std::allocator<char> *)(v2 + 592));
                                                                        open_page_custom_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5216));
                                                                        std::string::~string((void *)(v2 + 5216));
                                                                        *(_DWORD *)(((v2 + 5216) >> 3) + 0x7FFF8000) = -117901064;
                                                                        std::allocator<char>::~allocator(v2 + 592);
                                                                        *(_BYTE *)(((v2 + 592) >> 3) + 0x7FFF8000) = -8;
                                                                        if ( open_page_custom_events_ptr
                                                                          && !data::mapFromJson(
                                                                                open_page_custom_events_ptr,
                                                                                &this->open_page_custom_events) )
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5280) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v2 + 5280) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v2 + 5311) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 5311) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v2 + 5280, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v2 + 5280),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            3u,
                                                                            "./src/json_data_auto/ComponentDefines/Audio/"
                                                                            "Boomerang/ConfigAudioUI.cpp",
                                                                            "fromJson",
                                                                            515);
                                                                          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                            (common::milog::MiLogStream *const)(v2 + 5280),
                                                                            (const char (*)[42])"fromJson for: openPageCu"
                                                                                                "stomEvents fails!");
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5280));
                                                                          v5 = 0;
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = 0;
                                                                          *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = 1;
                                                                          std::allocator<char>::allocator(v2 + 608);
                                                                          std::string::basic_string<std::allocator<char>>(
                                                                            (std::string *const)(v2 + 5344),
                                                                            "closePageCustomEvents",
                                                                            (const std::allocator<char> *)(v2 + 608));
                                                                          close_page_custom_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5344));
                                                                          std::string::~string((void *)(v2 + 5344));
                                                                          *(_DWORD *)(((v2 + 5344) >> 3) + 0x7FFF8000) = -117901064;
                                                                          std::allocator<char>::~allocator(v2 + 608);
                                                                          *(_BYTE *)(((v2 + 608) >> 3) + 0x7FFF8000) = -8;
                                                                          if ( close_page_custom_events_ptr
                                                                            && !data::mapFromJson(
                                                                                  close_page_custom_events_ptr,
                                                                                  &this->close_page_custom_events) )
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5408) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v2 + 5408) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v2 + 5439) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 5439) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v2 + 5408, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v2 + 5408),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              3u,
                                                                              "./src/json_data_auto/ComponentDefines/Audi"
                                                                              "o/Boomerang/ConfigAudioUI.cpp",
                                                                              "fromJson",
                                                                              527);
                                                                            common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                                              (common::milog::MiLogStream *const)(v2 + 5408),
                                                                              (const char (*)[43])"fromJson for: closePag"
                                                                                                  "eCustomEvents fails!");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5408));
                                                                            v5 = 0;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = 0;
                                                                            *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = 1;
                                                                            std::allocator<char>::allocator(v2 + 624);
                                                                            std::string::basic_string<std::allocator<char>>(
                                                                              (std::string *const)(v2 + 5472),
                                                                              "videoStartDefaultEvent",
                                                                              (const std::allocator<char> *)(v2 + 624));
                                                                            video_start_default_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5472));
                                                                            std::string::~string((void *)(v2 + 5472));
                                                                            *(_DWORD *)(((v2 + 5472) >> 3) + 0x7FFF8000) = -117901064;
                                                                            std::allocator<char>::~allocator(v2 + 624);
                                                                            *(_BYTE *)(((v2 + 624) >> 3) + 0x7FFF8000) = -8;
                                                                            if ( video_start_default_event_ptr
                                                                              && !data::ConfigWwiseString::fromJson(
                                                                                    &this->video_start_default_event,
                                                                                    video_start_default_event_ptr) )
                                                                            {
                                                                              *(_DWORD *)(((v2 + 5536) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v2 + 5536) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v2 + 5567) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 5567) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v2 + 5536, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v2 + 5536),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                3u,
                                                                                "./src/json_data_auto/ComponentDefines/Au"
                                                                                "dio/Boomerang/ConfigAudioUI.cpp",
                                                                                "fromJson",
                                                                                539);
                                                                              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                                                (common::milog::MiLogStream *const)(v2 + 5536),
                                                                                (const char (*)[44])"fromJson for: videoStartDefaultEvent fails!");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5536));
                                                                              v5 = 0;
                                                                            }
                                                                            else
                                                                            {
                                                                              *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = 0;
                                                                              *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = 1;
                                                                              std::allocator<char>::allocator(v2 + 640);
                                                                              std::string::basic_string<std::allocator<char>>(
                                                                                (std::string *const)(v2 + 5600),
                                                                                "videoEndDefaultEvent",
                                                                                (const std::allocator<char> *)(v2 + 640));
                                                                              video_end_default_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5600));
                                                                              std::string::~string((void *)(v2 + 5600));
                                                                              *(_DWORD *)(((v2 + 5600) >> 3) + 0x7FFF8000) = -117901064;
                                                                              std::allocator<char>::~allocator(v2 + 640);
                                                                              *(_BYTE *)(((v2 + 640) >> 3) + 0x7FFF8000) = -8;
                                                                              if ( video_end_default_event_ptr
                                                                                && !data::ConfigWwiseString::fromJson(
                                                                                      &this->video_end_default_event,
                                                                                      video_end_default_event_ptr) )
                                                                              {
                                                                                *(_DWORD *)(((v2 + 5664) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                if ( *(char *)(((v2 + 5664) >> 3)
                                                                                             + 0x7FFF8000) < 0
                                                                                  || *(_BYTE *)(((v2 + 5695) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 5695) >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_store_n(v2 + 5664, 32LL);
                                                                                }
                                                                                common::milog::MiLogStream::create(
                                                                                  (common::milog::MiLogStream *)(v2 + 5664),
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  3u,
                                                                                  "./src/json_data_auto/ComponentDefines/"
                                                                                  "Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                  "fromJson",
                                                                                  551);
                                                                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                                  (common::milog::MiLogStream *const)(v2 + 5664),
                                                                                  (const char (*)[42])"fromJson for: videoEndDefaultEvent fails!");
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5664));
                                                                                v5 = 0;
                                                                              }
                                                                              else
                                                                              {
                                                                                *(_DWORD *)(((v2 + 5728) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = 1;
                                                                                std::allocator<char>::allocator(v2 + 656);
                                                                                std::string::basic_string<std::allocator<char>>(
                                                                                  (std::string *const)(v2 + 5728),
                                                                                  "videoStartCustomEvents",
                                                                                  (const std::allocator<char> *)(v2 + 656));
                                                                                video_start_custom_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5728));
                                                                                std::string::~string((void *)(v2 + 5728));
                                                                                *(_DWORD *)(((v2 + 5728) >> 3)
                                                                                          + 0x7FFF8000) = -117901064;
                                                                                std::allocator<char>::~allocator(v2 + 656);
                                                                                *(_BYTE *)(((v2 + 656) >> 3) + 0x7FFF8000) = -8;
                                                                                if ( video_start_custom_events_ptr
                                                                                  && !data::mapFromJson(
                                                                                        video_start_custom_events_ptr,
                                                                                        &this->video_start_custom_events) )
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 5792) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v2 + 5792) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v2 + 5823) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 5823) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v2 + 5792,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v2 + 5792),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    3u,
                                                                                    "./src/json_data_auto/ComponentDefine"
                                                                                    "s/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                    "fromJson",
                                                                                    563);
                                                                                  common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                                                                                    (common::milog::MiLogStream *const)(v2 + 5792),
                                                                                    (const char (*)[44])"fromJson for: videoStartCustomEvents fails!");
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5792));
                                                                                  v5 = 0;
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v2 + 5856) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  *(_BYTE *)(((v2 + 672) >> 3)
                                                                                           + 0x7FFF8000) = 1;
                                                                                  std::allocator<char>::allocator(v2 + 672);
                                                                                  std::string::basic_string<std::allocator<char>>(
                                                                                    (std::string *const)(v2 + 5856),
                                                                                    "videoEndCustomEvents",
                                                                                    (const std::allocator<char> *)(v2 + 672));
                                                                                  video_end_custom_events_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5856));
                                                                                  std::string::~string((void *)(v2 + 5856));
                                                                                  *(_DWORD *)(((v2 + 5856) >> 3)
                                                                                            + 0x7FFF8000) = -117901064;
                                                                                  std::allocator<char>::~allocator(v2 + 672);
                                                                                  *(_BYTE *)(((v2 + 672) >> 3)
                                                                                           + 0x7FFF8000) = -8;
                                                                                  if ( video_end_custom_events_ptr
                                                                                    && !data::mapFromJson(
                                                                                          video_end_custom_events_ptr,
                                                                                          &this->video_end_custom_events) )
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 5920) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v2 + 5920) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v2 + 5951) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 5951) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v2 + 5920,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v2 + 5920),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      3u,
                                                                                      "./src/json_data_auto/ComponentDefi"
                                                                                      "nes/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                      "fromJson",
                                                                                      575);
                                                                                    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                                      (common::milog::MiLogStream *const)(v2 + 5920),
                                                                                      (const char (*)[42])"fromJson for: videoEndCustomEvents fails!");
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 5920));
                                                                                    v5 = 0;
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v2 + 5984) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    *(_BYTE *)(((v2 + 688) >> 3)
                                                                                             + 0x7FFF8000) = 1;
                                                                                    std::allocator<char>::allocator(v2 + 688);
                                                                                    std::string::basic_string<std::allocator<char>>(
                                                                                      (std::string *const)(v2 + 5984),
                                                                                      "defaultEnableDelayCount",
                                                                                      (const std::allocator<char> *)(v2 + 688));
                                                                                    default_enable_delay_count_ptr = jsonValueFind(jval, (const std::string *)(v2 + 5984));
                                                                                    std::string::~string((void *)(v2 + 5984));
                                                                                    *(_DWORD *)(((v2 + 5984) >> 3)
                                                                                              + 0x7FFF8000) = -117901064;
                                                                                    std::allocator<char>::~allocator(v2 + 688);
                                                                                    *(_BYTE *)(((v2 + 688) >> 3)
                                                                                             + 0x7FFF8000) = -8;
                                                                                    if ( default_enable_delay_count_ptr
                                                                                      && !fromJson<int>(
                                                                                            default_enable_delay_count_ptr,
                                                                                            &this->default_enable_delay_count) )
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6048) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v2 + 6048) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v2 + 6079) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 6079) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v2 + 6048,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v2 + 6048),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        3u,
                                                                                        "./src/json_data_auto/ComponentDe"
                                                                                        "fines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                        "fromJson",
                                                                                        587);
                                                                                      common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                                                        (common::milog::MiLogStream *const)(v2 + 6048),
                                                                                        (const char (*)[45])"fromJson for: defaultEnableDelayCount fails!");
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6048));
                                                                                      v5 = 0;
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v2 + 6112) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      *(_BYTE *)(((v2 + 704) >> 3)
                                                                                               + 0x7FFF8000) = 1;
                                                                                      std::allocator<char>::allocator(v2 + 704);
                                                                                      std::string::basic_string<std::allocator<char>>(
                                                                                        (std::string *const)(v2 + 6112),
                                                                                        "characterSelectMusicEndEvent",
                                                                                        (const std::allocator<char> *)(v2 + 704));
                                                                                      character_select_music_end_event_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6112));
                                                                                      std::string::~string((void *)(v2 + 6112));
                                                                                      *(_DWORD *)(((v2 + 6112) >> 3)
                                                                                                + 0x7FFF8000) = -117901064;
                                                                                      std::allocator<char>::~allocator(v2 + 704);
                                                                                      *(_BYTE *)(((v2 + 704) >> 3)
                                                                                               + 0x7FFF8000) = -8;
                                                                                      if ( character_select_music_end_event_ptr
                                                                                        && !data::ConfigWwiseString::fromJson(
                                                                                              &this->character_select_music_end_event,
                                                                                              character_select_music_end_event_ptr) )
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6176) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v2 + 6176) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v2 + 6207) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v2 - 32 + 95) & 7) >= *(_BYTE *)(((v2 + 6207) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v2 + 6176,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v2 + 6176),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          3u,
                                                                                          "./src/json_data_auto/Component"
                                                                                          "Defines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                          "fromJson",
                                                                                          599);
                                                                                        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                                          (common::milog::MiLogStream *const)(v2 + 6176),
                                                                                          (const char (*)[50])"fromJson for: characterSelectMusicEndEvent fails!");
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6176));
                                                                                        v5 = 0;
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v2 + 6240) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        *(_BYTE *)(((v2 + 720) >> 3)
                                                                                                 + 0x7FFF8000) = 1;
                                                                                        std::allocator<char>::allocator(v2 + 720);
                                                                                        std::string::basic_string<std::allocator<char>>(
                                                                                          (std::string *const)(v2 + 6240),
                                                                                          "loadingEventsMap",
                                                                                          (const std::allocator<char> *)(v2 + 720));
                                                                                        p_loading_events_map = (data::ConfigWwiseIntegerMap *)(v2 + 6240);
                                                                                        loading_events_map_ptr = jsonValueFind(jval, (const std::string *)(v2 + 6240));
                                                                                        std::string::~string((void *)(v2 + 6240));
                                                                                        *(_DWORD *)(((v2 + 6240) >> 3)
                                                                                                  + 0x7FFF8000) = -117901064;
                                                                                        std::allocator<char>::~allocator(v2 + 720);
                                                                                        *(_BYTE *)(((v2 + 720) >> 3)
                                                                                                 + 0x7FFF8000) = -8;
                                                                                        if ( loading_events_map_ptr
                                                                                          && (p_loading_events_map = &this->loading_events_map,
                                                                                              !data::mapFromJson(
                                                                                                 loading_events_map_ptr,
                                                                                                 &this->loading_events_map)) )
                                                                                        {
                                                                                          *(_DWORD *)(((v2 + 6304) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v2 + 6304) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v2 + 6335) >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 6335) >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_store_n(
                                                                                              v2 + 6304,
                                                                                              32LL);
                                                                                          }
                                                                                          common::milog::MiLogStream::create(
                                                                                            (common::milog::MiLogStream *)(v2 + 6304),
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            3u,
                                                                                            "./src/json_data_auto/Compone"
                                                                                            "ntDefines/Audio/Boomerang/ConfigAudioUI.cpp",
                                                                                            "fromJson",
                                                                                            611);
                                                                                          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                                                            (common::milog::MiLogStream *const)(v2 + 6304),
                                                                                            (const char (*)[38])"fromJson for: loadingEventsMap fails!");
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 6304));
                                                                                          v5 = 0;
                                                                                        }
                                                                                        else
                                                                                        {
                                                                                          if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
                                                                                            __asan_report_store1(
                                                                                              &this->is_json_loaded,
                                                                                              p_loading_events_map,
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
  v7 = v5;
  if ( v54 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8318) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_7(v2, 6368LL, v54);
  }
  return v7;
};

// Line 619: range 0000000013B88AAE-0000000013B891C3
int32_t __cdecl data::ConfigAudioUi::getHashValue(const data::ConfigAudioUi *const this)
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
  int32_t MapHashValue; // eax
  int32_t v12; // eax
  int32_t v13; // eax
  int32_t v14; // eax
  int32_t v15; // eax
  int32_t v16; // eax
  int32_t v17; // eax
  int32_t v18; // eax
  int32_t v19; // eax
  int32_t v20; // eax
  int32_t v21; // eax
  int32_t v22; // eax
  int32_t v23; // eax
  int32_t v24; // eax
  int32_t v25; // eax
  int32_t v26; // eax
  int32_t v27; // eax
  int32_t v28; // eax
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
  int32_t result; // eax
  char v49[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:620";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioUi::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::AudioUiSupport::getHashValue(&this->support);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::AudioUiEquip::getHashValue(&this->equip);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->open_chest_event);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::AudioOneTimeEvent::getHashValue(&this->join_team_event);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigWwiseString::getHashValue(&this->element_state_key);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigWwiseString::getHashValue(&this->element_state_default_value);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  MapHashValue = data::getMapHashValue(&this->element_state_value_map);
  common::tools::HashUtils::appendHash(MapHashValue, (int32_t *)(v2 + 32));
  v12 = data::ConfigWwiseString::getHashValue(&this->character_appear_event);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  v13 = data::ConfigWwiseString::getHashValue(&this->add_map_pin_event);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::ConfigWwiseString::getHashValue(&this->remove_map_pin_event);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  v15 = data::ConfigWwiseString::getHashValue(&this->enable_element_view_event);
  common::tools::HashUtils::appendHash(v15, (int32_t *)(v2 + 32));
  v16 = data::ConfigWwiseString::getHashValue(&this->disable_element_view_event);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  v17 = data::ConfigWwiseString::getHashValue(&this->dungeon_victory_event);
  common::tools::HashUtils::appendHash(v17, (int32_t *)(v2 + 32));
  v18 = data::ConfigWwiseString::getHashValue(&this->dungeon_defeat_event);
  common::tools::HashUtils::appendHash(v18, (int32_t *)(v2 + 32));
  v19 = data::ConfigWwiseString::getHashValue(&this->change_weapon_event);
  common::tools::HashUtils::appendHash(v19, (int32_t *)(v2 + 32));
  v20 = data::ConfigWwiseString::getHashValue(&this->wear_relic_event);
  common::tools::HashUtils::appendHash(v20, (int32_t *)(v2 + 32));
  v21 = data::ConfigWwiseString::getHashValue(&this->takeoff_relic_event);
  common::tools::HashUtils::appendHash(v21, (int32_t *)(v2 + 32));
  v22 = data::ConfigWwiseString::getHashValue(&this->select_avatar_relic_event);
  common::tools::HashUtils::appendHash(v22, (int32_t *)(v2 + 32));
  v23 = data::ConfigWwiseString::getHashValue(&this->add_equip_material_event);
  common::tools::HashUtils::appendHash(v23, (int32_t *)(v2 + 32));
  v24 = data::ConfigWwiseString::getHashValue(&this->talent_unlock_event);
  common::tools::HashUtils::appendHash(v24, (int32_t *)(v2 + 32));
  v25 = data::ConfigWwiseString::getHashValue(&this->change_avatar_success_event);
  common::tools::HashUtils::appendHash(v25, (int32_t *)(v2 + 32));
  v26 = data::ConfigWwiseString::getHashValue(&this->change_avatar_failed_event);
  common::tools::HashUtils::appendHash(v26, (int32_t *)(v2 + 32));
  v27 = data::ConfigWwiseString::getHashValue(&this->select_main_quest_event);
  common::tools::HashUtils::appendHash(v27, (int32_t *)(v2 + 32));
  v28 = data::ConfigWwiseString::getHashValue(&this->team_avatar_hold_up);
  common::tools::HashUtils::appendHash(v28, (int32_t *)(v2 + 32));
  v29 = data::ConfigWwiseString::getHashValue(&this->team_avatar_hold_down);
  common::tools::HashUtils::appendHash(v29, (int32_t *)(v2 + 32));
  v30 = data::ConfigWwiseString::getHashValue(&this->team_avatar_click);
  common::tools::HashUtils::appendHash(v30, (int32_t *)(v2 + 32));
  v31 = data::ConfigWwiseString::getHashValue(&this->bag_drop_item);
  common::tools::HashUtils::appendHash(v31, (int32_t *)(v2 + 32));
  v32 = data::ConfigWwiseString::getHashValue(&this->mail_delete_event);
  common::tools::HashUtils::appendHash(v32, (int32_t *)(v2 + 32));
  v33 = data::ConfigWwiseString::getHashValue(&this->item_in_cdevent);
  common::tools::HashUtils::appendHash(v33, (int32_t *)(v2 + 32));
  v34 = data::ConfigWwiseString::getHashValue(&this->pick_up_event);
  common::tools::HashUtils::appendHash(v34, (int32_t *)(v2 + 32));
  v35 = data::ConfigWwiseString::getHashValue(&this->player_level_btn_event);
  common::tools::HashUtils::appendHash(v35, (int32_t *)(v2 + 32));
  v36 = data::ConfigWwiseString::getHashValue(&this->chest_pickup_fail_event);
  common::tools::HashUtils::appendHash(v36, (int32_t *)(v2 + 32));
  v37 = data::ConfigWwiseString::getHashValue(&this->enter_dungeon_success_event);
  common::tools::HashUtils::appendHash(v37, (int32_t *)(v2 + 32));
  v38 = data::ConfigWwiseString::getHashValue(&this->open_page_default_event);
  common::tools::HashUtils::appendHash(v38, (int32_t *)(v2 + 32));
  v39 = data::ConfigWwiseString::getHashValue(&this->close_page_default_event);
  common::tools::HashUtils::appendHash(v39, (int32_t *)(v2 + 32));
  v40 = data::getMapHashValue(&this->open_page_custom_events);
  common::tools::HashUtils::appendHash(v40, (int32_t *)(v2 + 32));
  v41 = data::getMapHashValue(&this->close_page_custom_events);
  common::tools::HashUtils::appendHash(v41, (int32_t *)(v2 + 32));
  v42 = data::ConfigWwiseString::getHashValue(&this->video_start_default_event);
  common::tools::HashUtils::appendHash(v42, (int32_t *)(v2 + 32));
  v43 = data::ConfigWwiseString::getHashValue(&this->video_end_default_event);
  common::tools::HashUtils::appendHash(v43, (int32_t *)(v2 + 32));
  v44 = data::getMapHashValue(&this->video_start_custom_events);
  common::tools::HashUtils::appendHash(v44, (int32_t *)(v2 + 32));
  v45 = data::getMapHashValue(&this->video_end_custom_events);
  common::tools::HashUtils::appendHash(v45, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->default_enable_delay_count >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->default_enable_delay_count >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->default_enable_delay_count);
  }
  common::tools::HashUtils::appendHash(this->default_enable_delay_count, (int32_t *)(v2 + 32));
  v46 = data::ConfigWwiseString::getHashValue(&this->character_select_music_end_event);
  common::tools::HashUtils::appendHash(v46, (int32_t *)(v2 + 32));
  v47 = data::getMapHashValue(&this->loading_events_map);
  common::tools::HashUtils::appendHash(v47, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v49 == (char *)v2 )
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
