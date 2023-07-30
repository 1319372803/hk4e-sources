// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/player/regional_play/michiae_matsuri_regional_play.cpp

// Line 26: range 0000000015CA6EB6-0000000015CA6EEB
float __cdecl MichiaeMatsuriRegionalPlay::getBaseVarValue(
        const MichiaeMatsuriRegionalPlay *const this,
        uint32_t var_type)
{
  __m128i v2; // xmm0

  if ( var_type != 2500 )
    return 0.0;
  *(float *)v2.m128i_i32 = MichiaeMatsuriRegionalPlay::getBaseDarkPressureVarValue(this);
  return COERCE_FLOAT(_mm_cvtsi128_si32(v2));
};

// Line 35: range 0000000015CA6EEC-0000000015CA724A
float __fastcall MichiaeMatsuriRegionalPlay::getMaxVarValue(
        const MichiaeMatsuriRegionalPlay *const this,
        uint32_t var_type,
        __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  float result; // xmm0_4
  common::milog::MiLogStream *v8; // r13
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  unsigned int val; // [rsp+10h] [rbp-A0h] BYREF
  const data::MichiaeAntiErosionExcelConfig *anti_erosion_config_ptr; // [rsp+18h] [rbp-98h]
  std::shared_ptr<Config> v13; // [rsp+20h] [rbp-90h] BYREF
  common::milog::MiLogStream v14; // [rsp+30h] [rbp-80h] BYREF
  char v15[96]; // [rsp+50h] [rbp-60h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 var_type:34";
  *(_QWORD *)(v3 + 16) = MichiaeMatsuriRegionalPlay::getMaxVarValue;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = var_type;
  if ( *(_DWORD *)(v3 + 32) == 2500 )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v13);
    v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v13);
    *(float *)a3.m128i_i32 = ConstValueExcelConfigMgr::getDarkPressureAccumulateMaxLimit(&v6->design_config.txt_config_mgr.const_value_config_mgr);
    std::shared_ptr<Config>::~shared_ptr(&v13);
    result = COERCE_FLOAT(_mm_cvtsi128_si32(a3));
    goto LABEL_17;
  }
  if ( *(_DWORD *)(v3 + 32) != 2501 )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getMaxVarValue",
      53);
    v9 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
           &v14,
           (const char (*)[35])"[MichiaeMatsuri] invalid var_type:");
    v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v3 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_16;
  }
  anti_erosion_config_ptr = MichiaeMatsuriRegionalPlay::getAntiErosionConfig(this);
  if ( !anti_erosion_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getMaxVarValue",
      46);
    v8 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v14,
           (const char (*)[49])"[MichiaeMatsuri] getAntiErosionConfig fail. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_16:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v14);
    result = 0.0;
    goto LABEL_17;
  }
  if ( *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->crystal_energy_max_limit >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->crystal_energy_max_limit >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&anti_erosion_config_ptr->crystal_energy_max_limit);
  }
  result = anti_erosion_config_ptr->crystal_energy_max_limit;
LABEL_17:
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 59: range 0000000015CA724C-0000000015CA725C
float __cdecl MichiaeMatsuriRegionalPlay::getMinVarValue(
        const MichiaeMatsuriRegionalPlay *const this,
        uint32_t var_type)
{
  return 0.0;
};

// Line 64: range 0000000015CA725E-0000000015CA752D
float __cdecl MichiaeMatsuriRegionalPlay::getBaseDarkPressureVarValue(const MichiaeMatsuriRegionalPlay *const this)
{
  common::milog::MiLogStream *v1; // rax
  common::milog::MiLogStream *v2; // rax
  common::milog::MiLogStream *v3; // rbx
  float a1; // xmm0_4
  float *v6; // rax
  float *v7; // rdx
  float __a; // [rsp+18h] [rbp-48h] BYREF
  unsigned int val; // [rsp+1Ch] [rbp-44h] BYREF
  const data::MichiaeErosionAreaExcelConfig *dark_pressure_config_ptr; // [rsp+20h] [rbp-40h]
  const data::MichiaeAntiErosionExcelConfig *anti_erosion_config_ptr; // [rsp+28h] [rbp-38h]
  common::milog::MiLogStream v12; // [rsp+30h] [rbp-30h] BYREF

  dark_pressure_config_ptr = MichiaeMatsuriRegionalPlay::getDarkPressureConfig(this);
  if ( !dark_pressure_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getBaseDarkPressureVarValue",
      68);
    v1 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v12,
           (const char (*)[66])"[MichiaeMatsuri] getDarkPressureConfig fail. dark_pressure_level:");
    v2 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v1, &this->dark_pressure_level_);
    v3 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v2, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_4:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v3, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    return 0.0;
  }
  anti_erosion_config_ptr = MichiaeMatsuriRegionalPlay::getAntiErosionConfig(this);
  if ( !anti_erosion_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getBaseDarkPressureVarValue",
      74);
    v3 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v12,
           (const char (*)[49])"[MichiaeMatsuri] getAntiErosionConfig fail. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_4;
  }
  val = 0;
  if ( *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dark_pressure_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a1 >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&dark_pressure_config_ptr->a1);
  }
  a1 = dark_pressure_config_ptr->a1;
  if ( *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b1 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)anti_erosion_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b1 >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&anti_erosion_config_ptr->b1);
  }
  __a = a1 - anti_erosion_config_ptr->b1;
  v6 = (float *)std::max<float>(&__a, (const float *)&val);
  v7 = v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  return *v7;
};

// Line 81: range 0000000015CA752E-0000000015CA7700
float __cdecl MichiaeMatsuriRegionalPlay::getTotalDarkPressureVarValue(const MichiaeMatsuriRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  __m128i v7; // xmm0
  float *v8; // rax
  float *v9; // rdx
  float result; // xmm0_4
  float __b; // [rsp+14h] [rbp-7Ch] BYREF
  float base_value; // [rsp+18h] [rbp-78h]
  float accumulate_value; // [rsp+1Ch] [rbp-74h]
  std::shared_ptr<Config> v14; // [rsp+20h] [rbp-70h] BYREF
  char v15[96]; // [rsp+30h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 max_limit:83";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::getTotalDarkPressureVarValue;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v14);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v14);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getDarkPressureMaxLimit(&v5->design_config.txt_config_mgr.const_value_config_mgr);
  *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v1);
  std::shared_ptr<Config>::~shared_ptr(&v14);
  *(float *)v1.m128i_i32 = MichiaeMatsuriRegionalPlay::getBaseDarkPressureVarValue(this);
  LODWORD(base_value) = _mm_cvtsi128_si32(v1);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)v1.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0x9C4u);
  LODWORD(accumulate_value) = _mm_cvtsi128_si32(v1);
  v7 = _mm_cvtsi32_si128(LODWORD(base_value));
  *(float *)v7.m128i_i32 = SAFE_ADD<float,float>(*(float *)v7.m128i_i32, accumulate_value);
  LODWORD(__b) = _mm_cvtsi128_si32(v7);
  v8 = (float *)std::min<float>((const float *)(v2 + 32), &__b);
  v9 = v8;
  if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v8);
  }
  result = *v9;
  if ( v15 == (char *)v2 )
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

// Line 90: range 0000000015CA7702-0000000015CA7A62
void __fastcall MichiaeMatsuriRegionalPlay::onVarChanged(
        MichiaeMatsuriRegionalPlay *const this,
        uint32_t var_type,
        __m128i a3)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r13
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // r12
  float val; // [rsp+18h] [rbp-98h] BYREF
  unsigned int Uid; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v17; // [rsp+20h] [rbp-90h] BYREF
  char v18[112]; // [rsp+40h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 4 11 var_type:89";
  *(_QWORD *)(v3 + 16) = MichiaeMatsuriRegionalPlay::onVarChanged;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v3 + 32) = var_type;
  common::milog::MiLogStream::create(
    &v17,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
    "onVarChanged",
    91);
  v6 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
         &v17,
         (const char (*)[41])"[MichiaeMatsuri] onVarChanged, var_type:");
  v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, (const unsigned int *)(v3 + 32));
  v8 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v7, (const char (*)[9])", value:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  *(float *)a3.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, *(_DWORD *)(v3 + 32));
  LODWORD(val) = _mm_cvtsi128_si32(a3);
  v10 = common::milog::MiLogStream::operator<<<float,(float *)0>(v8, &val);
  v11 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v10, (const char (*)[7])", uid:");
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  Uid = Player::getUid(this->player_);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &Uid);
  common::milog::MiLogStream::~MiLogStream(&v17);
  if ( *(_DWORD *)(v3 + 32) == 2500 )
  {
    MichiaeMatsuriRegionalPlay::onDarkPressureVarChanged(this);
  }
  else if ( *(_DWORD *)(v3 + 32) == 2501 )
  {
    MichiaeMatsuriRegionalPlay::onCrystalEnergyVarChanged(this);
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "onVarChanged",
      102);
    v12 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
            &v17,
            (const char (*)[35])"[MichiaeMatsuri] invalid var_type:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
    v14 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Uid = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &Uid);
    common::milog::MiLogStream::~MiLogStream(&v17);
  }
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 108: range 0000000015CA7A64-0000000015CA7B71
void __cdecl MichiaeMatsuriRegionalPlay::refreshVarToDefault(MichiaeMatsuriRegionalPlay *const this)
{
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  PlayerRegionalPlayComp *v2; // rbx
  unsigned __int64 v3; // rax
  float v4; // xmm0_4

  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
  PlayerRegionalPlayComp::setVarValue(RegionalPlayComp, 0x9C4u, 0.0);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  v2 = Player::getRegionalPlayComp(this->player_);
  if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
    __asan_report_load8(this);
  v3 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 4);
  if ( *(_BYTE *)((v3 >> 3) + 0x7FFF8000) )
    v3 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 4);
  v4 = (*(float (__fastcall **)(MichiaeMatsuriRegionalPlay *const, __int64))v3)(this, 2501LL);
  PlayerRegionalPlayComp::setVarValue(v2, 0x9C5u, v4);
};

// Line 116: range 0000000015CA7B72-0000000015CA7C2D
void __cdecl MichiaeMatsuriRegionalPlay::onEnabled(MichiaeMatsuriRegionalPlay *const this)
{
  PlayerMpComp *MpComp; // rax
  PlayerSceneComp *SceneComp; // rax
  char v3; // al

  MichiaeMatsuriRegionalPlay::registerObserver(this);
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  MpComp = Player::getMpComp(this->player_);
  if ( !PlayerMpComp::isInMpMode(MpComp) )
    goto LABEL_8;
  if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
    __asan_report_load8(&this->player_);
  SceneComp = Player::getSceneComp(this->player_);
  if ( !PlayerSceneComp::isInMyPlayerWorld(SceneComp) )
    v3 = 1;
  else
LABEL_8:
    v3 = 0;
  if ( v3 )
    MichiaeMatsuriRegionalPlay::refreshVarToDefault(this);
};

// Line 126: range 0000000015CA7C2E-0000000015CA7C48
void __cdecl MichiaeMatsuriRegionalPlay::onDisabled(MichiaeMatsuriRegionalPlay *const this)
{
  MichiaeMatsuriRegionalPlay::unregisterObserver(this);
};

// Line 131: range 0000000015CA7C4A-0000000015CA7CF0
void __cdecl MichiaeMatsuriRegionalPlay::update(MichiaeMatsuriRegionalPlay *const this)
{
  __int64 v1; // rsi

  if ( *(char *)(((unsigned __int64)&this->is_timer_updating_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_timer_updating_, v1, &this->is_timer_updating_);
  this->is_timer_updating_ = 1;
  MichiaeMatsuriRegionalPlay::updateDarkPressureVarOnTimer(this);
  MichiaeMatsuriRegionalPlay::updateCrystalEnergyVarOnTimer(this);
  if ( *(char *)(((unsigned __int64)&this->is_timer_updating_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->is_timer_updating_, v1, &this->is_timer_updating_);
  this->is_timer_updating_ = 0;
};

// Line 139: range 0000000015CA7CF2-0000000015CA83E8
void __cdecl MichiaeMatsuriRegionalPlay::updateDarkPressureVarOnTimer(MichiaeMatsuriRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  float a2; // xmm0_4
  const float *v9; // rax
  _DWORD *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  const float *v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  float b; // [rsp+4h] [rbp-10Ch]
  float ba; // [rsp+4h] [rbp-10Ch]
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  float n1; // [rsp+20h] [rbp-F0h]
  float n2; // [rsp+24h] [rbp-ECh]
  const data::MichiaeErosionAreaExcelConfig *dark_pressure_config_ptr; // [rsp+28h] [rbp-E8h]
  const data::MichiaeAntiErosionExcelConfig *anti_erosion_config_ptr; // [rsp+30h] [rbp-E0h]
  const TxtConfigMgr *txt_config_mgr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-C0h] BYREF
  char v36[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 10 param1:153 48 4 10 param2:154 64 4 10 param3:155 80 4 6 C2:156 96 4 15 delta_value:159";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::updateDarkPressureVarOnTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  dark_pressure_config_ptr = MichiaeMatsuriRegionalPlay::getDarkPressureConfig(this);
  if ( !dark_pressure_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateDarkPressureVarOnTimer",
      143);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v35,
           (const char (*)[66])"[MichiaeMatsuri] getDarkPressureConfig fail. dark_pressure_level:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->dark_pressure_level_);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_24;
  }
  anti_erosion_config_ptr = MichiaeMatsuriRegionalPlay::getAntiErosionConfig(this);
  if ( !anti_erosion_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateDarkPressureVarOnTimer",
      149);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v35,
           (const char (*)[49])"[MichiaeMatsuri] getAntiErosionConfig fail. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getDarkPressureParam1(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v1);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getDarkPressureParam2(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getDarkPressureParam3(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 64) = _mm_cvtsi128_si32(v1);
  val = 0;
  if ( *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&dark_pressure_config_ptr->a2);
  }
  a2 = dark_pressure_config_ptr->a2;
  if ( *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b2 >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b2 >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&anti_erosion_config_ptr->b2);
  }
  *(float *)(v2 + 96) = a2 - anti_erosion_config_ptr->b2;
  v9 = std::max<float>((const float *)(v2 + 96), (const float *)&val);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  *(_DWORD *)(v2 + 80) = *v10;
  b = *(float *)(v2 + 80);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 32));
  *(float *)v11.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v11.m128i_i32, b);
  *(float *)v11.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v11.m128i_i32, b);
  LODWORD(n1) = _mm_cvtsi128_si32(v11);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 48));
  *(float *)v12.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v12.m128i_i32, *(float *)(v2 + 80));
  LODWORD(n2) = _mm_cvtsi128_si32(v12);
  ba = *(float *)(v2 + 64);
  v13 = _mm_cvtsi32_si128(LODWORD(n1));
  *(float *)v13.m128i_i32 = SAFE_ADD<float,float>(*(float *)v13.m128i_i32, n2);
  *(float *)v13.m128i_i32 = SAFE_ADD<float,float>(*(float *)v13.m128i_i32, ba);
  *(_DWORD *)(v2 + 96) = _mm_cvtsi128_si32(v13);
  val = 0;
  v14 = std::max<float>((const float *)(v2 + 96), (const float *)&val);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  *(_DWORD *)(v2 + 96) = *v15;
  if ( *(float *)(v2 + 96) >= 0.00000011920929 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateDarkPressureVarOnTimer",
      165);
    v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v35,
            (const char (*)[38])"[MichiaeMatsuri] darkpressure param1:");
    v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v2 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])", param2:");
    v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v2 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])", param3:");
    v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v2 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])", C2:");
    v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, (const float *)(v2 + 80));
    v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", delta_value:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v24, (const float *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v35);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
    PlayerRegionalPlayComp::addVarValue(RegionalPlayComp, 0x9C4u, *(float *)(v2 + 96));
  }
LABEL_24:
  if ( v36 == (char *)v2 )
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
};

// Line 171: range 0000000015CA83EA-0000000015CA8AF0
void __cdecl MichiaeMatsuriRegionalPlay::updateCrystalEnergyVarOnTimer(MichiaeMatsuriRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rbx
  float a3; // xmm0_4
  const float *v9; // rax
  _DWORD *v10; // rdx
  __m128i v11; // xmm0
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  const float *v14; // rax
  _DWORD *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  float b; // [rsp+4h] [rbp-10Ch]
  float ba; // [rsp+4h] [rbp-10Ch]
  unsigned int val; // [rsp+1Ch] [rbp-F4h] BYREF
  float n1; // [rsp+20h] [rbp-F0h]
  float n2; // [rsp+24h] [rbp-ECh]
  const data::MichiaeErosionAreaExcelConfig *dark_pressure_config_ptr; // [rsp+28h] [rbp-E8h]
  const data::MichiaeAntiErosionExcelConfig *anti_erosion_config_ptr; // [rsp+30h] [rbp-E0h]
  const TxtConfigMgr *txt_config_mgr; // [rsp+38h] [rbp-D8h]
  std::shared_ptr<Config> v34; // [rsp+40h] [rbp-D0h] BYREF
  common::milog::MiLogStream v35; // [rsp+50h] [rbp-C0h] BYREF
  char v36[160]; // [rsp+70h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 10 param1:185 48 4 10 param2:186 64 4 10 param3:187 80 4 6 C3:188 96 4 15 delta_value:191";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::updateCrystalEnergyVarOnTimer;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -234556924;
  v4[536862723] = -202116348;
  dark_pressure_config_ptr = MichiaeMatsuriRegionalPlay::getDarkPressureConfig(this);
  if ( !dark_pressure_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateCrystalEnergyVarOnTimer",
      175);
    v5 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
           &v35,
           (const char (*)[66])"[MichiaeMatsuri] getDarkPressureConfig fail. dark_pressure_level:");
    v6 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &this->dark_pressure_level_);
    v7 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v6, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
LABEL_7:
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &val);
    common::milog::MiLogStream::~MiLogStream(&v35);
    goto LABEL_24;
  }
  anti_erosion_config_ptr = MichiaeMatsuriRegionalPlay::getAntiErosionConfig(this);
  if ( !anti_erosion_config_ptr )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateCrystalEnergyVarOnTimer",
      181);
    v7 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
           &v35,
           (const char (*)[49])"[MichiaeMatsuri] getAntiErosionConfig fail. uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    goto LABEL_7;
  }
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v34);
  txt_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v34)->design_config.txt_config_mgr;
  std::shared_ptr<Config>::~shared_ptr(&v34);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getCrystalEnergyParam1(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v1);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getCrystalEnergyParam2(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
  *(float *)v1.m128i_i32 = ConstValueExcelConfigMgr::getCrystalEnergyParam3(&txt_config_mgr->const_value_config_mgr);
  *(_DWORD *)(v2 + 64) = _mm_cvtsi128_si32(v1);
  val = 0;
  if ( *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dark_pressure_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dark_pressure_config_ptr->a3 >> 3)
                                                                            + 0x7FFF8000) )
  {
    __asan_report_load4(&dark_pressure_config_ptr->a3);
  }
  a3 = dark_pressure_config_ptr->a3;
  if ( *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b3 >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)anti_erosion_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&anti_erosion_config_ptr->b3 >> 3)
                                                                           + 0x7FFF8000) )
  {
    __asan_report_load4(&anti_erosion_config_ptr->b3);
  }
  *(float *)(v2 + 96) = a3 - anti_erosion_config_ptr->b3;
  v9 = std::max<float>((const float *)(v2 + 96), (const float *)&val);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  *(_DWORD *)(v2 + 80) = *v10;
  b = *(float *)(v2 + 80);
  v11 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 32));
  *(float *)v11.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v11.m128i_i32, b);
  *(float *)v11.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v11.m128i_i32, b);
  LODWORD(n1) = _mm_cvtsi128_si32(v11);
  v12 = _mm_cvtsi32_si128(*(_DWORD *)(v2 + 48));
  *(float *)v12.m128i_i32 = SAFE_MULTIPLY<float,float>(*(float *)v12.m128i_i32, *(float *)(v2 + 80));
  LODWORD(n2) = _mm_cvtsi128_si32(v12);
  ba = *(float *)(v2 + 64);
  v13 = _mm_cvtsi32_si128(LODWORD(n1));
  *(float *)v13.m128i_i32 = SAFE_ADD<float,float>(*(float *)v13.m128i_i32, n2);
  *(float *)v13.m128i_i32 = SAFE_ADD<float,float>(*(float *)v13.m128i_i32, ba);
  *(_DWORD *)(v2 + 96) = _mm_cvtsi128_si32(v13);
  val = 0;
  v14 = std::max<float>((const float *)(v2 + 96), (const float *)&val);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  *(_DWORD *)(v2 + 96) = *v15;
  if ( *(float *)(v2 + 96) >= 0.00000011920929 )
  {
    common::milog::MiLogStream::create(
      &v35,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateCrystalEnergyVarOnTimer",
      197);
    v16 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
            &v35,
            (const char (*)[38])"[MichiaeMatsuri] darkpressure param1:");
    v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v2 + 32));
    v18 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v17, (const char (*)[10])", param2:");
    v19 = common::milog::MiLogStream::operator<<<float,(float *)0>(v18, (const float *)(v2 + 48));
    v20 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v19, (const char (*)[10])", param3:");
    v21 = common::milog::MiLogStream::operator<<<float,(float *)0>(v20, (const float *)(v2 + 64));
    v22 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v21, (const char (*)[6])", C3:");
    v23 = common::milog::MiLogStream::operator<<<float,(float *)0>(v22, (const float *)(v2 + 80));
    v24 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])", delta_value:");
    common::milog::MiLogStream::operator<<<float,(float *)0>(v24, (const float *)(v2 + 96));
    common::milog::MiLogStream::~MiLogStream(&v35);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
    PlayerRegionalPlayComp::subVarValue(RegionalPlayComp, 0x9C5u, *(float *)(v2 + 96));
  }
LABEL_24:
  if ( v36 == (char *)v2 )
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
};

// Line 203: range 0000000015CA8AF2-0000000015CA8EA8
__int64 __fastcall MichiaeMatsuriRegionalPlay::setDarkPressureLevel(
        MichiaeMatsuriRegionalPlay *const this,
        uint32_t dark_pressure_level)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r12
  unsigned int v10; // r14d
  uint32_t v11; // ecx
  char v12; // al
  __int64 result; // rax
  unsigned int val; // [rsp+14h] [rbp-ECh] BYREF
  const data::MichiaeErosionAreaExcelConfig *config_ptr; // [rsp+18h] [rbp-E8h]
  std::shared_ptr<Config> v16; // [rsp+20h] [rbp-E0h] BYREF
  common::milog::MiLogStream v17; // [rsp+30h] [rbp-D0h] BYREF
  char v18[176]; // [rsp+50h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 23 dark_pressure_level:202 64 24 10 notify:212";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::setDarkPressureLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218103808;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = dark_pressure_level;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v16);
  v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v16);
  v6 = *(unsigned int *)(v2 + 48);
  config_ptr = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeErosionAreaExcelConfig(
                 &v5->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                 v6);
  std::shared_ptr<Config>::~shared_ptr(&v16);
  if ( config_ptr )
  {
    v11 = *(_DWORD *)(v2 + 48);
    v12 = *(_BYTE *)(((unsigned __int64)&this->dark_pressure_level_ >> 3) + 0x7FFF8000);
    if ( v12 != 0 && v12 <= 3 )
    {
      LOBYTE(v6) = v12 != 0;
      __asan_report_store4(&this->dark_pressure_level_, v6, (_BYTE)this + 0x80);
    }
    this->dark_pressure_level_ = v11;
    MichiaeMatsuriRegionalPlay::onDarkPressureVarChanged(this);
    proto::MichiaeMatsuriDarkPressureLevelUpdateNotify::MichiaeMatsuriDarkPressureLevelUpdateNotify((proto::MichiaeMatsuriDarkPressureLevelUpdateNotify *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&this->dark_pressure_level_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->dark_pressure_level_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->dark_pressure_level_);
    }
    proto::MichiaeMatsuriDarkPressureLevelUpdateNotify::set_dark_pressure_level(
      (proto::MichiaeMatsuriDarkPressureLevelUpdateNotify *const)(v2 + 64),
      this->dark_pressure_level_);
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::sendProto(this->player_, (const google::protobuf::Message *)(v2 + 64));
    v10 = 0;
    proto::MichiaeMatsuriDarkPressureLevelUpdateNotify::~MichiaeMatsuriDarkPressureLevelUpdateNotify((proto::MichiaeMatsuriDarkPressureLevelUpdateNotify *const)(v2 + 64));
  }
  else
  {
    common::milog::MiLogStream::create(
      &v17,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "setDarkPressureLevel",
      207);
    v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
           &v17,
           (const char (*)[57])"[MichiaeMatsuri] set invalid dark pressure level. level:");
    v8 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, (const unsigned int *)(v2 + 48));
    v9 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &val);
    common::milog::MiLogStream::~MiLogStream(&v17);
    v10 = -1;
  }
  result = v10;
  if ( v18 == (char *)v2 )
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

// Line 219: range 0000000015CA8EAA-0000000015CA8F17
void __cdecl MichiaeMatsuriRegionalPlay::onDarkPressureVarChanged(MichiaeMatsuriRegionalPlay *const this)
{
  MichiaeMatsuriRegionalPlay::updateDarkPressureSGV(this);
  if ( *(char *)(((unsigned __int64)&this->is_timer_updating_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_timer_updating_);
  if ( !this->is_timer_updating_ )
    BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
};

// Line 229: range 0000000015CA8F18-0000000015CA8F85
void __cdecl MichiaeMatsuriRegionalPlay::onCrystalEnergyVarChanged(MichiaeMatsuriRegionalPlay *const this)
{
  MichiaeMatsuriRegionalPlay::updateCrystalEnergySGV(this);
  if ( *(char *)(((unsigned __int64)&this->is_timer_updating_ >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->is_timer_updating_);
  if ( !this->is_timer_updating_ )
    BaseRegionalPlay::sendRegionalPlayInfoNotify(this);
};

// Line 239: range 0000000015CA8F86-0000000015CA939F
void __cdecl MichiaeMatsuriRegionalPlay::registerObserver(MichiaeMatsuriRegionalPlay *const this)
{
  unsigned __int64 p_M_start; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  std::weak_ptr<MichiaeMatsuriRegionalPlay> *EventComp; // [rsp+10h] [rbp-F0h]
  std::weak_ptr<MichiaeMatsuriRegionalPlay> *p_this_wtr; // [rsp+20h] [rbp-E0h]
  PlayerEventComp v6; // [rsp+30h] [rbp-D0h] BYREF

  p_M_start = (unsigned __int64)&v6.event_center_.context_.pending_que_.c._M_impl._M_start;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      p_M_start = v2;
  }
  *(_QWORD *)p_M_start = 1102416563LL;
  *(_QWORD *)(p_M_start + 8) = "2 32 16 12 this_ptr:240 64 16 12 this_wtr:246";
  *(_QWORD *)(p_M_start + 16) = MichiaeMatsuriRegionalPlay::registerObserver;
  v3 = (_DWORD *)(p_M_start >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  toThisPtr<MichiaeMatsuriRegionalPlay>((MichiaeMatsuriRegionalPlay *)(p_M_start + 32));
  if ( std::operator==<MichiaeMatsuriRegionalPlay>(
         0LL,
         (const std::shared_ptr<MichiaeMatsuriRegionalPlay> *)(p_M_start + 32)) )
  {
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&v6.event_center_,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "registerObserver",
      243);
    common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
      (common::milog::MiLogStream *const)&v6.event_center_,
      (const char (*)[75])"[MichiaeMatsuri] dynamic_pointer_cast to MichiaeMatsuriRegionalPlay failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&v6.event_center_);
  }
  else
  {
    std::weak_ptr<MichiaeMatsuriRegionalPlay>::weak_ptr<MichiaeMatsuriRegionalPlay,void>(
      (std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)(p_M_start + 64),
      (const std::shared_ptr<MichiaeMatsuriRegionalPlay> *)(p_M_start + 32));
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      p_this_wtr = (std::weak_ptr<MichiaeMatsuriRegionalPlay> *)Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriRegionalPlay>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)&v6._M_weak_this._M_refcount,
        (const std::weak_ptr<MichiaeMatsuriRegionalPlay> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriRegionalPlay,OfferingLevelupEvent>(
        &v6,
        p_this_wtr,
        (void (*)(MichiaeMatsuriRegionalPlay *, const OfferingLevelupEvent *))&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::operator=(&this->offering_levelup_wtr_, (std::weak_ptr<Observer> *)&v6);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6);
      std::weak_ptr<MichiaeMatsuriRegionalPlay>::~weak_ptr((std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)&v6._M_weak_this._M_refcount);
    }
    if ( std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      EventComp = (std::weak_ptr<MichiaeMatsuriRegionalPlay> *)Player::getEventComp(this->player_);
      std::weak_ptr<MichiaeMatsuriRegionalPlay>::weak_ptr(
        (std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)&v6,
        (const std::weak_ptr<MichiaeMatsuriRegionalPlay> *)(p_M_start + 64));
      PlayerEventComp::registerObserver<MichiaeMatsuriRegionalPlay,PostEnterSceneEvent>(
        (PlayerEventComp *const)&v6._M_weak_this._M_refcount,
        EventComp,
        (void (*)(MichiaeMatsuriRegionalPlay *, const PostEnterSceneEvent *))&v6);
      std::weak_ptr<Observer>::operator=(
        &this->post_enter_scene_wtr_,
        (std::weak_ptr<Observer> *)&v6._M_weak_this._M_refcount);
      std::weak_ptr<Observer>::~weak_ptr((std::weak_ptr<Observer> *const)&v6._M_weak_this._M_refcount);
      std::weak_ptr<MichiaeMatsuriRegionalPlay>::~weak_ptr((std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)&v6);
    }
    std::weak_ptr<MichiaeMatsuriRegionalPlay>::~weak_ptr((std::weak_ptr<MichiaeMatsuriRegionalPlay> *const)(p_M_start + 64));
  }
  std::shared_ptr<MichiaeMatsuriRegionalPlay>::~shared_ptr((std::shared_ptr<MichiaeMatsuriRegionalPlay> *const)(p_M_start + 32));
  if ( &v6.event_center_.context_.pending_que_.c._M_impl._M_start == (std::_Deque_base<std::variant<std::weak_ptr<Observer>,std::shared_ptr<BaseEvent> >>::iterator *)p_M_start )
  {
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)p_M_start = 1172321806LL;
    *(_QWORD *)((p_M_start >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((p_M_start >> 3) + 0x7FFF8008) = -168430091;
  }
};

// Line 259: range 0000000015CA93A0-0000000015CA949E
void __cdecl MichiaeMatsuriRegionalPlay::unregisterObserver(MichiaeMatsuriRegionalPlay *const this)
{
  PlayerEventComp *EventComp; // rax
  PlayerEventComp *v2; // rax

  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->offering_levelup_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    EventComp = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(EventComp, &this->offering_levelup_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->offering_levelup_wtr_);
  }
  if ( !std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::expired(&this->post_enter_scene_wtr_) )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    v2 = Player::getEventComp(this->player_);
    PlayerEventComp::unregisterObserver(v2, &this->post_enter_scene_wtr_);
    std::__weak_ptr<Observer,(__gnu_cxx::_Lock_policy)2>::reset(&this->post_enter_scene_wtr_);
  }
};

// Line 273: range 0000000015CA94A0-0000000015CA980E
void __cdecl MichiaeMatsuriRegionalPlay::onOfferingLevelupEvent(
        MichiaeMatsuriRegionalPlay *const this,
        const OfferingLevelupEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  uint32_t offering_id; // ecx
  PlayerRegionalPlayComp *RegionalPlayComp; // r14
  unsigned __int64 v9; // rax
  float v10; // xmm0_4
  unsigned int val; // [rsp+18h] [rbp-98h] BYREF
  uint32_t crystalenergy_var_type; // [rsp+1Ch] [rbp-94h]
  common::milog::MiLogStream v13; // [rsp+20h] [rbp-90h] BYREF
  char v14[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 json_config_ptr:274";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::onOfferingLevelupEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v2 + 32));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "onOfferingLevelupEvent",
      277);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v13,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
  }
  else
  {
    v6 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v6->offering_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v6->offering_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v6 = (std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v6->offering_id);
    }
    offering_id = v6->offering_id;
    if ( *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->offering_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->offering_id);
    }
    if ( offering_id == event->offering_id )
    {
      MichiaeMatsuriRegionalPlay::onDarkPressureVarChanged(this);
      MichiaeMatsuriRegionalPlay::updateCrystalLevelSGV(this);
      crystalenergy_var_type = 2501;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 4);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 4);
      v10 = (*(float (__fastcall **)(MichiaeMatsuriRegionalPlay *const, _QWORD))v9)(this, crystalenergy_var_type);
      PlayerRegionalPlayComp::setVarValue(RegionalPlayComp, crystalenergy_var_type, v10);
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v2 + 32));
  if ( v14 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 292: range 0000000015CA9810-0000000015CA9E6D
void __cdecl MichiaeMatsuriRegionalPlay::updateDarkPressureSGV(MichiaeMatsuriRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  common::milog::MiLogStream *v9; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  float value; // [rsp+4h] [rbp-ECh]
  unsigned int val; // [rsp+18h] [rbp-D8h] BYREF
  int32_t total_value_int; // [rsp+1Ch] [rbp-D4h]
  common::milog::MiLogStream v21; // [rsp+20h] [rbp-D0h] BYREF
  char v22[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 4 15 total_value:305 48 4 13 sgv_value:307 64 16 19 json_config_ptr:293 96 16 12 team_ptr:299";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::updateDarkPressureSGV;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v2 + 64));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v21,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateDarkPressureSGV",
      296);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v21,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 96));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v21,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
        "updateDarkPressureSGV",
        302);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v21,
             (const char (*)[54])"[MichiaeMatsuri] getTeamEntity team_ptr is null. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      *(float *)v1.m128i_i32 = MichiaeMatsuriRegionalPlay::getTotalDarkPressureVarValue(this);
      *(_DWORD *)(v2 + 32) = _mm_cvtsi128_si32(v1);
      total_value_int = (int)std::floor(*(float *)(v2 + 32));
      *(_DWORD *)(v2 + 48) = 0;
      if ( total_value_int > 0 )
        *(_DWORD *)(v2 + 48) = total_value_int / 10 + 1;
      v7 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      value = (float)*(int *)(v2 + 48);
      v8 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Creature::setServerGlobalValue(v7, &v8->dark_pressure_sgv, value, 1) )
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateDarkPressureSGV",
          314);
        v9 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v21,
               (const char (*)[49])"[MichiaeMatsuri] setServerGlobalValue fail, key:");
        v10 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, &v10->dark_pressure_sgv);
        v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])", value:");
        v13 = common::milog::MiLogStream::operator<<<int,(int *)0>(v12, (const int *)(v2 + 48));
        v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v13, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v21,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateDarkPressureSGV",
          317);
        v14 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                &v21,
                (const char (*)[53])"[MichiaeMatsuri] updateDarkPressureSGV, total_value:");
        v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v2 + 32));
        v16 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", sgv:");
        v17 = common::milog::MiLogStream::operator<<<int,(int *)0>(v16, (const int *)(v2 + 48));
        v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v21);
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 96));
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v2 + 64));
  if ( v22 == (char *)v2 )
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
};

// Line 321: range 0000000015CA9E6E-0000000015CAA493
void __cdecl MichiaeMatsuriRegionalPlay::updateCrystalEnergySGV(MichiaeMatsuriRegionalPlay *const this)
{
  __m128i v1; // xmm0
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // r14
  common::milog::MiLogStream *v6; // r14
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r15
  float v9; // r14d
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v10; // rax
  common::milog::MiLogStream *v11; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
  common::milog::MiLogStream v19; // [rsp+20h] [rbp-D0h] BYREF
  char v20[176]; // [rsp+40h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 sgv_value:334 64 16 19 json_config_ptr:322 96 16 12 team_ptr:328";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::updateCrystalEnergySGV;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -219021312;
  v4[536862723] = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v2 + 64));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v2 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateCrystalEnergySGV",
      325);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v19,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v2 + 96));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v2 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
        "updateCrystalEnergySGV",
        331);
      v6 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v19,
             (const char (*)[54])"[MichiaeMatsuri] getTeamEntity team_ptr is null. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      *(float *)v1.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, 0x9C5u);
      *(_DWORD *)(v2 + 48) = _mm_cvtsi128_si32(v1);
      v8 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 96));
      v9 = *(float *)(v2 + 48);
      v10 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
      if ( Creature::setServerGlobalValue(v8, &v10->crystal_energy_sgv, v9, 1) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateCrystalEnergySGV",
          337);
        v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v19,
                (const char (*)[49])"[MichiaeMatsuri] setServerGlobalValue fail, key:");
        v12 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 64));
        v13 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &v12->crystal_energy_sgv);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])", value:");
        v15 = common::milog::MiLogStream::operator<<<float,(float *)0>(v14, (const float *)(v2 + 48));
        v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v15, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateCrystalEnergySGV",
          340);
        v16 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                &v19,
                (const char (*)[46])"[MichiaeMatsuri] updateCrystalEnergySGV, sgv:");
        v17 = common::milog::MiLogStream::operator<<<float,(float *)0>(v16, (const float *)(v2 + 48));
        v6 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v17, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v2 + 96));
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v2 + 64));
  if ( v20 == (char *)v2 )
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
};

// Line 344: range 0000000015CAA494-0000000015CAAB29
void __cdecl MichiaeMatsuriRegionalPlay::updateCrystalLevelSGV(MichiaeMatsuriRegionalPlay *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // r14
  common::milog::MiLogStream *v5; // r14
  PlayerOfferingComp *OfferingComp; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v9; // rax
  common::milog::MiLogStream *v10; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  float value; // [rsp+4h] [rbp-ECh]
  unsigned int val; // [rsp+1Ch] [rbp-D4h] BYREF
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
  *(_QWORD *)(v1 + 8) = "3 48 4 18 offering_level:357 64 16 19 json_config_ptr:345 96 16 12 team_ptr:351";
  *(_QWORD *)(v1 + 16) = MichiaeMatsuriRegionalPlay::updateCrystalLevelSGV;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -219021312;
  v3[536862723] = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v1 + 64));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v1 + 64)) )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "updateCrystalLevelSGV",
      348);
    v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v19,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    Player::getAvatarComp(this->player_);
    PlayerAvatarComp::getTeamEntity((const PlayerAvatarComp *const)(v1 + 96));
    if ( std::operator==<AvatarTeamEntity>(0LL, (const std::shared_ptr<AvatarTeamEntity> *)(v1 + 96)) )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
        "updateCrystalLevelSGV",
        354);
      v5 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
             &v19,
             (const char (*)[54])"[MichiaeMatsuri] getTeamEntity team_ptr is null. uid:");
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      OfferingComp = Player::getOfferingComp(this->player_);
      v7 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( *(_BYTE *)(((unsigned __int64)&v7->offering_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v7->offering_id >> 3) + 0x7FFF8000) <= 3 )
      {
        v7 = (std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->offering_id);
      }
      *(_DWORD *)(v1 + 48) = PlayerOfferingComp::findOfferingLevel(OfferingComp, v7->offering_id);
      v8 = std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<AvatarTeamEntity,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 96));
      value = (float)*(int *)(v1 + 48);
      v9 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
      if ( Creature::setServerGlobalValue(v8, &v9->crystal_level_sgv, value, 1) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateCrystalLevelSGV",
          360);
        v10 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                &v19,
                (const char (*)[49])"[MichiaeMatsuri] setServerGlobalValue fail, key:");
        v11 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 64));
        v12 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, &v11->crystal_level_sgv);
        v13 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v12, (const char (*)[9])", value:");
        v14 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v13,
                (const unsigned int *)(v1 + 48));
        v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v14, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
      else
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
          "updateCrystalLevelSGV",
          363);
        v15 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                &v19,
                (const char (*)[45])"[MichiaeMatsuri] updateCrystalLevelSGV. sgv:");
        v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v15,
                (const unsigned int *)(v1 + 48));
        v5 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v16, (const char (*)[7])", uid:");
        if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
          __asan_report_load8(&this->player_);
      }
    }
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v19);
    std::shared_ptr<AvatarTeamEntity>::~shared_ptr((std::shared_ptr<AvatarTeamEntity> *const)(v1 + 96));
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v1 + 64));
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
};

// Line 367: range 0000000015CAAB2A-0000000015CAADE6
void __cdecl MichiaeMatsuriRegionalPlay::onPostEnterSceneEvent(
        MichiaeMatsuriRegionalPlay *const this,
        const PostEnterSceneEvent *event)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rdx
  uint32_t *p_bind_scene; // rax
  uint32_t bind_scene; // ecx
  unsigned int val; // [rsp+1Ch] [rbp-94h] BYREF
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-90h] BYREF
  char v11[112]; // [rsp+40h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 16 19 json_config_ptr:368";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::onPostEnterSceneEvent;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v2 + 32));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v2 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "onPostEnterSceneEvent",
      371);
    v5 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v10,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, &val);
    common::milog::MiLogStream::~MiLogStream(&v10);
  }
  else
  {
    v6 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v2 + 32));
    p_bind_scene = &v6->bind_scene;
    if ( *(_BYTE *)(((unsigned __int64)p_bind_scene >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_bind_scene & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_bind_scene >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_bind_scene);
    }
    bind_scene = v6->bind_scene;
    if ( *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&event->dst_scene_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&event->dst_scene_id);
    }
    if ( bind_scene == event->dst_scene_id )
    {
      MichiaeMatsuriRegionalPlay::updateDarkPressureSGV(this);
      MichiaeMatsuriRegionalPlay::updateCrystalEnergySGV(this);
      MichiaeMatsuriRegionalPlay::updateCrystalLevelSGV(this);
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v2 + 32));
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 384: range 0000000015CAADE8-0000000015CAB2CA
void __cdecl MichiaeMatsuriRegionalPlay::fillVarList(
        MichiaeMatsuriRegionalPlay *const this,
        google::protobuf::RepeatedPtrField<proto::RegionalPlayVar> *var_list)
{
  __m128i v2; // xmm0
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  PlayerRegionalPlayComp *RegionalPlayComp; // rax
  unsigned __int64 v9; // rax
  float v10; // xmm0_4
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v11; // rax
  float DarkPressureMaxLimit; // xmm0_4
  unsigned __int64 v13; // rax
  float v14; // xmm0_4
  data::RegionalPlayVarType type; // [rsp+10h] [rbp-D0h]
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_begin; // [rsp+18h] [rbp-C8h] BYREF
  std::vector<data::ConfigRegionalPlayVarData>::iterator __for_end; // [rsp+20h] [rbp-C0h] BYREF
  std::vector<data::ConfigRegionalPlayVarData> *__for_range; // [rsp+28h] [rbp-B8h]
  const data::ConfigRegionalPlayVarData *v19; // [rsp+30h] [rbp-B0h]
  proto::RegionalPlayVar *proto_var; // [rsp+38h] [rbp-A8h]
  std::shared_ptr<Config> v21; // [rsp+40h] [rbp-A0h] BYREF
  common::milog::MiLogStream v22; // [rsp+50h] [rbp-90h] BYREF
  char v23[112]; // [rsp+70h] [rbp-70h] BYREF

  v3 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_0(64LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 16 14 config_ptr:385";
  *(_QWORD *)(v3 + 16) = MichiaeMatsuriRegionalPlay::fillVarList;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202178560;
  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v21);
  v6 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
  JsonConfigMgr::findRegionalPlayConfig(
    (const JsonConfigMgr *const)(v3 + 32),
    (const std::string *)&v6->design_config.json_config_mgr);
  std::shared_ptr<Config>::~shared_ptr(&v21);
  if ( std::operator==<data::ConfigRegionalPlayBase>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayBase> *)(v3 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v22,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "fillVarList",
      388);
    v7 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
           &v22,
           (const char (*)[59])"[REGIONAL_PLAY] findRegionalPlayConfig failed, play_name: ");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &this->play_name_);
    common::milog::MiLogStream::~MiLogStream(&v22);
  }
  else
  {
    __for_range = &std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayBase,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v3 + 32))->var_list;
    __for_begin._M_current = std::vector<data::ConfigRegionalPlayVarData>::begin(__for_range)._M_current;
    __for_end._M_current = std::vector<data::ConfigRegionalPlayVarData>::end(__for_range)._M_current;
    while ( __gnu_cxx::operator!=<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>(
              &__for_begin,
              &__for_end) )
    {
      v19 = __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator*(&__for_begin);
      proto_var = google::protobuf::RepeatedPtrField<proto::RegionalPlayVar>::Add(var_list);
      if ( *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v19 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v19 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v19);
      }
      type = v19->var_type;
      if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
        __asan_report_load8(&this->player_);
      RegionalPlayComp = Player::getRegionalPlayComp(this->player_);
      *(float *)v2.m128i_i32 = PlayerRegionalPlayComp::getVarValue(RegionalPlayComp, type);
      proto::RegionalPlayVar::set_type(proto_var, type);
      v2 = _mm_cvtsi32_si128(_mm_cvtsi128_si32(v2));
      proto::RegionalPlayVar::set_value(proto_var, *(float *)v2.m128i_i32);
      if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
        __asan_report_load8(this);
      v9 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 6);
      if ( *(_BYTE *)((v9 >> 3) + 0x7FFF8000) )
        v9 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 6);
      v10 = (*(float (__fastcall **)(MichiaeMatsuriRegionalPlay *const, _QWORD))v9)(this, (unsigned int)type);
      proto::RegionalPlayVar::set_base_value(proto_var, v10);
      if ( type == MichiaeMatsuriDarkPressure )
      {
        ServiceBox::findService<GameserverService>();
        GameserverService::getConfig((GameserverService *const)&v21);
        v11 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v21);
        DarkPressureMaxLimit = ConstValueExcelConfigMgr::getDarkPressureMaxLimit(&v11->design_config.txt_config_mgr.const_value_config_mgr);
        proto::RegionalPlayVar::set_max_value(proto_var, DarkPressureMaxLimit);
        std::shared_ptr<Config>::~shared_ptr(&v21);
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v13 = (unsigned __int64)(this->_vptr_BaseRegionalPlay + 4);
        if ( *(_BYTE *)((v13 >> 3) + 0x7FFF8000) )
          v13 = __asan_report_load8(this->_vptr_BaseRegionalPlay + 4);
        v14 = (*(float (__fastcall **)(MichiaeMatsuriRegionalPlay *const, _QWORD))v13)(this, (unsigned int)type);
        proto::RegionalPlayVar::set_max_value(proto_var, v14);
      }
      __gnu_cxx::__normal_iterator<data::ConfigRegionalPlayVarData *,std::vector<data::ConfigRegionalPlayVarData>>::operator++(&__for_begin);
    }
  }
  std::shared_ptr<data::ConfigRegionalPlayBase>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayBase> *const)(v3 + 32));
  if ( v23 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
};

// Line 413: range 0000000015CAB2CC-0000000015CAB58C
data::ConfigRegionalPlayMichiaeMatsuriPtr __cdecl MichiaeMatsuriRegionalPlay::getJsonConfig(
        const MichiaeMatsuriRegionalPlay *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  data::ConfigRegionalPlayMichiaeMatsuriPtr result; // rax
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
  *(_QWORD *)(v2 + 8) = "1 32 16 14 config_ptr:414";
  *(_QWORD *)(v2 + 16) = MichiaeMatsuriRegionalPlay::getJsonConfig;
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
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getJsonConfig",
      417);
    v6 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
           &v12,
           (const char (*)[60])"[MichiaeMatsuri] findRegionalPlayConfig failed, play_name: ");
    v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, (const std::string *)(v1 + 32));
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])", uid:");
    if ( *(_BYTE *)(((unsigned __int64)(v1 + 24) >> 3) + 0x7FFF8000) )
      __asan_report_load8(v1 + 24);
    val = Player::getUid(*(const Player *const *)(v1 + 24));
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &val);
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::shared_ptr(
      (std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)this,
      0LL);
  }
  else
  {
    if ( *(_WORD *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
      __asan_report_store16(this, v2 + 32);
    std::dynamic_pointer_cast<data::ConfigRegionalPlayMichiaeMatsuri,data::ConfigRegionalPlayBase>((const std::shared_ptr<data::ConfigRegionalPlayBase> *)this);
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
  result._M_ptr = (std::__shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2>::element_type *)this;
  return result;
};

// Line 424: range 0000000015CAB58E-0000000015CAB64A
const data::MichiaeErosionAreaExcelConfig *__cdecl MichiaeMatsuriRegionalPlay::getDarkPressureConfig(
        const MichiaeMatsuriRegionalPlay *const this)
{
  ActivityMichiaeMatsuriExcelConfigMgr *p_activity_michiae_matsuri_config_mgr; // rcx
  const data::MichiaeErosionAreaExcelConfig *MichiaeErosionAreaExcelConfig; // rbx
  std::shared_ptr<Config> v4[2]; // [rsp+10h] [rbp-20h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)v4);
  p_activity_michiae_matsuri_config_mgr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)v4)->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->dark_pressure_level_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->dark_pressure_level_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->dark_pressure_level_);
  }
  MichiaeErosionAreaExcelConfig = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeErosionAreaExcelConfig(
                                    p_activity_michiae_matsuri_config_mgr,
                                    this->dark_pressure_level_);
  std::shared_ptr<Config>::~shared_ptr(v4);
  return MichiaeErosionAreaExcelConfig;
};

// Line 429: range 0000000015CAB64C-0000000015CAB933
const data::MichiaeAntiErosionExcelConfig *__cdecl MichiaeMatsuriRegionalPlay::getAntiErosionConfig(
        const MichiaeMatsuriRegionalPlay *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  unsigned __int64 v3; // r12
  common::milog::MiLogStream *v4; // r14
  const data::MichiaeAntiErosionExcelConfig *MichiaeAntiErosionExcelConfig; // r14
  PlayerOfferingComp *OfferingComp; // r14
  std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v7; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v8; // rax
  const data::MichiaeAntiErosionExcelConfig *result; // rax
  unsigned int val; // [rsp+18h] [rbp-A8h] BYREF
  uint32_t offering_level; // [rsp+1Ch] [rbp-A4h]
  std::shared_ptr<Config> v12; // [rsp+20h] [rbp-A0h] BYREF
  common::milog::MiLogStream v13; // [rsp+30h] [rbp-90h] BYREF
  char v14[112]; // [rsp+50h] [rbp-70h] BYREF

  v1 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_0(64LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "1 32 16 19 json_config_ptr:430";
  *(_QWORD *)(v1 + 16) = MichiaeMatsuriRegionalPlay::getAntiErosionConfig;
  v3 = v1 >> 3;
  *(_DWORD *)(v3 + 2147450880) = -235802127;
  *(_DWORD *)(v3 + 2147450884) = -202178560;
  MichiaeMatsuriRegionalPlay::getJsonConfig((const MichiaeMatsuriRegionalPlay *const)(v1 + 32));
  if ( std::operator==<data::ConfigRegionalPlayMichiaeMatsuri>(
         0LL,
         (const std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *)(v1 + 32)) )
  {
    common::milog::MiLogStream::create(
      &v13,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/player/regional_play/michiae_matsuri_regional_play.cpp",
      "getAntiErosionConfig",
      433);
    v4 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
           &v13,
           (const char (*)[42])"[MichiaeMatsuri] getJsonConfig fail, uid:");
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    val = Player::getUid(this->player_);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v4, &val);
    common::milog::MiLogStream::~MiLogStream(&v13);
    MichiaeAntiErosionExcelConfig = 0LL;
  }
  else
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->player_ >> 3) + 0x7FFF8000) )
      __asan_report_load8(&this->player_);
    OfferingComp = Player::getOfferingComp(this->player_);
    v7 = std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false> *const)(v1 + 32));
    if ( *(_BYTE *)(((unsigned __int64)&v7->offering_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&v7->offering_id >> 3) + 0x7FFF8000) <= 3 )
    {
      v7 = (std::__shared_ptr_access<data::ConfigRegionalPlayMichiaeMatsuri,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *)__asan_report_load4(&v7->offering_id);
    }
    offering_level = PlayerOfferingComp::findOfferingLevel(OfferingComp, v7->offering_id);
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v12);
    v8 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v12);
    MichiaeAntiErosionExcelConfig = data::ActivityMichiaeMatsuriExcelConfigMgrBase::findMichiaeAntiErosionExcelConfig(
                                      &v8->design_config.txt_config_mgr.activity_michiae_matsuri_config_mgr,
                                      offering_level);
    std::shared_ptr<Config>::~shared_ptr(&v12);
  }
  std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri>::~shared_ptr((std::shared_ptr<data::ConfigRegionalPlayMichiaeMatsuri> *const)(v1 + 32));
  result = MichiaeAntiErosionExcelConfig;
  if ( v14 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
