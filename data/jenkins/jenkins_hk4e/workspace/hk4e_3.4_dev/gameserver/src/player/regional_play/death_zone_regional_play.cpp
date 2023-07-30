// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/death_zone_regional_play.cpp

// Line 24: range 0000000015CA0ADC-0000000015CA0E32
float __fastcall DeathZoneRegionalPlay::getMaxVarValue(
        const DeathZoneRegionalPlay *const this,
        uint32_t var_type,
        __m128i a3)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float result; // xmm0_4
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rcx
  common::milog::MiLogStream *v12; // rax
  std::shared_ptr<Config> v13; // [rsp+10h] [rbp-B0h] BYREF
  common::milog::MiLogStream v14; // [rsp+20h] [rbp-A0h] BYREF
  char v15[128]; // [rsp+40h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 4 20 erosion_max_limit:25 48 4 21 base_erosion_value:32 64 4 11 var_type:23";
  *(_QWORD *)(v3 + 16) = DeathZoneRegionalPlay::getMaxVarValue;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -202116348;
  *(_DWORD *)(v3 + 64) = var_type;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v13);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
  *(float *)a3.m128i_i32 = ConstValueExcelConfigMgr::getDeathZoneErosionMaxLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
  *(_DWORD *)(v3 + 32) = _mm_cvtsi128_si32(a3);
  std::shared_ptr<Config>::~shared_ptr(&v13);
  if ( *(_DWORD *)(v3 + 64) == 3000 )
  {
    result = *(float *)(v3 + 32);
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v3 + 64) == 3001 )
  {
    *(float *)a3.m128i_i32 = DeathZoneRegionalPlay::getBaseErosionValue(this);
    *(_DWORD *)(v3 + 48) = _mm_cvtsi128_si32(a3);
    if ( *(float *)(v3 + 32) >= *(float *)(v3 + 48) )
    {
      result = *(float *)(v3 + 32) - *(float *)(v3 + 48);
      goto LABEL_15;
    }
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "getMaxVarValue",
      39);
    v8 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
           &v14,
           (const char (*)[47])"[REGIONAL_PLAY:DEATH_ZONE] base_erosion_value:");
    v9 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, (const float *)(v3 + 48));
    v10 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v9, (const char (*)[20])" erosion_max_limit:");
    v11 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, (const float *)(v3 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "getMaxVarValue",
      45);
    v12 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
            &v14,
            (const char (*)[45])"[REGIONAL_PLAY:DEATH_ZONE] invalid var_type:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
  }
  operator<<(v11, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v14);
  result = 0.0;
LABEL_15:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 51: range 0000000015CA0E34-0000000015CA0E44
float __cdecl DeathZoneRegionalPlay::getMinVarValue(const DeathZoneRegionalPlay *const this, uint32_t var_type)
{
  return 0.0;
};

// Line 56: range 0000000015CA0E46-0000000015CA1172
void __fastcall DeathZoneRegionalPlay::onVarChanged(DeathZoneRegionalPlay *const this, uint32_t var_type, __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v12; // rcx
  PlayerRegionalPlayComp *v13; // rax
  float val; // [rsp+18h] [rbp-98h] BYREF
  float v15; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v16; // [rsp+20h] [rbp-90h] BYREF
  char v17[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 var_type:55";
  *(_QWORD *)(v3 + 16) = DeathZoneRegionalPlay::onVarChanged;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = var_type;
  common::milog::MiLogStream::create(
    &v16,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "onVarChanged",
    57);
  v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v16,
         (const char (*)[38])"[REGIONAL_PLAY:DEATH_ZONE] play_name:");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &this->play_name_);
  v8 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v7, (const char (*)[11])" var_type:");
  v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v3 + 32));
  v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" val:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)a3.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, *(_DWORD *)(v3 + 32));
  LODWORD(val) = _mm_cvtsi128_si32(a3);
  v12 = common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &val);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v12, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v16);
  BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
  DeathZoneRegionalPlay::updateErosionSGV(this);
  if ( *(_DWORD *)(v3 + 32) == 3001 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v13 = Player::getRegionalPlayComp(this->player_);
    *(float *)a3.m128i_i32 = PlayerRegionalPlayComp::getVarValue(v13, *(_DWORD *)(v3 + 32));
    v15 = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
    if ( *(_BYTE *)(((unsigned __int64)&this->best_extra_erosion_value_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->best_extra_erosion_value_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->best_extra_erosion_value_);
    }
    if ( v15 > this->best_extra_erosion_value_ )
      this->best_extra_erosion_value_ = v15;
  }
  if ( v17 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 72: range 0000000015CA1174-0000000015CA131A
void __cdecl DeathZoneRegionalPlay::onEnabled(DeathZoneRegionalPlay *const this)
{
  __m128i v1; // xmm0
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rcx
  uint32_t v5; // ecx
  char v6; // dl
  Player *player; // rsi
  bool v8; // dl
  float v9; // edx
  char v10; // al
  common::milog::MiLogStream v11; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v11,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "onEnabled",
    73);
  v2 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v11,
         (const char (*)[38])"[REGIONAL_PLAY:DEATH_ZONE] play_name:");
  v3 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v2, &this->play_name_);
  v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v3, (const char (*)[11])" onEnabled");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  player = this->player_;
  operator<<(v4, player);
  common::milog::MiLogStream::~MiLogStream(&v11);
  DeathZoneRegionalPlay::updateBaseErosionVar(this);
  DeathZoneRegionalPlay::updateErosionSGV(this);
  v5 = DeathZoneRegionalPlay::calcCurDeathZoneId(this);
  v6 = *(_BYTE *)(((unsigned __int64)&this->log_death_zone_id_ >> 3) + 0x7FFF8000);
  LOBYTE(player) = v6 != 0;
  v8 = v6 != 0 && (char)((((_BYTE)this - 124) & 7) + 3) >= v6;
  if ( v8 )
    __asan_report_store4(&this->log_death_zone_id_, player, v8);
  this->log_death_zone_id_ = v5;
  *(float *)v1.m128i_i32 = DeathZoneRegionalPlay::getExtraErosionValue(this);
  v9 = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  v10 = *(_BYTE *)(((unsigned __int64)&this->best_extra_erosion_value_ >> 3) + 0x7FFF8000);
  if ( v10 != 0 && v10 <= 3 )
  {
    LOBYTE(player) = v10 != 0;
    __asan_report_store4(&this->best_extra_erosion_value_, player, LOBYTE(v9));
  }
  this->best_extra_erosion_value_ = v9;
  DeathZoneRegionalPlay::logEnterDeathZone(this);
};

// Line 82: range 0000000015CA131C-0000000015CA1404
void __cdecl DeathZoneRegionalPlay::onDisabled(DeathZoneRegionalPlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rcx
  common::milog::MiLogStream v4; // [rsp+10h] [rbp-30h] BYREF

  common::milog::MiLogStream::create(
    &v4,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "onDisabled",
    83);
  v1 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
         &v4,
         (const char (*)[38])"[REGIONAL_PLAY:DEATH_ZONE] play_name:");
  v2 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v1, &this->play_name_);
  v3 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v2, (const char (*)[12])" onDisabled");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v3, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v4);
  DeathZoneRegionalPlay::logDestroyDeathZone(this);
};

// Line 88: range 0000000015CA1406-0000000015CA1420
void __cdecl DeathZoneRegionalPlay::update(DeathZoneRegionalPlay *const this)
{
  DeathZoneRegionalPlay::updateExtraErosionVarOnTimer(this);
};

// Line 93: range 0000000015CA1422-0000000015CA1BC6
void __cdecl DeathZoneRegionalPlay::updateBaseErosionVar(DeathZoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rcx
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rcx
  __m128i v9; // xmm0
  common::milog::MiLogStream *v10; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rcx
  PlayerRegionalPlayComp *v18; // rax
  __m128i v19; // xmm0
  PlayerRegionalPlayComp *v20; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  PlayerRegionalPlayComp *v22; // rax
  float extra_erosion_value; // [rsp+18h] [rbp-D8h]
  float erosion_max_limit; // [rsp+1Ch] [rbp-D4h]
  std::shared_ptr<Config> v25; // [rsp+20h] [rbp-D0h] BYREF
  common::milog::MiLogStream v26; // [rsp+30h] [rbp-C0h] BYREF
  char v27[160]; // [rsp+50h] [rbp-A0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 32 4 18 cur_polygon_id:100 48 4 17 death_zone_id:101 64 4 23 config_base_erosion:107 80 4 23 c"
                        "onfig_erosion_rate:108 96 4 22 base_erosion_value:116";
  *(_QWORD *)(v1 + 16) = DeathZoneRegionalPlay::updateBaseErosionVar;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234556924;
  v3[536862723] = -202116348;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  if ( !this->is_in_region_ )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateBaseErosionVar",
      96);
    v4 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
           &v26,
           (const char (*)[62])"[REGIONAL_PLAY:DEATH_ZONE] updateBaseErosionVar not in region");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v4, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    goto LABEL_33;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PolygonComp = Player::getPolygonComp(this->player_);
  *(_DWORD *)(v1 + 32) = PlayerPolygonComp::getCurPolygonId(PolygonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v25);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
  *(_DWORD *)(v1 + 48) = JsonConfigMgr::findDeathZoneIdByPolygonId(
                           &v6->design_config.json_config_mgr,
                           *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v25);
  if ( !*(_DWORD *)(v1 + 48) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateBaseErosionVar",
      104);
    v7 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
           &v26,
           (const char (*)[78])"[REGIONAL_PLAY:DEATH_ZONE] findDeathZoneIdByPolygonId failed, cur_polygon_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_15:
    operator<<(v8, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v26);
    goto LABEL_33;
  }
  *(_DWORD *)(v1 + 64) = 0;
  v9 = 0LL;
  *(_DWORD *)(v1 + 80) = 0;
  if ( DeathZoneRegionalPlay::getDeathZoneErosionConfig(
         this,
         *(_DWORD *)(v1 + 48),
         (float *)(v1 + 64),
         (float *)(v1 + 80)) )
  {
    common::milog::MiLogStream::create(
      &v26,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateBaseErosionVar",
      111);
    v10 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
            &v26,
            (const char (*)[76])"[REGIONAL_PLAY:DEATH_ZONE] getDeathZoneErosionConfig failed, death_zone_id:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v1 + 48));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_15;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)v9.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0xBB8u);
  *(_DWORD *)(v1 + 96) = _mm_cvtsi128_si32(v9);
  common::milog::MiLogStream::create(
    &v26,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "updateBaseErosionVar",
    117);
  v12 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
          &v26,
          (const char (*)[63])"[REGIONAL_PLAY:DEATH_ZONE] updateBaseErosionVar death_zone_id:");
  v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v1 + 48));
  v14 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
          v13,
          (const char (*)[22])" config_base_erosion:");
  v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v1 + 64));
  v16 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v15, (const char (*)[21])" base_erosion_value:");
  v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v1 + 96));
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  operator<<(v17, this->player_);
  common::milog::MiLogStream::~MiLogStream(&v26);
  if ( std::fabs(*(float *)(v1 + 64) - *(float *)(v1 + 96)) > 0.00000011920929 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v18 = Player::getRegionalPlayComp(this->player_);
    v19 = _mm_cvtsi32_si128(*(_DWORD *)(v1 + 64));
    PlayerRegionalPlayComp::setVarValue(v18, 0xBB8u, *(float *)v19.m128i_i32);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v20 = Player::getRegionalPlayComp(this->player_);
    *(float *)v19.m128i_i32 = PlayerRegionalPlayComp::getVarValue(v20, 0xBB9u);
    extra_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v25);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v25);
    *(float *)v19.m128i_i32 = ConstValueExcelConfigMgr::getDeathZoneErosionMaxLimit(&v21->design_config.txt_config_mgr.const_value_config_mgr);
    erosion_max_limit = COERCE_FLOAT(_mm_cvtsi128_si32(v19));
    std::shared_ptr<Config>::~shared_ptr(&v25);
    if ( (float)(*(float *)(v1 + 64) + extra_erosion_value) > erosion_max_limit )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v22 = Player::getRegionalPlayComp(this->player_);
      PlayerRegionalPlayComp::setVarValue(v22, 0xBB9u, erosion_max_limit - *(float *)(v1 + 64));
    }
  }
LABEL_33:
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 134: range 0000000015CA1BC8-0000000015CA2556
void __cdecl DeathZoneRegionalPlay::updateExtraErosionVarOnTimer(DeathZoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  common::milog::MiLogStream *v5; // r14
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  int v13; // r14d
  RegionPlayLevelExcelConfigMgr *p_region_play_level_config_mgr; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v15; // rax
  common::milog::MiLogStream *v16; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v17; // rax
  __m128i v18; // xmm0
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  unsigned __int64 v20; // rax
  PlayerRegionalPlayComp *v21; // rax
  PlayerRegionalPlayComp *v22; // rax
  uint32_t cur_polygon_id; // [rsp+1Ch] [rbp-F4h]
  float extra_erosion_value; // [rsp+24h] [rbp-ECh]
  const data::DeathRegionLevelExcelConfig *death_zone_level_config_ptr; // [rsp+28h] [rbp-E8h]
  std::shared_ptr<Config> v26; // [rsp+30h] [rbp-E0h] BYREF
  common::milog::MiLogStream v27; // [rsp+40h] [rbp-D0h] BYREF
  char v28[176]; // [rsp+60h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 16 erosion_rate:141 64 4 17 death_zone_id:145 80 4 16 base_erosion:146 96 16 14 config_ptr:156";
  *(_QWORD *)(v1 + 16) = DeathZoneRegionalPlay::updateExtraErosionVarOnTimer;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  BasicComp = Player::getBasicComp(this->player_);
  if ( PlayerBasicComp::getIsGameTimeLockedByClient(BasicComp) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateExtraErosionVarOnTimer",
      137);
    v5 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
           &v27,
           (const char (*)[56])"[REGIONAL_PLAY:DEATH_ZONE] GameTimeLockedByClient, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    *(_DWORD *)(v1 + 80) = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v1 + 80));
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_51;
  }
  *(_DWORD *)(v1 + 48) = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  if ( !this->is_in_region_ )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v26);
    v10 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
    JsonConfigMgr::findRegionalPlayConfig(
      (const JsonConfigMgr *const)(v1 + 96),
      (const std::string *)&v10->design_config.json_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v26);
    if ( std::operator==<data::ConfigRegionalPlayBase>(
           0LL,
           (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "updateExtraErosionVarOnTimer",
        159);
      v11 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
              &v27,
              (const char (*)[70])"[REGIONAL_PLAY:DEATH_ZONE] findRegionalPlayConfig failed, play_name: ");
      v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &this->play_name_);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      ServiceBox::findService<GameserverService>();
      GameserverService::getConfig((GameserverService *const)&v26);
      p_region_play_level_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26)->design_config.txt_config_mgr.region_play_level_config_mgr;
      v15 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v15->default_config_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v15->default_config_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v15 = (std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v15->default_config_id);
      }
      death_zone_level_config_ptr = data::RegionPlayLevelExcelConfigMgrBase::findDeathRegionLevelExcelConfig(
                                      p_region_play_level_config_mgr,
                                      v15->default_config_id);
      std::shared_ptr<Config>::~shared_ptr(&v26);
      if ( death_zone_level_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->erosion_rate >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->erosion_rate >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&death_zone_level_config_ptr->erosion_rate);
        }
        *(float *)(v1 + 48) = death_zone_level_config_ptr->erosion_rate;
        v13 = 1;
LABEL_32:
        std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v1 + 96));
        if ( v13 != 1 )
          goto LABEL_51;
        goto LABEL_33;
      }
      common::milog::MiLogStream::create(
        &v27,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "updateExtraErosionVarOnTimer",
        165);
      v16 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
              &v27,
              (const char (*)[85])"[REGIONAL_PLAY:DEATH_ZONE] findDeathRegionLevelExcelConfig failed, death_zone_level:");
      v17 = std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &v17->default_config_id);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    operator<<(v12, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    v13 = 0;
    goto LABEL_32;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PolygonComp = Player::getPolygonComp(this->player_);
  cur_polygon_id = PlayerPolygonComp::getCurPolygonId(PolygonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v26);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v26);
  *(_DWORD *)(v1 + 64) = JsonConfigMgr::findDeathZoneIdByPolygonId(&v7->design_config.json_config_mgr, cur_polygon_id);
  std::shared_ptr<Config>::~shared_ptr(&v26);
  *(_DWORD *)(v1 + 80) = 0;
  if ( DeathZoneRegionalPlay::getDeathZoneErosionConfig(
         this,
         *(_DWORD *)(v1 + 64),
         (float *)(v1 + 80),
         (float *)(v1 + 48)) )
  {
    common::milog::MiLogStream::create(
      &v27,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateExtraErosionVarOnTimer",
      149);
    v8 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
           &v27,
           (const char (*)[76])"[REGIONAL_PLAY:DEATH_ZONE] getDeathZoneErosionConfig failed, death_zone_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v1 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v27);
    goto LABEL_51;
  }
LABEL_33:
  v18 = (__m128i)*(unsigned int *)(v1 + 48);
  if ( *(float *)v18.m128i_i32 <= 0.0 )
    goto LABEL_47;
  if ( *(char *)(((unsigned __int64)&this->is_stop_add_extra_erosion >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_stop_add_extra_erosion);
  if ( !this->is_stop_add_extra_erosion )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
    *(float *)v18.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0xBB9u);
    extra_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v18));
    if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_load8(this);
    v20 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 4);
    if ( *(_BYTE *)((v20 >> 3) + 0x7FFF8000) )
      v20 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 4);
    if ( (*(float (__fastcall **)(DeathZoneRegionalPlay *const, __int64))v20)(this, 3001LL) > extra_erosion_value )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v21 = Player::getRegionalPlayComp(this->player_);
      PlayerRegionalPlayComp::addVarValue(v21, 0xBB9u, *(float *)(v1 + 48));
    }
  }
  else
  {
LABEL_47:
    if ( *(float *)(v1 + 48) < 0.0 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      v22 = Player::getRegionalPlayComp(this->player_);
      PlayerRegionalPlayComp::subVarValue(v22, 0xBB9u, -*(float *)(v1 + 48));
    }
  }
LABEL_51:
  if ( v28 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 186: range 0000000015CA2558-0000000015CA2E46
void __cdecl DeathZoneRegionalPlay::updateErosionSGV(DeathZoneRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // r15
  unsigned int v12; // r14d
  std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v13; // rax
  common::milog::MiLogStream *v15; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v21; // rax
  __m128i v22; // xmm0
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v23; // r15
  float v24; // r14d
  std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v25; // rax
  common::milog::MiLogStream *v26; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r14
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  unsigned int val; // [rsp+1Ch] [rbp-104h] BYREF
  std::shared_ptr<Config> v35; // [rsp+20h] [rbp-100h] BYREF
  common::milog::MiLogStream v36; // [rsp+30h] [rbp-F0h] BYREF
  char v37[208]; // [rsp+50h] [rbp-D0h] BYREF

  v2 = (unsigned __int64)v37;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 23 total_erosion_value:200 64 4 21 per_level_erosion:208 80 4 17 erosion_level:211 96 16 "
                        "19 json_config_ptr:187 128 16 12 team_ptr:193";
  *(_QWORD *)(v2 + 16) = DeathZoneRegionalPlay::updateErosionSGV;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -219021312;
  v4[536862724] = -202178560;
  DeathZoneRegionalPlay::getJsonConfig((const DeathZoneRegionalPlay *const)(v2 + 96));
  if ( !std::operator==<data::ConfigRegionalPlayDeathZone>(
          0LL,
          (const std::shared_ptr<data::ConfigRegionalPlayDeathZone> *)(v2 + 96)) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 128));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 128)) )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "updateErosionSGV",
        196);
      v6 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
             &v36,
             (const char (*)[64])"[REGIONAL_PLAY:DEATH_ZONE] getTeamEntity team_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
      common::milog::MiLogStream::~MiLogStream(&v36);
      goto LABEL_32;
    }
    *(float *)v1.m128i_i32 = DeathZoneRegionalPlay::getTotalErosionValue(this);
    *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
    common::milog::MiLogStream::create(
      &v36,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "updateErosionSGV",
      201);
    v7 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v36,
           (const char (*)[66])"[REGIONAL_PLAY:DEATH_ZONE] updateErosionSGV, total_erosion_value:");
    v8 = common::milog::MiLogStream::operator<<<float,(float *)0>(v7, (const float *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    v10 = std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
    if ( (unsigned __int8)std::string::empty(&v10->erosion_sgv) != 1 )
    {
      v11 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v12 = *(_DWORD *)(v2 + 48);
      v13 = std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v1 = _mm_cvtsi32_si128(v12);
      if ( Creature::setServerGlobalValue(v11, &v13->erosion_sgv, *(float *)v1.m128i_i32, 1) )
      {
        common::milog::MiLogStream::create(
          &v36,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/death_zone_regional_play.cpp",
          "updateErosionSGV",
          204);
        v15 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                &v36,
                (const char (*)[60])"[REGIONAL_PLAY:DEATH_ZONE] updateErosionSGV fail, sgv_name:");
        v16 = std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
        v17 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &v16->erosion_sgv);
        v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])", sgv_value:");
        v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v2 + 48));
        v20 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v19, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
        val = Player::getUid(this->player_);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &val);
        common::milog::MiLogStream::~MiLogStream(&v36);
      }
    }
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v35);
    v21 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v35);
    *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getDeathZonePerLevelErosion(&v21->design_config.txt_config_mgr.const_value_config_mgr);
    *(_DWORD *)(v2 + 64) = _mm_cvtsi128_si32(v1);
    std::shared_ptr<Config>::~shared_ptr(&v35);
    if ( *(float *)(v2 + 64) <= 0.0 )
    {
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "updateErosionSGV",
        220);
      v32 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
              &v36,
              (const char (*)[54])"[REGIONAL_PLAY:DEATH_ZONE] invalid per_level_erosion:");
      v33 = common::milog::MiLogStream::operator<<<float,(float *)0>(v32, (const float *)(v2 + 64));
      v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v33, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v22 = (__m128i)*(unsigned int *)(v2 + 48);
      *(float *)v22.m128i_i32 = std::floor(*(float *)v22.m128i_i32 / *(float *)(v2 + 64));
      *(_DWORD *)(v2 + 80) = _mm_cvtsi128_si32(v22);
      v23 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 128));
      v24 = *(float *)(v2 + 80);
      v25 = std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      if ( !Creature::setServerGlobalValue(v23, &v25->erosion_level_sgv, v24, 1) )
      {
LABEL_32:
        std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 128));
        goto LABEL_33;
      }
      common::milog::MiLogStream::create(
        &v36,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "updateErosionSGV",
        214);
      v26 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
              &v36,
              (const char (*)[60])"[REGIONAL_PLAY:DEATH_ZONE] updateErosionSGV fail, sgv_name:");
      v27 = std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v28 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, &v27->erosion_level_sgv);
      v29 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v28, (const char (*)[13])", sgv_value:");
      v30 = common::milog::MiLogStream::operator<<<float,(float *)0>(v29, (const float *)(v2 + 80));
      v31 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v30, (const char (*)[7])", uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v31, &val);
    common::milog::MiLogStream::~MiLogStream(&v36);
    goto LABEL_32;
  }
  common::milog::MiLogStream::create(
    &v36,
    &common::milog::MiLogDefault::default_log_obj_,
    3u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "updateErosionSGV",
    190);
  v5 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
         &v36,
         (const char (*)[52])"[REGIONAL_PLAY:DEATH_ZONE] getJsonConfig fail, uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
  common::milog::MiLogStream::~MiLogStream(&v36);
LABEL_33:
  std::shared_ptr<data::ConfigRegionalPlayDeathZone>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayDeathZone> *const)(v2 + 96));
  if ( v37 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
};

// Line 225: range 0000000015CA2E48-0000000015CA2EF0
void __cdecl DeathZoneRegionalPlay::onChangePolygon(DeathZoneRegionalPlay *const this, uint32_t cur_polygon_id)
{
  uint32_t cur_death_zone_id; // [rsp+1Ch] [rbp-4h]

  BaseRegionalPlay::onChangePolygon(this, cur_polygon_id);
  DeathZoneRegionalPlay::updateBaseErosionVar(this);
  cur_death_zone_id = DeathZoneRegionalPlay::calcCurDeathZoneId(this);
  if ( cur_death_zone_id )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->log_death_zone_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->log_death_zone_id_ >> 3)
                                                           + 0x7FFF8000) )
    {
      __asan_report_load4(&this->log_death_zone_id_);
    }
    if ( cur_death_zone_id != this->log_death_zone_id_ )
    {
      this->log_death_zone_id_ = cur_death_zone_id;
      DeathZoneRegionalPlay::logEnterDeathZone(this);
    }
  }
};

// Line 237: range 0000000015CA2EF2-0000000015CA2F8D
void __cdecl DeathZoneRegionalPlay::onDeathZoneStatusChange(
        DeathZoneRegionalPlay *const this,
        uint32_t death_zone_id,
        bool is_open)
{
  PlayerSceneComp *SceneComp; // rax
  char v4; // al

  BaseRegionalPlay::checkIsInRegion(this);
  DeathZoneRegionalPlay::updateBaseErosionVar(this);
  if ( is_open )
    goto LABEL_6;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v4 = 1;
  else
LABEL_6:
    v4 = 0;
  if ( v4 )
    DeathZoneRegionalPlay::logFinishDeathZone(this, death_zone_id);
};

// Line 248: range 0000000015CA2F8E-0000000015CA34EE
bool __cdecl DeathZoneRegionalPlay::checkSpecialCanDestory(DeathZoneRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // r12
  bool v7; // r14
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  char v13; // al
  std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v14; // rax
  bool result; // al
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t extra_erosion_var_type; // [rsp+1Ch] [rbp-A4h]
  float extra_erosion_value; // [rsp+20h] [rbp-A0h]
  data::SceneType scene_type; // [rsp+24h] [rbp-9Ch]
  const RegionalPlayVarJsonConfig *RegionalPlayVarJsonConfig; // [rsp+28h] [rbp-98h]
  common::milog::MiLogStream v21; // [rsp+30h] [rbp-90h] BYREF
  char v22[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 17 cur_scene_ptr:268";
  *(_QWORD *)(v2 + 16) = DeathZoneRegionalPlay::checkSpecialCanDestory;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  extra_erosion_var_type = 3001;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v2 + 32));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
  RegionalPlayVarJsonConfig = JsonConfigMgr::findRegionalPlayVarJsonConfig(&v5->design_config.json_config_mgr, 0xBB9u);
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v2 + 32));
  if ( !RegionalPlayVarJsonConfig )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "checkSpecialCanDestory",
      253);
    v6 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
           &v21,
           (const char (*)[69])"[DEATH_ZONE] find DeathZoneExtraErosion var json config failed, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    v7 = 0;
    goto LABEL_33;
  }
  if ( std::operator!=<char>(&this->play_name_, &RegionalPlayVarJsonConfig->play_name) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "checkSpecialCanDestory",
      258);
    v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
           &v21,
           (const char (*)[24])"[DEATH_ZONE] play_name:");
    v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, &this->play_name_);
    v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v9,
            (const char (*)[24])" json config play_name:");
    v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
            v10,
            &RegionalPlayVarJsonConfig->play_name);
    v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)v1.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, extra_erosion_var_type);
  extra_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  if ( this->is_in_region_ )
    goto LABEL_21;
  if ( *(_BYTE *)(((unsigned __int64)&RegionalPlayVarJsonConfig->init_value >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)RegionalPlayVarJsonConfig + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&RegionalPlayVarJsonConfig->init_value >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&RegionalPlayVarJsonConfig->init_value);
  }
  if ( std::fabs(RegionalPlayVarJsonConfig->init_value - extra_erosion_value) <= 0.00000011920929 )
    v13 = 1;
  else
LABEL_21:
    v13 = 0;
  if ( v13 )
  {
    v7 = 1;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v2 + 32));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v2 + 32)) )
    {
      v7 = 0;
    }
    else
    {
      v14 = std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
      scene_type = Scene::getSceneType(v14);
      v7 = scene_type != SCENE_WORLD && scene_type != SCENE_ROOM;
    }
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v2 + 32));
  }
LABEL_33:
  result = v7;
  if ( v22 == (char *)v2 )
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

// Line 283: range 0000000015CA34F0-0000000015CA3B7E
bool __cdecl DeathZoneRegionalPlay::checkSpecialIsInRegion(DeathZoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rbx
  bool is_open; // r14
  common::milog::MiLogStream *v10; // r14
  common::milog::MiLogStream *v11; // r14
  Player *v12; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  bool result; // al
  unsigned int val; // [rsp+14h] [rbp-DCh] BYREF
  const DeathZoneData *death_zone_data_ptr; // [rsp+18h] [rbp-D8h]
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(128LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 32 4 18 cur_polygon_id:284 48 4 17 death_zone_id:285 64 16 13 scene_ptr:291 96 16 20 owner_player_ptr:297";
  *(_QWORD *)(v1 + 16) = DeathZoneRegionalPlay::checkSpecialIsInRegion;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PolygonComp = Player::getPolygonComp(this->player_);
  *(_DWORD *)(v1 + 32) = PlayerPolygonComp::getCurPolygonId(PolygonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)(v1 + 96));
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
  *(_DWORD *)(v1 + 48) = JsonConfigMgr::findDeathZoneIdByPolygonId(
                           &v5->design_config.json_config_mgr,
                           *(_DWORD *)(v1 + 32));
  std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)(v1 + 96));
  if ( *(_DWORD *)(v1 + 48) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getSceneComp(this->player_);
    PlayerSceneComp::getCurScene((const PlayerSceneComp *const)(v1 + 64));
    if ( std::operator==<Scene>(0LL, (const std::shared_ptr<Scene> *)(v1 + 64)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "checkSpecialIsInRegion",
        294);
      v10 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
              &v19,
              (const char (*)[51])"[REGIONAL_PLAY:DEATH_ZONE] cur scene is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      val = Player::getUid(this->player_);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &val);
      common::milog::MiLogStream::~MiLogStream(&v19);
      is_open = 0;
      goto LABEL_28;
    }
    std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Scene,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
    Scene::getOwnPlayer((const Scene *const)(v1 + 96));
    if ( std::operator==<Player>(0LL, (const std::shared_ptr<Player> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "checkSpecialIsInRegion",
        300);
      v11 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
              &v19,
              (const char (*)[58])"[REGIONAL_PLAY:DEATH_ZONE] owner_player_ptr is null, uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      v12 = std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Player,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      RegionalPlayComp = Player::getRegionalPlayComp(v12);
      death_zone_data_ptr = PlayerRegionalPlayComp::findDeathZoneData(RegionalPlayComp, *(_DWORD *)(v1 + 48));
      if ( death_zone_data_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&death_zone_data_ptr->is_open >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)death_zone_data_ptr + 4) & 7) >= *(_BYTE *)(((unsigned __int64)&death_zone_data_ptr->is_open >> 3)
                                                                          + 0x7FFF8000) )
        {
          __asan_report_load1(&death_zone_data_ptr->is_open);
        }
        is_open = death_zone_data_ptr->is_open;
        goto LABEL_27;
      }
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/death_zone_regional_play.cpp",
        "checkSpecialIsInRegion",
        306);
      v14 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
              &v19,
              (const char (*)[68])"[REGIONAL_PLAY:DEATH_ZONE] findDeathZoneData failed, death_zone_id:");
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v1 + 48));
      v11 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v15, (const char (*)[6])" uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    is_open = 0;
LABEL_27:
    std::shared_ptr<Player>::~shared_ptr((std::shared_ptr<Player> *const)(v1 + 96));
LABEL_28:
    std::shared_ptr<Scene>::~shared_ptr((std::shared_ptr<Scene> *const)(v1 + 64));
    goto LABEL_29;
  }
  common::milog::MiLogStream::create(
    &v19,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/death_zone_regional_play.cpp",
    "checkSpecialIsInRegion",
    288);
  v6 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
         &v19,
         (const char (*)[66])"[REGIONAL_PLAY:DEATH_ZONE] death_zone_id is zero, cur_polygon_id:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v1 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v7, (const char (*)[6])" uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  val = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
  common::milog::MiLogStream::~MiLogStream(&v19);
  is_open = 0;
LABEL_29:
  result = is_open;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 313: range 0000000015CA3B80-0000000015CA3C3B
float __cdecl DeathZoneRegionalPlay::getTotalErosionValue(const DeathZoneRegionalPlay *const this)
{
  __m128i v1; // xmm0
  __m128i v2; // xmm0
  __m128i v3; // xmm0
  unsigned int total_erosion_value; // [rsp+14h] [rbp-Ch]
  float extra_erosion_value; // [rsp+18h] [rbp-8h]
  float base_erosion_value; // [rsp+1Ch] [rbp-4h]

  v1 = 0LL;
  *(float *)v1.m128i_i32 = DeathZoneRegionalPlay::getExtraErosionValue(this);
  extra_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v1));
  v2 = _mm_cvtsi32_si128(0);
  *(float *)v2.m128i_i32 = SAFE_ADD<float,float>(*(float *)v2.m128i_i32, extra_erosion_value);
  *(float *)&total_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
  if ( *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_in_region_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_in_region_);
  }
  if ( this->is_in_region_ )
  {
    *(float *)v2.m128i_i32 = DeathZoneRegionalPlay::getBaseErosionValue(this);
    base_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v2));
    v3 = _mm_cvtsi32_si128(total_erosion_value);
    *(float *)v3.m128i_i32 = SAFE_ADD<float,float>(*(float *)v3.m128i_i32, base_erosion_value);
    *(float *)&total_erosion_value = COERCE_FLOAT(_mm_cvtsi128_si32(v3));
  }
  return *(float *)&total_erosion_value;
};

// Line 325: range 0000000015CA3C3C-0000000015CA410B
__int64 __fastcall DeathZoneRegionalPlay::getDeathZoneErosionConfig(
        const DeathZoneRegionalPlay *const this,
        uint32_t death_zone_id,
        unsigned __int64 base_erosion,
        unsigned __int64 erosion_rate)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  unsigned __int64 v6; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rcx
  __int64 result; // rax
  RegionPlayLevelExcelConfigMgr *p_region_play_level_config_mgr; // rcx
  common::milog::MiLogStream *v12; // rax
  float v13; // xmm0_4
  bool v14; // dl
  float v15; // xmm0_4
  bool v16; // dl
  const data::ConfigDeathZone *death_zone_config_ptr; // [rsp+20h] [rbp-A0h]
  const data::DeathRegionLevelExcelConfig *death_zone_level_config_ptr; // [rsp+28h] [rbp-98h]
  std::shared_ptr<Config> v21; // [rsp+30h] [rbp-90h] BYREF
  common::milog::MiLogStream v22; // [rsp+40h] [rbp-80h] BYREF
  char v23[96]; // [rsp+60h] [rbp-60h] BYREF

  v4 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_0(64LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "1 32 4 17 death_zone_id:324";
  *(_QWORD *)(v4 + 16) = DeathZoneRegionalPlay::getDeathZoneErosionConfig;
  v6 = v4 >> 3;
  *(_DWORD *)(v6 + 2147450880) = -235802127;
  *(_DWORD *)(v6 + 2147450884) = -202116348;
  *(_DWORD *)(v4 + 32) = death_zone_id;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v7 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  death_zone_config_ptr = JsonConfigMgr::findDeathZoneConfig(&v7->design_config.json_config_mgr, *(_DWORD *)(v4 + 32));
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !death_zone_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "getDeathZoneErosionConfig",
      329);
    v8 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v22,
           (const char (*)[70])"[REGIONAL_PLAY:DEATH_ZONE] findDeathZoneConfig failed, death_zone_id:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, (const unsigned int *)(v4 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    operator<<(v9, this->player_);
    common::milog::MiLogStream::~MiLogStream(&v22);
    result = 0xFFFFFFFFLL;
    goto LABEL_23;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  p_region_play_level_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21)->design_config.txt_config_mgr.region_play_level_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&death_zone_config_ptr->level >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&death_zone_config_ptr->level >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&death_zone_config_ptr->level);
  }
  death_zone_level_config_ptr = data::RegionPlayLevelExcelConfigMgrBase::findDeathRegionLevelExcelConfig(
                                  p_region_play_level_config_mgr,
                                  death_zone_config_ptr->level);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( !death_zone_level_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "getDeathZoneErosionConfig",
      335);
    v12 = common::milog::MiLogStream::operator<<<char [85],(char *[85])0>(
            &v22,
            (const char (*)[85])"[REGIONAL_PLAY:DEATH_ZONE] findDeathRegionLevelExcelConfig failed, death_zone_level:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &death_zone_config_ptr->level);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  if ( *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->base_erosion >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)death_zone_level_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->base_erosion >> 3)
                                                                               + 0x7FFF8000) )
  {
    __asan_report_load4(&death_zone_level_config_ptr->base_erosion);
  }
  v13 = death_zone_level_config_ptr->base_erosion;
  v14 = *(_BYTE *)((base_erosion >> 3) + 0x7FFF8000) != 0
     && (char)((base_erosion & 7) + 3) >= *(_BYTE *)((base_erosion >> 3) + 0x7FFF8000);
  if ( v14 )
    __asan_report_store4(base_erosion, (unsigned int)(base_erosion & 7) + 3, v14);
  *(float *)base_erosion = v13;
  if ( *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->erosion_rate >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&death_zone_level_config_ptr->erosion_rate >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&death_zone_level_config_ptr->erosion_rate);
  }
  v15 = death_zone_level_config_ptr->erosion_rate;
  v16 = *(_BYTE *)((erosion_rate >> 3) + 0x7FFF8000) != 0
     && (char)((erosion_rate & 7) + 3) >= *(_BYTE *)((erosion_rate >> 3) + 0x7FFF8000);
  if ( v16 )
    __asan_report_store4(erosion_rate, (unsigned int)(erosion_rate & 7) + 3, v16);
  *(float *)erosion_rate = v15;
  result = 0LL;
LABEL_23:
  if ( v23 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 344: range 0000000015CA410C-0000000015CA43CC
data::ConfigRegionalPlayDeathZonePtr __cdecl DeathZoneRegionalPlay::getJsonConfig(
        const DeathZoneRegionalPlay *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  data::ConfigRegionalPlayDeathZonePtr result; // rax
  unsigned int val; // [rsp+1Ch] [rbp-A4h] BYREF
  std::shared_ptr<Config> v11; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-90h] BYREF
  char v13[112]; // [rsp+50h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:345";
  *(_QWORD *)(v2 + 16) = DeathZoneRegionalPlay::getJsonConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v2 + 32),
    (const std::string *)&v5->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/death_zone_regional_play.cpp",
      "getJsonConfig",
      348);
    v6 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
           &v12,
           (const char (*)[70])"[REGIONAL_PLAY:DEATH_ZONE] findRegionalPlayConfig failed, play_name: ");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v1 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1 + 24);
    val = Player::getUid(*(const Player *const *)(v1 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::shared_ptr<data::ConfigRegionalPlayDeathZone>::shared_ptr(
      (std::shared_ptr<data::ConfigRegionalPlayDeathZone> *const)this,
      0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v2 + 32);
    std::dynamic_pointer_cast<data::ConfigRegionalPlayDeathZone,data::ConfigRegionalPlayBase>((const std::shared_ptr<data::ConfigRegionalPlayBase> *)this);
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v2 + 32));
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  result._M_ptr = (std::__shared_ptr<data::ConfigRegionalPlayDeathZone,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 355: range 0000000015CA43CE-0000000015CA4427
float __cdecl DeathZoneRegionalPlay::getBaseErosionValue(const DeathZoneRegionalPlay *const this)
{
  PlayerRegionalPlayComp *RegionalPlayComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  return PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0xBB8u);
};

// Line 361: range 0000000015CA4428-0000000015CA4481
float __cdecl DeathZoneRegionalPlay::getExtraErosionValue(const DeathZoneRegionalPlay *const this)
{
  PlayerRegionalPlayComp *RegionalPlayComp; // rax

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  return PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0xBB9u);
};

// Line 367: range 0000000015CA4482-0000000015CA453C
uint32_t __cdecl DeathZoneRegionalPlay::calcCurDeathZoneId(const DeathZoneRegionalPlay *const this)
{
  PlayerPolygonComp *PolygonComp; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  uint32_t cur_polygon_id; // [rsp+18h] [rbp-28h]
  uint32_t death_zone_id; // [rsp+1Ch] [rbp-24h]
  std::shared_ptr<Config> v6[2]; // [rsp+20h] [rbp-20h] BYREF

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  PolygonComp = Player::getPolygonComp(this->player_);
  cur_polygon_id = PlayerPolygonComp::getCurPolygonId(PolygonComp);
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v6);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v6);
  death_zone_id = JsonConfigMgr::findDeathZoneIdByPolygonId(&v2->design_config.json_config_mgr, cur_polygon_id);
  std::shared_ptr<Config>::~shared_ptr(v6);
  return death_zone_id;
};

// Line 374: range 0000000015CA453E-0000000015CA48A8
// local variable allocation has failed, the output may be wrong!
void __cdecl DeathZoneRegionalPlay::logEnterDeathZone(DeathZoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  float BaseErosionValue; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // r14
  float ExtraErosionValue; // xmm0_4
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 10 holder:375 64 16 11 log_ptr:376";
  *(_QWORD *)(v1 + 16) = DeathZoneRegionalPlay::logEnterDeathZone;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v12._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v14, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE60u, v12);
  std::string::~string(&v14);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyEnterDeathZone>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto_log::PlayerLogBodyEnterDeathZone::set_transaction(v5, (const std::string *)(v12._M_string_length + 96));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 132) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v12._M_string_length) - 124) & 7) + 3) >= *(_BYTE *)(((v12._M_string_length + 132) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(v12._M_string_length + 132);
  }
  proto_log::PlayerLogBodyEnterDeathZone::set_death_zone_id(v6, *(_DWORD *)(v12._M_string_length + 132));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  BaseErosionValue = DeathZoneRegionalPlay::getBaseErosionValue((const DeathZoneRegionalPlay *const)v12._M_string_length);
  proto_log::PlayerLogBodyEnterDeathZone::set_base_erosion_value(v7, BaseErosionValue);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyEnterDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  ExtraErosionValue = DeathZoneRegionalPlay::getExtraErosionValue((const DeathZoneRegionalPlay *const)v12._M_string_length);
  proto_log::PlayerLogBodyEnterDeathZone::set_extra_erosion_value(v9, ExtraErosionValue);
  if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length + 24);
  v11 = *(Player **)(v12._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyEnterDeathZone,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyEnterDeathZone> *)(v1 + 64));
  Player::printStatLog(v11, (MessagePtr *)&v12._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyEnterDeathZone>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyEnterDeathZone> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v15 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 385: range 0000000015CA48AA-0000000015CA4C4F
// local variable allocation has failed, the output may be wrong!
void __cdecl DeathZoneRegionalPlay::logDestroyDeathZone(DeathZoneRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rcx
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  float BaseErosionValue; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rcx
  Player *v10; // r14
  std::string v11; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v13; // [rsp+30h] [rbp-B0h] BYREF
  char v14[144]; // [rsp+50h] [rbp-90h] BYREF

  v11._M_string_length = (std::string::size_type)this;
  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 48 1 10 holder:386 64 16 11 log_ptr:387";
  *(_QWORD *)(v1 + 16) = DeathZoneRegionalPlay::logDestroyDeathZone;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -202178560;
  if ( *(_BYTE *)(((v11._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v11._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v11._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v13, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48), 0xE61u, v11);
  std::string::~string(&v13);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyDestroyDeathZone>();
  v5 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  proto_log::PlayerLogBodyDestroyDeathZone::set_transaction(v5, (const std::string *)(v11._M_string_length + 96));
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v11._M_string_length + 132) >> 3) + 0x7FFF8000) != 0
    && (char)(((LOBYTE(v11._M_string_length) - 124) & 7) + 3) >= *(_BYTE *)(((v11._M_string_length + 132) >> 3)
                                                                          + 0x7FFF8000) )
  {
    __asan_report_load4(v11._M_string_length + 132);
  }
  proto_log::PlayerLogBodyDestroyDeathZone::set_death_zone_id(v6, *(_DWORD *)(v11._M_string_length + 132));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  BaseErosionValue = DeathZoneRegionalPlay::getBaseErosionValue((const DeathZoneRegionalPlay *const)v11._M_string_length);
  proto_log::PlayerLogBodyDestroyDeathZone::set_base_erosion_value(v7, BaseErosionValue);
  v9 = std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyDestroyDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
  if ( *(_BYTE *)(((v11._M_string_length + 136) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v11._M_string_length + 136) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v11._M_string_length + 136);
  }
  proto_log::PlayerLogBodyDestroyDeathZone::set_best_extra_erosion_value(v9, *(float *)(v11._M_string_length + 136));
  if ( *(_BYTE *)(((v11._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v11._M_string_length + 24);
  v10 = *(Player **)(v11._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyDestroyDeathZone,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyDestroyDeathZone> *)(v1 + 64));
  Player::printStatLog(v10, (MessagePtr *)&v11._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v11._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyDestroyDeathZone>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyDestroyDeathZone> *const)(v1 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v1 + 48));
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 396: range 0000000015CA4C50-0000000015CA4FB3
// local variable allocation has failed, the output may be wrong!
void __cdecl DeathZoneRegionalPlay::logFinishDeathZone(DeathZoneRegionalPlay *const this, uint32_t death_zone_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  PlayerBasicComp *BasicComp; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  float BaseErosionValue; // xmm0_4
  std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rcx
  Player *v11; // r14
  std::string v12; // [rsp+0h] [rbp-E0h] OVERLAPPED BYREF
  std::shared_ptr<google::protobuf::Message> p_body_ext_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string v14; // [rsp+30h] [rbp-B0h] BYREF
  char v15[144]; // [rsp+50h] [rbp-90h] BYREF

  v12._M_string_length = (std::string::size_type)this;
  HIDWORD(v12._M_dataplus._M_p) = death_zone_id;
  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 1 10 holder:397 64 16 11 log_ptr:398";
  *(_QWORD *)(v2 + 16) = DeathZoneRegionalPlay::logFinishDeathZone;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -202178560;
  if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length + 24);
  BasicComp = Player::getBasicComp(*(Player *const *)(v12._M_string_length + 24));
  PlayerBasicComp::getNextTransNo[abi:cxx11](&v14, BasicComp);
  StatLogUtils::ContextHolder::ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48), 0xE62u, v12);
  std::string::~string(&v14);
  common::tools::perf::make_shared<proto_log::PlayerLogBodyFinishDeathZone>();
  v6 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyFinishDeathZone::set_transaction(v6, (const std::string *)(v12._M_string_length + 96));
  v7 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  proto_log::PlayerLogBodyFinishDeathZone::set_death_zone_id(v7, HIDWORD(v12._M_dataplus._M_p));
  v8 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  BaseErosionValue = DeathZoneRegionalPlay::getBaseErosionValue((const DeathZoneRegionalPlay *const)v12._M_string_length);
  proto_log::PlayerLogBodyFinishDeathZone::set_base_erosion_value(v8, BaseErosionValue);
  v10 = std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<proto_log::PlayerLogBodyFinishDeathZone,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
  if ( *(_BYTE *)(((v12._M_string_length + 136) >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((v12._M_string_length + 136) >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(v12._M_string_length + 136);
  }
  proto_log::PlayerLogBodyFinishDeathZone::set_best_extra_erosion_value(v10, *(float *)(v12._M_string_length + 136));
  if ( *(_BYTE *)(((v12._M_string_length + 24) >> 3) + 0x7FFF8000) )
    __asan_report_load8(v12._M_string_length + 24);
  v11 = *(Player **)(v12._M_string_length + 24);
  std::shared_ptr<google::protobuf::Message>::shared_ptr(&p_body_ext_ptr, 0LL);
  std::shared_ptr<google::protobuf::Message>::shared_ptr<proto_log::PlayerLogBodyFinishDeathZone,void>(
    (std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0,
    (const std::shared_ptr<proto_log::PlayerLogBodyFinishDeathZone> *)(v2 + 64));
  Player::printStatLog(v11, (MessagePtr *)&v12._anon_0, &p_body_ext_ptr, 0xEu);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr((std::shared_ptr<google::protobuf::Message> *const)&v12._anon_0);
  std::shared_ptr<google::protobuf::Message>::~shared_ptr(&p_body_ext_ptr);
  std::shared_ptr<proto_log::PlayerLogBodyFinishDeathZone>::~shared_ptr((std::shared_ptr<proto_log::PlayerLogBodyFinishDeathZone> *const)(v2 + 64));
  StatLogUtils::ContextHolder::~ContextHolder((StatLogUtils::ContextHolder *const)(v2 + 48));
  if ( v15 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
};
