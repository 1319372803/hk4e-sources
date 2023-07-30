// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp

// Line 20: range 0000000013B62014-0000000013B626F4
bool __cdecl data::MusicEnemyCombatPhaseState::fromJson(
        data::MusicEnemyCombatPhaseState *const this,
        const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r14
  bool result; // al
  const Json::Value *v7; // rsi
  Json::Value *combat_phase_ptr; // [rsp+10h] [rbp-1C0h]
  const Json::Value *state_value_ptr; // [rsp+18h] [rbp-1B8h]
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
  *(_QWORD *)(v2 + 16) = data::MusicEnemyCombatPhaseState::fromJson;
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
    "combatPhase",
    (const std::allocator<char> *)(v2 + 32));
  combat_phase_ptr = (Json::Value *)jsonValueFind(jval, (const std::string *)(v2 + 64));
  std::string::~string((void *)(v2 + 64));
  *(_DWORD *)(((v2 + 64) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 32);
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  if ( !combat_phase_ptr )
    goto LABEL_11;
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
    && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v2 + 128, 32LL);
  }
  Json::Value::asString[abi:cxx11]((Json::String *)(v2 + 128), (Json::Value_0 *)combat_phase_ptr);
  v5 = !data::enumStrToVal((const std::string *)(v2 + 128), &this->combat_phase);
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
      "fromJson",
      30);
    common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[33])"fromJson for: combatPhase fails!");
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
      "stateValue",
      (const std::allocator<char> *)(v2 + 48));
    v7 = (const Json::Value *)(v2 + 256);
    state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( state_value_ptr
      && (v7 = state_value_ptr, !data::ConfigWwiseString::fromJson(&this->state_value, state_value_ptr)) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
        "fromJson",
        42);
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[32])"fromJson for: stateValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      result = 0;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_json_loaded, v7, &this->is_json_loaded);
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

// Line 50: range 0000000013B626F6-0000000013B62878
int32_t __cdecl data::MusicEnemyCombatPhaseState::getHashValue(const data::MusicEnemyCombatPhaseState *const this)
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
  *(_QWORD *)(v2 + 16) = data::MusicEnemyCombatPhaseState::getHashValue;
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
  common::tools::HashUtils::appendHash(this->combat_phase, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->state_value);
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

// Line 58: range 0000000013B62879-0000000013B62C19
bool __cdecl data::arrFromJson(const Json::Value *jval, data::MusicEnemyCombatPhaseStateArray *v)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int v5; // edx
  unsigned __int64 v6; // rax
  int v7; // r14d
  data::MusicEnemyCombatPhaseState *v8; // rdx
  unsigned __int64 v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 56 7 elem:64";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = ((v2 + 96) >> 3) + 2147450880;
      *(_DWORD *)v6 = 0;
      *(_WORD *)(v6 + 4) = 0;
      *(_BYTE *)(v6 + 6) = 0;
      data::MusicEnemyCombatPhaseState::MusicEnemyCombatPhaseState((data::MusicEnemyCombatPhaseState *const)(v2 + 96));
      if ( !data::MusicEnemyCombatPhaseState::fromJson((data::MusicEnemyCombatPhaseState *const)(v2 + 96), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
          "arrFromJson",
          67);
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
        v8 = std::move<data::MusicEnemyCombatPhaseState &>((data::MusicEnemyCombatPhaseState *)(v2 + 96));
        std::vector<data::MusicEnemyCombatPhaseState>::emplace_back<data::MusicEnemyCombatPhaseState>(v, v8, v8);
        v7 = 1;
      }
      data::MusicEnemyCombatPhaseState::~MusicEnemyCombatPhaseState((data::MusicEnemyCombatPhaseState *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = ((v2 + 96) >> 3) + 2147450880;
    *(_DWORD *)v9 = -117901064;
    *(_WORD *)(v9 + 4) = -1800;
    *(_BYTE *)(v9 + 6) = -8;
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

// Line 77: range 0000000013B62C1A-0000000013B62E66
int32_t __cdecl data::getArrHashValue(const data::MusicEnemyCombatPhaseStateArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::MusicEnemyCombatPhaseState*,std::vector<data::MusicEnemyCombatPhaseState> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 hash_code:78 64 8 14 __for_begin:79 96 8 12 __for_end:79";
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
  *(std::vector<data::MusicEnemyCombatPhaseState>::const_iterator *)(v2 + 64) = std::vector<data::MusicEnemyCombatPhaseState>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::MusicEnemyCombatPhaseState>::const_iterator *)(v2 + 96) = std::vector<data::MusicEnemyCombatPhaseState>::end(vec);
  while ( __gnu_cxx::operator!=<data::MusicEnemyCombatPhaseState const*,std::vector<data::MusicEnemyCombatPhaseState>>(
            (const __gnu_cxx::__normal_iterator<const data::MusicEnemyCombatPhaseState*,std::vector<data::MusicEnemyCombatPhaseState> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::MusicEnemyCombatPhaseState*,std::vector<data::MusicEnemyCombatPhaseState> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::MusicEnemyCombatPhaseState const*,std::vector<data::MusicEnemyCombatPhaseState>>::operator*((const __gnu_cxx::__normal_iterator<const data::MusicEnemyCombatPhaseState*,std::vector<data::MusicEnemyCombatPhaseState> > *const)(v2 + 64));
    HashValue = data::MusicEnemyCombatPhaseState::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::MusicEnemyCombatPhaseState const*,std::vector<data::MusicEnemyCombatPhaseState>>::operator++((__gnu_cxx::__normal_iterator<const data::MusicEnemyCombatPhaseState*,std::vector<data::MusicEnemyCombatPhaseState> > *const)(v2 + 64));
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

// Line 88: range 0000000013B62E68-0000000013B63C0D
bool __cdecl data::MusicEnemySettings::fromJson(data::MusicEnemySettings *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool result; // al
  data::MusicEnemyCombatPhaseStateArray *p_combat_phase_states; // rsi
  const Json::Value *entity_id_ptr; // [rsp+18h] [rbp-348h]
  const Json::Value *main_state_value_ptr; // [rsp+20h] [rbp-340h]
  const Json::Value *aux_state_group_ptr; // [rsp+28h] [rbp-338h]
  const Json::Value *default_aux_state_value_ptr; // [rsp+30h] [rbp-330h]
  const Json::Value *combat_phase_states_ptr; // [rsp+38h] [rbp-328h]
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
  *(_QWORD *)(v2 + 16) = data::MusicEnemySettings::fromJson;
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
    "entityId",
    (const std::allocator<char> *)(v2 + 48));
  entity_id_ptr = jsonValueFind(jval, (const std::string *)(v2 + 128));
  std::string::~string((void *)(v2 + 128));
  *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( entity_id_ptr && !fromJson<unsigned int>(entity_id_ptr, &this->entity_id) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
      "fromJson",
      98);
    common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
      (common::milog::MiLogStream *const)(v2 + 192),
      (const char (*)[30])"fromJson for: entityId fails!");
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
      "mainStateValue",
      (const std::allocator<char> *)(v2 + 64));
    main_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 256));
    std::string::~string((void *)(v2 + 256));
    *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( main_state_value_ptr && !data::ConfigWwiseString::fromJson(&this->main_state_value, main_state_value_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
        "fromJson",
        110);
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
        (common::milog::MiLogStream *const)(v2 + 320),
        (const char (*)[36])"fromJson for: mainStateValue fails!");
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
        "auxStateGroup",
        (const std::allocator<char> *)(v2 + 80));
      aux_state_group_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
      std::string::~string((void *)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( aux_state_group_ptr && !data::ConfigWwiseString::fromJson(&this->aux_state_group, aux_state_group_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
          "fromJson",
          122);
        common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
          (common::milog::MiLogStream *const)(v2 + 448),
          (const char (*)[35])"fromJson for: auxStateGroup fails!");
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
          "defaultAuxStateValue",
          (const std::allocator<char> *)(v2 + 96));
        default_aux_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
        std::string::~string((void *)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( default_aux_state_value_ptr
          && !data::ConfigWwiseString::fromJson(&this->default_aux_state_value, default_aux_state_value_ptr) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
            "fromJson",
            134);
          common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v2 + 576),
            (const char (*)[42])"fromJson for: defaultAuxStateValue fails!");
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
            "combatPhaseStates",
            (const std::allocator<char> *)(v2 + 112));
          p_combat_phase_states = (data::MusicEnemyCombatPhaseStateArray *)(v2 + 640);
          combat_phase_states_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
          std::string::~string((void *)(v2 + 640));
          *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( combat_phase_states_ptr
            && (p_combat_phase_states = &this->combat_phase_states,
                !data::arrFromJson(combat_phase_states_ptr, &this->combat_phase_states)) )
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
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
              "fromJson",
              146);
            common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)(v2 + 704),
              (const char (*)[39])"fromJson for: combatPhaseStates fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&this->is_json_loaded >> 3) + 0x7FFF8000) < 0 )
              __asan_report_store1(&this->is_json_loaded, p_combat_phase_states, &this->is_json_loaded);
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

// Line 154: range 0000000013B63C0E-0000000013B63DF3
int32_t __cdecl data::MusicEnemySettings::getHashValue(const data::MusicEnemySettings *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  int32_t HashValue; // eax
  int32_t v6; // eax
  int32_t v7; // eax
  int32_t ArrHashValue; // eax
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
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:155";
  *(_QWORD *)(v2 + 16) = data::MusicEnemySettings::getHashValue;
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
  common::tools::HashUtils::appendHash(this->entity_id, (int32_t *)(v2 + 32));
  HashValue = data::ConfigWwiseString::getHashValue(&this->main_state_value);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->aux_state_group);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->default_aux_state_value);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->combat_phase_states);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
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

// Line 165: range 0000000013B63DF4-0000000013B641FC
bool __cdecl data::arrFromJson(const Json::Value *jval, data::MusicEnemySettingsArray *v)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  int v5; // edx
  _DWORD *v6; // rax
  int v7; // r14d
  data::MusicEnemySettings *v8; // rdx
  _DWORD *v9; // rax
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
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 160 8 elem:171";
  *(_QWORD *)(v2 + 16) = data::arrFromJson;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
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
      v6 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
      *v6 = 0;
      v6[1] = 0;
      v6[2] = 0;
      v6[3] = 0;
      v6[4] = 0;
      data::MusicEnemySettings::MusicEnemySettings((data::MusicEnemySettings *const)(v2 + 96));
      if ( !data::MusicEnemySettings::fromJson((data::MusicEnemySettings *const)(v2 + 96), elem_jval) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
          "arrFromJson",
          174);
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
        v8 = std::move<data::MusicEnemySettings &>((data::MusicEnemySettings *)(v2 + 96));
        std::vector<data::MusicEnemySettings>::emplace_back<data::MusicEnemySettings>(v, v8, v8);
        v7 = 1;
      }
      data::MusicEnemySettings::~MusicEnemySettings((data::MusicEnemySettings *const)(v2 + 96));
      if ( v7 == 1 )
        v5 = 2;
      else
        v5 = 1;
    }
    v9 = (_DWORD *)(((v2 + 96) >> 3) + 2147450880);
    *v9 = -117901064;
    v9[1] = -117901064;
    v9[2] = -117901064;
    v9[3] = -117901064;
    v9[4] = -117901064;
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

// Line 184: range 0000000013B641FD-0000000013B64449
int32_t __cdecl data::getArrHashValue(const data::MusicEnemySettingsArray *vec)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t HashValue; // eax
  int32_t result; // eax
  __gnu_cxx::__normal_iterator<const data::MusicEnemySettings*,std::vector<data::MusicEnemySettings> >::reference elem; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 hash_code:185 64 8 15 __for_begin:186 96 8 13 __for_end:186";
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
  *(std::vector<data::MusicEnemySettings>::const_iterator *)(v2 + 64) = std::vector<data::MusicEnemySettings>::begin(vec);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v1);
  *(std::vector<data::MusicEnemySettings>::const_iterator *)(v2 + 96) = std::vector<data::MusicEnemySettings>::end(vec);
  while ( __gnu_cxx::operator!=<data::MusicEnemySettings const*,std::vector<data::MusicEnemySettings>>(
            (const __gnu_cxx::__normal_iterator<const data::MusicEnemySettings*,std::vector<data::MusicEnemySettings> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const data::MusicEnemySettings*,std::vector<data::MusicEnemySettings> > *)(v2 + 96)) )
  {
    elem = __gnu_cxx::__normal_iterator<data::MusicEnemySettings const*,std::vector<data::MusicEnemySettings>>::operator*((const __gnu_cxx::__normal_iterator<const data::MusicEnemySettings*,std::vector<data::MusicEnemySettings> > *const)(v2 + 64));
    HashValue = data::MusicEnemySettings::getHashValue(elem);
    common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 48));
    __gnu_cxx::__normal_iterator<data::MusicEnemySettings const*,std::vector<data::MusicEnemySettings>>::operator++((__gnu_cxx::__normal_iterator<const data::MusicEnemySettings*,std::vector<data::MusicEnemySettings> > *const)(v2 + 64));
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

// Line 195: range 0000000013B6444A-0000000013B679BF
bool __cdecl data::ConfigAudioMusic::fromJson(data::ConfigAudioMusic *const this, const Json::Value *jval)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char v5; // al
  const Json::Value *v6; // rsi
  bool v7; // bl
  const Json::Value *state_group_name_ptr; // [rsp+18h] [rbp-CC8h]
  const Json::Value *casual_state_value_ptr; // [rsp+20h] [rbp-CC0h]
  const Json::Value *combat_prep_state_value_ptr; // [rsp+28h] [rbp-CB8h]
  const Json::Value *combat_state_value_ptr; // [rsp+30h] [rbp-CB0h]
  const Json::Value *peace_state_value_ptr; // [rsp+38h] [rbp-CA8h]
  const Json::Value *city_approach_trigger_ptr; // [rsp+40h] [rbp-CA0h]
  const Json::Value *combat_trigger_ptr; // [rsp+48h] [rbp-C98h]
  const Json::Value *combat_music_rtpc_ptr; // [rsp+50h] [rbp-C90h]
  const Json::Value *outer_enemy_concern_range_ptr; // [rsp+58h] [rbp-C88h]
  const Json::Value *inner_enemy_concern_range_ptr; // [rsp+60h] [rbp-C80h]
  const Json::Value *attack_from_behind_enter_distance_ptr; // [rsp+68h] [rbp-C78h]
  const Json::Value *attack_from_behind_exit_distance_ptr; // [rsp+70h] [rbp-C70h]
  const Json::Value *intention_in_front_product_threshold_ptr; // [rsp+78h] [rbp-C68h]
  const Json::Value *intention_from_behind_product_threshold_ptr; // [rsp+80h] [rbp-C60h]
  const Json::Value *combat_rtpc_lower_bound_ptr; // [rsp+88h] [rbp-C58h]
  const Json::Value *combat_rtpc_upper_bound_ptr; // [rsp+90h] [rbp-C50h]
  const Json::Value *wait_frames_till_stage_mature_ptr; // [rsp+98h] [rbp-C48h]
  const Json::Value *enemy_main_state_group_ptr; // [rsp+A0h] [rbp-C40h]
  const Json::Value *default_enemy_main_state_value_ptr; // [rsp+A8h] [rbp-C38h]
  const Json::Value *enemy_settings_ptr; // [rsp+B0h] [rbp-C30h]
  const Json::Value *skiff_state_op_ptr; // [rsp+B8h] [rbp-C28h]
  char v31[3104]; // [rsp+C0h] [rbp-C20h] BYREF

  v2 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(3072LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "63 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 <unknown> 128 1 9"
                        " <unknown> 144 1 9 <unknown> 160 1 9 <unknown> 176 1 9 <unknown> 192 1 9 <unknown> 208 1 9 <unkn"
                        "own> 224 1 9 <unknown> 240 1 9 <unknown> 256 1 9 <unknown> 272 1 9 <unknown> 288 1 9 <unknown> 3"
                        "04 1 9 <unknown> 320 1 9 <unknown> 336 1 9 <unknown> 352 1 9 <unknown> 368 1 9 <unknown> 384 32 "
                        "9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9"
                        " <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9"
                        " <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 "
                        "32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1"
                        "664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknow"
                        "n> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <un"
                        "known> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9"
                        " <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 "
                        "32 9 <unknown> 2944 32 9 <unknown> 3008 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioMusic::fromJson;
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
  v4[536862805] = -218959118;
  v4[536862807] = -218959118;
  v4[536862809] = -218959118;
  v4[536862811] = -218959118;
  v4[536862813] = -218959118;
  v4[536862815] = -202116109;
  std::allocator<char>::allocator(v2 + 48);
  std::string::basic_string<std::allocator<char>>(
    (std::string *const)(v2 + 384),
    "stateGroupName",
    (const std::allocator<char> *)(v2 + 48));
  state_group_name_ptr = jsonValueFind(jval, (const std::string *)(v2 + 384));
  std::string::~string((void *)(v2 + 384));
  *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
  std::allocator<char>::~allocator(v2 + 48);
  *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
  if ( state_group_name_ptr && !data::ConfigWwiseString::fromJson(&this->state_group_name, state_group_name_ptr) )
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
      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
      "fromJson",
      205);
    common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
      (common::milog::MiLogStream *const)(v2 + 448),
      (const char (*)[36])"fromJson for: stateGroupName fails!");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    v5 = 0;
  }
  else
  {
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 64);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 512),
      "casualStateValue",
      (const std::allocator<char> *)(v2 + 64));
    casual_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 512));
    std::string::~string((void *)(v2 + 512));
    *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 64);
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    if ( casual_state_value_ptr && !data::ConfigWwiseString::fromJson(&this->casual_state_value, casual_state_value_ptr) )
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
        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
        "fromJson",
        217);
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        (common::milog::MiLogStream *const)(v2 + 576),
        (const char (*)[38])"fromJson for: casualStateValue fails!");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      v5 = 0;
    }
    else
    {
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = 0;
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
      std::allocator<char>::allocator(v2 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 640),
        "combatPrepStateValue",
        (const std::allocator<char> *)(v2 + 80));
      combat_prep_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 640));
      std::string::~string((void *)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 80);
      *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( combat_prep_state_value_ptr
        && !data::ConfigWwiseString::fromJson(&this->combat_prep_state_value, combat_prep_state_value_ptr) )
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
          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
          "fromJson",
          229);
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
          (common::milog::MiLogStream *const)(v2 + 704),
          (const char (*)[42])"fromJson for: combatPrepStateValue fails!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 768),
          "combatStateValue",
          (const std::allocator<char> *)(v2 + 96));
        combat_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 768));
        std::string::~string((void *)(v2 + 768));
        *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 96);
        *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
        if ( combat_state_value_ptr
          && !data::ConfigWwiseString::fromJson(&this->combat_state_value, combat_state_value_ptr) )
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
            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
            "fromJson",
            241);
          common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            (common::milog::MiLogStream *const)(v2 + 832),
            (const char (*)[38])"fromJson for: combatStateValue fails!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          v5 = 0;
        }
        else
        {
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 112);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 896),
            "peaceStateValue",
            (const std::allocator<char> *)(v2 + 112));
          peace_state_value_ptr = jsonValueFind(jval, (const std::string *)(v2 + 896));
          std::string::~string((void *)(v2 + 896));
          *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 112);
          *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( peace_state_value_ptr
            && !data::ConfigWwiseString::fromJson(&this->peace_state_value, peace_state_value_ptr) )
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
              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
              "fromJson",
              253);
            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
              (common::milog::MiLogStream *const)(v2 + 960),
              (const char (*)[37])"fromJson for: peaceStateValue fails!");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v2 + 128);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v2 + 1024),
              "cityApproachTrigger",
              (const std::allocator<char> *)(v2 + 128));
            city_approach_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1024));
            std::string::~string((void *)(v2 + 1024));
            *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v2 + 128);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( city_approach_trigger_ptr
              && !data::ConfigWwiseString::fromJson(&this->city_approach_trigger, city_approach_trigger_ptr) )
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
                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                "fromJson",
                265);
              common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                (common::milog::MiLogStream *const)(v2 + 1088),
                (const char (*)[41])"fromJson for: cityApproachTrigger fails!");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
              v5 = 0;
            }
            else
            {
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 144);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 1152),
                "combatTrigger",
                (const std::allocator<char> *)(v2 + 144));
              combat_trigger_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1152));
              std::string::~string((void *)(v2 + 1152));
              *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 144);
              *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) = -8;
              if ( combat_trigger_ptr && !data::ConfigWwiseString::fromJson(&this->combat_trigger, combat_trigger_ptr) )
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
                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                  "fromJson",
                  277);
                common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                  (common::milog::MiLogStream *const)(v2 + 1216),
                  (const char (*)[35])"fromJson for: combatTrigger fails!");
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                v5 = 0;
              }
              else
              {
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 160);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 1280),
                  "combatMusicRtpc",
                  (const std::allocator<char> *)(v2 + 160));
                combat_music_rtpc_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1280));
                std::string::~string((void *)(v2 + 1280));
                *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 160);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                if ( combat_music_rtpc_ptr
                  && !data::ConfigWwiseString::fromJson(&this->combat_music_rtpc, combat_music_rtpc_ptr) )
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
                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                    "fromJson",
                    289);
                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                    (common::milog::MiLogStream *const)(v2 + 1344),
                    (const char (*)[37])"fromJson for: combatMusicRtpc fails!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
                  v5 = 0;
                }
                else
                {
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 176);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1408),
                    "outerEnemyConcernRange",
                    (const std::allocator<char> *)(v2 + 176));
                  outer_enemy_concern_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1408));
                  std::string::~string((void *)(v2 + 1408));
                  *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 176);
                  *(_BYTE *)(((v2 + 176) >> 3) + 0x7FFF8000) = -8;
                  if ( outer_enemy_concern_range_ptr
                    && !fromJson<float>(outer_enemy_concern_range_ptr, &this->outer_enemy_concern_range) )
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
                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                      "fromJson",
                      301);
                    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                      (common::milog::MiLogStream *const)(v2 + 1472),
                      (const char (*)[44])"fromJson for: outerEnemyConcernRange fails!");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                    v5 = 0;
                  }
                  else
                  {
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 1;
                    std::allocator<char>::allocator(v2 + 192);
                    std::string::basic_string<std::allocator<char>>(
                      (std::string *const)(v2 + 1536),
                      "innerEnemyConcernRange",
                      (const std::allocator<char> *)(v2 + 192));
                    inner_enemy_concern_range_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1536));
                    std::string::~string((void *)(v2 + 1536));
                    *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                    std::allocator<char>::~allocator(v2 + 192);
                    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                    if ( inner_enemy_concern_range_ptr
                      && !fromJson<float>(inner_enemy_concern_range_ptr, &this->inner_enemy_concern_range) )
                    {
                      *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = 0;
                      if ( *(char *)(((v2 + 1600) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) != 0
                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1631) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v2 + 1600, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v2 + 1600),
                        &common::milog::MiLogDefault::default_log_obj_,
                        3u,
                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                        "fromJson",
                        313);
                      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        (common::milog::MiLogStream *const)(v2 + 1600),
                        (const char (*)[44])"fromJson for: innerEnemyConcernRange fails!");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                      v5 = 0;
                    }
                    else
                    {
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = 0;
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = 1;
                      std::allocator<char>::allocator(v2 + 208);
                      std::string::basic_string<std::allocator<char>>(
                        (std::string *const)(v2 + 1664),
                        "attackFromBehindEnterDistance",
                        (const std::allocator<char> *)(v2 + 208));
                      attack_from_behind_enter_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1664));
                      std::string::~string((void *)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      std::allocator<char>::~allocator(v2 + 208);
                      *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) = -8;
                      if ( attack_from_behind_enter_distance_ptr
                        && !fromJson<float>(
                              attack_from_behind_enter_distance_ptr,
                              &this->attack_from_behind_enter_distance) )
                      {
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1728) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 1759) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1728, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1728),
                          &common::milog::MiLogDefault::default_log_obj_,
                          3u,
                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                          "fromJson",
                          325);
                        common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                          (common::milog::MiLogStream *const)(v2 + 1728),
                          (const char (*)[51])"fromJson for: attackFromBehindEnterDistance fails!");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                        v5 = 0;
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 1;
                        std::allocator<char>::allocator(v2 + 224);
                        std::string::basic_string<std::allocator<char>>(
                          (std::string *const)(v2 + 1792),
                          "attackFromBehindExitDistance",
                          (const std::allocator<char> *)(v2 + 224));
                        attack_from_behind_exit_distance_ptr = jsonValueFind(jval, (const std::string *)(v2 + 1792));
                        std::string::~string((void *)(v2 + 1792));
                        *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                        std::allocator<char>::~allocator(v2 + 224);
                        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                        if ( attack_from_behind_exit_distance_ptr
                          && !fromJson<float>(
                                attack_from_behind_exit_distance_ptr,
                                &this->attack_from_behind_exit_distance) )
                        {
                          *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1856) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 1887) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1856, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1856),
                            &common::milog::MiLogDefault::default_log_obj_,
                            3u,
                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                            "fromJson",
                            337);
                          common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                            (common::milog::MiLogStream *const)(v2 + 1856),
                            (const char (*)[50])"fromJson for: attackFromBehindExitDistance fails!");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                          v5 = 0;
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = 0;
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = 1;
                          std::allocator<char>::allocator(v2 + 240);
                          std::string::basic_string<std::allocator<char>>(
                            (std::string *const)(v2 + 1920),
                            "intentionInFrontProductThreshold",
                            (const std::allocator<char> *)(v2 + 240));
                          intention_in_front_product_threshold_ptr = jsonValueFind(
                                                                       jval,
                                                                       (const std::string *)(v2 + 1920));
                          std::string::~string((void *)(v2 + 1920));
                          *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                          std::allocator<char>::~allocator(v2 + 240);
                          *(_BYTE *)(((v2 + 240) >> 3) + 0x7FFF8000) = -8;
                          if ( intention_in_front_product_threshold_ptr
                            && !fromJson<float>(
                                  intention_in_front_product_threshold_ptr,
                                  &this->intention_in_front_product_threshold) )
                          {
                            *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = 0;
                            if ( *(char *)(((v2 + 1984) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) != 0
                              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2015) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v2 + 1984, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v2 + 1984),
                              &common::milog::MiLogDefault::default_log_obj_,
                              3u,
                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                              "fromJson",
                              349);
                            common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                              (common::milog::MiLogStream *const)(v2 + 1984),
                              (const char (*)[54])"fromJson for: intentionInFrontProductThreshold fails!");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                            v5 = 0;
                          }
                          else
                          {
                            *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 1;
                            std::allocator<char>::allocator(v2 + 256);
                            std::string::basic_string<std::allocator<char>>(
                              (std::string *const)(v2 + 2048),
                              "IntentionFromBehindProductThreshold",
                              (const std::allocator<char> *)(v2 + 256));
                            intention_from_behind_product_threshold_ptr = jsonValueFind(
                                                                            jval,
                                                                            (const std::string *)(v2 + 2048));
                            std::string::~string((void *)(v2 + 2048));
                            *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                            std::allocator<char>::~allocator(v2 + 256);
                            *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                            if ( intention_from_behind_product_threshold_ptr
                              && !fromJson<float>(
                                    intention_from_behind_product_threshold_ptr,
                                    &this->intention_from_behind_product_threshold) )
                            {
                              *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = 0;
                              if ( *(char *)(((v2 + 2112) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) != 0
                                && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2143) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v2 + 2112, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v2 + 2112),
                                &common::milog::MiLogDefault::default_log_obj_,
                                3u,
                                "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                "fromJson",
                                361);
                              common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                                (common::milog::MiLogStream *const)(v2 + 2112),
                                (const char (*)[57])"fromJson for: IntentionFromBehindProductThreshold fails!");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                              v5 = 0;
                            }
                            else
                            {
                              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = 0;
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = 1;
                              std::allocator<char>::allocator(v2 + 272);
                              std::string::basic_string<std::allocator<char>>(
                                (std::string *const)(v2 + 2176),
                                "combatRtpcLowerBound",
                                (const std::allocator<char> *)(v2 + 272));
                              combat_rtpc_lower_bound_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2176));
                              std::string::~string((void *)(v2 + 2176));
                              *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                              std::allocator<char>::~allocator(v2 + 272);
                              *(_BYTE *)(((v2 + 272) >> 3) + 0x7FFF8000) = -8;
                              if ( combat_rtpc_lower_bound_ptr
                                && !fromJson<float>(combat_rtpc_lower_bound_ptr, &this->combat_rtpc_lower_bound) )
                              {
                                *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = 0;
                                if ( *(char *)(((v2 + 2240) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2271) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v2 + 2240, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v2 + 2240),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  3u,
                                  "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                  "fromJson",
                                  373);
                                common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                  (common::milog::MiLogStream *const)(v2 + 2240),
                                  (const char (*)[42])"fromJson for: combatRtpcLowerBound fails!");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                                v5 = 0;
                              }
                              else
                              {
                                *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 1;
                                std::allocator<char>::allocator(v2 + 288);
                                std::string::basic_string<std::allocator<char>>(
                                  (std::string *const)(v2 + 2304),
                                  "combatRtpcUpperBound",
                                  (const std::allocator<char> *)(v2 + 288));
                                combat_rtpc_upper_bound_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2304));
                                std::string::~string((void *)(v2 + 2304));
                                *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                                std::allocator<char>::~allocator(v2 + 288);
                                *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                                if ( combat_rtpc_upper_bound_ptr
                                  && !fromJson<float>(combat_rtpc_upper_bound_ptr, &this->combat_rtpc_upper_bound) )
                                {
                                  *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2368) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2399) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2368, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2368),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    3u,
                                    "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                    "fromJson",
                                    385);
                                  common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                    (common::milog::MiLogStream *const)(v2 + 2368),
                                    (const char (*)[42])"fromJson for: combatRtpcUpperBound fails!");
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                                  v5 = 0;
                                }
                                else
                                {
                                  *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = 0;
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = 1;
                                  std::allocator<char>::allocator(v2 + 304);
                                  std::string::basic_string<std::allocator<char>>(
                                    (std::string *const)(v2 + 2432),
                                    "waitFramesTillStageMature",
                                    (const std::allocator<char> *)(v2 + 304));
                                  wait_frames_till_stage_mature_ptr = jsonValueFind(
                                                                        jval,
                                                                        (const std::string *)(v2 + 2432));
                                  std::string::~string((void *)(v2 + 2432));
                                  *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                                  std::allocator<char>::~allocator(v2 + 304);
                                  *(_BYTE *)(((v2 + 304) >> 3) + 0x7FFF8000) = -8;
                                  if ( wait_frames_till_stage_mature_ptr
                                    && !fromJson<int>(
                                          wait_frames_till_stage_mature_ptr,
                                          &this->wait_frames_till_stage_mature) )
                                  {
                                    *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = 0;
                                    if ( *(char *)(((v2 + 2496) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2527) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v2 + 2496, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v2 + 2496),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      3u,
                                      "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                      "fromJson",
                                      397);
                                    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                      (common::milog::MiLogStream *const)(v2 + 2496),
                                      (const char (*)[47])"fromJson for: waitFramesTillStageMature fails!");
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                                    v5 = 0;
                                  }
                                  else
                                  {
                                    *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 1;
                                    std::allocator<char>::allocator(v2 + 320);
                                    std::string::basic_string<std::allocator<char>>(
                                      (std::string *const)(v2 + 2560),
                                      "enemyMainStateGroup",
                                      (const std::allocator<char> *)(v2 + 320));
                                    enemy_main_state_group_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2560));
                                    std::string::~string((void *)(v2 + 2560));
                                    *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
                                    std::allocator<char>::~allocator(v2 + 320);
                                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                                    if ( enemy_main_state_group_ptr
                                      && !data::ConfigWwiseString::fromJson(
                                            &this->enemy_main_state_group,
                                            enemy_main_state_group_ptr) )
                                    {
                                      *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = 0;
                                      if ( *(char *)(((v2 + 2624) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2655) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v2 + 2624, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v2 + 2624),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        3u,
                                        "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                        "fromJson",
                                        409);
                                      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                                        (common::milog::MiLogStream *const)(v2 + 2624),
                                        (const char (*)[41])"fromJson for: enemyMainStateGroup fails!");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
                                      v5 = 0;
                                    }
                                    else
                                    {
                                      *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = 0;
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = 1;
                                      std::allocator<char>::allocator(v2 + 336);
                                      std::string::basic_string<std::allocator<char>>(
                                        (std::string *const)(v2 + 2688),
                                        "defaultEnemyMainStateValue",
                                        (const std::allocator<char> *)(v2 + 336));
                                      default_enemy_main_state_value_ptr = jsonValueFind(
                                                                             jval,
                                                                             (const std::string *)(v2 + 2688));
                                      std::string::~string((void *)(v2 + 2688));
                                      *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
                                      std::allocator<char>::~allocator(v2 + 336);
                                      *(_BYTE *)(((v2 + 336) >> 3) + 0x7FFF8000) = -8;
                                      if ( default_enemy_main_state_value_ptr
                                        && !data::ConfigWwiseString::fromJson(
                                              &this->default_enemy_main_state_value,
                                              default_enemy_main_state_value_ptr) )
                                      {
                                        *(_DWORD *)(((v2 + 2752) >> 3) + 0x7FFF8000) = 0;
                                        if ( *(char *)(((v2 + 2752) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 2783) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v2 + 2752, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v2 + 2752),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          3u,
                                          "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                          "fromJson",
                                          421);
                                        common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                          (common::milog::MiLogStream *const)(v2 + 2752),
                                          (const char (*)[48])"fromJson for: defaultEnemyMainStateValue fails!");
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2752));
                                        v5 = 0;
                                      }
                                      else
                                      {
                                        *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = 0;
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 1;
                                        std::allocator<char>::allocator(v2 + 352);
                                        std::string::basic_string<std::allocator<char>>(
                                          (std::string *const)(v2 + 2816),
                                          "enemySettings",
                                          (const std::allocator<char> *)(v2 + 352));
                                        enemy_settings_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2816));
                                        std::string::~string((void *)(v2 + 2816));
                                        *(_DWORD *)(((v2 + 2816) >> 3) + 0x7FFF8000) = -117901064;
                                        std::allocator<char>::~allocator(v2 + 352);
                                        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                                        if ( enemy_settings_ptr
                                          && !data::arrFromJson(enemy_settings_ptr, &this->enemy_settings) )
                                        {
                                          *(_DWORD *)(((v2 + 2880) >> 3) + 0x7FFF8000) = 0;
                                          if ( *(char *)(((v2 + 2880) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 2911) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v2 + 2880, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v2 + 2880),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            3u,
                                            "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                            "fromJson",
                                            433);
                                          common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                            (common::milog::MiLogStream *const)(v2 + 2880),
                                            (const char (*)[35])"fromJson for: enemySettings fails!");
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2880));
                                          v5 = 0;
                                        }
                                        else
                                        {
                                          *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = 0;
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = 1;
                                          std::allocator<char>::allocator(v2 + 368);
                                          std::string::basic_string<std::allocator<char>>(
                                            (std::string *const)(v2 + 2944),
                                            "skiffStateOp",
                                            (const std::allocator<char> *)(v2 + 368));
                                          v6 = (const Json::Value *)(v2 + 2944);
                                          skiff_state_op_ptr = jsonValueFind(jval, (const std::string *)(v2 + 2944));
                                          std::string::~string((void *)(v2 + 2944));
                                          *(_DWORD *)(((v2 + 2944) >> 3) + 0x7FFF8000) = -117901064;
                                          std::allocator<char>::~allocator(v2 + 368);
                                          *(_BYTE *)(((v2 + 368) >> 3) + 0x7FFF8000) = -8;
                                          if ( skiff_state_op_ptr
                                            && (v6 = skiff_state_op_ptr,
                                                !data::AudioStateOp::fromJson(&this->skiff_state_op, skiff_state_op_ptr)) )
                                          {
                                            *(_DWORD *)(((v2 + 3008) >> 3) + 0x7FFF8000) = 0;
                                            if ( *(char *)(((v2 + 3008) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 3039) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v2 + 3008, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v2 + 3008),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              3u,
                                              "./src/json_data_auto/ComponentDefines/Audio/Boomerang/ConfigAudioMusic.cpp",
                                              "fromJson",
                                              445);
                                            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                              (common::milog::MiLogStream *const)(v2 + 3008),
                                              (const char (*)[34])"fromJson for: skiffStateOp fails!");
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 3008));
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
  }
  v7 = v5;
  if ( v31 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
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
    *(_QWORD *)((v2 >> 3) + 0x7FFF80BC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80CC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80DC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80E4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80EC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80F4) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80FC) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8104) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF810C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8114) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF811C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8124) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF812C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8134) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF813C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8144) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF814C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8154) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF815C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8164) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF816C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8174) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF817C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 3072LL, v31);
  }
  return v7;
};

// Line 453: range 0000000013B679C0-0000000013B67F4D
int32_t __cdecl data::ConfigAudioMusic::getHashValue(const data::ConfigAudioMusic *const this)
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
  int32_t ArrHashValue; // eax
  int32_t v16; // eax
  int32_t result; // eax
  char v18[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 13 hash_code:454";
  *(_QWORD *)(v2 + 16) = data::ConfigAudioMusic::getHashValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 32, v1);
  *(_DWORD *)(v2 + 32) = 0;
  HashValue = data::ConfigWwiseString::getHashValue(&this->state_group_name);
  common::tools::HashUtils::appendHash(HashValue, (int32_t *)(v2 + 32));
  v6 = data::ConfigWwiseString::getHashValue(&this->casual_state_value);
  common::tools::HashUtils::appendHash(v6, (int32_t *)(v2 + 32));
  v7 = data::ConfigWwiseString::getHashValue(&this->combat_prep_state_value);
  common::tools::HashUtils::appendHash(v7, (int32_t *)(v2 + 32));
  v8 = data::ConfigWwiseString::getHashValue(&this->combat_state_value);
  common::tools::HashUtils::appendHash(v8, (int32_t *)(v2 + 32));
  v9 = data::ConfigWwiseString::getHashValue(&this->peace_state_value);
  common::tools::HashUtils::appendHash(v9, (int32_t *)(v2 + 32));
  v10 = data::ConfigWwiseString::getHashValue(&this->city_approach_trigger);
  common::tools::HashUtils::appendHash(v10, (int32_t *)(v2 + 32));
  v11 = data::ConfigWwiseString::getHashValue(&this->combat_trigger);
  common::tools::HashUtils::appendHash(v11, (int32_t *)(v2 + 32));
  v12 = data::ConfigWwiseString::getHashValue(&this->combat_music_rtpc);
  common::tools::HashUtils::appendHash(v12, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->outer_enemy_concern_range >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->outer_enemy_concern_range >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->outer_enemy_concern_range);
  }
  common::tools::HashUtils::appendHash(this->outer_enemy_concern_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->inner_enemy_concern_range >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->inner_enemy_concern_range >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->inner_enemy_concern_range);
  }
  common::tools::HashUtils::appendHash(this->inner_enemy_concern_range, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_from_behind_enter_distance >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->attack_from_behind_enter_distance >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->attack_from_behind_enter_distance);
  }
  common::tools::HashUtils::appendHash(this->attack_from_behind_enter_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->attack_from_behind_exit_distance >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->attack_from_behind_exit_distance >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->attack_from_behind_exit_distance);
  }
  common::tools::HashUtils::appendHash(this->attack_from_behind_exit_distance, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->intention_in_front_product_threshold >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->intention_in_front_product_threshold >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->intention_in_front_product_threshold);
  }
  common::tools::HashUtils::appendHash(this->intention_in_front_product_threshold, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->intention_from_behind_product_threshold >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->intention_from_behind_product_threshold >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->intention_from_behind_product_threshold);
  }
  common::tools::HashUtils::appendHash(this->intention_from_behind_product_threshold, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_rtpc_lower_bound >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->combat_rtpc_lower_bound >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->combat_rtpc_lower_bound);
  }
  common::tools::HashUtils::appendHash(this->combat_rtpc_lower_bound, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->combat_rtpc_upper_bound >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->combat_rtpc_upper_bound >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->combat_rtpc_upper_bound);
  }
  common::tools::HashUtils::appendHash(this->combat_rtpc_upper_bound, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((unsigned __int64)&this->wait_frames_till_stage_mature >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->wait_frames_till_stage_mature >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->wait_frames_till_stage_mature);
  }
  common::tools::HashUtils::appendHash(this->wait_frames_till_stage_mature, (int32_t *)(v2 + 32));
  v13 = data::ConfigWwiseString::getHashValue(&this->enemy_main_state_group);
  common::tools::HashUtils::appendHash(v13, (int32_t *)(v2 + 32));
  v14 = data::ConfigWwiseString::getHashValue(&this->default_enemy_main_state_value);
  common::tools::HashUtils::appendHash(v14, (int32_t *)(v2 + 32));
  ArrHashValue = data::getArrHashValue(&this->enemy_settings);
  common::tools::HashUtils::appendHash(ArrHashValue, (int32_t *)(v2 + 32));
  v16 = data::AudioStateOp::getHashValue(&this->skiff_state_op);
  common::tools::HashUtils::appendHash(v16, (int32_t *)(v2 + 32));
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v2 + 32);
  result = *(_DWORD *)(v2 + 32);
  if ( v18 == (char *)v2 )
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
