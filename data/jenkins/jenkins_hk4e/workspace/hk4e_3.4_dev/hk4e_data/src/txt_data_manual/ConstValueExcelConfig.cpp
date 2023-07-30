// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ConstValueExcelConfig.cpp

// Line 29: range 000000000E108B74-000000000E120BC8
int32_t __cdecl ConstValueExcelConfigMgr::loadConfig(ConstValueExcelConfigMgr *const this, HK4EDesignConfig *config);

// Line 258: range 000000000E120BCA-000000000E122F0D
int32_t __cdecl ConstValueExcelConfigMgr::rewriteConfig(
        ConstValueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  int v6; // eax
  std::map<data::QualityType,float> *p_avatar_upgrade_cost_ratio_map; // rcx
  int v8; // eax
  char *v9; // rsi
  std::map<data::QualityType,float> *v10; // rcx
  char v11; // al
  char *v12; // rsi
  float *v13; // r15
  std::map<data::QualityType,float> *v14; // rcx
  char v15; // al
  float *v16; // rdx
  float *v17; // r9
  int32_t Const; // eax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int32_t v45; // ebx
  float *v47; // [rsp+0h] [rbp-730h]
  std::map<data::QualityType,float>::mapped_type *v48; // [rsp+8h] [rbp-728h]
  char v49[1808]; // [rsp+20h] [rbp-710h] BYREF

  v2 = (unsigned __int64)v49;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1760LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "29 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 3"
                        "2 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32"
                        " 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 "
                        "9 <unknown> 928 32 9 <unknown> 992 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 3"
                        "2 9 <unknown> 1248 32 9 <unknown> 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 15"
                        "04 32 9 <unknown> 1568 32 9 <unknown> 1632 32 9 <unknown> 1696 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
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
  v5 = ConstValueExcelConfigMgr::rewriteEquipScoinRatio(this) != 0;
  if ( v5 | (ConstValueExcelConfigMgr::rewriteEnergyRechargeRatio(this) != 0) )
  {
    v6 = -1;
  }
  else if ( ConstValueExcelConfigMgr::rewriteCombatForceParam(this) )
  {
    v6 = -1;
  }
  else
  {
    p_avatar_upgrade_cost_ratio_map = &this->avatar_upgrade_cost_ratio_map_;
    v8 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
    {
      LOBYTE(txt_config_mgr) = (_BYTE)v8 != 0;
      __asan_report_store4(v2 + 80, txt_config_mgr);
    }
    *(_DWORD *)(v2 + 80) = 105;
    v9 = (char *)(v2 + 80);
    v48 = std::map<data::QualityType,float>::operator[](
            p_avatar_upgrade_cost_ratio_map,
            (std::map<data::QualityType,float>::key_type *)(v2 + 80));
    v10 = &this->avatar_upgrade_cost_ratio_map_;
    v11 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( v11 != 0 && v11 <= 3 )
    {
      LOBYTE(v9) = v11 != 0;
      __asan_report_store4(v2 + 64, v9);
    }
    *(_DWORD *)(v2 + 64) = 5;
    v12 = (char *)(v2 + 64);
    v13 = std::map<data::QualityType,float>::operator[](v10, (std::map<data::QualityType,float>::key_type *)(v2 + 64));
    v14 = &this->avatar_upgrade_cost_ratio_map_;
    v15 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v15 != 0 && v15 <= 3 )
    {
      LOBYTE(v12) = v15 != 0;
      __asan_report_store4(v2 + 48, v12);
    }
    *(_DWORD *)(v2 + 48) = 4;
    v16 = std::map<data::QualityType,float>::operator[](v14, (std::map<data::QualityType,float>::key_type *)(v2 + 48));
    Const = ConstValueExcelConfigMgr::findConstValue<float,float &,float &>(
              this,
              CONST_VALUE_AVATAR_UPGRADE_COST_RATIO,
              v16,
              v13,
              v48,
              v17,
              v47);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
    if ( Const )
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        278);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 96),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
        v19,
        (const char (*)[59])"findConstValue CONST_VALUE_AVATAR_UPGRADE_COST_RATIO fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteDailyTaskParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        284);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v20,
        (const char (*)[28])"rewriteDailyTaskParam fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteResinCostVec(this) )
    {
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 32 + 31) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        290);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
        v21,
        (const char (*)[26])"rewriteResinCostVec fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteDailyGadgetDropCategoryLimitMap(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        296);
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v22,
        (const char (*)[40])"rewriteGadgetCreationLimitDropTag fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewritePointCardParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        302);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        v23,
        (const char (*)[28])"rewritePointCardParam fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteCrucibleParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        308);
      v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v24,
        (const char (*)[27])"rewriteCrucibleParam fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteReputationParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        314);
      v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v25,
        (const char (*)[29])"rewriteReputationParam fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteMiracleRingEnterPackItem(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        320);
      v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 544),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
        v26,
        (const char (*)[38])"rewriteMiracleRingEnterPackItem fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteMuipMailLimitConfig(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        325);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v27,
        (const char (*)[33])"rewriteMuipMailLimitConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteWaterSpriteConfig(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        330);
      v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v28,
        (const char (*)[31])"rewriteWaterSpriteConfig fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteHomeLimitedShopTime(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        336);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v29,
        (const char (*)[33])"rewriteHomeLimitedShopTime fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteWeeklyBossResinDiscountParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        342);
      v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 800),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        v30,
        (const char (*)[42])"rewriteWeeklyBossResinDiscountParam fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteCanNotDestroyMaterialTypeSet(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        348);
      v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 864),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
        v31,
        (const char (*)[41])"rewriteCanNotDestroyMaterialTypeSet fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteMapMarkParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        354);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 928),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v32,
        (const char (*)[25])"rewriteMapMarkParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteMechanicus2Param(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        360);
      v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v33,
        (const char (*)[29])"rewriteMechanicus2Param fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteChessCardParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        366);
      v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
        v34,
        (const char (*)[27])"rewriteChessCardParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteActivityExpeditionRewardLevel(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        372);
      v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1120),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        v35,
        (const char (*)[42])"rewriteActivityExpeditionRewardLevel fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteProductParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        378);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1184),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
        v36,
        (const char (*)[25])"rewriteProductParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1184));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteMinorsGachaParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        384);
      v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1248),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
        v37,
        (const char (*)[29])"rewriteMinorsGachaParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1248));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteHomeFurnitureCustomSuiteParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        390);
      v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1312),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
        v38,
        (const char (*)[42])"rewriteHomeFurnitureCustomSuiteParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1312));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteFireworksLaunchParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        396);
      v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1376),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v39,
        (const char (*)[33])"rewriteFireworksLaunchParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1376));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteCustomDungeonParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        402);
      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1440),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
        v40,
        (const char (*)[31])"rewriteCustomDungeonParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1440));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteCollectibleMailParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        408);
      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1504),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v41,
        (const char (*)[33])"rewriteCollectibleMailParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1504));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteNightCrowGadgetParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        414);
      v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1568),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
        v42,
        (const char (*)[33])"rewriteNightCrowGadgetParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1568));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteGCGTavernPointIdParam(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        420);
      v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1632),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v43,
        (const char (*)[34])"rewriteGCGTavernPointIdParam fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1632));
      v6 = -1;
    }
    else if ( ConstValueExcelConfigMgr::rewriteGCGDeckSystemInitDeck(this) )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteConfig",
        425);
      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1696),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        v44,
        (const char (*)[34])"rewriteGCGDeckSystemInitDeck fail");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1696));
      v6 = -1;
    }
    else
    {
      v6 = 0;
    }
  }
  v45 = v6;
  if ( v49 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8058) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8060) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8068) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8070) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8078) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8090) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8098) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A8) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80B8) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80C8) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D0) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80D8) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1760LL, v49);
  }
  return v45;
};

// Line 432: range 000000000E122F0E-000000000E129CF5
int32_t __cdecl ConstValueExcelConfigMgr::checkConfig(
        ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r13d
  unsigned __int64 v3; // r14
  __int64 v4; // rax
  _DWORD *v5; // r12
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  SceneExcelConfigMgr *v15; // rcx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  RandTaskExcelConfigMgr *p_rand_task_config_mgr; // rcx
  common::milog::MiLogStream *v29; // rax
  AvatarFashionExcelConfigMgr *p_avatar_fashion_config_mgr; // rcx
  common::milog::MiLogStream *v31; // rax
  uint32_t min_bored_limit; // ecx
  common::milog::MiLogStream *v33; // rax
  uint32_t bored_create_monster_min_range; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  __int64 v54; // rsi
  common::milog::MiLogStream *v55; // rax
  uint32_t tower_daily_mail_id; // ecx
  char v57; // dl
  __int64 v58; // rsi
  uint32_t tower_monthly_mail_id; // ecx
  char v60; // dl
  uint32_t tower_overflow_mail_id; // ecx
  char v62; // dl
  __int64 v63; // rsi
  uint32_t rebate_mail_id; // ecx
  char v65; // dl
  __int64 v66; // rsi
  unsigned int v67; // ecx
  char v68; // al
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  int v71; // edx
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  QuestExcelConfigMgr *v74; // rcx
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // rax
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rcx
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  GadgetExcelConfigMgr *v84; // rcx
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  common::milog::MiLogStream *v90; // rax
  common::milog::MiLogStream *v91; // rax
  int v92; // eax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  uint32_t HomePlantBoxMaterialID; // eax
  common::milog::MiLogStream *v102; // rax
  const char *v103; // rsi
  common::milog::MiLogStream *v104; // r13
  uint32_t v105; // edx
  char v106; // al
  common::milog::MiLogStream *v107; // rax
  common::milog::MiLogStream *v108; // rax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  char v113; // al
  common::milog::MiLogStream *v114; // rax
  common::milog::MiLogStream *v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // rax
  common::milog::MiLogStream *v121; // rax
  ItemExcelConfigMgr *v122; // rcx
  char v123; // al
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // rax
  common::milog::MiLogStream *v129; // rax
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  uint32_t default_check_distance; // ecx
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v154; // rax
  common::milog::MiLogStream *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // rax
  common::milog::MiLogStream *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // rax
  common::milog::MiLogStream *v161; // rax
  common::milog::MiLogStream *v162; // rax
  common::milog::MiLogStream *v163; // rax
  std::initializer_list<unsigned int>::const_iterator __for_begin; // [rsp+18h] [rbp-11E8h]
  const data::WorldExcelConfig *default_world_config_ptr; // [rsp+20h] [rbp-11E0h]
  const data::WorldExcelConfig *default_home_world_config_ptr; // [rsp+28h] [rbp-11D8h]
  std::initializer_list<unsigned int>::const_iterator __for_end; // [rsp+38h] [rbp-11C8h]
  const data::GadgetExcelConfig *gadget_config_ptr; // [rsp+48h] [rbp-11B8h]
  char v171[4528]; // [rsp+50h] [rbp-11B0h] BYREF

  v3 = (unsigned __int64)v171;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_7(4480LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "72 32 4 6 id:585 48 4 9 <unknown> 64 16 9 <unknown> 96 16 9 <unknown> 128 32 9 <unknown> 192 32 "
                        "9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9"
                        " <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 832 32 9 "
                        "<unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 <unknown> 1152 32 "
                        "9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472"
                        " 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unknown> 1664 32 9 <unknown> 1728 32 9 <unknown> "
                        "1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 <unknown> 1984 32 9 <unknown> 2048 32 9 <unkno"
                        "wn> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 32 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <u"
                        "nknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 2560 32 9 <unknown> 2624 32 9 <unknown> 2688 32 "
                        "9 <unknown> 2752 32 9 <unknown> 2816 32 9 <unknown> 2880 32 9 <unknown> 2944 32 9 <unknown> 3008"
                        " 32 9 <unknown> 3072 32 9 <unknown> 3136 32 9 <unknown> 3200 32 9 <unknown> 3264 32 9 <unknown> "
                        "3328 32 9 <unknown> 3392 32 9 <unknown> 3456 32 9 <unknown> 3520 32 9 <unknown> 3584 32 9 <unkno"
                        "wn> 3648 32 9 <unknown> 3712 32 9 <unknown> 3776 32 9 <unknown> 3840 32 9 <unknown> 3904 32 9 <u"
                        "nknown> 3968 32 9 <unknown> 4032 32 9 <unknown> 4096 32 9 <unknown> 4160 32 9 <unknown> 4224 32 "
                        "9 <unknown> 4288 32 9 <unknown> 4352 32 9 <unknown> 4416 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -219021312;
  v5[536862723] = -219021312;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -218959118;
  v5[536862749] = -218959118;
  v5[536862751] = -218959118;
  v5[536862753] = -218959118;
  v5[536862755] = -218959118;
  v5[536862757] = -218959118;
  v5[536862759] = -218959118;
  v5[536862761] = -218959118;
  v5[536862763] = -218959118;
  v5[536862765] = -218959118;
  v5[536862767] = -218959118;
  v5[536862769] = -218959118;
  v5[536862771] = -218959118;
  v5[536862773] = -218959118;
  v5[536862775] = -218959118;
  v5[536862777] = -218959118;
  v5[536862779] = -218959118;
  v5[536862781] = -218959118;
  v5[536862783] = -218959118;
  v5[536862785] = -218959118;
  v5[536862787] = -218959118;
  v5[536862789] = -218959118;
  v5[536862791] = -218959118;
  v5[536862793] = -218959118;
  v5[536862795] = -218959118;
  v5[536862797] = -218959118;
  v5[536862799] = -218959118;
  v5[536862801] = -218959118;
  v5[536862803] = -218959118;
  v5[536862805] = -218959118;
  v5[536862807] = -218959118;
  v5[536862809] = -218959118;
  v5[536862811] = -218959118;
  v5[536862813] = -218959118;
  v5[536862815] = -218959118;
  v5[536862817] = -218959118;
  v5[536862819] = -218959118;
  v5[536862821] = -218959118;
  v5[536862823] = -218959118;
  v5[536862825] = -218959118;
  v5[536862827] = -218959118;
  v5[536862829] = -218959118;
  v5[536862831] = -218959118;
  v5[536862833] = -218959118;
  v5[536862835] = -218959118;
  v5[536862837] = -218959118;
  v5[536862839] = -218959118;
  v5[536862841] = -218959118;
  v5[536862843] = -218959118;
  v5[536862845] = -218959118;
  v5[536862847] = -218959118;
  v5[536862849] = -218959118;
  v5[536862851] = -218959118;
  v5[536862853] = -218959118;
  v5[536862855] = -218959118;
  v5[536862857] = -218959118;
  v5[536862859] = -202116109;
  p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->default_world_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_world_id_ >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(&this->default_world_id_);
  }
  default_world_config_ptr = data::SceneExcelConfigMgrBase::findWorldExcelConfig(
                               p_scene_config_mgr,
                               this->default_world_id_);
  if ( default_world_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&default_world_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)default_world_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&default_world_config_ptr->type >> 3)
                                                                              + 0x7FFF8000) )
    {
      __asan_report_load4(&default_world_config_ptr->type);
    }
    if ( default_world_config_ptr->type == WORLD_PLAYER )
    {
      v15 = &txt_config_mgr->scene_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)&this->default_home_world_id_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_home_world_id_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->default_home_world_id_);
      }
      default_home_world_config_ptr = data::SceneExcelConfigMgrBase::findWorldExcelConfig(
                                        v15,
                                        this->default_home_world_id_);
      if ( default_home_world_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&default_home_world_config_ptr->type >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)default_home_world_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&default_home_world_config_ptr->type >> 3)
                                                                                       + 0x7FFF8000) )
        {
          __asan_report_load4(&default_home_world_config_ptr->type);
        }
        if ( default_home_world_config_ptr->type == WORLD_HOME )
        {
          p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)&this->rand_task_quest_entrance_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->rand_task_quest_entrance_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->rand_task_quest_entrance_);
          }
          if ( QuestExcelConfigMgr::findEntranceConfigVec(p_quest_config_mgr, this->rand_task_quest_entrance_) )
          {
            p_rand_task_config_mgr = &txt_config_mgr->rand_task_config_mgr;
            if ( *(_BYTE *)(((unsigned __int64)&this->rand_task_quest_reward_id_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_task_quest_reward_id_ >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_load4(&this->rand_task_quest_reward_id_);
            }
            if ( data::RandTaskExcelConfigMgrBase::findRandTaskRewardConfig(
                   p_rand_task_config_mgr,
                   this->rand_task_quest_reward_id_) )
            {
              p_avatar_fashion_config_mgr = &txt_config_mgr->avatar_fashion_config_mgr;
              if ( *(_BYTE *)(((unsigned __int64)&this->default_flycloak_id_ >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&this->default_flycloak_id_ >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&this->default_flycloak_id_);
              }
              if ( data::AvatarFashionExcelConfigMgrBase::findAvatarFlycloakExcelConfig(
                     p_avatar_fashion_config_mgr,
                     this->default_flycloak_id_) )
              {
                if ( *(_BYTE *)(((unsigned __int64)&this->min_bored_limit_ >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&this->min_bored_limit_ >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&this->min_bored_limit_);
                }
                min_bored_limit = this->min_bored_limit_;
                if ( *(_BYTE *)(((unsigned __int64)&this->max_bored_limit_ >> 3) + 0x7FFF8000) != 0
                  && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_bored_limit_ >> 3)
                                                                      + 0x7FFF8000) )
                {
                  __asan_report_load4(&this->max_bored_limit_);
                }
                if ( min_bored_limit <= this->max_bored_limit_ )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&this->bored_create_monster_min_range_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->bored_create_monster_min_range_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&this->bored_create_monster_min_range_);
                  }
                  bored_create_monster_min_range = this->bored_create_monster_min_range_;
                  if ( *(_BYTE *)(((unsigned __int64)&this->bored_create_monster_range_ >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&this->bored_create_monster_range_ >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&this->bored_create_monster_range_);
                  }
                  if ( bored_create_monster_min_range < this->bored_create_monster_range_ )
                  {
                    if ( *(_BYTE *)(((unsigned __int64)&this->game_time_per_day_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->game_time_per_day_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->game_time_per_day_);
                    }
                    if ( !this->game_time_per_day_ )
                      goto LABEL_457;
                    if ( *(_BYTE *)(((unsigned __int64)&this->game_day_seconds_ >> 3) + 0x7FFF8000) != 0
                      && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->game_day_seconds_ >> 3)
                                                                           + 0x7FFF8000) )
                    {
                      __asan_report_load4(&this->game_day_seconds_);
                    }
                    if ( !this->game_day_seconds_ )
                      goto LABEL_457;
                    if ( *(_BYTE *)(((unsigned __int64)&this->game_hour_seconds_ >> 3) + 0x7FFF8000) != 0
                      && *(_BYTE *)(((unsigned __int64)&this->game_hour_seconds_ >> 3) + 0x7FFF8000) <= 3 )
                    {
                      __asan_report_load4(&this->game_hour_seconds_);
                    }
                    if ( this->game_hour_seconds_ )
                    {
                      if ( *(_BYTE *)(((unsigned __int64)&this->hurt_revive_hp_percent_ >> 3) + 0x7FFF8000) != 0
                        && (char)((((_BYTE)this + 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hurt_revive_hp_percent_ >> 3)
                                                                            + 0x7FFF8000) )
                      {
                        __asan_report_load4(&this->hurt_revive_hp_percent_);
                      }
                      if ( this->hurt_revive_hp_percent_ )
                      {
                        if ( *(_BYTE *)(((unsigned __int64)&this->spring_param_c1_ >> 3) + 0x7FFF8000) != 0
                          && *(_BYTE *)(((unsigned __int64)&this->spring_param_c1_ >> 3) + 0x7FFF8000) <= 3 )
                        {
                          __asan_report_load4(&this->spring_param_c1_);
                        }
                        if ( (float)(int)this->spring_param_c1_ >= 0.00000011920929 )
                        {
                          if ( *(_BYTE *)(((unsigned __int64)&this->back_avatar_auto_recover_interval_ >> 3) + 0x7FFF8000) != 0
                            && *(_BYTE *)(((unsigned __int64)&this->back_avatar_auto_recover_interval_ >> 3) + 0x7FFF8000) <= 3 )
                          {
                            __asan_report_load4(&this->back_avatar_auto_recover_interval_);
                          }
                          if ( (float)(int)this->back_avatar_auto_recover_interval_ >= 0.00000011920929 )
                          {
                            if ( *(_BYTE *)(((unsigned __int64)&this->block_refresh_count_down_time_ >> 3) + 0x7FFF8000) != 0
                              && *(_BYTE *)(((unsigned __int64)&this->block_refresh_count_down_time_ >> 3) + 0x7FFF8000) <= 3 )
                            {
                              __asan_report_load4(&this->block_refresh_count_down_time_);
                            }
                            if ( this->block_refresh_count_down_time_ )
                            {
                              if ( *(_BYTE *)(((unsigned __int64)&this->env_animal_refresh_interval_ >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&this->env_animal_refresh_interval_ >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(&this->env_animal_refresh_interval_);
                              }
                              if ( this->env_animal_refresh_interval_ )
                              {
                                if ( *(_BYTE *)(((unsigned __int64)&this->invite_valid_time_sec_ >> 3) + 0x7FFF8000) != 0
                                  && *(_BYTE *)(((unsigned __int64)&this->invite_valid_time_sec_ >> 3) + 0x7FFF8000) <= 3 )
                                {
                                  __asan_report_load4(&this->invite_valid_time_sec_);
                                }
                                if ( this->invite_valid_time_sec_ )
                                {
                                  if ( *(_BYTE *)(((unsigned __int64)&this->dungeon_restart_invite_valid_time_sec_ >> 3)
                                                + 0x7FFF8000) != 0
                                    && *(_BYTE *)(((unsigned __int64)&this->dungeon_restart_invite_valid_time_sec_ >> 3)
                                                + 0x7FFF8000) <= 3 )
                                  {
                                    __asan_report_load4(&this->dungeon_restart_invite_valid_time_sec_);
                                  }
                                  if ( this->dungeon_restart_invite_valid_time_sec_ )
                                  {
                                    if ( ConstValueExcelConfigMgr::checkEnvAnimalConfig(this) )
                                    {
                                      if ( *(char *)(((v3 + 1216) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1247) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1216, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1216),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        531);
                                      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1216),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
                                        v44,
                                        (const char (*)[28])"checkEnvAnimalConfig failed");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1216));
                                      v2 = -1;
                                    }
                                    else if ( ConstValueExcelConfigMgr::checkBushDropData(this, txt_config_mgr) )
                                    {
                                      if ( *(char *)(((v3 + 1280) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1311) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1280, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1280),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        536);
                                      v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1280),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                        v45,
                                        (const char (*)[25])"checkBushDropData failed");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1280));
                                      v2 = -1;
                                    }
                                    else if ( ConstValueExcelConfigMgr::checkCookConfig(this) )
                                    {
                                      if ( *(char *)(((v3 + 1344) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1375) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1344, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1344),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        541);
                                      v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1344),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                        v46,
                                        (const char (*)[23])"checkCookConfig failed");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1344));
                                      v2 = -1;
                                    }
                                    else if ( ConstValueExcelConfigMgr::checkRandTaskConstConfig(this) )
                                    {
                                      if ( *(char *)(((v3 + 1408) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1439) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1408, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1408),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        546);
                                      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1408),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        v47,
                                        (const char (*)[32])"checkRandTaskConstConfig failed");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1408));
                                      v2 = -1;
                                    }
                                    else if ( ConstValueExcelConfigMgr::checkDailyTaskConfig(this, txt_config_mgr) )
                                    {
                                      if ( *(char *)(((v3 + 1472) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1503) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1472, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1472),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        551);
                                      v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1472),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                        v48,
                                        (const char (*)[27])"checkDailyTaskConfig fails");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1472));
                                      v2 = -1;
                                    }
                                    else if ( ConstValueExcelConfigMgr::checkCityReputationConfig(this, txt_config_mgr) )
                                    {
                                      if ( *(char *)(((v3 + 1536) >> 3) + 0x7FFF8000) < 0
                                        || *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) != 0
                                        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1567) >> 3) + 0x7FFF8000) )
                                      {
                                        __asan_report_store_n(v3 + 1536, 32LL);
                                      }
                                      common::milog::MiLogStream::create(
                                        (common::milog::MiLogStream *)(v3 + 1536),
                                        &common::milog::MiLogDefault::default_log_obj_,
                                        4u,
                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                        "checkConfig",
                                        557);
                                      v49 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                              (common::milog::MiLogStream *const)(v3 + 1536),
                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                        v49,
                                        (const char (*)[32])"checkCityReputationConfig fails");
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1536));
                                      v2 = -1;
                                    }
                                    else
                                    {
                                      if ( *(_BYTE *)(((unsigned __int64)&this->normal_mail_max_num_ >> 3) + 0x7FFF8000) != 0
                                        && (char)((((_BYTE)this + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_mail_max_num_ >> 3)
                                                                                             + 0x7FFF8000) )
                                      {
                                        __asan_report_load4(&this->normal_mail_max_num_);
                                      }
                                      if ( this->normal_mail_max_num_ && this->normal_mail_max_num_ <= 0x5F5E100 )
                                      {
                                        if ( *(_BYTE *)(((unsigned __int64)&this->weather_change_interval_ >> 3)
                                                      + 0x7FFF8000) != 0
                                          && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weather_change_interval_ >> 3)
                                                                                              + 0x7FFF8000) )
                                        {
                                          __asan_report_load4(&this->weather_change_interval_);
                                        }
                                        if ( this->weather_change_interval_ >= 1.0 )
                                        {
                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_chat_cached_max_count_ >> 3)
                                                        + 0x7FFF8000) != 0
                                            && *(_BYTE *)(((unsigned __int64)&this->mp_chat_cached_max_count_ >> 3)
                                                        + 0x7FFF8000) <= 3 )
                                          {
                                            __asan_report_load4(&this->mp_chat_cached_max_count_);
                                          }
                                          if ( !this->mp_chat_cached_max_count_ )
                                            goto LABEL_458;
                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_chat_text_max_len_ >> 3)
                                                        + 0x7FFF8000) != 0
                                            && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_chat_text_max_len_ >> 3)
                                                                                                + 0x7FFF8000) )
                                          {
                                            __asan_report_load4(&this->mp_chat_text_max_len_);
                                          }
                                          if ( !this->mp_chat_text_max_len_ )
                                            goto LABEL_458;
                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_interval_ >> 3)
                                                        + 0x7FFF8000) != 0
                                            && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_interval_ >> 3)
                                                                                                + 0x7FFF8000) )
                                          {
                                            __asan_report_load4(&this->mp_chat_check_interval_);
                                          }
                                          if ( !this->mp_chat_check_interval_ )
                                            goto LABEL_458;
                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_num_ >> 3) + 0x7FFF8000) != 0
                                            && *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_num_ >> 3) + 0x7FFF8000) <= 3 )
                                          {
                                            __asan_report_load4(&this->mp_chat_check_num_);
                                          }
                                          if ( !this->mp_chat_check_num_ )
                                            goto LABEL_458;
                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_cd_ >> 3) + 0x7FFF8000) != 0
                                            && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_chat_check_cd_ >> 3)
                                                                                                + 0x7FFF8000) )
                                          {
                                            __asan_report_load4(&this->mp_chat_check_cd_);
                                          }
                                          if ( this->mp_chat_check_cd_ )
                                          {
                                            v54 = (((_BYTE)this + 44) & 7u) + 3;
                                            if ( *(_BYTE *)(((unsigned __int64)&this->spring_full_recover_time_ >> 3)
                                                          + 0x7FFF8000) != 0
                                              && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->spring_full_recover_time_ >> 3)
                                                                                                  + 0x7FFF8000) )
                                            {
                                              __asan_report_load4(&this->spring_full_recover_time_);
                                            }
                                            if ( !this->spring_full_recover_time_ )
                                              goto LABEL_459;
                                            if ( *(_BYTE *)(((unsigned __int64)&this->spring_recover_interval_ >> 3)
                                                          + 0x7FFF8000) != 0
                                              && *(_BYTE *)(((unsigned __int64)&this->spring_recover_interval_ >> 3)
                                                          + 0x7FFF8000) <= 3 )
                                            {
                                              __asan_report_load4(&this->spring_recover_interval_);
                                            }
                                            if ( this->spring_recover_interval_ )
                                            {
                                              if ( *(_WORD *)(((v3 + 64) >> 3) + 0x7FFF8000) )
                                                __asan_report_store16();
                                              *(_QWORD *)(v3 + 64) = 0LL;
                                              *(_QWORD *)(v3 + 72) = 0LL;
                                              if ( *(_BYTE *)(((v3 + 72) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8(v3 + 72, v54);
                                              *(_QWORD *)(v3 + 72) = 4LL;
                                              if ( *(_BYTE *)(((unsigned __int64)&this->tower_daily_mail_id_ >> 3)
                                                            + 0x7FFF8000) != 0
                                                && *(_BYTE *)(((unsigned __int64)&this->tower_daily_mail_id_ >> 3)
                                                            + 0x7FFF8000) <= 3 )
                                              {
                                                __asan_report_load4(&this->tower_daily_mail_id_);
                                              }
                                              tower_daily_mail_id = this->tower_daily_mail_id_;
                                              v57 = *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000);
                                              if ( v57 != 0 && (char)(((v3 + 96) & 7) + 3) >= v57 )
                                              {
                                                LOBYTE(v54) = v57 != 0;
                                                __asan_report_store4(v3 + 96, v54);
                                              }
                                              *(_DWORD *)(v3 + 96) = tower_daily_mail_id;
                                              v58 = (((_BYTE)this - 20) & 7u) + 3;
                                              if ( *(_BYTE *)(((unsigned __int64)&this->tower_monthly_mail_id_ >> 3)
                                                            + 0x7FFF8000) != 0
                                                && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->tower_monthly_mail_id_ >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load4(&this->tower_monthly_mail_id_);
                                              }
                                              tower_monthly_mail_id = this->tower_monthly_mail_id_;
                                              v60 = *(_BYTE *)(((v3 + 100) >> 3) + 0x7FFF8000);
                                              if ( v60 != 0 && (char)(((v3 + 100) & 7) + 3) >= v60 )
                                              {
                                                LOBYTE(v58) = v60 != 0;
                                                __asan_report_store4(v3 + 100, v58);
                                              }
                                              *(_DWORD *)(v3 + 100) = tower_monthly_mail_id;
                                              if ( *(_BYTE *)(((unsigned __int64)&this->tower_overflow_mail_id_ >> 3)
                                                            + 0x7FFF8000) != 0
                                                && *(_BYTE *)(((unsigned __int64)&this->tower_overflow_mail_id_ >> 3)
                                                            + 0x7FFF8000) <= 3 )
                                              {
                                                __asan_report_load4(&this->tower_overflow_mail_id_);
                                              }
                                              tower_overflow_mail_id = this->tower_overflow_mail_id_;
                                              v62 = *(_BYTE *)(((v3 + 104) >> 3) + 0x7FFF8000);
                                              if ( v62 != 0 && (char)(((v3 + 104) & 7) + 3) >= v62 )
                                              {
                                                LOBYTE(v58) = v62 != 0;
                                                __asan_report_store4(v3 + 104, v58);
                                              }
                                              *(_DWORD *)(v3 + 104) = tower_overflow_mail_id;
                                              v63 = (((_BYTE)this + 100) & 7u) + 3;
                                              if ( *(_BYTE *)(((unsigned __int64)&this->rebate_mail_id_ >> 3)
                                                            + 0x7FFF8000) != 0
                                                && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rebate_mail_id_ >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_load4(&this->rebate_mail_id_);
                                              }
                                              rebate_mail_id = this->rebate_mail_id_;
                                              v65 = *(_BYTE *)(((v3 + 108) >> 3) + 0x7FFF8000);
                                              LOBYTE(v63) = v65 != 0;
                                              if ( v65 != 0 && (char)(((v3 + 108) & 7) + 3) >= v65 )
                                                __asan_report_store4(v3 + 108, v63);
                                              *(_DWORD *)(v3 + 108) = rebate_mail_id;
                                              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
                                                __asan_report_store8(v3 + 64, v63);
                                              *(_QWORD *)(v3 + 64) = v3 + 96;
                                              __for_begin = std::initializer_list<unsigned int>::begin((const std::initializer_list<unsigned int> *const)(v3 + 64));
                                              __for_end = std::initializer_list<unsigned int>::end((const std::initializer_list<unsigned int> *const)(v3 + 64));
                                              while ( 1 )
                                              {
                                                if ( __for_begin == __for_end )
                                                {
                                                  v71 = 1;
                                                  goto LABEL_214;
                                                }
                                                v66 = ((unsigned __int8)__for_begin & 7u) + 3;
                                                if ( *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) != 0
                                                  && (char)(((unsigned __int8)__for_begin & 7) + 3) >= *(_BYTE *)(((unsigned __int64)__for_begin >> 3) + 0x7FFF8000) )
                                                {
                                                  __asan_report_load4(__for_begin);
                                                }
                                                v67 = *__for_begin;
                                                v68 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
                                                if ( v68 != 0 && v68 <= 3 )
                                                {
                                                  LOBYTE(v66) = v68 != 0;
                                                  __asan_report_store4(v3 + 32, v66);
                                                }
                                                *(_DWORD *)(v3 + 32) = v67;
                                                if ( !data::MailExcelConfigMgrBase::findMailExcelConfig(
                                                        &txt_config_mgr->mail_config_mgr,
                                                        *(unsigned int *)(v3 + 32)) )
                                                  break;
                                                ++__for_begin;
                                              }
                                              if ( *(char *)(((v3 + 1856) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1887) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v3 + 1856, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v3 + 1856),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                "checkConfig",
                                                589);
                                              v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v3 + 1856),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              v70 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                      v69,
                                                      (const char (*)[31])"findMailExcelConfig fails, id:");
                                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                v70,
                                                (const unsigned int *)(v3 + 32));
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1856));
                                              *(_DWORD *)(((v3 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                                              v2 = -1;
                                              v71 = 0;
LABEL_214:
                                              *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
                                              if ( v71 == 1 )
                                              {
                                                if ( ConstValueExcelConfigMgr::checkResinConfig(this, txt_config_mgr) )
                                                {
                                                  *(_DWORD *)(((v3 + 1920) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v3 + 1920) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v3 + 1951) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1951) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v3 + 1920, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v3 + 1920),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                    "checkConfig",
                                                    596);
                                                  v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v3 + 1920),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                                                    v72,
                                                    (const char (*)[23])"checkResinConfig fails");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1920));
                                                  v2 = -1;
                                                }
                                                else if ( ConstValueExcelConfigMgr::checkProductConfig(
                                                            this,
                                                            txt_config_mgr) )
                                                {
                                                  *(_DWORD *)(((v3 + 1984) >> 3) + 0x7FFF8000) = 0;
                                                  if ( *(char *)(((v3 + 1984) >> 3) + 0x7FFF8000) < 0
                                                    || *(_BYTE *)(((v3 + 2015) >> 3) + 0x7FFF8000) != 0
                                                    && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 2015) >> 3)
                                                                                         + 0x7FFF8000) )
                                                  {
                                                    __asan_report_store_n(v3 + 1984, 32LL);
                                                  }
                                                  common::milog::MiLogStream::create(
                                                    (common::milog::MiLogStream *)(v3 + 1984),
                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                    4u,
                                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                    "checkConfig",
                                                    602);
                                                  v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                          (common::milog::MiLogStream *const)(v3 + 1984),
                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                  common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                                    v73,
                                                    (const char (*)[25])"checkProductConfig fails");
                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1984));
                                                  v2 = -1;
                                                }
                                                else
                                                {
                                                  v74 = &txt_config_mgr->quest_config_mgr;
                                                  if ( *(_BYTE *)(((unsigned __int64)&this->proficient_player_quest_id_ >> 3)
                                                                + 0x7FFF8000) != 0
                                                    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->proficient_player_quest_id_ >> 3) + 0x7FFF8000) )
                                                  {
                                                    __asan_report_load4(&this->proficient_player_quest_id_);
                                                  }
                                                  if ( data::QuestExcelConfigMgrBase::findQuestExcelConfig(
                                                         v74,
                                                         this->proficient_player_quest_id_) )
                                                  {
                                                    p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
                                                    if ( *(_BYTE *)(((unsigned __int64)&this->default_material_gadget_id_ >> 3)
                                                                  + 0x7FFF8000) != 0
                                                      && *(_BYTE *)(((unsigned __int64)&this->default_material_gadget_id_ >> 3)
                                                                  + 0x7FFF8000) <= 3 )
                                                    {
                                                      __asan_report_load4(&this->default_material_gadget_id_);
                                                    }
                                                    if ( data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                                           p_gadget_config_mgr,
                                                           this->default_material_gadget_id_) )
                                                    {
                                                      if ( *(_BYTE *)(((unsigned __int64)&this->satiation_recover_speed_ >> 3)
                                                                    + 0x7FFF8000) != 0
                                                        && (char)((((_BYTE)this + 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->satiation_recover_speed_ >> 3) + 0x7FFF8000) )
                                                      {
                                                        __asan_report_load4(&this->satiation_recover_speed_);
                                                      }
                                                      if ( this->satiation_recover_speed_ == 0.0 )
                                                      {
                                                        *(_DWORD *)(((v3 + 2176) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v3 + 2176) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v3 + 2207) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2207) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v3 + 2176, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v3 + 2176),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                          "checkConfig",
                                                          621);
                                                        v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v3 + 2176),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                                                          v81,
                                                          (const char (*)[32])byte_1A30D7E0);
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2176));
                                                        v2 = -1;
                                                      }
                                                      else if ( ConstValueExcelConfigMgr::checkDailyGadgetDropCategoryLimitMap(
                                                                  this,
                                                                  txt_config_mgr) )
                                                      {
                                                        *(_DWORD *)(((v3 + 2240) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v3 + 2240) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v3 + 2271) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 2271) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v3 + 2240, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v3 + 2240),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                          "checkConfig",
                                                          627);
                                                        v82 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v3 + 2240),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                                                          v82,
                                                          (const char (*)[38])"checkGadgetCreationLimitDropTag fails");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2240));
                                                        v2 = -1;
                                                      }
                                                      else if ( ConstValueExcelConfigMgr::checkItemLimitConfig(this) )
                                                      {
                                                        *(_DWORD *)(((v3 + 2304) >> 3) + 0x7FFF8000) = 0;
                                                        if ( *(char *)(((v3 + 2304) >> 3) + 0x7FFF8000) < 0
                                                          || *(_BYTE *)(((v3 + 2335) >> 3) + 0x7FFF8000) != 0
                                                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2335) >> 3)
                                                                                               + 0x7FFF8000) )
                                                        {
                                                          __asan_report_store_n(v3 + 2304, 32LL);
                                                        }
                                                        common::milog::MiLogStream::create(
                                                          (common::milog::MiLogStream *)(v3 + 2304),
                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                          4u,
                                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                          "checkConfig",
                                                          633);
                                                        v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                (common::milog::MiLogStream *const)(v3 + 2304),
                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                        common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                                          v83,
                                                          (const char (*)[27])"checkItemLimitConfig fails");
                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2304));
                                                        v2 = -1;
                                                      }
                                                      else
                                                      {
                                                        v84 = &txt_config_mgr->gadget_config_mgr;
                                                        if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_reward_gadget_id_ >> 3)
                                                                      + 0x7FFF8000) != 0
                                                          && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mp_play_reward_gadget_id_ >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_load4(&this->mp_play_reward_gadget_id_);
                                                        }
                                                        gadget_config_ptr = data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                                                              v84,
                                                                              this->mp_play_reward_gadget_id_);
                                                        if ( !gadget_config_ptr )
                                                          goto LABEL_255;
                                                        if ( *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) != 0
                                                          && (char)((((_BYTE)gadget_config_ptr + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&gadget_config_ptr->type >> 3) + 0x7FFF8000) )
                                                        {
                                                          __asan_report_load4(&gadget_config_ptr->type);
                                                        }
                                                        if ( gadget_config_ptr->type == MpPlayRewardPoint )
                                                        {
                                                          if ( *(_BYTE *)(((unsigned __int64)&this->mp_play_crucible_score_param_ >> 3)
                                                                        + 0x7FFF8000) != 0
                                                            && *(_BYTE *)(((unsigned __int64)&this->mp_play_crucible_score_param_ >> 3)
                                                                        + 0x7FFF8000) <= 3 )
                                                          {
                                                            __asan_report_load4(&this->mp_play_crucible_score_param_);
                                                          }
                                                          if ( this->mp_play_crucible_score_param_ )
                                                          {
                                                            if ( *(_BYTE *)(((unsigned __int64)&this->map_mark_max_length_ >> 3)
                                                                          + 0x7FFF8000) != 0
                                                              && *(_BYTE *)(((unsigned __int64)&this->map_mark_max_length_ >> 3)
                                                                          + 0x7FFF8000) <= 3 )
                                                            {
                                                              __asan_report_load4(&this->map_mark_max_length_);
                                                            }
                                                            if ( this->map_mark_max_length_
                                                              && this->map_mark_max_length_ <= 0xC8 )
                                                            {
                                                              if ( ConstValueExcelConfigMgr::checkMiracleRingEnterPackItem(
                                                                     this,
                                                                     txt_config_mgr) )
                                                              {
                                                                *(_DWORD *)(((v3 + 2560) >> 3) + 0x7FFF8000) = 0;
                                                                if ( *(char *)(((v3 + 2560) >> 3) + 0x7FFF8000) < 0
                                                                  || *(_BYTE *)(((v3 + 2591) >> 3) + 0x7FFF8000) != 0
                                                                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2591) >> 3) + 0x7FFF8000) )
                                                                {
                                                                  __asan_report_store_n(v3 + 2560, 32LL);
                                                                }
                                                                common::milog::MiLogStream::create(
                                                                  (common::milog::MiLogStream *)(v3 + 2560),
                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                  4u,
                                                                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                  "checkConfig",
                                                                  658);
                                                                v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                        (common::milog::MiLogStream *const)(v3 + 2560),
                                                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                                                common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                                                                  v91,
                                                                  (const char (*)[36])"checkMiracleRingEnterPackItem fails");
                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2560));
                                                                v2 = -1;
                                                              }
                                                              else
                                                              {
                                                                v92 = *(unsigned __int8 *)(((unsigned __int64)&this->miracle_ring_drop_count_ >> 3)
                                                                                         + 0x7FFF8000);
                                                                if ( (_BYTE)v92 != 0 && (char)v92 <= 3 )
                                                                  __asan_report_load4(&this->miracle_ring_drop_count_);
                                                                if ( this->miracle_ring_drop_count_ )
                                                                {
                                                                  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_make_help_second_ >> 3)
                                                                                + 0x7FFF8000) != 0
                                                                    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->furniture_make_help_second_ >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_load4(&this->furniture_make_help_second_);
                                                                  }
                                                                  if ( this->furniture_make_help_second_ <= 0x15180 )
                                                                  {
                                                                    p_item_config_mgr = &txt_config_mgr->item_config_mgr;
                                                                    if ( *(_BYTE *)(((unsigned __int64)&this->furniture_make_fastfinish_item_id_ >> 3)
                                                                                  + 0x7FFF8000) != 0
                                                                      && *(_BYTE *)(((unsigned __int64)&this->furniture_make_fastfinish_item_id_ >> 3)
                                                                                  + 0x7FFF8000) <= 3 )
                                                                    {
                                                                      __asan_report_load4(&this->furniture_make_fastfinish_item_id_);
                                                                    }
                                                                    if ( ItemExcelConfigMgr::findItemConfig(
                                                                           p_item_config_mgr,
                                                                           this->furniture_make_fastfinish_item_id_) )
                                                                    {
                                                                      if ( ConstValueExcelConfigMgr::checkHomeLimitedShopTime(
                                                                             this,
                                                                             txt_config_mgr) )
                                                                      {
                                                                        *(_DWORD *)(((v3 + 2816) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v3 + 2816) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v3 + 2847) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2847) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v3 + 2816, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v3 + 2816),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                          "checkConfig",
                                                                          681);
                                                                        v99 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                (common::milog::MiLogStream *const)(v3 + 2816),
                                                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                                                        common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                                          v99,
                                                                          (const char (*)[31])"checkHomeLimitedShopTime fails");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2816));
                                                                        v2 = -1;
                                                                      }
                                                                      else if ( ConstValueExcelConfigMgr::checkHomeResourceConfig(
                                                                                  this,
                                                                                  txt_config_mgr) )
                                                                      {
                                                                        *(_DWORD *)(((v3 + 2880) >> 3) + 0x7FFF8000) = 0;
                                                                        if ( *(char *)(((v3 + 2880) >> 3) + 0x7FFF8000) < 0
                                                                          || *(_BYTE *)(((v3 + 2911) >> 3) + 0x7FFF8000) != 0
                                                                          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2911) >> 3) + 0x7FFF8000) )
                                                                        {
                                                                          __asan_report_store_n(v3 + 2880, 32LL);
                                                                        }
                                                                        common::milog::MiLogStream::create(
                                                                          (common::milog::MiLogStream *)(v3 + 2880),
                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                          4u,
                                                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                          "checkConfig",
                                                                          686);
                                                                        v100 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                 (common::milog::MiLogStream *const)(v3 + 2880),
                                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                                        common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                                                          v100,
                                                                          (const char (*)[30])"checkHomeResourceConfig fails");
                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2880));
                                                                        v2 = -1;
                                                                      }
                                                                      else
                                                                      {
                                                                        HomePlantBoxMaterialID = ConstValueExcelConfigMgr::getHomePlantBoxMaterialID(this);
                                                                        if ( data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(
                                                                               &txt_config_mgr->material_config_mgr,
                                                                               HomePlantBoxMaterialID) )
                                                                        {
                                                                          if ( ConstValueExcelConfigMgr::checkWeeklyBossResinDiscountParam(
                                                                                 this,
                                                                                 txt_config_mgr) )
                                                                          {
                                                                            *(_DWORD *)(((v3 + 3008) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v3 + 3008) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v3 + 3039) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 3039) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v3 + 3008, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v3 + 3008),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              4u,
                                                                              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                              "checkConfig",
                                                                              698);
                                                                            v107 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                     (common::milog::MiLogStream *const)(v3 + 3008),
                                                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                                                            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                                              v107,
                                                                              (const char (*)[40])"checkWeeklyBossResinDi"
                                                                                                  "scountParam fails");
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3008));
                                                                            v2 = -1;
                                                                          }
                                                                          else
                                                                          {
                                                                            *(_DWORD *)(((v3 + 3072) >> 3) + 0x7FFF8000) = 0;
                                                                            if ( *(char *)(((v3 + 3072) >> 3)
                                                                                         + 0x7FFF8000) < 0
                                                                              || *(_BYTE *)(((v3 + 3103) >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 3103) >> 3) + 0x7FFF8000) )
                                                                            {
                                                                              __asan_report_store_n(v3 + 3072, 32LL);
                                                                            }
                                                                            common::milog::MiLogStream::create(
                                                                              (common::milog::MiLogStream *)(v3 + 3072),
                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                              1u,
                                                                              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                              "checkConfig",
                                                                              702);
                                                                            v108 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                     (common::milog::MiLogStream *const)(v3 + 3072),
                                                                                     (const char (*)[39])"check_distance_anticheat_log_interval:");
                                                                            v109 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                     v108,
                                                                                     &this->check_distance_anticheat_log_interval_);
                                                                            v110 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                                                                                     v109,
                                                                                     (const char (*)[42])" check_move_speed_anticheat_log_interval:");
                                                                            v111 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                     v110,
                                                                                     &this->check_move_speed_anticheat_log_interval_);
                                                                            v112 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                                                                     v111,
                                                                                     (const char (*)[53])" check_scene_time_move_speed_anticheat_log_interval:");
                                                                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                              v112,
                                                                              &this->check_scene_time_move_speed_anticheat_log_interval_);
                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3072));
                                                                            *(_DWORD *)(((v3 + 3072) >> 3) + 0x7FFF8000) = -117901064;
                                                                            if ( *(_BYTE *)(((unsigned __int64)&this->multi_play_fetter_exp_ratio_ >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && *(_BYTE *)(((unsigned __int64)&this->multi_play_fetter_exp_ratio_ >> 3)
                                                                                          + 0x7FFF8000) <= 3 )
                                                                            {
                                                                              __asan_report_load4(&this->multi_play_fetter_exp_ratio_);
                                                                            }
                                                                            if ( !std::isfinite(this->multi_play_fetter_exp_ratio_) )
                                                                              goto LABEL_320;
                                                                            if ( *(_BYTE *)(((unsigned __int64)&this->multi_play_fetter_exp_ratio_ >> 3)
                                                                                          + 0x7FFF8000) != 0
                                                                              && *(_BYTE *)(((unsigned __int64)&this->multi_play_fetter_exp_ratio_ >> 3)
                                                                                          + 0x7FFF8000) <= 3 )
                                                                            {
                                                                              __asan_report_load4(&this->multi_play_fetter_exp_ratio_);
                                                                            }
                                                                            if ( this->multi_play_fetter_exp_ratio_ <= 0.0
                                                                              || this->multi_play_fetter_exp_ratio_ > 100.0 )
                                                                            {
LABEL_320:
                                                                              v113 = 1;
                                                                            }
                                                                            else
                                                                            {
                                                                              v113 = 0;
                                                                            }
                                                                            if ( v113 )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3136) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3136) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3167) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 3167) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3136, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3136),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                708);
                                                                              v114 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3136),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              v115 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                                       v114,
                                                                                       (const char (*)[37])"invalid multi_play_fetter_exp_ratio:");
                                                                              common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                                                v115,
                                                                                &this->multi_play_fetter_exp_ratio_);
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3136));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkHeroCourseTransferConfig(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3200) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3200) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3231) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 3231) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3200, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3200),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                714);
                                                                              v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3200),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                                v116,
                                                                                (const char (*)[37])"checkHeroCourseTransferConfig failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3200));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkMapMarkParam(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3264) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3264) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3295) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 3295) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3264, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3264),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                720);
                                                                              v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3264),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                                                                v117,
                                                                                (const char (*)[25])"checkMapMarkParam failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3264));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkHitTreeParam(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3328) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3328) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3359) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 3359) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3328, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3328),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                726);
                                                                              v118 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3328),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                                                                v118,
                                                                                (const char (*)[25])"checkHitTreeParam failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3328));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkGCGParam(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3392) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3392) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3423) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 3423) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3392, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3392),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                732);
                                                                              v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3392),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                                                                                v119,
                                                                                (const char (*)[21])"checkGCGParam failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3392));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkGCGTavernPointIdParam(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3456) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3456) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3487) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 3487) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3456, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3456),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                738);
                                                                              v120 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3456),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                                                v120,
                                                                                (const char (*)[34])"checkGCGTavernPointIdParam failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3456));
                                                                              v2 = -1;
                                                                            }
                                                                            else if ( ConstValueExcelConfigMgr::checkGCGDeckSystemInitDeck(
                                                                                        this,
                                                                                        txt_config_mgr) )
                                                                            {
                                                                              *(_DWORD *)(((v3 + 3520) >> 3) + 0x7FFF8000) = 0;
                                                                              if ( *(char *)(((v3 + 3520) >> 3)
                                                                                           + 0x7FFF8000) < 0
                                                                                || *(_BYTE *)(((v3 + 3551) >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 3551) >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_store_n(v3 + 3520, 32LL);
                                                                              }
                                                                              common::milog::MiLogStream::create(
                                                                                (common::milog::MiLogStream *)(v3 + 3520),
                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                4u,
                                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                "checkConfig",
                                                                                743);
                                                                              v121 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                       (common::milog::MiLogStream *const)(v3 + 3520),
                                                                                       (const char (*)[16])"[CONFIG_ERROR] ");
                                                                              common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                                                                v121,
                                                                                (const char (*)[34])"checkGCGDeckSystemInitDeck failed");
                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3520));
                                                                              v2 = -1;
                                                                            }
                                                                            else
                                                                            {
                                                                              v122 = &txt_config_mgr->item_config_mgr;
                                                                              if ( *(_BYTE *)(((unsigned __int64)&this->condense_resin_material_id_ >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->condense_resin_material_id_ >> 3) + 0x7FFF8000) )
                                                                              {
                                                                                __asan_report_load4(&this->condense_resin_material_id_);
                                                                              }
                                                                              if ( !ItemExcelConfigMgr::findItemConfig(
                                                                                      v122,
                                                                                      this->condense_resin_material_id_) )
                                                                                goto LABEL_356;
                                                                              if ( *(_BYTE *)(((unsigned __int64)&this->condense_resin_replace_resin_count_ >> 3)
                                                                                            + 0x7FFF8000) != 0
                                                                                && *(_BYTE *)(((unsigned __int64)&this->condense_resin_replace_resin_count_ >> 3)
                                                                                            + 0x7FFF8000) <= 3 )
                                                                              {
                                                                                __asan_report_load4(&this->condense_resin_replace_resin_count_);
                                                                              }
                                                                              if ( this->condense_resin_replace_resin_count_ )
                                                                                v123 = 0;
                                                                              else
LABEL_356:
                                                                                v123 = 1;
                                                                              if ( v123 )
                                                                              {
                                                                                *(_DWORD *)(((v3 + 3584) >> 3)
                                                                                          + 0x7FFF8000) = 0;
                                                                                if ( *(char *)(((v3 + 3584) >> 3)
                                                                                             + 0x7FFF8000) < 0
                                                                                  || *(_BYTE *)(((v3 + 3615) >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 3615) >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_store_n(v3 + 3584, 32LL);
                                                                                }
                                                                                common::milog::MiLogStream::create(
                                                                                  (common::milog::MiLogStream *)(v3 + 3584),
                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                  4u,
                                                                                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                  "checkConfig",
                                                                                  749);
                                                                                v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                         (common::milog::MiLogStream *const)(v3 + 3584),
                                                                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                v125 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                                                                                         v124,
                                                                                         (const char (*)[30])" condense_resin_material_id_:");
                                                                                v126 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                         v125,
                                                                                         &this->condense_resin_material_id_);
                                                                                v127 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                                         v126,
                                                                                         (const char (*)[37])"condense_resin_replace_resin_count_:");
                                                                                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                  v127,
                                                                                  &this->condense_resin_replace_resin_count_);
                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3584));
                                                                                v2 = -1;
                                                                              }
                                                                              else
                                                                              {
                                                                                if ( *(_BYTE *)(((unsigned __int64)&this->emoji_collect_num_limit_ >> 3)
                                                                                              + 0x7FFF8000) != 0
                                                                                  && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->emoji_collect_num_limit_ >> 3) + 0x7FFF8000) )
                                                                                {
                                                                                  __asan_report_load4(&this->emoji_collect_num_limit_);
                                                                                }
                                                                                if ( this->emoji_collect_num_limit_ <= 0x3E8 )
                                                                                {
                                                                                  if ( *(_BYTE *)(((unsigned __int64)&this->chess_mp_building_point_factor_ >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && *(_BYTE *)(((unsigned __int64)&this->chess_mp_building_point_factor_ >> 3)
                                                                                                + 0x7FFF8000) <= 3 )
                                                                                  {
                                                                                    __asan_report_load4(&this->chess_mp_building_point_factor_);
                                                                                  }
                                                                                  if ( this->chess_mp_building_point_factor_ > 0.0 )
                                                                                  {
                                                                                    if ( *(_BYTE *)(((unsigned __int64)&this->chess_mp_building_point_factor_ >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && *(_BYTE *)(((unsigned __int64)&this->chess_mp_building_point_factor_ >> 3)
                                                                                                  + 0x7FFF8000) <= 3 )
                                                                                    {
                                                                                      __asan_report_load4(&this->chess_mp_building_point_factor_);
                                                                                    }
                                                                                    if ( this->chess_mp_building_point_factor_ <= 1.0 )
                                                                                    {
                                                                                      if ( *(_BYTE *)(((unsigned __int64)&this->dig_activity_hint_rand_degree_ >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((((_BYTE)this + 68) & 7)
                                                                                                + 3) >= *(_BYTE *)(((unsigned __int64)&this->dig_activity_hint_rand_degree_ >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_load4(&this->dig_activity_hint_rand_degree_);
                                                                                      }
                                                                                      if ( this->dig_activity_hint_rand_degree_ <= 0x59 )
                                                                                      {
                                                                                        if ( *(_BYTE *)(((unsigned __int64)&this->player_level_to_show_codex_ >> 3) + 0x7FFF8000) != 0
                                                                                          && *(_BYTE *)(((unsigned __int64)&this->player_level_to_show_codex_ >> 3) + 0x7FFF8000) <= 3 )
                                                                                        {
                                                                                          __asan_report_load4(&this->player_level_to_show_codex_);
                                                                                        }
                                                                                        if ( !this->player_level_to_show_codex_ )
                                                                                          goto LABEL_392;
                                                                                        if ( *(_BYTE *)(((unsigned __int64)&this->recent_viewed_pushtips_codex_limit_ >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((((_BYTE)this - 124) & 7)
                                                                                                  + 3) >= *(_BYTE *)(((unsigned __int64)&this->recent_viewed_pushtips_codex_limit_ >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_load4(&this->recent_viewed_pushtips_codex_limit_);
                                                                                        }
                                                                                        if ( this->recent_viewed_pushtips_codex_limit_ )
                                                                                        {
                                                                                          if ( *(_BYTE *)(((unsigned __int64)&this->gadget_interact_check_distance_ >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_interact_check_distance_ >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_load4(&this->gadget_interact_check_distance_);
                                                                                          }
                                                                                          if ( this->gadget_interact_check_distance_ > 2 )
                                                                                          {
                                                                                            if ( *(_BYTE *)(((unsigned __int64)&this->default_check_distance_ >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->default_check_distance_ >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_load4(&this->default_check_distance_);
                                                                                            }
                                                                                            default_check_distance = this->default_check_distance_;
                                                                                            if ( *(_BYTE *)(((unsigned __int64)&this->gadget_interact_check_distance_ >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gadget_interact_check_distance_ >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_load4(&this->gadget_interact_check_distance_);
                                                                                            }
                                                                                            if ( default_check_distance >= this->gadget_interact_check_distance_ )
                                                                                            {
                                                                                              if ( *(_BYTE *)(((unsigned __int64)&this->send_questionnaire_mail_logout_time_ >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->send_questionnaire_mail_logout_time_ >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_load4(&this->send_questionnaire_mail_logout_time_);
                                                                                              }
                                                                                              if ( this->send_questionnaire_mail_logout_time_ )
                                                                                              {
                                                                                                if ( *(_BYTE *)(((unsigned __int64)&this->send_questionnaire_mail_cd_time_ >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((unsigned __int64)&this->send_questionnaire_mail_cd_time_ >> 3) + 0x7FFF8000) <= 3 )
                                                                                                  __asan_report_load4(&this->send_questionnaire_mail_cd_time_);
                                                                                                if ( this->send_questionnaire_mail_cd_time_ )
                                                                                                {
                                                                                                  if ( *(_BYTE *)(((unsigned __int64)&this->compound_boost_item_id_ >> 3) + 0x7FFF8000) != 0 && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->compound_boost_item_id_ >> 3) + 0x7FFF8000) )
                                                                                                    __asan_report_load4(&this->compound_boost_item_id_);
                                                                                                  if ( !this->compound_boost_item_id_ || !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(&txt_config_mgr->material_config_mgr, this->compound_boost_item_id_) )
                                                                                                  {
                                                                                                    *(_DWORD *)(((v3 + 4224) >> 3) + 0x7FFF8000) = 0;
                                                                                                    if ( *(char *)(((v3 + 4224) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4255) >> 3) + 0x7FFF8000) != 0 && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 4255) >> 3) + 0x7FFF8000) )
                                                                                                      __asan_report_store_n(v3 + 4224, 32LL);
                                                                                                    common::milog::MiLogStream::create((common::milog::MiLogStream *)(v3 + 4224), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_manual/ConstValueExcelConfig.cpp", "checkConfig", 808);
                                                                                                    v154 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4224), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                    v155 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v154, (const char (*)[26])"compound_boost_item_id_: ");
                                                                                                    v156 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v155, &this->compound_boost_item_id_);
                                                                                                    common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v156, (const char (*)[26])byte_1A30E620);
                                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4224));
                                                                                                    v2 = -1;
                                                                                                  }
                                                                                                  else
                                                                                                  {
                                                                                                    if ( *(_BYTE *)(((unsigned __int64)&this->compound_boost_time_tolerance_ >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((unsigned __int64)&this->compound_boost_time_tolerance_ >> 3) + 0x7FFF8000) <= 3 )
                                                                                                      __asan_report_load4(&this->compound_boost_time_tolerance_);
                                                                                                    if ( this->compound_boost_time_tolerance_ <= 0x258 )
                                                                                                    {
                                                                                                      if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_related_tag_effect_prob_ >> 3) + 0x7FFF8000) != 0 && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_task_related_tag_effect_prob_ >> 3) + 0x7FFF8000) )
                                                                                                        __asan_report_load4(&this->daily_task_related_tag_effect_prob_);
                                                                                                      if ( this->daily_task_related_tag_effect_prob_ >= 0.0 && this->daily_task_related_tag_effect_prob_ <= 1.0 )
                                                                                                      {
                                                                                                        if ( *(_BYTE *)(((unsigned __int64)&this->avatar_rename_auto_fail_time_ >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((unsigned __int64)&this->avatar_rename_auto_fail_time_ >> 3) + 0x7FFF8000) <= 3 )
                                                                                                          __asan_report_load4(&this->avatar_rename_auto_fail_time_);
                                                                                                        if ( this->avatar_rename_auto_fail_time_ )
                                                                                                        {
                                                                                                          v2 = 0;
                                                                                                        }
                                                                                                        else
                                                                                                        {
                                                                                                          *(_DWORD *)(((v3 + 4416) >> 3) + 0x7FFF8000) = 0;
                                                                                                          if ( *(char *)(((v3 + 4416) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4447) >> 3) + 0x7FFF8000) != 0 && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 4447) >> 3) + 0x7FFF8000) )
                                                                                                            __asan_report_store_n(v3 + 4416, 32LL);
                                                                                                          common::milog::MiLogStream::create((common::milog::MiLogStream *)(v3 + 4416), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_manual/ConstValueExcelConfig.cpp", "checkConfig", 826);
                                                                                                          v163 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4416), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v163, (const char (*)[41])byte_1A30E7A0);
                                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4416));
                                                                                                          v2 = -1;
                                                                                                        }
                                                                                                      }
                                                                                                      else
                                                                                                      {
                                                                                                        *(_DWORD *)(((v3 + 4352) >> 3) + 0x7FFF8000) = 0;
                                                                                                        if ( *(char *)(((v3 + 4352) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4383) >> 3) + 0x7FFF8000) != 0 && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 4383) >> 3) + 0x7FFF8000) )
                                                                                                          __asan_report_store_n(v3 + 4352, 32LL);
                                                                                                        common::milog::MiLogStream::create((common::milog::MiLogStream *)(v3 + 4352), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_manual/ConstValueExcelConfig.cpp", "checkConfig", 820);
                                                                                                        v160 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4352), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                        v161 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v160, (const char (*)[38])"daily_task_related_tag_effect_prob_: ");
                                                                                                        v162 = common::milog::MiLogStream::operator<<<float,(float *)0>(v161, &this->daily_task_related_tag_effect_prob_);
                                                                                                        common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v162, (const char (*)[7])" error");
                                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4352));
                                                                                                        v2 = -1;
                                                                                                      }
                                                                                                    }
                                                                                                    else
                                                                                                    {
                                                                                                      *(_DWORD *)(((v3 + 4288) >> 3) + 0x7FFF8000) = 0;
                                                                                                      if ( *(char *)(((v3 + 4288) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4319) >> 3) + 0x7FFF8000) != 0 && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 4319) >> 3) + 0x7FFF8000) )
                                                                                                        __asan_report_store_n(v3 + 4288, 32LL);
                                                                                                      common::milog::MiLogStream::create((common::milog::MiLogStream *)(v3 + 4288), &common::milog::MiLogDefault::default_log_obj_, 4u, "./src/txt_data_manual/ConstValueExcelConfig.cpp", "checkConfig", 814);
                                                                                                      v157 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4288), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                      v158 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v157, (const char (*)[33])"compound_boost_time_tolerance_: ");
                                                                                                      v159 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v158, &this->compound_boost_time_tolerance_);
                                                                                                      common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v159, (const char (*)[6])" > 3s");
                                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4288));
                                                                                                      v2 = -1;
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                                else
                                                                                                {
                                                                                                  *(_DWORD *)(((v3 + 4160) >> 3) + 0x7FFF8000) = 0;
                                                                                                  if ( *(char *)(((v3 + 4160) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4191) >> 3) + 0x7FFF8000) != 0 && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 4191) >> 3) + 0x7FFF8000) )
                                                                                                    __asan_report_store_n(v3 + 4160, 32LL);
                                                                                                  common::milog::MiLogStream::create(
                                                                                                    (common::milog::MiLogStream *)(v3 + 4160),
                                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                                    4u,
                                                                                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                                    "checkConfig",
                                                                                                    802);
                                                                                                  v152 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4160), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                  common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                                                                                                    v152,
                                                                                                    (const char (*)[43])byte_1A30E580);
                                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4160));
                                                                                                  v2 = -1;
                                                                                                }
                                                                                              }
                                                                                              else
                                                                                              {
                                                                                                *(_DWORD *)(((v3 + 4096) >> 3) + 0x7FFF8000) = 0;
                                                                                                if ( *(char *)(((v3 + 4096) >> 3) + 0x7FFF8000) < 0 || *(_BYTE *)(((v3 + 4127) >> 3) + 0x7FFF8000) != 0 && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 4127) >> 3) + 0x7FFF8000) )
                                                                                                  __asan_report_store_n(
                                                                                                    v3 + 4096,
                                                                                                    32LL);
                                                                                                common::milog::MiLogStream::create(
                                                                                                  (common::milog::MiLogStream *)(v3 + 4096),
                                                                                                  &common::milog::MiLogDefault::default_log_obj_,
                                                                                                  4u,
                                                                                                  "./src/txt_data_manual/"
                                                                                                  "ConstValueExcelConfig.cpp",
                                                                                                  "checkConfig",
                                                                                                  797);
                                                                                                v151 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4096), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                                common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                                                                                  v151,
                                                                                                  (const char (*)[47])byte_1A30E520);
                                                                                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4096));
                                                                                                v2 = -1;
                                                                                              }
                                                                                            }
                                                                                            else
                                                                                            {
                                                                                              *(_DWORD *)(((v3 + 4032) >> 3) + 0x7FFF8000) = 0;
                                                                                              if ( *(char *)(((v3 + 4032) >> 3) + 0x7FFF8000) < 0
                                                                                                || *(_BYTE *)(((v3 + 4063) >> 3) + 0x7FFF8000) != 0
                                                                                                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 4063) >> 3) + 0x7FFF8000) )
                                                                                              {
                                                                                                __asan_report_store_n(
                                                                                                  v3 + 4032,
                                                                                                  32LL);
                                                                                              }
                                                                                              common::milog::MiLogStream::create(
                                                                                                (common::milog::MiLogStream *)(v3 + 4032),
                                                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                                                4u,
                                                                                                "./src/txt_data_manual/Co"
                                                                                                "nstValueExcelConfig.cpp",
                                                                                                "checkConfig",
                                                                                                790);
                                                                                              v146 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>((common::milog::MiLogStream *const)(v3 + 4032), (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                              v147 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v146, (const char (*)[68])"default_check_distance is less than gadget_interact_check_distance!");
                                                                                              v148 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(v147, (const char (*)[25])" default_check_distance:");
                                                                                              v149 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v148, &this->default_check_distance_);
                                                                                              v150 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v149, (const char (*)[33])" gadget_interact_check_distance:");
                                                                                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                                v150,
                                                                                                &this->gadget_interact_check_distance_);
                                                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 4032));
                                                                                              v2 = -1;
                                                                                            }
                                                                                          }
                                                                                          else
                                                                                          {
                                                                                            *(_DWORD *)(((v3 + 3968) >> 3) + 0x7FFF8000) = 0;
                                                                                            if ( *(char *)(((v3 + 3968) >> 3) + 0x7FFF8000) < 0
                                                                                              || *(_BYTE *)(((v3 + 3999) >> 3) + 0x7FFF8000) != 0
                                                                                              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 3999) >> 3) + 0x7FFF8000) )
                                                                                            {
                                                                                              __asan_report_store_n(
                                                                                                v3 + 3968,
                                                                                                32LL);
                                                                                            }
                                                                                            common::milog::MiLogStream::create(
                                                                                              (common::milog::MiLogStream *)(v3 + 3968),
                                                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                                                              4u,
                                                                                              "./src/txt_data_manual/Cons"
                                                                                              "tValueExcelConfig.cpp",
                                                                                              "checkConfig",
                                                                                              784);
                                                                                            v142 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                     (common::milog::MiLogStream *const)(v3 + 3968),
                                                                                                     (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                            v143 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                                                                                                     v142,
                                                                                                     (const char (*)[53])"gadget_interact_check_distance is less than 3 meter!");
                                                                                            v144 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                                                                                                     v143,
                                                                                                     (const char (*)[33])" gadget_interact_check_distance:");
                                                                                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                              v144,
                                                                                              &this->gadget_interact_check_distance_);
                                                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3968));
                                                                                            v2 = -1;
                                                                                          }
                                                                                        }
                                                                                        else
                                                                                        {
LABEL_392:
                                                                                          *(_DWORD *)(((v3 + 3904) >> 3) + 0x7FFF8000) = 0;
                                                                                          if ( *(char *)(((v3 + 3904) >> 3) + 0x7FFF8000) < 0
                                                                                            || *(_BYTE *)(((v3 + 3935) >> 3) + 0x7FFF8000) != 0
                                                                                            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 3935) >> 3) + 0x7FFF8000) )
                                                                                          {
                                                                                            __asan_report_store_n(
                                                                                              v3 + 3904,
                                                                                              32LL);
                                                                                          }
                                                                                          common::milog::MiLogStream::create(
                                                                                            (common::milog::MiLogStream *)(v3 + 3904),
                                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                                            4u,
                                                                                            "./src/txt_data_manual/ConstV"
                                                                                            "alueExcelConfig.cpp",
                                                                                            "checkConfig",
                                                                                            778);
                                                                                          v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                   (common::milog::MiLogStream *const)(v3 + 3904),
                                                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                          v138 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                                                                                                   v137,
                                                                                                   (const char (*)[35])byte_1A30E2A0);
                                                                                          v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                                   v138,
                                                                                                   &this->player_level_to_show_codex_);
                                                                                          v140 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                                                                                   v139,
                                                                                                   (const char (*)[39])byte_1A30E300);
                                                                                          v141 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                                   v140,
                                                                                                   &this->recent_viewed_pushtips_codex_limit_);
                                                                                          common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                                                                                            v141,
                                                                                            (const char (*)[13])byte_1A30E360);
                                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3904));
                                                                                          v2 = -1;
                                                                                        }
                                                                                      }
                                                                                      else
                                                                                      {
                                                                                        *(_DWORD *)(((v3 + 3840) >> 3)
                                                                                                  + 0x7FFF8000) = 0;
                                                                                        if ( *(char *)(((v3 + 3840) >> 3) + 0x7FFF8000) < 0
                                                                                          || *(_BYTE *)(((v3 + 3871) >> 3) + 0x7FFF8000) != 0
                                                                                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 3871) >> 3) + 0x7FFF8000) )
                                                                                        {
                                                                                          __asan_report_store_n(
                                                                                            v3 + 3840,
                                                                                            32LL);
                                                                                        }
                                                                                        common::milog::MiLogStream::create(
                                                                                          (common::milog::MiLogStream *)(v3 + 3840),
                                                                                          &common::milog::MiLogDefault::default_log_obj_,
                                                                                          4u,
                                                                                          "./src/txt_data_manual/ConstVal"
                                                                                          "ueExcelConfig.cpp",
                                                                                          "checkConfig",
                                                                                          773);
                                                                                        v135 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                                 (common::milog::MiLogStream *const)(v3 + 3840),
                                                                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                        v136 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                                                 v135,
                                                                                                 (const char (*)[50])byte_1A30E240);
                                                                                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                          v136,
                                                                                          &this->dig_activity_hint_rand_degree_);
                                                                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3840));
                                                                                        v2 = -1;
                                                                                      }
                                                                                    }
                                                                                    else
                                                                                    {
                                                                                      *(_DWORD *)(((v3 + 3776) >> 3)
                                                                                                + 0x7FFF8000) = 0;
                                                                                      if ( *(char *)(((v3 + 3776) >> 3) + 0x7FFF8000) < 0
                                                                                        || *(_BYTE *)(((v3 + 3807) >> 3) + 0x7FFF8000) != 0
                                                                                        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 3807) >> 3) + 0x7FFF8000) )
                                                                                      {
                                                                                        __asan_report_store_n(
                                                                                          v3 + 3776,
                                                                                          32LL);
                                                                                      }
                                                                                      common::milog::MiLogStream::create(
                                                                                        (common::milog::MiLogStream *)(v3 + 3776),
                                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                                        4u,
                                                                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                        "checkConfig",
                                                                                        768);
                                                                                      v133 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                               (common::milog::MiLogStream *const)(v3 + 3776),
                                                                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                      v134 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                                                               v133,
                                                                                               (const char (*)[49])byte_1A30E1E0);
                                                                                      common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                                                        v134,
                                                                                        &this->chess_mp_building_point_factor_);
                                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3776));
                                                                                      v2 = -1;
                                                                                    }
                                                                                  }
                                                                                  else
                                                                                  {
                                                                                    *(_DWORD *)(((v3 + 3712) >> 3)
                                                                                              + 0x7FFF8000) = 0;
                                                                                    if ( *(char *)(((v3 + 3712) >> 3)
                                                                                                 + 0x7FFF8000) < 0
                                                                                      || *(_BYTE *)(((v3 + 3743) >> 3)
                                                                                                  + 0x7FFF8000) != 0
                                                                                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 3743) >> 3) + 0x7FFF8000) )
                                                                                    {
                                                                                      __asan_report_store_n(
                                                                                        v3 + 3712,
                                                                                        32LL);
                                                                                    }
                                                                                    common::milog::MiLogStream::create(
                                                                                      (common::milog::MiLogStream *)(v3 + 3712),
                                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                                      4u,
                                                                                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                      "checkConfig",
                                                                                      762);
                                                                                    v131 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                             (common::milog::MiLogStream *const)(v3 + 3712),
                                                                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                    v132 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                                                                                             v131,
                                                                                             (const char (*)[49])byte_1A30E180);
                                                                                    common::milog::MiLogStream::operator<<<float,(float *)0>(
                                                                                      v132,
                                                                                      &this->chess_mp_building_point_factor_);
                                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3712));
                                                                                    v2 = -1;
                                                                                  }
                                                                                }
                                                                                else
                                                                                {
                                                                                  *(_DWORD *)(((v3 + 3648) >> 3)
                                                                                            + 0x7FFF8000) = 0;
                                                                                  if ( *(char *)(((v3 + 3648) >> 3)
                                                                                               + 0x7FFF8000) < 0
                                                                                    || *(_BYTE *)(((v3 + 3679) >> 3)
                                                                                                + 0x7FFF8000) != 0
                                                                                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 3679) >> 3) + 0x7FFF8000) )
                                                                                  {
                                                                                    __asan_report_store_n(
                                                                                      v3 + 3648,
                                                                                      32LL);
                                                                                  }
                                                                                  common::milog::MiLogStream::create(
                                                                                    (common::milog::MiLogStream *)(v3 + 3648),
                                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                                    4u,
                                                                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                                    "checkConfig",
                                                                                    756);
                                                                                  v128 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                           (common::milog::MiLogStream *const)(v3 + 3648),
                                                                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                                                                  v129 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                                           v128,
                                                                                           (const char (*)[37])"CONST_VALUE_EMOJI_COLLECT_NUM_LIMIT:");
                                                                                  v130 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                                           v129,
                                                                                           &this->emoji_collect_num_limit_);
                                                                                  common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                                                                                    v130,
                                                                                    (const char (*)[12])" is too big");
                                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 3648));
                                                                                  v2 = -1;
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                        else
                                                                        {
                                                                          *(_DWORD *)(((v3 + 2944) >> 3) + 0x7FFF8000) = 0;
                                                                          if ( *(char *)(((v3 + 2944) >> 3) + 0x7FFF8000) < 0
                                                                            || *(_BYTE *)(((v3 + 2975) >> 3) + 0x7FFF8000) != 0
                                                                            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2975) >> 3) + 0x7FFF8000) )
                                                                          {
                                                                            __asan_report_store_n(v3 + 2944, 32LL);
                                                                          }
                                                                          common::milog::MiLogStream::create(
                                                                            (common::milog::MiLogStream *)(v3 + 2944),
                                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                                            4u,
                                                                            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                            "checkConfig",
                                                                            691);
                                                                          v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                                   (common::milog::MiLogStream *const)(v3 + 2944),
                                                                                   (const char (*)[16])"[CONFIG_ERROR] ");
                                                                          v103 = byte_1A30DC20;
                                                                          v104 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                                                                                   v102,
                                                                                   (const char (*)[45])byte_1A30DC20);
                                                                          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
                                                                          v105 = ConstValueExcelConfigMgr::getHomePlantBoxMaterialID(this);
                                                                          v106 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
                                                                          if ( v106 != 0 && v106 <= 3 )
                                                                          {
                                                                            LOBYTE(v103) = v106 != 0;
                                                                            __asan_report_store4(v3 + 48, v103);
                                                                          }
                                                                          *(_DWORD *)(v3 + 48) = v105;
                                                                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                            v104,
                                                                            (const unsigned int *)(v3 + 48));
                                                                          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2944));
                                                                          v2 = -1;
                                                                        }
                                                                      }
                                                                    }
                                                                    else
                                                                    {
                                                                      *(_DWORD *)(((v3 + 2752) >> 3) + 0x7FFF8000) = 0;
                                                                      if ( *(char *)(((v3 + 2752) >> 3) + 0x7FFF8000) < 0
                                                                        || *(_BYTE *)(((v3 + 2783) >> 3) + 0x7FFF8000) != 0
                                                                        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 2783) >> 3) + 0x7FFF8000) )
                                                                      {
                                                                        __asan_report_store_n(v3 + 2752, 32LL);
                                                                      }
                                                                      common::milog::MiLogStream::create(
                                                                        (common::milog::MiLogStream *)(v3 + 2752),
                                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                                        4u,
                                                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                        "checkConfig",
                                                                        675);
                                                                      v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                              (common::milog::MiLogStream *const)(v3 + 2752),
                                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                                      v98 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                                                              v97,
                                                                              (const char (*)[50])byte_1A30DB40);
                                                                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                        v98,
                                                                        &this->furniture_make_fastfinish_item_id_);
                                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2752));
                                                                      v2 = -1;
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    *(_DWORD *)(((v3 + 2688) >> 3) + 0x7FFF8000) = 0;
                                                                    if ( *(char *)(((v3 + 2688) >> 3) + 0x7FFF8000) < 0
                                                                      || *(_BYTE *)(((v3 + 2719) >> 3) + 0x7FFF8000) != 0
                                                                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2719) >> 3) + 0x7FFF8000) )
                                                                    {
                                                                      __asan_report_store_n(v3 + 2688, 32LL);
                                                                    }
                                                                    common::milog::MiLogStream::create(
                                                                      (common::milog::MiLogStream *)(v3 + 2688),
                                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                                      4u,
                                                                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                      "checkConfig",
                                                                      670);
                                                                    v94 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                            (common::milog::MiLogStream *const)(v3 + 2688),
                                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                                    v95 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                                                            v94,
                                                                            (const char (*)[52])byte_1A30DAE0);
                                                                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                      v95,
                                                                      &this->furniture_make_help_second_);
                                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2688));
                                                                    v2 = -1;
                                                                  }
                                                                }
                                                                else
                                                                {
                                                                  *(_DWORD *)(((v3 + 2624) >> 3) + 0x7FFF8000) = 0;
                                                                  if ( *(char *)(((v3 + 2624) >> 3) + 0x7FFF8000) < 0
                                                                    || *(_BYTE *)(((v3 + 2655) >> 3) + 0x7FFF8000) != 0
                                                                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2655) >> 3) + 0x7FFF8000) )
                                                                  {
                                                                    __asan_report_store_n(v3 + 2624, 32LL);
                                                                  }
                                                                  common::milog::MiLogStream::create(
                                                                    (common::milog::MiLogStream *)(v3 + 2624),
                                                                    &common::milog::MiLogDefault::default_log_obj_,
                                                                    4u,
                                                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                    "checkConfig",
                                                                    664);
                                                                  v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                          (common::milog::MiLogStream *const)(v3 + 2624),
                                                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                                                  common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                                                    v93,
                                                                    (const char (*)[37])"miracle_ring_drop_count_ is 0, error");
                                                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2624));
                                                                  v2 = -1;
                                                                }
                                                              }
                                                            }
                                                            else
                                                            {
                                                              *(_DWORD *)(((v3 + 2496) >> 3) + 0x7FFF8000) = 0;
                                                              if ( *(char *)(((v3 + 2496) >> 3) + 0x7FFF8000) < 0
                                                                || *(_BYTE *)(((v3 + 2527) >> 3) + 0x7FFF8000) != 0
                                                                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 2527) >> 3) + 0x7FFF8000) )
                                                              {
                                                                __asan_report_store_n(v3 + 2496, 32LL);
                                                              }
                                                              common::milog::MiLogStream::create(
                                                                (common::milog::MiLogStream *)(v3 + 2496),
                                                                &common::milog::MiLogDefault::default_log_obj_,
                                                                4u,
                                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                                "checkConfig",
                                                                651);
                                                              v89 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                      (common::milog::MiLogStream *const)(v3 + 2496),
                                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                                              v90 = common::milog::MiLogStream::operator<<<char [73],(char *[73])0>(
                                                                      v89,
                                                                      (const char (*)[73])byte_1A30D9A0);
                                                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                v90,
                                                                &this->map_mark_max_length_);
                                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2496));
                                                              v2 = -1;
                                                            }
                                                          }
                                                          else
                                                          {
                                                            *(_DWORD *)(((v3 + 2432) >> 3) + 0x7FFF8000) = 0;
                                                            if ( *(char *)(((v3 + 2432) >> 3) + 0x7FFF8000) < 0
                                                              || *(_BYTE *)(((v3 + 2463) >> 3) + 0x7FFF8000) != 0
                                                              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 2463) >> 3) + 0x7FFF8000) )
                                                            {
                                                              __asan_report_store_n(v3 + 2432, 32LL);
                                                            }
                                                            common::milog::MiLogStream::create(
                                                              (common::milog::MiLogStream *)(v3 + 2432),
                                                              &common::milog::MiLogDefault::default_log_obj_,
                                                              4u,
                                                              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                              "checkConfig",
                                                              645);
                                                            v88 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                    (common::milog::MiLogStream *const)(v3 + 2432),
                                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                                            common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                              v88,
                                                              (const char (*)[40])byte_1A30D940);
                                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2432));
                                                            v2 = -1;
                                                          }
                                                        }
                                                        else
                                                        {
LABEL_255:
                                                          *(_DWORD *)(((v3 + 2368) >> 3) + 0x7FFF8000) = 0;
                                                          if ( *(char *)(((v3 + 2368) >> 3) + 0x7FFF8000) < 0
                                                            || *(_BYTE *)(((v3 + 2399) >> 3) + 0x7FFF8000) != 0
                                                            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2399) >> 3)
                                                                                                 + 0x7FFF8000) )
                                                          {
                                                            __asan_report_store_n(v3 + 2368, 32LL);
                                                          }
                                                          common::milog::MiLogStream::create(
                                                            (common::milog::MiLogStream *)(v3 + 2368),
                                                            &common::milog::MiLogDefault::default_log_obj_,
                                                            4u,
                                                            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                            "checkConfig",
                                                            640);
                                                          v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                                  (common::milog::MiLogStream *const)(v3 + 2368),
                                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                                          v86 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
                                                                  v85,
                                                                  (const char (*)[27])"mp_play_reward_gadget_id_:");
                                                          v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                                  v86,
                                                                  &this->mp_play_reward_gadget_id_);
                                                          common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                                                            v87,
                                                            (const char (*)[31])byte_1A30D900);
                                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2368));
                                                          v2 = -1;
                                                        }
                                                      }
                                                    }
                                                    else
                                                    {
                                                      *(_DWORD *)(((v3 + 2112) >> 3) + 0x7FFF8000) = 0;
                                                      if ( *(char *)(((v3 + 2112) >> 3) + 0x7FFF8000) < 0
                                                        || *(_BYTE *)(((v3 + 2143) >> 3) + 0x7FFF8000) != 0
                                                        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 2143) >> 3)
                                                                                             + 0x7FFF8000) )
                                                      {
                                                        __asan_report_store_n(v3 + 2112, 32LL);
                                                      }
                                                      common::milog::MiLogStream::create(
                                                        (common::milog::MiLogStream *)(v3 + 2112),
                                                        &common::milog::MiLogDefault::default_log_obj_,
                                                        4u,
                                                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                        "checkConfig",
                                                        615);
                                                      v78 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                              (common::milog::MiLogStream *const)(v3 + 2112),
                                                              (const char (*)[16])"[CONFIG_ERROR] ");
                                                      v79 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                                              v78,
                                                              (const char (*)[40])"CONST_VALUE_DEFAULT_MATERIAL_GADGET_ID:");
                                                      v80 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                              v79,
                                                              &this->default_material_gadget_id_);
                                                      common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                                                        v80,
                                                        (const char (*)[25])byte_1A30D7A0);
                                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2112));
                                                      v2 = -1;
                                                    }
                                                  }
                                                  else
                                                  {
                                                    *(_DWORD *)(((v3 + 2048) >> 3) + 0x7FFF8000) = 0;
                                                    if ( *(char *)(((v3 + 2048) >> 3) + 0x7FFF8000) < 0
                                                      || *(_BYTE *)(((v3 + 2079) >> 3) + 0x7FFF8000) != 0
                                                      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 2079) >> 3)
                                                                                           + 0x7FFF8000) )
                                                    {
                                                      __asan_report_store_n(v3 + 2048, 32LL);
                                                    }
                                                    common::milog::MiLogStream::create(
                                                      (common::milog::MiLogStream *)(v3 + 2048),
                                                      &common::milog::MiLogDefault::default_log_obj_,
                                                      4u,
                                                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                      "checkConfig",
                                                      609);
                                                    v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                            (common::milog::MiLogStream *const)(v3 + 2048),
                                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                                    v76 = common::milog::MiLogStream::operator<<<char [83],(char *[83])0>(
                                                            v75,
                                                            (const char (*)[83])byte_1A30D6C0);
                                                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                                      v76,
                                                      &this->proficient_player_quest_id_);
                                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 2048));
                                                    v2 = -1;
                                                  }
                                                }
                                              }
                                            }
                                            else
                                            {
LABEL_459:
                                              if ( *(char *)(((v3 + 1792) >> 3) + 0x7FFF8000) < 0
                                                || *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) != 0
                                                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1823) >> 3) + 0x7FFF8000) )
                                              {
                                                __asan_report_store_n(v3 + 1792, 32LL);
                                              }
                                              common::milog::MiLogStream::create(
                                                (common::milog::MiLogStream *)(v3 + 1792),
                                                &common::milog::MiLogDefault::default_log_obj_,
                                                4u,
                                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                                "checkConfig",
                                                581);
                                              v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                      (common::milog::MiLogStream *const)(v3 + 1792),
                                                      (const char (*)[16])"[CONFIG_ERROR] ");
                                              common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                                v55,
                                                (const char (*)[63])byte_1A30D5A0);
                                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1792));
                                              v2 = -1;
                                            }
                                          }
                                          else
                                          {
LABEL_458:
                                            if ( *(char *)(((v3 + 1728) >> 3) + 0x7FFF8000) < 0
                                              || *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) != 0
                                              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 1759) >> 3) + 0x7FFF8000) )
                                            {
                                              __asan_report_store_n(v3 + 1728, 32LL);
                                            }
                                            common::milog::MiLogStream::create(
                                              (common::milog::MiLogStream *)(v3 + 1728),
                                              &common::milog::MiLogDefault::default_log_obj_,
                                              4u,
                                              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                              "checkConfig",
                                              575);
                                            v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                    (common::milog::MiLogStream *const)(v3 + 1728),
                                                    (const char (*)[16])"[CONFIG_ERROR] ");
                                            common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                                              v53,
                                              (const char (*)[37])byte_1A30D540);
                                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1728));
                                            v2 = -1;
                                          }
                                        }
                                        else
                                        {
                                          if ( *(char *)(((v3 + 1664) >> 3) + 0x7FFF8000) < 0
                                            || *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) != 0
                                            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1695) >> 3) + 0x7FFF8000) )
                                          {
                                            __asan_report_store_n(v3 + 1664, 32LL);
                                          }
                                          common::milog::MiLogStream::create(
                                            (common::milog::MiLogStream *)(v3 + 1664),
                                            &common::milog::MiLogDefault::default_log_obj_,
                                            4u,
                                            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                            "checkConfig",
                                            568);
                                          v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                  (common::milog::MiLogStream *const)(v3 + 1664),
                                                  (const char (*)[16])"[CONFIG_ERROR] ");
                                          common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                                            v52,
                                            (const char (*)[48])byte_1A30D4E0);
                                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1664));
                                          v2 = -1;
                                        }
                                      }
                                      else
                                      {
                                        if ( *(char *)(((v3 + 1600) >> 3) + 0x7FFF8000) < 0
                                          || *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) != 0
                                          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1631) >> 3) + 0x7FFF8000) )
                                        {
                                          __asan_report_store_n(v3 + 1600, 32LL);
                                        }
                                        common::milog::MiLogStream::create(
                                          (common::milog::MiLogStream *)(v3 + 1600),
                                          &common::milog::MiLogDefault::default_log_obj_,
                                          4u,
                                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                          "checkConfig",
                                          562);
                                        v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                (common::milog::MiLogStream *const)(v3 + 1600),
                                                (const char (*)[16])"[CONFIG_ERROR] ");
                                        v51 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                                                v50,
                                                (const char (*)[29])"CONST_VALUE_MAIL_MAX_NUM is ");
                                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                          v51,
                                          &this->normal_mail_max_num_);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1600));
                                        v2 = -1;
                                      }
                                    }
                                  }
                                  else
                                  {
                                    if ( *(char *)(((v3 + 1152) >> 3) + 0x7FFF8000) < 0
                                      || *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) != 0
                                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 1183) >> 3) + 0x7FFF8000) )
                                    {
                                      __asan_report_store_n(v3 + 1152, 32LL);
                                    }
                                    common::milog::MiLogStream::create(
                                      (common::milog::MiLogStream *)(v3 + 1152),
                                      &common::milog::MiLogDefault::default_log_obj_,
                                      4u,
                                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                      "checkConfig",
                                      526);
                                    v43 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                            (common::milog::MiLogStream *const)(v3 + 1152),
                                            (const char (*)[16])"[CONFIG_ERROR] ");
                                    common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                                      v43,
                                      (const char (*)[50])byte_1A30D2C0);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1152));
                                    v2 = -1;
                                  }
                                }
                                else
                                {
                                  if ( *(char *)(((v3 + 1088) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 1119) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v3 + 1088, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v3 + 1088),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                    "checkConfig",
                                    521);
                                  v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                          (common::milog::MiLogStream *const)(v3 + 1088),
                                          (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                                    v42,
                                    (const char (*)[34])byte_1A30D260);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1088));
                                  v2 = -1;
                                }
                              }
                              else
                              {
                                if ( *(char *)(((v3 + 1024) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 1055) >> 3) + 0x7FFF8000) )
                                {
                                  __asan_report_store_n(v3 + 1024, 32LL);
                                }
                                common::milog::MiLogStream::create(
                                  (common::milog::MiLogStream *)(v3 + 1024),
                                  &common::milog::MiLogDefault::default_log_obj_,
                                  4u,
                                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                  "checkConfig",
                                  516);
                                v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                        (common::milog::MiLogStream *const)(v3 + 1024),
                                        (const char (*)[16])"[CONFIG_ERROR] ");
                                common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                                  v41,
                                  (const char (*)[39])"CONST_VALUE_ENV_ANIMAL_REFRESH C1 is 0");
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1024));
                                v2 = -1;
                              }
                            }
                            else
                            {
                              if ( *(char *)(((v3 + 960) >> 3) + 0x7FFF8000) < 0
                                || *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) != 0
                                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 991) >> 3) + 0x7FFF8000) )
                              {
                                __asan_report_store_n(v3 + 960, 32LL);
                              }
                              common::milog::MiLogStream::create(
                                (common::milog::MiLogStream *)(v3 + 960),
                                &common::milog::MiLogDefault::default_log_obj_,
                                4u,
                                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                                "checkConfig",
                                510);
                              v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v3 + 960),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                                v40,
                                (const char (*)[40])"CONST_VALUE_BLOCK_REFRESH_PARAM C3 is 0");
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 960));
                              v2 = -1;
                            }
                          }
                          else
                          {
                            if ( *(char *)(((v3 + 896) >> 3) + 0x7FFF8000) < 0
                              || *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) != 0
                              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 927) >> 3) + 0x7FFF8000) )
                            {
                              __asan_report_store_n(v3 + 896, 32LL);
                            }
                            common::milog::MiLogStream::create(
                              (common::milog::MiLogStream *)(v3 + 896),
                              &common::milog::MiLogDefault::default_log_obj_,
                              4u,
                              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                              "checkConfig",
                              504);
                            v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v3 + 896),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                              v39,
                              (const char (*)[51])"CONST_VALUE_BACK_AVATAR_AUTO_RECOVER_PARAM C1 is 0");
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 896));
                            v2 = -1;
                          }
                        }
                        else
                        {
                          if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
                            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v3 + 832, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v3 + 832),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                            "checkConfig",
                            498);
                          v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v3 + 832),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                            v38,
                            (const char (*)[41])"CONST_VALUE_SPRING_RECOVER_PARAM C1 is 0");
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
                          v2 = -1;
                        }
                      }
                      else
                      {
                        if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
                          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v3 + 768, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v3 + 768),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                          "checkConfig",
                          492);
                        v37 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v3 + 768),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          v37,
                          (const char (*)[40])"CONST_VALUE_HURT_REVIVE_HP_PERCENT is 0");
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
                        v2 = -1;
                      }
                    }
                    else
                    {
LABEL_457:
                      if ( *(char *)(((v3 + 704) >> 3) + 0x7FFF8000) < 0
                        || *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) != 0
                        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 735) >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_store_n(v3 + 704, 32LL);
                      }
                      common::milog::MiLogStream::create(
                        (common::milog::MiLogStream *)(v3 + 704),
                        &common::milog::MiLogDefault::default_log_obj_,
                        4u,
                        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                        "checkConfig",
                        486);
                      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v3 + 704),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                        v36,
                        (const char (*)[35])"CONST_VALUE_GAME_TIME_PER_DAY is 0");
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 704));
                      v2 = -1;
                    }
                  }
                  else
                  {
                    if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 640, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 640),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "checkConfig",
                      480);
                    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 640),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                      v35,
                      (const char (*)[56])"CONST_VALUE_BORED_CREATE_MONSTER min range >= max range");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                    v2 = -1;
                  }
                }
                else
                {
                  if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 576, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 576),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                    "checkConfig",
                    475);
                  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 576),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v33,
                    (const char (*)[41])"CONST_VALUE_BORED_LIMIT min must <= max!");
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                  v2 = -1;
                }
              }
              else
              {
                if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 512, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 512),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "checkConfig",
                  468);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v31, (const char (*)[33])byte_1A30CF00);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
                v2 = -1;
              }
            }
            else
            {
              if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "checkConfig",
                462);
              v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v29, (const char (*)[39])byte_1A30CEA0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
              v2 = -1;
            }
          }
          else
          {
            if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkConfig",
              457);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                    v25,
                    (const char (*)[50])"findEntranceConfigVec rand_task_quest_entrance_: ");
            v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v26,
                    &this->rand_task_quest_entrance_);
            common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v27, (const char (*)[8])byte_1A30CC60);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            v2 = -1;
          }
        }
        else
        {
          if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkConfig",
            452);
          v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v20 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                  v19,
                  (const char (*)[24])"default_home_world_id: ");
          v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v20,
                  &this->default_home_world_id_);
          v22 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v21, (const char (*)[8])" type: ");
          v23 = common::milog::MiLogStream::operator<<<data::WorldType,(data::WorldType*)0>(
                  v22,
                  &default_home_world_config_ptr->type);
          common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v23, (const char (*)[15])" != WORLD_HOME");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
          v2 = -1;
        }
      }
      else
      {
        if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkConfig",
          447);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v16,
                (const char (*)[45])"findWorldExcelConfig default_home_world_id: ");
        v18 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->default_home_world_id_);
        common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])byte_1A30CC60);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
        v2 = -1;
      }
    }
    else
    {
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkConfig",
        441);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
              v10,
              (const char (*)[19])"default_world_id: ");
      v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, &this->default_world_id_);
      v13 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v12, (const char (*)[8])" type: ");
      v14 = common::milog::MiLogStream::operator<<<data::WorldType,(data::WorldType*)0>(
              v13,
              &default_world_config_ptr->type);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v14, (const char (*)[17])" != WORLD_PLAYER");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkConfig",
      436);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
           v7,
           (const char (*)[40])"findWorldExcelConfig default_world_id: ");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->default_world_id_);
    common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v9, (const char (*)[8])byte_1A30CC60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = -1;
  }
  if ( v171 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8054) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8074) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF807C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8084) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF808C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8094) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF809C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80A4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80AC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80B4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80BC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80CC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80DC) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80E4) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80EC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80F4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80FC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8104) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF810C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8114) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF811C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8124) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF812C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8134) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF813C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8144) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF814C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8154) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF815C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8164) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF816C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8174) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF817C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8184) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF818C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8194) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF819C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81A4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81AC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81B4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81BC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81C4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81CC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81D4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81DC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81E4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81EC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81F4) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF81FC) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8204) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF820C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8214) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF821C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8224) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF822C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_7(v3, 4480LL, v171);
  }
  return v2;
};

// Line 834: range 000000000E129CF6-000000000E12A7E6
int32_t __cdecl ConstValueExcelConfigMgr::rewriteReputationParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  std::string *v15; // rax
  std::remove_reference<std::string&>::type *v16; // rax
  const std::string *v17; // rax
  bool v18; // r14
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  const std::string *v21; // rax
  const std::string *v23; // rax
  __int64 TimeByStr; // rsi
  common::milog::MiLogStream *v25; // rax
  data::ConstValueExcelConfig *reputation_config_ptr; // [rsp+18h] [rbp-238h]
  char v27[560]; // [rsp+20h] [rbp-230h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(512LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 32"
                        "0 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteReputationParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -202116109;
  reputation_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 203LL);
  if ( reputation_config_ptr )
  {
    if ( std::vector<std::string>::size(&reputation_config_ptr->value) > 3 )
    {
      v7 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->city_reputation_history_request_num_, 1) )
      {
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteReputationParam",
          849);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v8,
               (const char (*)[18])"strToNum failed, ");
        v10 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
        result = -1;
      }
      else
      {
        v11 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v11, &this->hunting_weekly_finish_num_, 1) )
        {
          if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteReputationParam",
            855);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                  v12,
                  (const char (*)[18])"strToNum failed, ");
          v14 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
          result = -1;
        }
        else
        {
          v15 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 2uLL);
          v16 = std::move<std::string &>(v15);
          std::string::operator=(&this->hunting_ability_group_name_, v16);
          std::allocator<char>::allocator(v1 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v1 + 320),
            ",",
            (const std::allocator<char> *)(v1 + 48));
          v17 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 3uLL);
          v18 = common::tools::StringUtils::splitToList<unsigned int>(
                  v17,
                  (const std::string *)(v1 + 320),
                  &this->hunting_clue_monster_affix_vec_,
                  1) != 0;
          std::string::~string((void *)(v1 + 320));
          *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v1 + 48);
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v18 )
          {
            *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteReputationParam",
              863);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                    v19,
                    (const char (*)[21])"splitToList failed, ");
            v21 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 3uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
            result = -1;
          }
          else
          {
            if ( std::vector<std::string>::size(&reputation_config_ptr->value) <= 4 )
              goto LABEL_35;
            std::vector<std::string>::operator[](&reputation_config_ptr->value, 4uLL);
            if ( (unsigned __int8)std::string::empty() == 1 )
              goto LABEL_35;
            v23 = std::vector<std::string>::operator[](&reputation_config_ptr->value, 4uLL);
            TimeByStr = (unsigned int)common::tools::TimeUtils::getTimeByStr(v23);
            if ( *(_BYTE *)(((unsigned __int64)&this->city_reputation_refresh_time_ >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->city_reputation_refresh_time_ >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_store4(&this->city_reputation_refresh_time_, TimeByStr);
            }
            this->city_reputation_refresh_time_ = TimeByStr;
            if ( this->city_reputation_refresh_time_ )
            {
LABEL_35:
              result = 0;
            }
            else
            {
              *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteReputationParam",
                872);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v1 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v25, (const char (*)[44])byte_1A30EA80);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
              result = -1;
            }
          }
        }
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteReputationParam",
        844);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
        v6,
        (const char (*)[40])"rewriteReputationParam size less than 4");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteReputationParam",
      838);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
      v4,
      (const char (*)[66])"findConstValueExcelConfig CONST_VALUE_CITY_REPUTATION_PARAM fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 881: range 000000000E12A7E8-000000000E12B071
int32_t __cdecl ConstValueExcelConfigMgr::rewriteResinCostVec(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::map<int,std::vector<unsigned int>> *p_auto_recover_cost_map; // rcx
  char v12; // al
  std::vector<unsigned int> *v13; // rax
  int32_t result; // eax
  data::ConstValueExcelConfig *resin_cost_config_ptr; // [rsp+10h] [rbp-200h]
  std::string *resin_cost_str; // [rsp+18h] [rbp-1F8h]
  char v17[496]; // [rsp+20h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "8 32 1 9 <unknown> 48 4 9 <unknown> 64 24 18 resin_cost_vec:890 128 32 9 <unknown> 192 32 9 <unk"
                        "nown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteResinCostVec;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -202116109;
  resin_cost_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 134LL);
  if ( resin_cost_config_ptr )
  {
    std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
    if ( std::vector<std::string>::size(&resin_cost_config_ptr->value) > 5 )
    {
      resin_cost_str = std::vector<std::string>::operator[](&resin_cost_config_ptr->value, 4uLL);
      std::allocator<char>::allocator(v1 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 256),
        ",",
        (const std::allocator<char> *)(v1 + 32));
      v7 = (char *)(v1 + 256);
      v8 = common::tools::StringUtils::splitToList<unsigned int>(
             resin_cost_str,
             (const std::string *)(v1 + 256),
             (std::vector<unsigned int> *)(v1 + 64),
             1) != 0;
      std::string::~string((void *)(v1 + 256));
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 32);
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteResinCostVec",
          900);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 320),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v9, (const char (*)[19])"splitToList failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64)) )
      {
        p_auto_recover_cost_map = &this->auto_recover_cost_map_;
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
        v12 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
        if ( v12 != 0 && v12 <= 3 )
        {
          LOBYTE(v7) = v12 != 0;
          __asan_report_store4(v1 + 48, v7);
        }
        *(_DWORD *)(v1 + 48) = 134;
        v13 = std::map<int,std::vector<unsigned int>>::operator[](
                p_auto_recover_cost_map,
                (std::map<int,std::vector<unsigned int>>::key_type *)(v1 + 48));
        std::vector<unsigned int>::operator=(v13, (const std::vector<unsigned int> *)(v1 + 64));
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
        v5 = 0;
      }
      else
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteResinCostVec",
          906);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v1 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
          v10,
          (const char (*)[25])"resin_cost_vec size is 0");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteResinCostVec",
        893);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
        v6,
        (const char (*)[37])"rewriteResinCostVec size less than 5");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
  }
  else
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteResinCostVec",
      886);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v4,
      (const char (*)[62])"findConstValueExcelConfig CONST_VALUE_RESIN_BUYING_COST fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    v5 = -1;
  }
  result = v5;
  if ( v17 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 916: range 000000000E12B072-000000000E12B272
__int64 __fastcall ConstValueExcelConfigMgr::getAutoRecoverCostConfigVec(
        const ConstValueExcelConfigMgr *const this,
        __int64 type,
        std::vector<unsigned int> *config_vec)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<int,std::vector<unsigned int>> *p_auto_recover_cost_map; // rdx
  std::map<int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  const std::vector<unsigned int> *v10; // rax
  char v12[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 8 type:915 64 8 9 <unknown> 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::getAutoRecoverCostConfigVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = type;
  p_auto_recover_cost_map = &this->auto_recover_cost_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, type);
  *(std::map<int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::map<int,std::vector<unsigned int>>::end(p_auto_recover_cost_map);
  v7 = &this->auto_recover_cost_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, type);
  *(std::map<int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::map<int,std::vector<unsigned int>>::find(
                                                                            v7,
                                                                            (const std::map<int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<int const,std::vector<unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<int const,std::vector<unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::map<int,std::vector<unsigned int>>::at(
            &this->auto_recover_cost_map_,
            (const std::map<int,std::vector<unsigned int>>::key_type *)(v3 + 48));
    std::vector<unsigned int>::operator=(config_vec, v10);
    result = 0LL;
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 927: range 000000000E12B274-000000000E12BA4A
int32_t __cdecl ConstValueExcelConfigMgr::rewriteEquipScoinRatio(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  std::vector<float>::reference v6; // rax
  float *v7; // rdx
  std::map<unsigned int,float> *p_weapon_scoin_ratio_map; // rcx
  __int64 v9; // rsi
  char *v10; // rsi
  std::map<unsigned int,float>::mapped_type *v11; // rax
  float *v12; // rdx
  char v13; // cl
  unsigned __int64 v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<float>::reference v16; // rax
  float *v17; // rdx
  std::map<unsigned int,float> *p_reliquary_scoin_ratio_map; // rcx
  __int64 v19; // rsi
  char *v20; // rsi
  std::map<unsigned int,float>::mapped_type *v21; // rax
  float *v22; // rdx
  char v23; // cl
  int32_t result; // eax
  uint32_t rank_level; // [rsp+10h] [rbp-180h]
  uint32_t rank_level_0; // [rsp+14h] [rbp-17Ch]
  float scoin_ratio; // [rsp+18h] [rbp-178h]
  float scoin_ratio_0; // [rsp+1Ch] [rbp-174h]
  char v29[368]; // [rsp+20h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 4 9 <unknown> 48 4 9 <unknown> 64 24 26 weapon_scoin_ratio_vec:929 128 24 29 reliquary_scoi"
                        "n_ratio_vec:945 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteEquipScoinRatio;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -202116109;
  std::vector<float>::vector((std::vector<float> *const)(v1 + 64));
  if ( ConstValueExcelConfigMgr::findConstValue<float>(
         this,
         CONST_VALUE_WEAPON_LEVELUP_COST,
         (std::vector<float> *)(v1 + 64)) )
  {
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteEquipScoinRatio",
      932);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
      v4,
      (const char (*)[53])"findConstValue CONST_VALUE_WEAPON_LEVELUP_COST fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v5 = -1;
  }
  else
  {
    for ( rank_level = 0; rank_level < std::vector<float>::size((const std::vector<float> *const)(v1 + 64)); ++rank_level )
    {
      v6 = std::vector<float>::operator[]((std::vector<float> *const)(v1 + 64), rank_level);
      v7 = v6;
      if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v6);
      }
      scoin_ratio = *v7;
      if ( *v7 < 0.00000011920929 )
        break;
      p_weapon_scoin_ratio_map = &this->weapon_scoin_ratio_map_;
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = 4;
      v9 = rank_level + 1;
      if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 32, v9);
      *(_DWORD *)(v1 + 32) = v9;
      v10 = (char *)(v1 + 32);
      v11 = std::map<unsigned int,float>::operator[](
              p_weapon_scoin_ratio_map,
              (std::map<unsigned int,float>::key_type *)(v1 + 32));
      v12 = v11;
      v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
      if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
      {
        LOBYTE(v10) = v13 != 0;
        __asan_report_store4(v11, v10);
      }
      *v12 = scoin_ratio;
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    }
    v14 = ((v1 + 128) >> 3) + 2147450880;
    *(_WORD *)v14 = 0;
    *(_BYTE *)(v14 + 2) = 0;
    std::vector<float>::vector((std::vector<float> *const)(v1 + 128));
    if ( ConstValueExcelConfigMgr::findConstValue<float>(
           this,
           CONST_VALUE_RELIQUARY_LEVELUP_COST,
           (std::vector<float> *)(v1 + 128)) )
    {
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteEquipScoinRatio",
        948);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v1 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
        v15,
        (const char (*)[56])"findConstValue CONST_VALUE_RELIQUARY_LEVELUP_COST fails");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v5 = -1;
    }
    else
    {
      for ( rank_level_0 = 0;
            rank_level_0 < std::vector<float>::size((const std::vector<float> *const)(v1 + 128));
            ++rank_level_0 )
      {
        v16 = std::vector<float>::operator[]((std::vector<float> *const)(v1 + 128), rank_level_0);
        v17 = v16;
        if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v16);
        }
        scoin_ratio_0 = *v17;
        if ( *v17 < 0.00000011920929 )
          break;
        p_reliquary_scoin_ratio_map = &this->reliquary_scoin_ratio_map_;
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
        v19 = rank_level_0 + 1;
        if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v1 + 48, v19);
        *(_DWORD *)(v1 + 48) = v19;
        v20 = (char *)(v1 + 48);
        v21 = std::map<unsigned int,float>::operator[](
                p_reliquary_scoin_ratio_map,
                (std::map<unsigned int,float>::key_type *)(v1 + 48));
        v22 = v21;
        v23 = *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000);
        if ( v23 != 0 && (char)(((unsigned __int8)v21 & 7) + 3) >= v23 )
        {
          LOBYTE(v20) = v23 != 0;
          __asan_report_store4(v21, v20);
        }
        *v22 = scoin_ratio_0;
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      }
      v5 = 0;
    }
    std::vector<float>::~vector((std::vector<float> *const)(v1 + 128));
  }
  std::vector<float>::~vector((std::vector<float> *const)(v1 + 64));
  result = v5;
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 965: range 000000000E12BA4C-000000000E12DC64
int32_t __cdecl ConstValueExcelConfigMgr::rewriteCombatForceParam(ConstValueExcelConfigMgr *const this)
{
  __int64 v1; // rax
  common::milog::MiLogStream *v2; // rax
  int32_t v3; // ebx
  char v4; // bl
  char v5; // r12
  char v6; // r13
  char v7; // r14
  const std::string *v8; // rax
  bool v9; // r15
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  std::map<data::FightPropType,float> *p_avatar_force_param_map; // rcx
  char *v13; // rsi
  char v14; // al
  char *v15; // rsi
  float *v16; // r13
  std::map<data::FightPropType,float> *v17; // rcx
  char v18; // al
  char *v19; // rsi
  float *v20; // r12
  std::map<data::FightPropType,float> *v21; // rcx
  char v22; // al
  char *v23; // rsi
  std::map<data::FightPropType,float> *v24; // rcx
  char v25; // al
  char *v26; // rsi
  float *v27; // r15
  std::map<data::FightPropType,float> *v28; // rcx
  char v29; // al
  float *v30; // r14
  std::map<data::FightPropType,float> *v31; // rcx
  char *v32; // rsi
  char v33; // al
  float *v34; // rbx
  std::map<data::FightPropType,float> *v35; // rdi
  float *v36; // rax
  int32_t v37; // eax
  common::milog::MiLogStream *v38; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  char v41; // r15
  char v42; // r14
  char v43; // r13
  char v44; // r12
  std::map<data::ElementType,std::vector<float>> *p_player_force_param_map; // rdi
  std::vector<float> *v46; // rbx
  const std::string *v47; // rax
  std::map<data::ElementType,std::vector<float>> *v48; // rdi
  std::vector<float> *v49; // rbx
  const std::string *v50; // rax
  std::map<data::ElementType,std::vector<float>> *v51; // rdi
  std::vector<float> *v52; // rbx
  const std::string *v53; // rax
  std::map<data::ElementType,std::vector<float>> *v54; // rdi
  std::vector<float> *v55; // rbx
  const std::string *v56; // rax
  std::map<data::ElementType,std::vector<float>> *v57; // rdi
  std::vector<float> *v58; // rbx
  const std::string *v59; // rax
  std::map<data::ElementType,std::vector<float>> *v60; // rdi
  std::vector<float> *v61; // rbx
  const std::string *v62; // rax
  char v63; // bl
  common::milog::MiLogStream *v64; // rax
  common::milog::MiLogStream *v65; // rax
  _DWORD *v67; // [rsp+8h] [rbp-568h]
  char v68; // [rsp+19h] [rbp-557h]
  char v69; // [rsp+1Ah] [rbp-556h]
  char v70; // [rsp+1Bh] [rbp-555h]
  char v71; // [rsp+1Ch] [rbp-554h]
  char v72; // [rsp+1Dh] [rbp-553h]
  char v73; // [rsp+1Eh] [rbp-552h]
  char v74; // [rsp+1Fh] [rbp-551h]
  char v75; // [rsp+20h] [rbp-550h]
  char v76; // [rsp+21h] [rbp-54Fh]
  char v77; // [rsp+22h] [rbp-54Eh]
  char v78; // [rsp+23h] [rbp-54Dh]
  char v79; // [rsp+24h] [rbp-54Ch]
  char v80; // [rsp+25h] [rbp-54Bh]
  char v81; // [rsp+26h] [rbp-54Ah]
  char v82; // [rsp+27h] [rbp-549h]
  char v83; // [rsp+28h] [rbp-548h]
  char v84; // [rsp+29h] [rbp-547h]
  char v85; // [rsp+2Ah] [rbp-546h]
  char v86; // [rsp+2Bh] [rbp-545h]
  char v87; // [rsp+2Ch] [rbp-544h]
  char v88; // [rsp+2Dh] [rbp-543h]
  char v89; // [rsp+2Eh] [rbp-542h]
  char v90; // [rsp+2Fh] [rbp-541h]
  std::map<data::FightPropType,float>::mapped_type *v91; // [rsp+30h] [rbp-540h]
  char v92; // [rsp+30h] [rbp-540h]
  float *p_avatar_ratio_element_add_hurt; // [rsp+38h] [rbp-538h]
  char v94; // [rsp+38h] [rbp-538h]
  float *p_avatar_ratio_element_sub_hurt; // [rsp+40h] [rbp-530h]
  char v96; // [rsp+40h] [rbp-530h]
  unsigned __int64 v97; // [rsp+48h] [rbp-528h]
  char v99[1296]; // [rsp+60h] [rbp-510h] BYREF

  v97 = (unsigned __int64)v99;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v1 = __asan_stack_malloc_5(1248LL);
    if ( v1 )
      v97 = v1;
  }
  *(_QWORD *)v97 = 1102416563LL;
  *(_QWORD *)(v97 + 8) = "34 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9"
                         " <unknown> 128 1 9 <unknown> 144 4 9 <unknown> 160 4 9 <unknown> 176 4 9 <unknown> 192 4 9 <unk"
                         "nown> 208 4 9 <unknown> 224 4 9 <unknown> 240 4 9 <unknown> 256 4 9 <unknown> 272 4 9 <unknown>"
                         " 288 4 9 <unknown> 304 4 9 <unknown> 320 4 9 <unknown> 336 4 9 <unknown> 352 24 13 value_vec:96"
                         "6 416 24 24 avatar_param_str_vec:972 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                         "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 9"
                         "92 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown>";
  *(_QWORD *)(v97 + 16) = ConstValueExcelConfigMgr::rewriteCombatForceParam;
  v67 = (_DWORD *)(v97 >> 3);
  v67[536862720] = -235802127;
  v67[536862721] = -234753535;
  v67[536862722] = -234753535;
  v67[536862723] = -234753535;
  v67[536862724] = -234556927;
  v67[536862725] = -234556924;
  v67[536862726] = -234556924;
  v67[536862727] = -234556924;
  v67[536862728] = -234556924;
  v67[536862729] = -234556924;
  v67[536862730] = -234556924;
  v67[536862731] = -234881024;
  v67[536862732] = -218959118;
  v67[536862733] = -234881024;
  v67[536862734] = -218959118;
  v67[536862736] = -218959118;
  v67[536862738] = -218959118;
  v67[536862740] = -218959118;
  v67[536862742] = -218959118;
  v67[536862744] = -218959118;
  v67[536862746] = -218959118;
  v67[536862748] = -218959118;
  v67[536862750] = -218959118;
  v67[536862752] = -218959118;
  v67[536862754] = -218959118;
  v67[536862756] = -218959118;
  v67[536862758] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v97 + 352));
  if ( ConstValueExcelConfigMgr::findConstValue<std::string>(
         this,
         CONST_VALUE_AVATAR_COMBAT_FORCE_PARAM,
         (std::vector<std::string> *)(v97 + 352)) )
  {
    if ( *(char *)(((v97 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v97 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v97 - 32 + 31) & 7) >= *(_BYTE *)(((v97 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v97 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v97 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteCombatForceParam",
      969);
    v2 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v97 + 480),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
      v2,
      (const char (*)[59])"findConstValue CONST_VALUE_AVATAR_COMBAT_FORCE_PARAM fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v97 + 480));
    *(_DWORD *)(((v97 + 480) >> 3) + 0x7FFF8000) = -117901064;
    v3 = -1;
  }
  else
  {
    std::vector<std::string>::vector((std::vector<std::string> *const)(v97 + 416));
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v9 = 1;
    if ( !std::vector<std::string>::empty((const std::vector<std::string> *const)(v97 + 352)) )
    {
      std::allocator<char>::allocator(v97 + 32);
      v4 = 1;
      v5 = 1;
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v97 + 544),
        ",",
        (const std::allocator<char> *)(v97 + 32));
      v6 = 1;
      v7 = 1;
      v8 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 0LL);
      if ( !common::tools::StringUtils::split(
              v8,
              (const std::string *)(v97 + 544),
              (std::vector<std::string> *)(v97 + 416),
              0) )
        v9 = 0;
    }
    if ( v7 )
      std::string::~string((void *)(v97 + 544));
    if ( v6 )
      *(_DWORD *)(((v97 + 544) >> 3) + 0x7FFF8000) = -117901064;
    if ( v5 )
      std::allocator<char>::~allocator(v97 + 32);
    if ( v4 )
      *(_BYTE *)(((v97 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v9 )
    {
      *(_DWORD *)(((v97 + 608) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v97 + 608) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v97 + 639) >> 3) + 0x7FFF8000) != 0
        && (char)((v97 + 127) & 7) >= *(_BYTE *)(((v97 + 639) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v97 + 608, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v97 + 608),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteCombatForceParam",
        975);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v97 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              v10,
              (const char (*)[62])"split CONST_VALUE_AVATAR_COMBAT_FORCE_PARAM fails, param_str:");
      common::milog::MiLogStream::operator<<<std::string>(v11, (const std::vector<std::string> *)(v97 + 352));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v97 + 608));
      *(_DWORD *)(((v97 + 608) >> 3) + 0x7FFF8000) = -117901064;
      v3 = -1;
    }
    else
    {
      p_avatar_ratio_element_sub_hurt = &this->avatar_ratio_element_sub_hurt_;
      p_avatar_ratio_element_add_hurt = &this->avatar_ratio_element_add_hurt_;
      p_avatar_force_param_map = &this->avatar_force_param_map_;
      v13 = (char *)(v97 + 1248);
      *(_BYTE *)(((v97 + 240) >> 3) + 0x7FFF8000) = 4;
      v14 = *(_BYTE *)(((v97 + 240) >> 3) + 0x7FFF8000);
      if ( v14 != 0 && v14 <= 3 )
      {
        LOBYTE(v13) = v14 != 0;
        __asan_report_store4(v97 + 240, v13);
      }
      *(_DWORD *)(v97 + 240) = 28;
      v15 = (char *)(v97 + 240);
      v16 = std::map<data::FightPropType,float>::operator[](
              p_avatar_force_param_map,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 240));
      v17 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 224) >> 3) + 0x7FFF8000) = 4;
      v18 = *(_BYTE *)(((v97 + 224) >> 3) + 0x7FFF8000);
      if ( v18 != 0 && v18 <= 3 )
      {
        LOBYTE(v15) = v18 != 0;
        __asan_report_store4(v97 + 224, v15);
      }
      *(_DWORD *)(v97 + 224) = 23;
      v19 = (char *)(v97 + 224);
      v20 = std::map<data::FightPropType,float>::operator[](
              v17,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 224));
      v21 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 208) >> 3) + 0x7FFF8000) = 4;
      v22 = *(_BYTE *)(((v97 + 208) >> 3) + 0x7FFF8000);
      if ( v22 != 0 && v22 <= 3 )
      {
        LOBYTE(v19) = v22 != 0;
        __asan_report_store4(v97 + 208, v19);
      }
      *(_DWORD *)(v97 + 208) = 22;
      v23 = (char *)(v97 + 208);
      v91 = std::map<data::FightPropType,float>::operator[](
              v21,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 208));
      v24 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 192) >> 3) + 0x7FFF8000) = 4;
      v25 = *(_BYTE *)(((v97 + 192) >> 3) + 0x7FFF8000);
      if ( v25 != 0 && v25 <= 3 )
      {
        LOBYTE(v23) = v25 != 0;
        __asan_report_store4(v97 + 192, v23);
      }
      *(_DWORD *)(v97 + 192) = 20;
      v26 = (char *)(v97 + 192);
      v27 = std::map<data::FightPropType,float>::operator[](
              v24,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 192));
      v28 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 176) >> 3) + 0x7FFF8000) = 4;
      v29 = *(_BYTE *)(((v97 + 176) >> 3) + 0x7FFF8000);
      if ( v29 != 0 && v29 <= 3 )
      {
        LOBYTE(v26) = v29 != 0;
        __asan_report_store4(v97 + 176, v26);
      }
      *(_DWORD *)(v97 + 176) = 2002;
      v30 = std::map<data::FightPropType,float>::operator[](
              v28,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 176));
      v31 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 160) >> 3) + 0x7FFF8000) = 4;
      v32 = (char *)(v97 + 1248);
      v33 = *(_BYTE *)(((v97 + 160) >> 3) + 0x7FFF8000);
      if ( v33 != 0 && v33 <= 3 )
      {
        LOBYTE(v32) = v33 != 0;
        __asan_report_store4(v97 + 160, v32);
      }
      *(_DWORD *)(v97 + 160) = 2001;
      v34 = std::map<data::FightPropType,float>::operator[](
              v31,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 160));
      v35 = &this->avatar_force_param_map_;
      *(_BYTE *)(((v97 + 144) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v97 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 144) >> 3) + 0x7FFF8000) <= 3 )
      {
        v35 = (std::map<data::FightPropType,float> *)(v97 + 144);
        __asan_report_store4(v97 + 144, v97 + 160);
      }
      *(_DWORD *)(v97 + 144) = 2000;
      v36 = std::map<data::FightPropType,float>::operator[](
              v35,
              (std::map<data::FightPropType,float>::key_type *)(v97 + 144));
      v37 = common::tools::StringUtils::strVecToNum<0u,float,float &,float &,float &,float &,float &,float &,float &,float &>(
              (const std::vector<std::string> *)(v97 + 416),
              v36,
              v34,
              v30,
              v27,
              v91,
              v20,
              v16,
              p_avatar_ratio_element_add_hurt,
              p_avatar_ratio_element_sub_hurt);
      *(_BYTE *)(((v97 + 144) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 176) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 192) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 208) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v97 + 240) >> 3) + 0x7FFF8000) = -8;
      if ( v37 )
      {
        *(_DWORD *)(((v97 + 672) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v97 + 672) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v97 + 703) >> 3) + 0x7FFF8000) != 0
          && (char)((v97 - 96 + 31) & 7) >= *(_BYTE *)(((v97 + 703) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v97 + 672, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v97 + 672),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCombatForceParam",
          989);
        v38 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v97 + 672),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v39 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                v38,
                (const char (*)[62])"parse CONST_VALUE_AVATAR_COMBAT_FORCE_PARAM fails, param_str:");
        common::milog::MiLogStream::operator<<<std::string>(v39, (const std::vector<std::string> *)(v97 + 352));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v97 + 672));
        *(_DWORD *)(((v97 + 672) >> 3) + 0x7FFF8000) = -117901064;
        v3 = -1;
      }
      else
      {
        std::vector<std::string>::clear((std::vector<std::string> *const)(v97 + 352));
        if ( ConstValueExcelConfigMgr::findConstValue<std::string>(
               this,
               CONST_VALUE_PLAYER_COMBAT_FORCE_PARAM,
               (std::vector<std::string> *)(v97 + 352)) )
        {
          *(_DWORD *)(((v97 + 736) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v97 + 736) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v97 + 767) >> 3) + 0x7FFF8000) != 0
            && (char)((v97 - 32 + 31) & 7) >= *(_BYTE *)(((v97 + 767) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v97 + 736, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v97 + 736),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteCombatForceParam",
            996);
          v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v97 + 736),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
            v40,
            (const char (*)[59])"findConstValue CONST_VALUE_PLAYER_COMBAT_FORCE_PARAM fails");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v97 + 736));
          *(_DWORD *)(((v97 + 736) >> 3) + 0x7FFF8000) = -117901064;
          v3 = -1;
        }
        else
        {
          v96 = 0;
          v94 = 0;
          v92 = 0;
          v90 = 0;
          v89 = 0;
          v88 = 0;
          v87 = 0;
          v86 = 0;
          v85 = 0;
          v84 = 0;
          v83 = 0;
          v82 = 0;
          v81 = 0;
          v80 = 0;
          v79 = 0;
          v78 = 0;
          v77 = 0;
          v76 = 0;
          v75 = 0;
          v74 = 0;
          v73 = 0;
          v72 = 0;
          v71 = 0;
          v70 = 0;
          v69 = 0;
          v68 = 0;
          v41 = 0;
          v42 = 0;
          v43 = 0;
          v44 = 0;
          if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v97 + 352)) <= 5 )
            goto LABEL_65;
          p_player_force_param_map = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 256) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 256) >> 3) + 0x7FFF8000) <= 3 )
          {
            p_player_force_param_map = (std::map<data::ElementType,std::vector<float>> *)(v97 + 256);
            __asan_report_store4(v97 + 256, 110LL);
          }
          *(_DWORD *)(v97 + 256) = 1;
          v96 = 1;
          v46 = std::map<data::ElementType,std::vector<float>>::operator[](
                  p_player_force_param_map,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 256));
          *(_DWORD *)(((v97 + 800) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 48);
          v94 = 1;
          v92 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 800),
            ",",
            (const std::allocator<char> *)(v97 + 48));
          v90 = 1;
          v89 = 1;
          v47 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 0LL);
          if ( common::tools::StringUtils::splitToList<float>(v47, (const std::string *)(v97 + 800), v46, 0) )
            goto LABEL_65;
          v48 = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 272) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 272) >> 3) + 0x7FFF8000) <= 3 )
          {
            v48 = (std::map<data::ElementType,std::vector<float>> *)(v97 + 272);
            __asan_report_store4(v97 + 272, v97 + 800);
          }
          *(_DWORD *)(v97 + 272) = 2;
          v88 = 1;
          v49 = std::map<data::ElementType,std::vector<float>>::operator[](
                  v48,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 272));
          *(_DWORD *)(((v97 + 864) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 64) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 64);
          v87 = 1;
          v86 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 864),
            ",",
            (const std::allocator<char> *)(v97 + 64));
          v85 = 1;
          v84 = 1;
          v50 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 1uLL);
          if ( common::tools::StringUtils::splitToList<float>(v50, (const std::string *)(v97 + 864), v49, 0) )
            goto LABEL_65;
          v51 = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 288) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 288) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 288) >> 3) + 0x7FFF8000) <= 3 )
          {
            v51 = (std::map<data::ElementType,std::vector<float>> *)(v97 + 288);
            __asan_report_store4(v97 + 288, v97 + 864);
          }
          *(_DWORD *)(v97 + 288) = 7;
          v83 = 1;
          v52 = std::map<data::ElementType,std::vector<float>>::operator[](
                  v51,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 288));
          *(_DWORD *)(((v97 + 928) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 80) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 80);
          v82 = 1;
          v81 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 928),
            ",",
            (const std::allocator<char> *)(v97 + 80));
          v80 = 1;
          v79 = 1;
          v53 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 2uLL);
          if ( common::tools::StringUtils::splitToList<float>(v53, (const std::string *)(v97 + 928), v52, 0) )
            goto LABEL_65;
          v54 = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 304) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 304) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 304) >> 3) + 0x7FFF8000) <= 3 )
          {
            v54 = (std::map<data::ElementType,std::vector<float>> *)(v97 + 304);
            __asan_report_store4(v97 + 304, v97 + 1248);
          }
          *(_DWORD *)(v97 + 304) = 5;
          v78 = 1;
          v55 = std::map<data::ElementType,std::vector<float>>::operator[](
                  v54,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 304));
          *(_DWORD *)(((v97 + 992) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 96) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 96);
          v77 = 1;
          v76 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 992),
            ",",
            (const std::allocator<char> *)(v97 + 96));
          v75 = 1;
          v74 = 1;
          v56 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 3uLL);
          if ( common::tools::StringUtils::splitToList<float>(v56, (const std::string *)(v97 + 992), v55, 0) )
            goto LABEL_65;
          v57 = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 320) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 320) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 320) >> 3) + 0x7FFF8000) <= 3 )
          {
            v57 = (std::map<data::ElementType,std::vector<float>> *)(v97 + 320);
            __asan_report_store4(v97 + 320, v97 + 992);
          }
          *(_DWORD *)(v97 + 320) = 4;
          v73 = 1;
          v58 = std::map<data::ElementType,std::vector<float>>::operator[](
                  v57,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 320));
          *(_DWORD *)(((v97 + 1056) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 112) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 112);
          v72 = 1;
          v71 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 1056),
            ",",
            (const std::allocator<char> *)(v97 + 112));
          v70 = 1;
          v69 = 1;
          v59 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 4uLL);
          if ( common::tools::StringUtils::splitToList<float>(v59, (const std::string *)(v97 + 1056), v58, 0) )
            goto LABEL_65;
          v60 = &this->player_force_param_map_;
          *(_BYTE *)(((v97 + 336) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v97 + 336) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v97 + 336) >> 3) + 0x7FFF8000) <= 3 )
          {
            v60 = (std::map<data::ElementType,std::vector<float>> *)(v97 + 336);
            __asan_report_store4(v97 + 336, v97 + 1248);
          }
          *(_DWORD *)(v97 + 336) = 8;
          v68 = 1;
          v61 = std::map<data::ElementType,std::vector<float>>::operator[](
                  v60,
                  (std::map<data::ElementType,std::vector<float>>::key_type *)(v97 + 336));
          *(_DWORD *)(((v97 + 1120) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v97 + 128) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v97 + 128);
          v41 = 1;
          v42 = 1;
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v97 + 1120),
            ",",
            (const std::allocator<char> *)(v97 + 128));
          v43 = 1;
          v44 = 1;
          v62 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v97 + 352), 5uLL);
          if ( common::tools::StringUtils::splitToList<float>(v62, (const std::string *)(v97 + 1120), v61, 0) )
LABEL_65:
            v63 = 1;
          else
            v63 = 0;
          if ( v44 )
            std::string::~string((void *)(v97 + 1120));
          if ( v43 )
            *(_DWORD *)(((v97 + 1120) >> 3) + 0x7FFF8000) = -117901064;
          if ( v42 )
            std::allocator<char>::~allocator(v97 + 128);
          if ( v41 )
            *(_BYTE *)(((v97 + 128) >> 3) + 0x7FFF8000) = -8;
          if ( v68 )
            *(_BYTE *)(((v97 + 336) >> 3) + 0x7FFF8000) = -8;
          if ( v69 )
            std::string::~string((void *)(v97 + 1056));
          if ( v70 )
            *(_DWORD *)(((v97 + 1056) >> 3) + 0x7FFF8000) = -117901064;
          if ( v71 )
            std::allocator<char>::~allocator(v97 + 112);
          if ( v72 )
            *(_BYTE *)(((v97 + 112) >> 3) + 0x7FFF8000) = -8;
          if ( v73 )
            *(_BYTE *)(((v97 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v74 )
            std::string::~string((void *)(v97 + 992));
          if ( v75 )
            *(_DWORD *)(((v97 + 992) >> 3) + 0x7FFF8000) = -117901064;
          if ( v76 )
            std::allocator<char>::~allocator(v97 + 96);
          if ( v77 )
            *(_BYTE *)(((v97 + 96) >> 3) + 0x7FFF8000) = -8;
          if ( v78 )
            *(_BYTE *)(((v97 + 304) >> 3) + 0x7FFF8000) = -8;
          if ( v79 )
            std::string::~string((void *)(v97 + 928));
          if ( v80 )
            *(_DWORD *)(((v97 + 928) >> 3) + 0x7FFF8000) = -117901064;
          if ( v81 )
            std::allocator<char>::~allocator(v97 + 80);
          if ( v82 )
            *(_BYTE *)(((v97 + 80) >> 3) + 0x7FFF8000) = -8;
          if ( v83 )
            *(_BYTE *)(((v97 + 288) >> 3) + 0x7FFF8000) = -8;
          if ( v84 )
            std::string::~string((void *)(v97 + 864));
          if ( v85 )
            *(_DWORD *)(((v97 + 864) >> 3) + 0x7FFF8000) = -117901064;
          if ( v86 )
            std::allocator<char>::~allocator(v97 + 64);
          if ( v87 )
            *(_BYTE *)(((v97 + 64) >> 3) + 0x7FFF8000) = -8;
          if ( v88 )
            *(_BYTE *)(((v97 + 272) >> 3) + 0x7FFF8000) = -8;
          if ( v89 )
            std::string::~string((void *)(v97 + 800));
          if ( v90 )
            *(_DWORD *)(((v97 + 800) >> 3) + 0x7FFF8000) = -117901064;
          if ( v92 )
            std::allocator<char>::~allocator(v97 + 48);
          if ( v94 )
            *(_BYTE *)(((v97 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v96 )
            *(_BYTE *)(((v97 + 256) >> 3) + 0x7FFF8000) = -8;
          if ( v63 )
          {
            *(_DWORD *)(((v97 + 1184) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v97 + 1184) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v97 + 1215) >> 3) + 0x7FFF8000) != 0
              && (char)((v97 - 96 + 31) & 7) >= *(_BYTE *)(((v97 + 1215) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v97 + 1184, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v97 + 1184),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteCombatForceParam",
              1007);
            v64 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v97 + 1184),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v65 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                    v64,
                    (const char (*)[62])"parse CONST_VALUE_PLAYER_COMBAT_FORCE_PARAM fails, value_vec:");
            common::milog::MiLogStream::operator<<<std::string>(v65, (const std::vector<std::string> *)(v97 + 352));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v97 + 1184));
            *(_DWORD *)(((v97 + 1184) >> 3) + 0x7FFF8000) = -117901064;
            v3 = -1;
          }
          else
          {
            v3 = 0;
          }
        }
      }
    }
    std::vector<std::string>::~vector((std::vector<std::string> *const)(v97 + 416));
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v97 + 352));
  if ( v99 == (char *)v97 )
  {
    *(_QWORD *)((v97 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v97 >> 3) + 0x7FFF8094) = 0LL;
    memset(
      (void *)((unsigned __int64)(v67 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v67 + 2147450880 - (((_DWORD)v67 + 2147450888) & 0xFFFFFFF8) + 156) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v97 = 1172321806LL;
    __asan_stack_free_5(v97, 1248LL, v99);
  }
  return v3;
};

// Line 1015: range 000000000E12DC66-000000000E12EAD5
int32_t __cdecl ConstValueExcelConfigMgr::rewriteEnergyRechargeRatio(ConstValueExcelConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int v6; // eax
  std::vector<std::string>::size_type v7; // r15
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  _BOOL4 v10; // edx
  unsigned __int64 v11; // rax
  const std::string *v12; // rax
  bool v13; // r15
  common::milog::MiLogStream *v14; // rax
  int v15; // r15d
  common::milog::MiLogStream *v16; // rax
  std::array<float,4>::size_type v17; // r15
  std::array<float,4>::size_type v18; // r15
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  std::vector<float>::reference v21; // rax
  int *v22; // rdx
  std::array<float,4> *p_energy_ratio_cur_avatar; // rcx
  std::array<float,4>::size_type v24; // rsi
  std::array<float,4>::reference v25; // rax
  _DWORD *v26; // rdx
  char v27; // cl
  std::vector<float>::reference v28; // rax
  int *v29; // rdx
  std::array<float,4> *p_energy_ratio_other_avatar; // rcx
  std::array<float,4>::size_type v31; // rsi
  std::array<float,4>::reference v32; // rax
  _DWORD *v33; // rdx
  char v34; // cl
  unsigned __int64 v35; // rax
  int v36; // edx
  int32_t result; // eax
  int v38; // [rsp+14h] [rbp-27Ch]
  int v39; // [rsp+14h] [rbp-27Ch]
  char v40[624]; // [rsp+20h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v40;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "10 32 1 9 <unknown> 48 4 8 idx:1023 64 24 14 param_vec:1016 128 24 14 ratio_vec:1031 192 32 9 <u"
                        "nknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteEnergyRechargeRatio;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556927;
  v4[536862722] = -234881024;
  v4[536862723] = -218959118;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 64));
  if ( ConstValueExcelConfigMgr::findConstValue<std::string>(
         this,
         CONST_VALUE_ENERGY_RECHANGE_RATIO,
         (std::vector<std::string> *)(v2 + 64)) )
  {
    if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteEnergyRechargeRatio",
      1019);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
      v5,
      (const char (*)[55])"findConstValue CONST_VALUE_ENERGY_RECHANGE_RATIO fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    v1 = -1;
  }
  else
  {
    v6 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v6 != 0 && (char)v6 <= 3 )
      __asan_report_store4(v2 + 48, 98LL);
    for ( *(_DWORD *)(v2 + 48) = 0; ; ++*(_DWORD *)(v2 + 48) )
    {
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
      if ( *(_DWORD *)(v2 + 48) > 3u )
        break;
      v7 = *(unsigned int *)(v2 + 48);
      if ( v7 < std::vector<std::string>::size((const std::vector<std::string> *const)(v2 + 64)) )
      {
        v11 = ((v2 + 128) >> 3) + 2147450880;
        *(_WORD *)v11 = 0;
        *(_BYTE *)(v11 + 2) = 0;
        std::vector<float>::vector((std::vector<float> *const)(v2 + 128));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v2 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v2 + 320),
          ",",
          (const std::allocator<char> *)(v2 + 32));
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        v12 = std::vector<std::string>::operator[](
                (std::vector<std::string> *const)(v2 + 64),
                *(unsigned int *)(v2 + 48));
        v13 = common::tools::StringUtils::splitToList<float>(
                v12,
                (const std::string *)(v2 + 320),
                (std::vector<float> *)(v2 + 128),
                0) != 0;
        std::string::~string((void *)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v2 + 32);
        *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
        if ( v13 )
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
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteEnergyRechargeRatio",
            1034);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            v14,
            (const char (*)[46])"CONST_VALUE_ENERGY_RECHANGE_RATIO parse error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          v1 = -1;
          v15 = 0;
        }
        else if ( std::vector<float>::size((const std::vector<float> *const)(v2 + 128)) == 2 )
        {
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v17 = *(unsigned int *)(v2 + 48);
          if ( v17 >= std::array<float,4ul>::size(&this->energy_ratio_cur_avatar_) )
            goto LABEL_34;
          if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 48);
          v18 = *(unsigned int *)(v2 + 48);
          if ( v18 < std::array<float,4ul>::size(&this->energy_ratio_other_avatar_) )
            v19 = 0;
          else
LABEL_34:
            v19 = 1;
          if ( v19 )
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
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteEnergyRechargeRatio",
              1046);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
              v20,
              (const char (*)[46])"CONST_VALUE_ENERGY_RECHANGE_RATIO parse error");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
            v15 = 0;
          }
          else
          {
            v21 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 128), 0LL);
            v22 = (int *)v21;
            if ( *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v21 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v21 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v21);
            }
            v38 = *v22;
            p_energy_ratio_cur_avatar = &this->energy_ratio_cur_avatar_;
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 48);
            v24 = *(unsigned int *)(v2 + 48);
            v25 = std::array<float,4ul>::operator[](p_energy_ratio_cur_avatar, v24);
            v26 = v25;
            v27 = *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000);
            if ( v27 != 0 && (char)(((unsigned __int8)v25 & 7) + 3) >= v27 )
            {
              LOBYTE(v24) = v27 != 0;
              __asan_report_store4(v25, v24);
            }
            *v26 = v38;
            v28 = std::vector<float>::operator[]((std::vector<float> *const)(v2 + 128), 1uLL);
            v29 = (int *)v28;
            if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v28);
            }
            v39 = *v29;
            p_energy_ratio_other_avatar = &this->energy_ratio_other_avatar_;
            if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v2 + 48);
            v31 = *(unsigned int *)(v2 + 48);
            v32 = std::array<float,4ul>::operator[](p_energy_ratio_other_avatar, v31);
            v33 = v32;
            v34 = *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000);
            if ( v34 != 0 && (char)(((unsigned __int8)v32 & 7) + 3) >= v34 )
            {
              LOBYTE(v31) = v34 != 0;
              __asan_report_store4(v32, v31);
            }
            *v33 = v39;
            v15 = 1;
          }
        }
        else
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
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteEnergyRechargeRatio",
            1040);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
            v16,
            (const char (*)[46])"CONST_VALUE_ENERGY_RECHANGE_RATIO parse error");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          v1 = -1;
          v15 = 0;
        }
        std::vector<float>::~vector((std::vector<float> *const)(v2 + 128));
        v10 = v15 == 1;
      }
      else
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
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteEnergyRechargeRatio",
          1027);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
               v8,
               (const char (*)[50])"CONST_VALUE_ENERGY_RECHANGE_RATIO size less than ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, (const unsigned int *)(v2 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
        v1 = -1;
        v10 = 0;
      }
      v35 = ((v2 + 128) >> 3) + 2147450880;
      *(_WORD *)v35 = -1800;
      *(_BYTE *)(v35 + 2) = -8;
      if ( !v10 )
      {
        v36 = 0;
        goto LABEL_60;
      }
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 48);
    }
    v36 = 1;
LABEL_60:
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v36 == 1 )
      v1 = 0;
  }
  std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 64));
  result = v1;
  if ( v40 == (char *)v2 )
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
  }
  return result;
};

// Line 1058: range 000000000E12EAD6-000000000E12F22D
int32_t __cdecl ConstValueExcelConfigMgr::rewriteDailyTaskParam(ConstValueExcelConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  bool v5; // r15
  common::milog::MiLogStream *v6; // rax
  int v7; // eax
  common::milog::MiLogStream *v8; // rax
  unsigned int *M_current; // r15
  std::vector<unsigned int>::iterator v10; // rax
  std::vector<unsigned int> *v11; // rax
  std::vector<unsigned int> *v12; // rdx
  _BOOL4 v13; // r15d
  int32_t result; // eax
  bool is_empty; // [rsp+17h] [rbp-1C9h]
  data::ConstValueExcelConfig *custom_config_ptr; // [rsp+18h] [rbp-1C8h]
  const std::vector<std::string> *__for_range; // [rsp+20h] [rbp-1C0h]
  const std::string *str; // [rsp+28h] [rbp-1B8h]
  char v19[432]; // [rsp+30h] [rbp-1B0h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "7 48 1 9 <unknown> 64 8 16 __for_begin:1075 96 8 14 __for_end:1075 128 24 16 task_id_vec:1073 19"
                        "2 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteDailyTaskParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -234881024;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  custom_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 133LL);
  if ( !custom_config_ptr )
    goto LABEL_25;
  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 128));
  is_empty = 0;
  __for_range = &custom_config_ptr->value;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, 133LL);
  *(std::vector<std::string>::const_iterator *)(v2 + 64) = std::vector<std::string>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, 133LL);
  *(std::vector<std::string>::const_iterator *)(v2 + 96) = std::vector<std::string>::end(__for_range);
  while ( 1 )
  {
    if ( !__gnu_cxx::operator!=<std::string const*,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 64),
            (const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *)(v2 + 96)) )
    {
      v7 = 1;
      goto LABEL_24;
    }
    str = __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
    std::allocator<char>::allocator(v2 + 48);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)(v2 + 192),
      ",",
      (const std::allocator<char> *)(v2 + 48));
    v5 = common::tools::StringUtils::splitToList<unsigned int>(
           str,
           (const std::string *)(v2 + 192),
           (std::vector<unsigned int> *)(v2 + 128),
           1) != 0;
    std::string::~string((void *)(v2 + 192));
    *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    std::allocator<char>::~allocator(v2 + 48);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    if ( v5 )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteDailyTaskParam",
        1079);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v6, (const char (*)[58])byte_1A30F6C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      v1 = -1;
      v7 = 0;
      goto LABEL_24;
    }
    if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v2 + 128)) )
    {
      is_empty = 1;
      goto LABEL_22;
    }
    if ( is_empty )
      break;
    M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    v10._M_current = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v2 + 128))._M_current;
    std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>>(
      v10,
      (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current);
    v11 = std::move<std::vector<unsigned int> &>((std::vector<unsigned int> *)(v2 + 128));
    std::vector<std::vector<unsigned int>>::emplace_back<std::vector<unsigned int>>(
      &this->daily_task_refresh_times_pool_vec_,
      v11,
      v12);
LABEL_22:
    __gnu_cxx::__normal_iterator<std::string const*,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<const std::string*,std::vector<std::string> > *const)(v2 + 64));
  }
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
    4u,
    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
    "rewriteDailyTaskParam",
    1091);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v2 + 320),
         (const char (*)[16])"[CONFIG_ERROR] ");
  common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v8, (const char (*)[77])byte_1A30F720);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
  *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
  v1 = -1;
  v7 = 0;
LABEL_24:
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  v13 = v7 == 1;
  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 128));
  if ( v13 )
LABEL_25:
    v1 = 0;
  result = v1;
  if ( v19 == (char *)v2 )
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

// Line 1103: range 000000000E12F22E-000000000E12F409
int32_t __cdecl ConstValueExcelConfigMgr::rewriteHomeLimitedShopTime(ConstValueExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  uint32_t close_time; // [rsp+10h] [rbp-10h]
  uint32_t guest_open_time; // [rsp+14h] [rbp-Ch]
  uint32_t open_time; // [rsp+1Ch] [rbp-4h]

  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_limited_shop_original_open_time_);
  }
  open_time = this->home_limited_shop_original_open_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_limited_shop_original_close_time_);
  }
  close_time = this->home_limited_shop_original_close_time_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_limited_shop_original_guest_open_time_);
  }
  guest_open_time = this->home_limited_shop_original_guest_open_time_;
  if ( close_time < open_time )
    close_time += 604800;
  if ( guest_open_time < open_time )
    guest_open_time += 604800;
  v1 = (((_BYTE)this + 20) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_open_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_open_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_limited_shop_open_time_, v1);
  }
  this->home_limited_shop_open_time_ = open_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_close_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_close_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->home_limited_shop_close_time_, v1);
  }
  this->home_limited_shop_close_time_ = close_time;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_guest_open_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_guest_open_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_store4(&this->home_limited_shop_guest_open_time_, (((_BYTE)this + 28) & 7u) + 3);
  }
  this->home_limited_shop_guest_open_time_ = guest_open_time;
  return 0;
};

// Line 1125: range 000000000E12F40A-000000000E130A46
int32_t __cdecl ConstValueExcelConfigMgr::rewriteWeeklyBossResinDiscountParam(ConstValueExcelConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  const std::string *v17; // rax
  char *v18; // rsi
  bool v19; // r15
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // r14
  const std::string *v22; // rax
  unsigned __int64 v23; // rax
  bool v24; // r15
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  int v28; // r15d
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // r14
  const std::string *v31; // rax
  __int64 v32; // rsi
  std::vector<unsigned int>::reference v33; // rax
  int *v34; // rdx
  int v35; // ecx
  char v36; // al
  __int64 v37; // rsi
  std::vector<unsigned int>::reference v38; // rax
  int *v39; // rdx
  int v40; // ecx
  char v41; // al
  std::unordered_set<unsigned int> *v42; // rax
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v43; // rax
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // r14
  const std::string *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  unsigned __int64 v50; // rax
  int v51; // edx
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-468h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-460h]
  const std::string *scene_group_str; // [rsp+28h] [rbp-458h]
  char v56[1104]; // [rsp+30h] [rbp-450h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1056LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "20 32 1 9 <unknown> 48 1 9 <unknown> 64 4 13 scene_id:1171 80 4 13 group_id:1172 96 8 16 __for_b"
                        "egin:1158 128 8 14 __for_end:1158 160 24 24 scene_group_str_vec:1152 224 24 12 tmp_vec:1160 288 "
                        "32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 3"
                        "2 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32"
                        " 9 <unknown> 992 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteWeeklyBossResinDiscountParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -234881024;
  v4[536862726] = -218959118;
  v4[536862727] = -234881024;
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
  v4[536862752] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 266LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 2 )
    {
      v6 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v6, &this->weekly_boss_resin_discount_num_limit_, 1) )
      {
        if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 352, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 352),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteWeeklyBossResinDiscountParam",
          1140);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 352),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v7, (const char (*)[62])byte_1A30FA20);
        v9 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        v1 = -1;
      }
      else
      {
        if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 416, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 416),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteWeeklyBossResinDiscountParam",
          1143);
        v10 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[78])byte_1A30FA80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v10,
          &this->weekly_boss_resin_discount_num_limit_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        v11 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
        if ( common::tools::StringUtils::strToNum<float>(v11, &this->weekly_boss_resin_discount_ratio_, 1) )
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
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteWeeklyBossResinDiscountParam",
            1147);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 480),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v12, (const char (*)[56])byte_1A30FB00);
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
          v1 = -1;
        }
        else
        {
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteWeeklyBossResinDiscountParam",
            1150);
          v15 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                  (common::milog::MiLogStream *const)(v2 + 544),
                  (const char (*)[68])byte_1A30FB60);
          common::milog::MiLogStream::operator<<<float,(float *)0>(v15, &this->weekly_boss_resin_discount_ratio_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
          *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v16 = ((v2 + 160) >> 3) + 2147450880;
          *(_WORD *)v16 = 0;
          *(_BYTE *)(v16 + 2) = 0;
          std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 160));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 32);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 608),
            ";",
            (const std::allocator<char> *)(v2 + 32));
          v17 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
          v18 = (char *)(v2 + 608);
          v19 = common::tools::StringUtils::splitToList(
                  v17,
                  (const std::string *)(v2 + 608),
                  (std::vector<std::string> *)(v2 + 160),
                  0) != 0;
          std::string::~string((void *)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 32);
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          if ( v19 )
          {
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 672) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 703) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 672, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 672),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteWeeklyBossResinDiscountParam",
              1155);
            v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v21 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                    v20,
                    (const char (*)[44])byte_1A30FC20);
            v22 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v21, v22);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
          }
          else
          {
            __for_range = (std::vector<std::string> *)(v2 + 160);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 96, v18);
            *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::begin(__for_range);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, v18);
            *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::end(__for_range);
            while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96),
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128)) )
            {
              scene_group_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
              v23 = ((v2 + 224) >> 3) + 2147450880;
              *(_WORD *)v23 = 0;
              *(_BYTE *)(v23 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 224));
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 48);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 736),
                ":",
                (const std::allocator<char> *)(v2 + 48));
              v24 = common::tools::StringUtils::splitToList<unsigned int>(
                      scene_group_str,
                      (const std::string *)(v2 + 736),
                      (std::vector<unsigned int> *)(v2 + 224),
                      0) != 0;
              std::string::~string((void *)(v2 + 736));
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 48);
              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
              if ( v24 )
              {
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v2 + 800) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 831) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 800, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 800),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteWeeklyBossResinDiscountParam",
                  1163);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v25,
                        (const char (*)[44])byte_1A30FC20);
                v27 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v28 = 0;
              }
              else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 224)) == 2 )
              {
                *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
                v32 = 0LL;
                v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 224), 0LL);
                v34 = (int *)v33;
                if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v33);
                }
                v35 = *v34;
                v36 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
                if ( v36 != 0 && v36 <= 3 )
                {
                  LOBYTE(v32) = v36 != 0;
                  __asan_report_store4(v2 + 64, v32);
                }
                *(_DWORD *)(v2 + 64) = v35;
                *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                v37 = 1LL;
                v38 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 224), 1uLL);
                v39 = (int *)v38;
                if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v38);
                }
                v40 = *v39;
                v41 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                if ( v41 != 0 && v41 <= 3 )
                {
                  LOBYTE(v37) = v41 != 0;
                  __asan_report_store4(v2 + 80, v37);
                }
                *(_DWORD *)(v2 + 80) = v40;
                v42 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
                        &this->world_weekly_boss_config_map_,
                        (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v2 + 64));
                v43 = std::unordered_set<unsigned int>::emplace<unsigned int &>(
                        v42,
                        (unsigned int *)(v2 + 80),
                        (unsigned int *)v42);
                if ( !v43.second )
                {
                  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 928) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 959) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 928, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 928),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                    "rewriteWeeklyBossResinDiscountParam",
                    1175);
                  v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 928),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v45 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                          v44,
                          (const char (*)[44])byte_1A30FC20);
                  v46 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v45, v46);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                  v1 = -1;
                  v28 = 0;
                }
                else
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
                    1u,
                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                    "rewriteWeeklyBossResinDiscountParam",
                    1178);
                  v47 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                          (common::milog::MiLogStream *const)(v2 + 992),
                          (const char (*)[40])byte_1A30FCC0);
                  v48 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v47,
                          (const unsigned int *)(v2 + 64));
                  v49 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(
                          v48,
                          (const char (*)[13])" ,group_id: ");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v49,
                    (const unsigned int *)(v2 + 80));
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                  *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                  v28 = 1;
                }
              }
              else
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
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteWeeklyBossResinDiscountParam",
                  1168);
                v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 864),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v30 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                        v29,
                        (const char (*)[44])byte_1A30FC20);
                v31 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v30, v31);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                v28 = 0;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 224));
              v50 = ((v2 + 224) >> 3) + 2147450880;
              *(_WORD *)v50 = -1800;
              *(_BYTE *)(v50 + 2) = -8;
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
              if ( v28 != 1 )
              {
                v51 = 0;
                goto LABEL_59;
              }
              __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
            }
            v51 = 1;
LABEL_59:
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v51 == 1 )
              v1 = 0;
          }
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 160));
        }
      }
    }
    else
    {
      v1 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteWeeklyBossResinDiscountParam",
      1129);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 288),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
      v5,
      (const char (*)[79])"findConstValueExcelConfig failed: CONST_VALUE_WEEKLY_BOSS_RESIN_DISCOUNT_PARAM");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
    v1 = -1;
  }
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8068) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8070) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8080) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1056LL, v56);
  }
  return v1;
};

// Line 1185: range 000000000E130A48-000000000E131107
int32_t __cdecl ConstValueExcelConfigMgr::rewriteCanNotDestroyMaterialTypeSet(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-1B8h]
  char v12[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 32"
                        "0 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteCanNotDestroyMaterialTypeSet;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 272LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::empty(&config_ptr->value) )
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteCanNotDestroyMaterialTypeSet",
        1194);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
        v6,
        (const char (*)[63])"value is empty: CONST_VALUE_CAN_NOT_DESTROY_MATERIAL_TYPE_LIST");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
    else
    {
      std::allocator<char>::allocator(v1 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 192),
        ";",
        (const std::allocator<char> *)(v1 + 48));
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      v8 = common::tools::StringUtils::splitToEnumSet<data::MaterialType>(
             v7,
             (const std::string *)(v1 + 192),
             &this->can_not_destroy_material_type_set_,
             0) != 0;
      std::string::~string((void *)(v1 + 192));
      *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 48);
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCanNotDestroyMaterialTypeSet",
          1199);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
          v9,
          (const char (*)[59])"split fail: CONST_VALUE_CAN_NOT_DESTROY_MATERIAL_TYPE_LIST");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
        result = -1;
      }
      else
      {
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCanNotDestroyMaterialTypeSet",
          1202);
        v10 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                (common::milog::MiLogStream *const)(v1 + 320),
                (const char (*)[48])"CONST_VALUE_CAN_NOT_DESTROY_MATERIAL_TYPE_LIST:");
        common::milog::MiLogStream::operator<<<data::MaterialType>(v10, &this->can_not_destroy_material_type_set_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        result = 0;
      }
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteCanNotDestroyMaterialTypeSet",
      1189);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
      v4,
      (const char (*)[79])"findConstValueExcelConfig fail: CONST_VALUE_CAN_NOT_DESTROY_MATERIAL_TYPE_LIST");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v12 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1207: range 000000000E131108-000000000E132ABE
int32_t __cdecl ConstValueExcelConfigMgr::rewriteChessCardParam(ConstValueExcelConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const std::string *v9; // rax
  common::milog::MiLogStream *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  unsigned __int64 v16; // rax
  const std::string *v17; // rax
  char *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  const std::string *v21; // rax
  unsigned __int64 v22; // rax
  char *v23; // rsi
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  unsigned int *v32; // rcx
  const unsigned int *v33; // rax
  common::milog::MiLogStream *v34; // rax
  const unsigned int *v35; // rax
  unsigned __int64 v36; // rax
  int v37; // edx
  unsigned __int64 v38; // rax
  unsigned __int64 v39; // rax
  int v40; // edx
  bool numd; // [rsp+0h] [rbp-5B0h]
  bool nume; // [rsp+0h] [rbp-5B0h]
  _BOOL4 num; // [rsp+0h] [rbp-5B0h]
  bool numf; // [rsp+0h] [rbp-5B0h]
  int numa; // [rsp+0h] [rbp-5B0h]
  unsigned int *numb; // [rsp+0h] [rbp-5B0h]
  common::milog::MiLogStream *numg; // [rsp+0h] [rbp-5B0h]
  common::milog::MiLogStream *numh; // [rsp+0h] [rbp-5B0h]
  int numc; // [rsp+0h] [rbp-5B0h]
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-598h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-590h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference card_config_str; // [rsp+28h] [rbp-588h]
  std::vector<std::string> *__for_range_0; // [rsp+30h] [rbp-580h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference card_pair_str; // [rsp+38h] [rbp-578h]
  char v56[1392]; // [rsp+40h] [rbp-570h] BYREF

  v2 = (unsigned __int64)v56;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "25 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 8 16 __for_begin:1243 128 8 14 __for_en"
                        "d:1243 160 8 16 __for_begin:1252 192 8 14 __for_end:1252 224 8 9 <unknown> 256 24 24 card_config"
                        "_str_vec:1236 320 24 22 card_pair_str_vec:1245 384 24 21 card_id_pair_vec:1251 448 24 16 card_id"
                        "_vec:1254 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <"
                        "unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 9 "
                        "<unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteChessCardParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -234753535;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -234881024;
  v4[536862729] = -218959118;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
  v4[536862733] = -218959118;
  v4[536862734] = -234881024;
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
  v4[536862761] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 425LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 2 )
    {
      v6 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<float>(v6, &this->chess_pick_card_discount_ratio_, 1) )
      {
        if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 607) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 576, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 576),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteChessCardParam",
          1222);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 576),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v7, (const char (*)[55])byte_1A3102C0);
        v9 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
        v1 = -1;
      }
      else
      {
        if ( *(char *)(((v2 + 640) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 671) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 640, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 640),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteChessCardParam",
          1226);
        v10 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)(v2 + 640),
                (const char (*)[42])"[CHESS] chess_pick_card_discount_ratio_: ");
        common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &this->chess_pick_card_discount_ratio_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
        *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
        v11 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
        if ( common::tools::StringUtils::strToNum<float>(v11, &this->chess_curse_card_prob_, 1) )
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
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteChessCardParam",
            1230);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 704),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v12, (const char (*)[52])byte_1A310380);
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
          v1 = -1;
        }
        else
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
            1u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteChessCardParam",
            1234);
          v15 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                  (common::milog::MiLogStream *const)(v2 + 768),
                  (const char (*)[33])"[CHESS] chess_curse_card_prob_: ");
          common::milog::MiLogStream::operator<<<float,(float *)0>(v15, &this->chess_curse_card_prob_);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
          *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
          v16 = ((v2 + 256) >> 3) + 2147450880;
          *(_WORD *)v16 = 0;
          *(_BYTE *)(v16 + 2) = 0;
          std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 256));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 832),
            ";",
            (const std::allocator<char> *)(v2 + 48));
          v17 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
          v18 = (char *)(v2 + 832);
          numd = common::tools::StringUtils::splitToList(
                   v17,
                   (const std::string *)(v2 + 832),
                   (std::vector<std::string> *)(v2 + 256),
                   0) != 0;
          std::string::~string((void *)(v2 + 832));
          *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 48);
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( numd )
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
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteChessCardParam",
              1239);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    v19,
                    (const char (*)[46])byte_1A310440);
            v21 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, v21);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
          }
          else
          {
            __for_range = (std::vector<std::string> *)(v2 + 256);
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 96, v18);
            *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::begin(__for_range);
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
              __asan_report_store8(v2 + 128, v18);
            *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::end(__for_range);
            while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96),
                      (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128)) )
            {
              card_config_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
              v22 = ((v2 + 320) >> 3) + 2147450880;
              *(_WORD *)v22 = 0;
              *(_BYTE *)(v22 + 2) = 0;
              std::vector<std::string>::vector((std::vector<std::string> *const)(v2 + 320));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v2 + 64);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v2 + 960),
                ",",
                (const std::allocator<char> *)(v2 + 64));
              v23 = (char *)(v2 + 960);
              nume = common::tools::StringUtils::splitToList(
                       card_config_str,
                       (const std::string *)(v2 + 960),
                       (std::vector<std::string> *)(v2 + 320),
                       0) != 0;
              std::string::~string((void *)(v2 + 960));
              *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v2 + 64);
              *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
              if ( nume )
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
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteChessCardParam",
                  1248);
                v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1024),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v25 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                        v24,
                        (const char (*)[46])byte_1A310440);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v25, card_config_str);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
                *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                v1 = -1;
                num = 0;
              }
              else
              {
                v26 = ((v2 + 384) >> 3) + 2147450880;
                *(_WORD *)v26 = 0;
                *(_BYTE *)(v26 + 2) = 0;
                std::vector<std::pair<unsigned int,unsigned int>>::vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 384));
                __for_range_0 = (std::vector<std::string> *)(v2 + 320);
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 160, v23);
                *(std::vector<std::string>::iterator *)(v2 + 160) = std::vector<std::string>::begin(__for_range_0);
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 192, v23);
                *(std::vector<std::string>::iterator *)(v2 + 192) = std::vector<std::string>::end(__for_range_0);
                while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                          (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 160),
                          (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 192)) )
                {
                  card_pair_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 160));
                  v27 = ((v2 + 448) >> 3) + 2147450880;
                  *(_WORD *)v27 = 0;
                  *(_BYTE *)(v27 + 2) = 0;
                  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 448));
                  *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = 0;
                  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 1;
                  std::allocator<char>::allocator(v2 + 80);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v2 + 1088),
                    ":",
                    (const std::allocator<char> *)(v2 + 80));
                  numf = common::tools::StringUtils::splitToList<unsigned int>(
                           card_pair_str,
                           (const std::string *)(v2 + 1088),
                           (std::vector<unsigned int> *)(v2 + 448),
                           0) != 0;
                  std::string::~string((void *)(v2 + 1088));
                  *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v2 + 80);
                  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                  if ( numf )
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
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "rewriteChessCardParam",
                      1257);
                    v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1152),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v29 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            v28,
                            (const char (*)[46])byte_1A310440);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, card_pair_str);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
                    *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
                    v1 = -1;
                    numa = 0;
                  }
                  else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 448)) == 2 )
                  {
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
                    numb = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 448), 1uLL);
                    v32 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 448), 0LL);
                    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 224, 0LL);
                    *(std::pair<unsigned int,unsigned int> *)(v2 + 224) = std::make_pair<unsigned int &,unsigned int &>(
                                                                            v32,
                                                                            numb);
                    std::vector<std::pair<unsigned int,unsigned int>>::push_back(
                      (std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 384),
                      (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 224));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
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
                      1u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "rewriteChessCardParam",
                      1268);
                    numg = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                             (common::milog::MiLogStream *const)(v2 + 1280),
                             (const char (*)[18])"[CHESS] card_id: ");
                    v33 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 448), 0LL);
                    v34 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(numg, v33);
                    numh = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                             v34,
                             (const char (*)[18])" ,curse_card_id: ");
                    v35 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 448), 1uLL);
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(numh, v35);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                    *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
                    numa = 1;
                  }
                  else
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
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "rewriteChessCardParam",
                      1263);
                    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1216),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v31 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                            v30,
                            (const char (*)[46])byte_1A310440);
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, card_pair_str);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                    *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
                    v1 = -1;
                    numa = 0;
                  }
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 448));
                  v36 = ((v2 + 448) >> 3) + 2147450880;
                  *(_WORD *)v36 = -1800;
                  *(_BYTE *)(v36 + 2) = -8;
                  if ( numa != 1 )
                  {
                    v37 = 0;
                    goto LABEL_59;
                  }
                  __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 160));
                }
                v37 = 1;
LABEL_59:
                *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
                *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
                if ( v37 == 1 )
                {
                  std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::push_back(
                    &this->chess_teach_dungeon_card_config_vec_,
                    (const std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::value_type *)(v2 + 384));
                  numc = 1;
                }
                else
                {
                  numc = 0;
                }
                std::vector<std::pair<unsigned int,unsigned int>>::~vector((std::vector<std::pair<unsigned int,unsigned int>> *const)(v2 + 384));
                num = numc == 1;
              }
              std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 320));
              v38 = ((v2 + 320) >> 3) + 2147450880;
              *(_WORD *)v38 = -1800;
              *(_BYTE *)(v38 + 2) = -8;
              v39 = ((v2 + 384) >> 3) + 2147450880;
              *(_WORD *)v39 = -1800;
              *(_BYTE *)(v39 + 2) = -8;
              if ( !num )
              {
                v40 = 0;
                goto LABEL_67;
              }
              __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
            }
            v40 = 1;
LABEL_67:
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
            *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
            if ( v40 == 1 )
              v1 = 0;
          }
          std::vector<std::string>::~vector((std::vector<std::string> *const)(v2 + 256));
        }
      }
    }
    else
    {
      v1 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 512, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 512),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteChessCardParam",
      1211);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 512),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      v5,
      (const char (*)[64])"findConstValueExcelConfig failed: CONST_VALUE_CHESS_CARD_CONFIG");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
    v1 = -1;
  }
  if ( v56 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8044) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8054) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF80A0) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862745) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450972 - (((_DWORD)v4 + 2147450980) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1344LL, v56);
  }
  return v1;
};

// Line 1278: range 000000000E132AC0-000000000E133D2A
int32_t __cdecl ConstValueExcelConfigMgr::checkResinConfig(
        ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const std::string *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  const std::string *v9; // rax
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  const std::string *v13; // rax
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  int v18; // eax
  common::milog::MiLogStream *v19; // rax
  unsigned int v20; // ecx
  common::milog::MiLogStream *v21; // rax
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::string *v25; // rax
  int v26; // eax
  common::milog::MiLogStream *v27; // rax
  char *v28; // rsi
  bool v29; // r15
  common::milog::MiLogStream *v30; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  int32_t result; // eax
  data::ConstValueExcelConfig *resin_config_ptr; // [rsp+20h] [rbp-3D0h]
  std::string *cost_string; // [rsp+28h] [rbp-3C8h]
  std::vector<unsigned int> *__for_range; // [rsp+30h] [rbp-3C0h]
  const unsigned int *cost; // [rsp+38h] [rbp-3B8h]
  char v39[944]; // [rsp+40h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v39;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 1 9 <unknown> 64 4 18 max_buy_count:1285 80 4 22 max_recover_count:1285 96 4 19 num_per_bo"
                        "ught:1285 112 4 21 recover_interval:1285 128 8 16 __for_begin:1334 160 8 14 __for_end:1334 192 2"
                        "4 13 cost_vec:1326 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 5"
                        "12 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9 <unknown> 83"
                        "2 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkResinConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
  v5[536862722] = -234556924;
  v5[536862723] = -234556924;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -234881024;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -218959118;
  v5[536862739] = -218959118;
  v5[536862741] = -218959118;
  v5[536862743] = -218959118;
  v5[536862745] = -218959118;
  v5[536862747] = -202116109;
  resin_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 134LL);
  if ( resin_config_ptr )
  {
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 64, 134LL);
    *(_DWORD *)(v3 + 64) = 0;
    if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 80, 134LL);
    *(_DWORD *)(v3 + 80) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 96, 134LL);
    *(_DWORD *)(v3 + 96) = 0;
    if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_store4(v3 + 112, 134LL);
    *(_DWORD *)(v3 + 112) = 0;
    v6 = std::vector<std::string>::operator[](&resin_config_ptr->value, 0LL);
    if ( common::tools::StringUtils::strToNum<unsigned int>(v6, (unsigned int *)(v3 + 64), 1) )
    {
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkResinConfig",
        1288);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v7, (const char (*)[24])byte_1A310700);
      v9 = std::vector<std::string>::operator[](&resin_config_ptr->value, 0LL);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, v9);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
    }
    else
    {
      v10 = std::vector<std::string>::operator[](&resin_config_ptr->value, 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v10, (unsigned int *)(v3 + 80), 1) )
      {
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkResinConfig",
          1293);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v11, (const char (*)[24])byte_1A310700);
        v13 = std::vector<std::string>::operator[](&resin_config_ptr->value, 1uLL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v12, v13);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        v2 = -1;
      }
      else
      {
        v14 = std::vector<std::string>::operator[](&resin_config_ptr->value, 2uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v14, (unsigned int *)(v3 + 112), 1) )
        {
          if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 384, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 384),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkResinConfig",
            1298);
          v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v16 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v15, (const char (*)[24])byte_1A310700);
          v17 = std::vector<std::string>::operator[](&resin_config_ptr->value, 2uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
          v2 = -1;
        }
        else
        {
          v18 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v18 != 0 && (char)v18 <= 3 )
            __asan_report_load4(v3 + 112);
          if ( *(_DWORD *)(v3 + 112) )
          {
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            v20 = *(_DWORD *)(v3 + 64);
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            if ( v20 >= *(_DWORD *)(v3 + 80) )
            {
              v22 = std::vector<std::string>::operator[](&resin_config_ptr->value, 3uLL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v22, (unsigned int *)(v3 + 96), 1) )
              {
                if ( *(char *)(((v3 + 576) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 607) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 576, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 576),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "checkResinConfig",
                  1316);
                v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 576),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v24 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
                        v23,
                        (const char (*)[24])byte_1A310700);
                v25 = std::vector<std::string>::operator[](&resin_config_ptr->value, 3uLL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v25);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 576));
                v2 = -1;
              }
              else
              {
                v26 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
                if ( (_BYTE)v26 != 0 && (char)v26 <= 3 )
                  __asan_report_load4(v3 + 96);
                if ( *(_DWORD *)(v3 + 96) )
                {
                  std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 192));
                  cost_string = std::vector<std::string>::operator[](&resin_config_ptr->value, 4uLL);
                  std::allocator<char>::allocator(v3 + 48);
                  std::string::basic_string<std::allocator<char>>(
                    (std::string *const)(v3 + 704),
                    ",",
                    (const std::allocator<char> *)(v3 + 48));
                  v28 = (char *)(v3 + 704);
                  v29 = common::tools::StringUtils::splitToList<unsigned int>(
                          cost_string,
                          (const std::string *)(v3 + 704),
                          (std::vector<unsigned int> *)(v3 + 192),
                          1) != 0;
                  std::string::~string((void *)(v3 + 704));
                  *(_DWORD *)(((v3 + 704) >> 3) + 0x7FFF8000) = -117901064;
                  std::allocator<char>::~allocator(v3 + 48);
                  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
                  if ( v29 )
                  {
                    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 768) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 799) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 768, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 768),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "checkResinConfig",
                      1330);
                    v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 768),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                      v30,
                      (const char (*)[19])"splitToList failed");
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 768));
                    *(_DWORD *)(((v3 + 768) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                  }
                  else
                  {
                    __for_range = (std::vector<unsigned int> *)(v3 + 192);
                    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 128, v28);
                    *(std::vector<unsigned int>::iterator *)(v3 + 128) = std::vector<unsigned int>::begin(__for_range);
                    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v3 + 160, v28);
                    *(std::vector<unsigned int>::iterator *)(v3 + 160) = std::vector<unsigned int>::end(__for_range);
                    while ( 1 )
                    {
                      if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 128),
                              (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 160)) )
                      {
                        v33 = 1;
                        goto LABEL_68;
                      }
                      v31 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
                      cost = v31;
                      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v31);
                      }
                      if ( !*cost )
                        break;
                      __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 128));
                    }
                    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = 0;
                    if ( *(char *)(((v3 + 832) >> 3) + 0x7FFF8000) < 0
                      || *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) != 0
                      && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 863) >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_store_n(v3 + 832, 32LL);
                    }
                    common::milog::MiLogStream::create(
                      (common::milog::MiLogStream *)(v3 + 832),
                      &common::milog::MiLogDefault::default_log_obj_,
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "checkResinConfig",
                      1338);
                    v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v3 + 832),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
                      v32,
                      (const char (*)[23])byte_1A310820);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 832));
                    *(_DWORD *)(((v3 + 832) >> 3) + 0x7FFF8000) = -117901064;
                    v2 = -1;
                    v33 = 0;
LABEL_68:
                    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
                    if ( v33 == 1 )
                      v2 = 0;
                  }
                  std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 192));
                }
                else
                {
                  if ( *(char *)(((v3 + 640) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) != 0
                    && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 671) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v3 + 640, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v3 + 640),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                    "checkResinConfig",
                    1322);
                  v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 640),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v27,
                    (const char (*)[29])byte_1A3107E0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 640));
                  v2 = -1;
                }
              }
            }
            else
            {
              if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 512, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 512),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "checkResinConfig",
                1310);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v21, (const char (*)[50])byte_1A310780);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
              v2 = -1;
            }
          }
          else
          {
            if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkResinConfig",
              1304);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v19, (const char (*)[29])byte_1A310740);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
            v2 = -1;
          }
        }
      }
    }
  }
  else
  {
    v2 = -1;
  }
  result = v2;
  if ( v39 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF804C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8054) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF805C) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8064) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF806C) = 0;
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
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1346: range 000000000E133D2C-000000000E1349D5
int32_t __cdecl ConstValueExcelConfigMgr::checkEnvAnimalConfig(ConstValueExcelConfigMgr *const this)
{
  __int64 v1; // rsi
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  unsigned int *v6; // r9
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int v9; // eax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  common::milog::MiLogStream *v19; // rax
  unsigned int *v20; // [rsp+0h] [rbp-290h]
  unsigned int *v21; // [rsp+0h] [rbp-290h]
  ConstValueExcelConfigMgr *thisa; // [rsp+8h] [rbp-288h]
  unsigned int *v23[80]; // [rsp+10h] [rbp-280h] BYREF

  v2 = (unsigned __int64)v23;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(608LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "14 48 4 25 env_refresh_interval:1347 64 4 27 env_refresh_max_radius:1347 80 4 21 env_refresh_tim"
                        "e:1347 96 4 27 env_refresh_min_radius:1347 112 4 26 firworm_escape_radius:1373 128 4 27 fireworm"
                        "_appear_radius:1373 144 4 23 firworm_escape_num:1373 160 32 9 <unknown> 224 32 9 <unknown> 288 3"
                        "2 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkEnvAnimalConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -234556924;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, v1);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64, v1);
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 80, v1);
  *(_DWORD *)(v2 + 80) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 96, v1);
  *(_DWORD *)(v2 + 96) = 0;
  v5 = 58LL;
  if ( ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &>(
         this,
         CONST_VALUE_ENV_ANIMAL_REFRESH,
         (unsigned int *)(v2 + 48),
         (unsigned int *)(v2 + 64),
         (unsigned int *)(v2 + 80),
         (unsigned int *)(v2 + 96),
         v20,
         (unsigned int *)this,
         v23[0]) )
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkEnvAnimalConfig",
      1350);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
      v7,
      (const char (*)[41])"CONST_VALUE_ENV_ANIMAL_REFRESH not found");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    v9 = *(unsigned __int8 *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v9 != 0 && (char)v9 <= 3 )
      __asan_report_load4(v2 + 48);
    if ( *(_DWORD *)(v2 + 48) > 4u )
    {
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 80);
      if ( *(_DWORD *)(v2 + 80) )
      {
        if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 64);
        v12 = *(_DWORD *)(v2 + 64);
        v13 = *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000);
        LOBYTE(v5) = v13 != 0;
        if ( v13 != 0 && v13 <= 3 )
          __asan_report_load4(v2 + 96);
        if ( v12 > *(_DWORD *)(v2 + 96) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&thisa->env_animal_max_count_in_scene_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&thisa->env_animal_max_count_in_scene_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&thisa->env_animal_max_count_in_scene_);
          }
          if ( thisa->env_animal_max_count_in_scene_ <= 0xC8 )
          {
            if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 112, v5);
            *(_DWORD *)(v2 + 112) = 0;
            if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 128, v5);
            *(_DWORD *)(v2 + 128) = 0;
            if ( *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 144) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 144, v5);
            *(_DWORD *)(v2 + 144) = 0;
            if ( ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &>(
                   thisa,
                   CONST_VALUE_FIREWORM_ESCAPE_PARMA,
                   (unsigned int *)(v2 + 112),
                   (unsigned int *)(v2 + 128),
                   (unsigned int *)(v2 + 144),
                   v6,
                   v21) )
            {
              if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 480, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 480),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "checkEnvAnimalConfig",
                1376);
              v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 480),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                v17,
                (const char (*)[40])"CONST_VALUE_ENV_ANIMAL_ESCPAE not found");
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
              result = -1;
            }
            else
            {
              v18 = *(unsigned __int8 *)(((v2 + 112) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v18 != 0 && (char)v18 <= 3 )
                __asan_report_load4(v2 + 112);
              if ( !*(_DWORD *)(v2 + 112) )
                goto LABEL_67;
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v2 + 128);
              if ( *(_DWORD *)(v2 + 128) )
              {
                result = 0;
              }
              else
              {
LABEL_67:
                if ( *(char *)(((v2 + 544) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) != 0
                  && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 575) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v2 + 544, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v2 + 544),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "checkEnvAnimalConfig",
                  1381);
                v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 544),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v19, (const char (*)[58])byte_1A310CA0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
                result = -1;
              }
            }
          }
          else
          {
            if ( *(char *)(((v2 + 416) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 65) & 7) >= *(_BYTE *)(((v2 + 447) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 416, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 416),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkEnvAnimalConfig",
              1370);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 416),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                    v15,
                    (const char (*)[68])byte_1A310BC0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v16,
              &thisa->env_animal_max_count_in_scene_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
            result = -1;
          }
        }
        else
        {
          if ( *(char *)(((v2 + 352) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 383) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 352, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 352),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkEnvAnimalConfig",
            1365);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 352),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v14, (const char (*)[69])byte_1A310B40);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
          result = -1;
        }
      }
      else
      {
        if ( *(char *)(((v2 + 288) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 319) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 288, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 288),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkEnvAnimalConfig",
          1360);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 288),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(v11, (const char (*)[50])byte_1A310AE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 1) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkEnvAnimalConfig",
        1355);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v10, (const char (*)[57])byte_1A310A80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = -1;
    }
  }
  if ( v23 == (unsigned int **)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1388: range 000000000E1349D6-000000000E1354B9
int32_t __cdecl ConstValueExcelConfigMgr::checkBushDropData(
        ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int v7; // eax
  int v8; // ecx
  common::milog::MiLogStream *v9; // rax
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned int *v15; // [rsp-8h] [rbp-238h]
  const TxtConfigMgr *txt_config_mgra; // [rsp+0h] [rbp-230h]
  ConstValueExcelConfigMgr *thisa; // [rsp+8h] [rbp-228h]
  unsigned int *v18[68]; // [rsp+10h] [rbp-220h] BYREF

  v2 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(512LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 48 4 13 env_type:1389 64 4 15 env_weight:1390 80 4 12 drop_id:1391 96 4 16 drop_weight:1392 1"
                        "12 4 7 cd:1393 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 3"
                        "2 9 <unknown> 448 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkBushDropData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -202116109;
  if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 48, txt_config_mgr);
  *(_DWORD *)(v2 + 48) = 0;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 64, txt_config_mgr);
  *(_DWORD *)(v2 + 64) = 0;
  if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 80, txt_config_mgr);
  *(_DWORD *)(v2 + 80) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 96, txt_config_mgr);
  *(_DWORD *)(v2 + 96) = 0;
  if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v2 + 112, txt_config_mgr);
  *(_DWORD *)(v2 + 112) = 0;
  if ( ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &,unsigned int &,unsigned int &,unsigned int &>(
         this,
         CONST_VALUE_BUSH_DROP,
         (unsigned int *)(v2 + 48),
         (unsigned int *)(v2 + 64),
         (unsigned int *)(v2 + 80),
         (unsigned int *)(v2 + 96),
         (unsigned int *)(v2 + 112),
         v15,
         (unsigned int *)txt_config_mgr,
         (unsigned int *)this,
         v18[0]) )
  {
    if ( *(char *)(((v2 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkBushDropData",
      1401);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
      v5,
      (const char (*)[44])"findConstValue CONST_VALUE_BUSH_DROP failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
    result = -1;
  }
  else
  {
    v7 = *(unsigned __int8 *)(((v2 + 64) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 != 0 && (char)v7 <= 3 )
      __asan_report_load4(v2 + 64);
    v8 = *(_DWORD *)(v2 + 64);
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v2 + 96);
    if ( v8 + *(_DWORD *)(v2 + 96) )
    {
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 96);
      if ( !*(_DWORD *)(v2 + 96) )
        goto LABEL_33;
      if ( *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v2 + 80);
      if ( (unsigned __int8)TxtConfigMgr::isValidDropIdAndMatchItemLimitType(
                              txt_config_mgra,
                              *(_DWORD *)(v2 + 80),
                              ITEM_LIMIT_DAILY_SUBFIELD_DROP) != 1 )
        v10 = 1;
      else
LABEL_33:
        v10 = 0;
      if ( v10 )
      {
        if ( *(char *)(((v2 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkBushDropData",
          1411);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v11, (const char (*)[36])byte_1A310F00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( *(_DWORD *)(v2 + 48) )
        {
          if ( *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v2 + 112);
          if ( *(_DWORD *)(v2 + 112) )
          {
            if ( *(_BYTE *)(((unsigned __int64)&thisa->bush_drop_cacha_num_ >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)thisa + 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&thisa->bush_drop_cacha_num_ >> 3)
                                                                    + 0x7FFF8000) )
            {
              __asan_report_load4(&thisa->bush_drop_cacha_num_);
            }
            if ( thisa->bush_drop_cacha_num_ )
            {
              result = 0;
            }
            else
            {
              if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v2 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v2 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "checkBushDropData",
                1426);
              v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v14, (const char (*)[32])byte_1A311020);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
              result = -1;
            }
          }
          else
          {
            if ( *(char *)(((v2 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 97) & 7) >= *(_BYTE *)(((v2 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkBushDropData",
              1421);
            v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v13, (const char (*)[36])byte_1A310FC0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
            result = -1;
          }
        }
        else
        {
          if ( *(char *)(((v2 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkBushDropData",
            1416);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 320),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v12, (const char (*)[40])byte_1A310F60);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
          result = -1;
        }
      }
    }
    else
    {
      if ( *(char *)(((v2 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 31) & 7) >= *(_BYTE *)(((v2 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkBushDropData",
        1406);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1A310EA0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      result = -1;
    }
  }
  if ( v18 == (unsigned int **)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
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
  }
  return result;
};

// Line 1434: range 000000000E1354BA-000000000E1354C8
int32_t __cdecl ConstValueExcelConfigMgr::checkCookConfig(ConstValueExcelConfigMgr *const this)
{
  return 0;
};

// Line 1439: range 000000000E1354CA-000000000E135874
int32_t __cdecl ConstValueExcelConfigMgr::checkRandTaskConstConfig(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rax
  _DWORD *v3; // r13
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-C4h]
  char v8[192]; // [rsp+20h] [rbp-C0h] BYREF

  v1 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::checkRandTaskConstConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->rand_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->rand_task_num_);
  }
  if ( !this->rand_task_num_ )
  {
    if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkRandTaskConstConfig",
      1443);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v4, (const char (*)[29])byte_1A3110E0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
    *(_DWORD *)(((v1 + 32) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->rand_task_destroy_dist_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rand_task_destroy_dist_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->rand_task_destroy_dist_);
  }
  if ( !this->rand_task_destroy_dist_ )
  {
    *(_DWORD *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkRandTaskConstConfig",
      1448);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v5, (const char (*)[35])byte_1A311120);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
    ret = -1;
  }
  result = ret;
  if ( v8 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1455: range 000000000E135876-000000000E13665F
int32_t __cdecl ConstValueExcelConfigMgr::checkDailyTaskConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  char *v13; // rsi
  std::vector<unsigned int>::size_type v14; // rcx
  char v15; // al
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  int v18; // eax
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  int v27; // eax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  int32_t result; // eax
  uint32_t prev_task; // [rsp+14h] [rbp-28Ch]
  std::vector<std::vector<unsigned int>> *__for_range; // [rsp+18h] [rbp-288h]
  __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> >::reference pool_vec; // [rsp+20h] [rbp-280h]
  char v36[624]; // [rsp+30h] [rbp-270h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(576LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "11 48 4 12 task_id:1519 64 8 16 __for_begin:1512 96 8 14 __for_end:1512 128 8 16 __for_begin:151"
                        "9 160 8 14 __for_end:1519 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unk"
                        "nown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkDailyTaskConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -218959118;
  v5[536862735] = -218959118;
  v5[536862737] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->daily_task_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->daily_task_num_);
  }
  if ( !this->daily_task_num_ )
    goto LABEL_73;
  if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_finish_num_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_task_finish_num_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->daily_task_finish_num_);
  }
  if ( this->daily_task_finish_num_ )
  {
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_reward_talk_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->daily_task_reward_talk_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->daily_task_reward_talk_);
    }
    if ( data::QuestExcelConfigMgrBase::findTalkExcelConfig(p_quest_config_mgr, this->daily_task_reward_talk_) )
    {
      v11 = (((_BYTE)this + 100) & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)&this->daily_task_var_num_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->daily_task_var_num_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->daily_task_var_num_);
      }
      if ( this->daily_task_var_num_ )
      {
        prev_task = 0;
        __for_range = &this->daily_task_refresh_times_pool_vec_;
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 64, v11);
        *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::vector<std::vector<unsigned int>>::begin(__for_range);
        if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 96, v11);
        *(std::vector<std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::vector<std::vector<unsigned int>>::end(__for_range);
        while ( 1 )
        {
          v13 = (char *)(v3 + 96);
          if ( !__gnu_cxx::operator!=<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>(
                  (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 64),
                  (const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *)(v3 + 96)) )
          {
            v18 = 1;
            goto LABEL_66;
          }
          pool_vec = __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 64));
          v14 = std::vector<unsigned int>::size(pool_vec);
          v15 = *(_BYTE *)(((unsigned __int64)&this->daily_task_num_ >> 3) + 0x7FFF8000);
          LOBYTE(v13) = v15 != 0;
          if ( v15 != 0 && v15 <= 3 )
            __asan_report_load4(&this->daily_task_num_);
          if ( v14 != this->daily_task_num_ )
            break;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 128, v13);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 128) = std::vector<unsigned int>::begin(pool_vec);
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v3 + 160, v13);
          *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::end(pool_vec);
          while ( 1 )
          {
            v19 = (char *)(v3 + 160);
            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 128),
                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160)) )
            {
              v27 = 1;
              goto LABEL_62;
            }
            *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
            v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
            v21 = (int *)v20;
            if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v20);
            }
            v22 = *v21;
            v23 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
            if ( v23 != 0 && v23 <= 3 )
            {
              LOBYTE(v19) = v23 != 0;
              __asan_report_store4(v3 + 48, v19);
            }
            *(_DWORD *)(v3 + 48) = v22;
            if ( !data::DailyTaskExcelConfigMgrBase::findDailyTaskExcelConfig(
                    &txt_config_mgr->daily_task_config_mgr,
                    *(unsigned int *)(v3 + 48)) )
            {
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 448) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 479) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 448, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 448),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "checkDailyTaskConfig",
                1523);
              v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 448),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v25 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                      v24,
                      (const char (*)[39])byte_1A311480);
              v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v25,
                      (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v26, (const char (*)[7])byte_1A3114E0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 448));
              *(_DWORD *)(((v3 + 448) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v27 = 0;
              goto LABEL_62;
            }
            if ( prev_task )
            {
              if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_load4(v3 + 48);
              if ( prev_task == *(_DWORD *)(v3 + 48) )
                break;
            }
            if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 48);
            prev_task = *(_DWORD *)(v3 + 48);
            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 128));
          }
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkDailyTaskConfig",
            1528);
          v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v29 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v28, (const char (*)[39])byte_1A311480);
          v30 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v30, (const char (*)[10])byte_1A311520);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 512));
          *(_DWORD *)(((v3 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v27 = 0;
LABEL_62:
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( v27 != 1 )
          {
            v18 = 0;
            goto LABEL_66;
          }
          __gnu_cxx::__normal_iterator<std::vector<unsigned int> const*,std::vector<std::vector<unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<unsigned int>*,std::vector<std::vector<unsigned int>> > *const)(v3 + 64));
        }
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkDailyTaskConfig",
          1516);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v16, (const char (*)[47])byte_1A311420);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, &this->daily_task_num_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        v2 = -1;
        v18 = 0;
LABEL_66:
        if ( v18 == 1 )
          v2 = 0;
      }
      else
      {
        if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkDailyTaskConfig",
          1507);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v12, (const char (*)[42])byte_1A3113C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
        v2 = -1;
      }
    }
    else
    {
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkDailyTaskConfig",
        1463);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v8, (const char (*)[47])byte_1A311320);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &this->daily_task_reward_talk_);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v10, (const char (*)[10])byte_1A311380);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
    }
  }
  else
  {
LABEL_73:
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkDailyTaskConfig",
      1458);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v6, (const char (*)[48])byte_1A3112C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8044) = 0;
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
  }
  return result;
};

// Line 1539: range 000000000E136660-000000000E13686A
int32_t __cdecl ConstValueExcelConfigMgr::checkProductConfig(
        ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  char v7[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkProductConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_exchange_hcoin_ratio_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->mcoin_exchange_hcoin_ratio_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->mcoin_exchange_hcoin_ratio_);
  }
  if ( this->mcoin_exchange_hcoin_ratio_ )
  {
    result = 0;
  }
  else
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkProductConfig",
      1549);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v5, (const char (*)[38])byte_1A3115A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  if ( v7 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 1556: range 000000000E13686C-000000000E1369DC
uint32_t __cdecl ConstValueExcelConfigMgr::getItemHardLimitByItemType(
        const ConstValueExcelConfigMgr *const this,
        data::ItemType item_type)
{
  uint32_t result; // eax

  switch ( item_type )
  {
    case ITEM_VIRTUAL:
      result = std::numeric_limits<unsigned int>::max();
      break;
    case ITEM_MATERIAL:
      if ( *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->hard_material_item_limit_);
      }
      result = this->hard_material_item_limit_;
      break;
    case ITEM_RELIQUARY:
      if ( *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hard_reliquary_item_limit_);
      }
      result = this->hard_reliquary_item_limit_;
      break;
    case ITEM_WEAPON:
      if ( *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hard_weapon_item_limit_);
      }
      result = this->hard_weapon_item_limit_;
      break;
    case ITEM_FURNITURE:
      if ( *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_load4(&this->hard_furniture_item_limit_);
      }
      result = this->hard_furniture_item_limit_;
      break;
    default:
      result = 0;
      break;
  }
  return result;
};

// Line 1576: range 000000000E1369DE-000000000E136C2F
__int64 __fastcall ConstValueExcelConfigMgr::getWeaponScoinRatio(
        const ConstValueExcelConfigMgr *const this,
        __int64 rank_level,
        unsigned __int64 scoin_ratio)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,float> *p_weapon_scoin_ratio_map; // rdx
  std::map<unsigned int,float> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v10; // rdx
  float *p_second; // rax
  float second; // xmm0_4
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 rank_level:1575 64 8 9 iter:1577 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::getWeaponScoinRatio;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = rank_level;
  p_weapon_scoin_ratio_map = &this->weapon_scoin_ratio_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, rank_level);
  *(std::map<unsigned int,float>::const_iterator *)(v3 + 64) = std::map<unsigned int,float>::find(
                                                                 p_weapon_scoin_ratio_map,
                                                                 (const std::map<unsigned int,float>::key_type *)(v3 + 48));
  v7 = &this->weapon_scoin_ratio_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,float>::const_iterator *)(v3 + 96) = std::map<unsigned int,float>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    if ( *(_BYTE *)((scoin_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((scoin_ratio & 7) + 3) >= *(_BYTE *)((scoin_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(scoin_ratio, (unsigned int)(scoin_ratio & 7) + 3);
    }
    *(float *)scoin_ratio = second;
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1587: range 000000000E136C30-000000000E136E81
__int64 __fastcall ConstValueExcelConfigMgr::getReliquaryScoinRatio(
        const ConstValueExcelConfigMgr *const this,
        __int64 rank_level,
        unsigned __int64 scoin_ratio)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::map<unsigned int,float> *p_reliquary_scoin_ratio_map; // rdx
  std::map<unsigned int,float> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::pointer v10; // rdx
  float *p_second; // rax
  float second; // xmm0_4
  char v14[160]; // [rsp+20h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 rank_level:1586 64 8 9 iter:1588 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::getReliquaryScoinRatio;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = rank_level;
  p_reliquary_scoin_ratio_map = &this->reliquary_scoin_ratio_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, rank_level);
  *(std::map<unsigned int,float>::const_iterator *)(v3 + 64) = std::map<unsigned int,float>::find(
                                                                 p_reliquary_scoin_ratio_map,
                                                                 (const std::map<unsigned int,float>::key_type *)(v3 + 48));
  v7 = &this->reliquary_scoin_ratio_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::map<unsigned int,float>::const_iterator *)(v3 + 96) = std::map<unsigned int,float>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v10 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,float> > *const)(v3 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    if ( *(_BYTE *)((scoin_ratio >> 3) + 0x7FFF8000) != 0
      && (char)((scoin_ratio & 7) + 3) >= *(_BYTE *)((scoin_ratio >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(scoin_ratio, (unsigned int)(scoin_ratio & 7) + 3);
    }
    *(float *)scoin_ratio = second;
    result = 0LL;
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1598: range 000000000E136E82-000000000E137139
float __cdecl ConstValueExcelConfigMgr::getEnergyRechargeRatio(
        const ConstValueExcelConfigMgr *const this,
        bool is_cur_avatar,
        uint32_t team_player_count)
{
  unsigned __int64 v3; // rbx
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  float result; // xmm0_4
  std::array<float,4> *p_energy_ratio_cur_avatar; // rax
  std::array<float,4>::value_type *v8; // rax
  float *v9; // rdx
  std::array<float,4>::value_type *v10; // rax
  float *v11; // rdx
  uint32_t team_player_countb; // [rsp+0h] [rbp-A0h]
  const std::array<float,4> *energy_ratio_arr; // [rsp+18h] [rbp-88h]
  char v15[128]; // [rsp+20h] [rbp-80h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::getEnergyRechargeRatio;
  v5 = v3 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450888) = -202116109;
  if ( team_player_count )
  {
    team_player_countb = team_player_count - 1;
    if ( is_cur_avatar )
      p_energy_ratio_cur_avatar = &this->energy_ratio_cur_avatar_;
    else
      p_energy_ratio_cur_avatar = &this->energy_ratio_other_avatar_;
    energy_ratio_arr = p_energy_ratio_cur_avatar;
    if ( team_player_countb < std::array<float,4ul>::size(p_energy_ratio_cur_avatar) )
    {
      v10 = (std::array<float,4>::value_type *)std::array<float,4ul>::operator[](energy_ratio_arr, team_player_countb);
      v11 = v10;
      if ( *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v10 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v10);
      }
      result = *v11;
    }
    else
    {
      v8 = (std::array<float,4>::value_type *)std::array<float,4ul>::back(energy_ratio_arr);
      v9 = v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      result = *v9;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "getEnergyRechargeRatio",
      1601);
    common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
      (common::milog::MiLogStream *const)(v3 + 32),
      (const char (*)[23])"team_player_count is 0");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 32));
    result = 0.0;
  }
  if ( v15 == (char *)v3 )
  {
    *(_DWORD *)((v3 >> 3) + 0x7FFF8000) = 0;
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

// Line 1616: range 000000000E13713A-000000000E137336
float __fastcall ConstValueExcelConfigMgr::getAvatarUpgradeCostRatio(
        const ConstValueExcelConfigMgr *const this,
        __int64 quality_type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<data::QualityType,float> *p_avatar_upgrade_cost_ratio_map; // rdx
  std::map<data::QualityType,float> *v6; // rdx
  bool v7; // al
  float result; // xmm0_4
  std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> >::pointer v9; // rdx
  float *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 quality_type:1615 64 8 9 iter:1617 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::getAvatarUpgradeCostRatio;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = quality_type;
  p_avatar_upgrade_cost_ratio_map = &this->avatar_upgrade_cost_ratio_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, quality_type);
  *(std::map<data::QualityType,float>::const_iterator *)(v2 + 64) = std::map<data::QualityType,float>::find(
                                                                      p_avatar_upgrade_cost_ratio_map,
                                                                      (const std::map<data::QualityType,float>::key_type *)(v2 + 48));
  v6 = &this->avatar_upgrade_cost_ratio_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::QualityType,float>::const_iterator *)(v2 + 96) = std::map<data::QualityType,float>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0.0;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<data::QualityType const,float>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::QualityType,float> > *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v9->second;
  }
  if ( v11 == (char *)v2 )
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

// Line 1627: range 000000000E137338-000000000E13777C
int32_t __cdecl ConstValueExcelConfigMgr::rewriteDailyGadgetDropCategoryLimitMap(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v5; // rax
  unsigned int *v6; // r14
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int32_t ret; // [rsp+18h] [rbp-E8h]
  uint32_t index; // [rsp+1Ch] [rbp-E4h]
  data::ConstValueExcelConfig *config_ptr; // [rsp+20h] [rbp-E0h]
  const std::string *drop_tag; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v1 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(160LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteDailyGadgetDropCategoryLimitMap;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 163LL);
  if ( config_ptr )
  {
    ret = 0;
    for ( index = 0; index < std::vector<std::string>::size(&config_ptr->value); index += 2 )
    {
      drop_tag = std::vector<std::string>::operator[](&config_ptr->value, index);
      if ( (unsigned __int8)std::string::empty() )
        break;
      if ( index + 1 >= std::vector<std::string>::size(&config_ptr->value) )
      {
        if ( *(char *)(((v1 + 32) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 63) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 32, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 32),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteDailyGadgetDropCategoryLimitMap",
          1643);
        v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 32),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(v5, (const char (*)[68])byte_1A3117C0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 32));
        ret = -1;
        break;
      }
      v6 = std::unordered_map<std::string,unsigned int>::operator[](
             &this->daily_gadget_drop_category_limit_map_,
             drop_tag);
      v7 = std::vector<std::string>::operator[](&config_ptr->value, index + 1);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, v6, 1) )
      {
        if ( *(char *)(((v1 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 127) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 96, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteDailyGadgetDropCategoryLimitMap",
          1649);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
               v8,
               (const char (*)[44])"CONST_VALUE_GAGDET_CREATION_LIMIT_DROP_TAG ");
        v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, drop_tag);
        common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v10, (const char (*)[28])byte_1A3118A0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 96));
        ret = -1;
        break;
      }
    }
    result = ret;
  }
  else
  {
    result = 0;
  }
  if ( v15 == (char *)v1 )
  {
    *(_DWORD *)((v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1658: range 000000000E13777E-000000000E137E45
int32_t __cdecl ConstValueExcelConfigMgr::rewritePointCardParam(ConstValueExcelConfigMgr *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  std::remove_reference<const std::string&>::type *v8; // rax
  const std::string *v9; // rax
  const std::string *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  data::ConstValueExcelConfig *custom_config_ptr; // [rsp+18h] [rbp-158h]
  char v14[336]; // [rsp+20h] [rbp-150h] BYREF

  v1 = (common::milog::MiLogStream *)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::rewritePointCardParam;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -202116109;
  custom_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 193LL);
  if ( custom_config_ptr )
  {
    if ( std::vector<std::string>::size(&custom_config_ptr->value) > 2 )
    {
      v7 = std::vector<std::string>::operator[](&custom_config_ptr->value, 0LL);
      v8 = std::move<std::string const&>(v7);
      std::string::operator=(&this->point_card_product_id_, v8);
      v9 = std::vector<std::string>::operator[](&custom_config_ptr->value, 1uLL);
      common::tools::StringUtils::strToNum<unsigned int>(v9, &this->mcoin_per_point_card_, 1);
      v10 = std::vector<std::string>::operator[](&custom_config_ptr->value, 2uLL);
      common::tools::StringUtils::strToNum<float>(v10, &this->vip_point_per_point_card_, 1);
      if ( (unsigned __int8)std::string::empty() )
      {
        if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v1[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v1 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewritePointCardParam",
          1675);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v1 + 5,
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v11, (const char (*)[55])byte_1A311A40);
        common::milog::MiLogStream::~MiLogStream(v1 + 5);
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->mcoin_per_point_card_ >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->mcoin_per_point_card_ >> 3)
                                                              + 0x7FFF8000) )
        {
          __asan_report_load4(&this->mcoin_per_point_card_);
        }
        if ( !this->mcoin_per_point_card_ )
          goto LABEL_31;
        if ( *(_BYTE *)(((unsigned __int64)&this->vip_point_per_point_card_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->vip_point_per_point_card_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->vip_point_per_point_card_);
        }
        if ( this->vip_point_per_point_card_ >= 0.00000011920929 )
        {
          result = 0;
        }
        else
        {
LABEL_31:
          if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v1 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store_n(&v1[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v1 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewritePointCardParam",
            1680);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v1 + 7,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v12, (const char (*)[58])byte_1A311AA0);
          common::milog::MiLogStream::~MiLogStream(v1 + 7);
          result = -1;
        }
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewritePointCardParam",
        1667);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v1 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v6, (const char (*)[51])byte_1A3119E0);
      common::milog::MiLogStream::~MiLogStream(v1 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewritePointCardParam",
      1662);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v4, (const char (*)[48])byte_1A311980);
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    result = -1;
  }
  if ( v14 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1687: range 000000000E137E46-000000000E1387D5
int32_t __cdecl ConstValueExcelConfigMgr::rewriteCrucibleParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // rax
  const std::string *v6; // rax
  char *v7; // rsi
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  int v12; // edx
  int v13; // eax
  int32_t result; // eax
  bool split_list; // [rsp+8h] [rbp-228h]
  int32_t v16; // [rsp+14h] [rbp-21Ch]
  data::ConstValueExcelConfig *custom_config_ptr; // [rsp+28h] [rbp-208h]
  std::vector<std::string> *__for_range; // [rsp+30h] [rbp-200h]
  const std::string *name; // [rsp+38h] [rbp-1F8h]
  char v20[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v1 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(448LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "9 32 1 9 <unknown> 48 4 17 element_type:1707 64 8 16 __for_begin:1705 96 8 14 __for_end:1705 128"
                        " 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteCrucibleParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556927;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -202116109;
  custom_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 173LL);
  if ( custom_config_ptr )
  {
    if ( std::vector<std::string>::size(&custom_config_ptr->value) > 1 )
    {
      std::allocator<char>::allocator(v1 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 256),
        ",",
        (const std::allocator<char> *)(v1 + 32));
      v6 = std::vector<std::string>::operator[](&custom_config_ptr->value, 1uLL);
      v7 = (char *)(v1 + 256);
      split_list = common::tools::StringUtils::splitToList(
                     v6,
                     (const std::string *)(v1 + 256),
                     &this->element_name_vec_,
                     0)
                || std::vector<std::string>::empty(&this->element_name_vec_);
      std::string::~string((void *)(v1 + 256));
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 32);
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( split_list )
      {
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCrucibleParam",
          1702);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 320),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v8, (const char (*)[52])byte_1A311CC0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        v16 = -1;
      }
      else
      {
        __for_range = &this->element_name_vec_;
        *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 64, v7);
        *(std::vector<std::string>::iterator *)(v1 + 64) = std::vector<std::string>::begin(__for_range);
        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 96, v7);
        *(std::vector<std::string>::iterator *)(v1 + 96) = std::vector<std::string>::end(__for_range);
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 64),
                  (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v1 + 96)) )
        {
          name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 64));
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v1 + 48, v1 + 96);
          *(_DWORD *)(v1 + 48) = 0;
          if ( !data::enumStrToVal(name, (data::ElementType *)(v1 + 48)) )
          {
            *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteCrucibleParam",
              1710);
            v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v1 + 384),
                   (const char (*)[16])"[CONFIG_ERROR] ");
            v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
                    v9,
                    (const char (*)[34])"CONST_VALUE_CRUCIBLE_CONFIG name:");
            v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, name);
            common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v11, (const char (*)[7])byte_1A3114E0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
            *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v16 = -1;
            v12 = 0;
          }
          else
          {
            v12 = 1;
          }
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v12 != 1 )
          {
            v13 = 0;
            goto LABEL_37;
          }
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v1 + 64));
        }
        v13 = 1;
LABEL_37:
        if ( v13 == 1 )
          v16 = 0;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteCrucibleParam",
        1696);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v5, (const char (*)[34])byte_1A311C60);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      v16 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteCrucibleParam",
      1691);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v4, (const char (*)[44])byte_1A311C00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    v16 = -1;
  }
  result = v16;
  if ( v20 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1718: range 000000000E1387D6-000000000E138D98
int32_t __cdecl ConstValueExcelConfigMgr::rewriteHuntingReviseLevelParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rsi
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  const std::string *v9; // rax
  int v10; // r14d
  std::array<unsigned int,3>::reference v11; // rax
  _DWORD *v12; // rdx
  char v13; // cl
  uint32_t i; // [rsp+14h] [rbp-13Ch]
  data::ConstValueExcelConfig *custom_config_ptr; // [rsp+18h] [rbp-138h]
  char v16[304]; // [rsp+20h] [rbp-130h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(256LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "4 48 4 10 level:1739 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteHuntingReviseLevelParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -202116109;
  v4 = 200LL;
  custom_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 200LL);
  if ( custom_config_ptr )
  {
    if ( std::vector<std::string>::size(&custom_config_ptr->value) == 3 )
    {
      if ( std::array<unsigned int,3ul>::size(&this->hunting_difficulty_revise_level_) == 3 )
      {
        for ( i = 0; i <= 2; ++i )
        {
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v1 + 48, v4);
          *(_DWORD *)(v1 + 48) = 0;
          v9 = std::vector<std::string>::operator[](&custom_config_ptr->value, i);
          common::tools::StringUtils::strToNum<unsigned int>(v9, (unsigned int *)(v1 + 48), 1);
          if ( *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v1 + 48);
          v10 = *(_DWORD *)(v1 + 48);
          v4 = i;
          v11 = std::array<unsigned int,3ul>::operator[](&this->hunting_difficulty_revise_level_, i);
          v12 = v11;
          v13 = *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000);
          LOBYTE(v4) = v13 != 0;
          if ( v13 != 0 && (char)(((unsigned __int8)v11 & 7) + 3) >= v13 )
            __asan_report_store4(v11, v4);
          *v12 = v10;
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
        }
        result = 0;
      }
      else
      {
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteHuntingReviseLevelParam",
          1733);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v8, (const char (*)[43])byte_1A311EE0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteHuntingReviseLevelParam",
        1727);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(v7, (const char (*)[40])byte_1A311E80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteHuntingReviseLevelParam",
      1722);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v5, (const char (*)[49])byte_1A311E20);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1747: range 000000000E138D9A-000000000E1392CE
int32_t __cdecl ConstValueExcelConfigMgr::checkDailyGadgetDropCategoryLimitMap(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  std::unordered_map<std::string,unsigned int> *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true>::reference v14; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<const std::string,unsigned int> >::type *drop_category; // [rsp+30h] [rbp-110h]
  std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *limit; // [rsp+38h] [rbp-108h]
  char v17[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v17;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 16 __for_begin:1749 64 8 14 __for_end:1749 96 32 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkDailyGadgetDropCategoryLimitMap;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->daily_gadget_drop_category_limit_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 32) = std::unordered_map<std::string,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<std::string,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<std::string,unsigned int>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::string const,unsigned int>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<const std::string,unsigned int>,true> *)(v2 + 64)) )
  {
    v14 = std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator*((const std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
    drop_category = std::get<0ul,std::string const,unsigned int>(v14);
    limit = (std::tuple_element<1,const std::pair<const std::string,unsigned int> >::type *)std::get<1ul,std::string const,unsigned int>(v14);
    if ( !common::tools::MiscUtils::isContains<std::unordered_set<std::string> const,std::string>(
            &txt_config_mgr->drop_config_mgr.chest_drop_category_set,
            drop_category) )
    {
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkDailyGadgetDropCategoryLimitMap",
        1753);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             v5,
             (const char (*)[58])"CONST_VALUE_GAGDET_CREATION_LIMIT_DROP_TAG drop_category:");
      v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, drop_category);
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v7, (const char (*)[17])byte_1A312060);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    if ( *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)limit & 7) + 3) >= *(_BYTE *)(((unsigned __int64)limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(limit);
    }
    if ( !*limit )
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkDailyGadgetDropCategoryLimitMap",
        1758);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
             v8,
             (const char (*)[58])"CONST_VALUE_GAGDET_CREATION_LIMIT_DROP_TAG drop_category:");
      v10 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, drop_category);
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v10, (const char (*)[24])byte_1A3120A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_const_iterator<std::pair<std::string const,unsigned int>,false,true>::operator++((std::__detail::_Node_const_iterator<std::pair<const std::string,unsigned int>,false,true> *const)(v2 + 32));
  }
  result = ret;
  if ( v17 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 1766: range 000000000E1392D0-000000000E13AAAB
int32_t __cdecl ConstValueExcelConfigMgr::checkItemLimitConfig(const ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  const char *v16; // rsi
  common::milog::MiLogStream *v17; // rcx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  const char *v20; // rsi
  common::milog::MiLogStream *v21; // r14
  uint32_t MaxItemErrorCount; // edx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  uint32_t hard_material_item_limit; // ecx
  uint32_t v31; // r14d
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rax
  const char *v38; // rsi
  common::milog::MiLogStream *v39; // r14
  uint32_t MaxItemCount; // edx
  char v41; // al
  uint32_t hard_reliquary_item_limit; // ecx
  uint32_t v43; // r14d
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rax
  const char *v50; // rsi
  common::milog::MiLogStream *v51; // r14
  uint32_t v52; // edx
  char v53; // al
  uint32_t hard_weapon_item_limit; // ecx
  uint32_t v55; // r14d
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  const char *v62; // rsi
  common::milog::MiLogStream *v63; // r14
  uint32_t v64; // edx
  char v65; // al
  uint32_t hard_furniture_item_limit; // ecx
  uint32_t v67; // r14d
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  const char *v74; // rsi
  common::milog::MiLogStream *v75; // r14
  uint32_t v76; // edx
  char v77; // al
  uint32_t v78; // ecx
  uint32_t v79; // ecx
  uint32_t v80; // ecx
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // rax
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // rax
  common::milog::MiLogStream *v89; // rax
  const char *v90; // rsi
  common::milog::MiLogStream *v91; // r14
  uint32_t v92; // edx
  char v93; // al
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-2A4h]
  uint64_t total_item_limit; // [rsp+20h] [rbp-2A0h]
  uint64_t total_hard_item_limit; // [rsp+28h] [rbp-298h]
  char v98[656]; // [rsp+30h] [rbp-290h] BYREF

  v1 = (unsigned __int64)v98;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(608LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "14 48 4 9 <unknown> 64 4 9 <unknown> 80 4 9 <unknown> 96 4 9 <unknown> 112 4 9 <unknown> 128 4 9"
                        " <unknown> 144 4 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <"
                        "unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::checkItemLimitConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556943;
  v3[536862722] = -234556924;
  v3[536862723] = -234556924;
  v3[536862724] = -234556924;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -218959118;
  v3[536862736] = -218959118;
  v3[536862738] = -202116109;
  ret = 0;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->material_item_limit_);
  }
  v4 = this->material_item_limit_ + 500LL;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reliquary_item_limit_);
  }
  v5 = this->reliquary_item_limit_ + v4;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->weapon_item_limit_);
  }
  v6 = this->weapon_item_limit_ + v5;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->furniture_item_limit_);
  }
  total_item_limit = v6 + this->furniture_item_limit_;
  if ( total_item_limit > ConstValueExcelConfigMgr::getMaxItemErrorCount() )
  {
    if ( *(char *)(((v1 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1771);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
           v7,
           (const char (*)[64])"total item limit is more than hard limit! material_item_limit_:");
    v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &this->material_item_limit_);
    v10 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v9,
            (const char (*)[24])" reliquary_item_limit_:");
    v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &this->reliquary_item_limit_);
    v12 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v11,
            (const char (*)[21])" weapon_item_limit_:");
    v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->weapon_item_limit_);
    v14 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
            v13,
            (const char (*)[24])" furniture_item_limit_:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &this->furniture_item_limit_);
    v16 = " other:";
    v17 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v15, (const char (*)[8])" other:");
    v18 = *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000);
    if ( v18 != 0 && v18 <= 3 )
    {
      LOBYTE(v16) = v18 != 0;
      __asan_report_store4(v1 + 48, v16);
    }
    *(_DWORD *)(v1 + 48) = 500;
    v19 = common::milog::MiLogStream::operator<<<int,(int *)0>(v17, (const int *)(v1 + 48));
    v20 = " MaxItemErrorCount:";
    v21 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v19,
            (const char (*)[20])" MaxItemErrorCount:");
    MaxItemErrorCount = ConstValueExcelConfigMgr::getMaxItemErrorCount();
    v23 = *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000);
    if ( v23 != 0 && v23 <= 3 )
    {
      LOBYTE(v20) = v23 != 0;
      __asan_report_store4(v1 + 64, v20);
    }
    *(_DWORD *)(v1 + 64) = MaxItemErrorCount;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v1 + 64));
    *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 160));
    *(_DWORD *)(((v1 + 160) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->material_item_limit_);
  }
  if ( this->material_item_limit_ <= 0x7CF )
    goto LABEL_32;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reliquary_item_limit_);
  }
  if ( this->reliquary_item_limit_ <= 0x5DB )
    goto LABEL_32;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->weapon_item_limit_);
  }
  if ( this->weapon_item_limit_ <= 0x7CF )
    goto LABEL_32;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->furniture_item_limit_);
  }
  if ( this->furniture_item_limit_ <= 0x7CF )
  {
LABEL_32:
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 224) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 1) & 7) >= *(_BYTE *)(((v1 + 255) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 224, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 224),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1779);
    v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 224),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v25 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v24, (const char (*)[42])byte_1A3123E0);
    v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v25, &this->material_item_limit_);
    v27 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v26,
            (const char (*)[23])" reliquary_item_limit:");
    v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, &this->reliquary_item_limit_);
    v29 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v28,
            (const char (*)[20])" weapon_item_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &this->weapon_item_limit_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 224));
    *(_DWORD *)(((v1 + 224) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hard_material_item_limit_);
  }
  hard_material_item_limit = this->hard_material_item_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 124) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->material_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->material_item_limit_);
  }
  if ( hard_material_item_limit < this->material_item_limit_
    || (v31 = this->hard_material_item_limit_, v31 > ConstValueExcelConfigMgr::getMaxItemCount()) )
  {
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 288) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 319) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 288, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 288),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1784);
    v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 288),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v34 = common::milog::MiLogStream::operator<<<char [95],(char *[95])0>(v33, (const char (*)[95])byte_1A3124C0);
    v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, &this->hard_material_item_limit_);
    v36 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
            v35,
            (const char (*)[22])" material_item_limit:");
    v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &this->material_item_limit_);
    v38 = " total_hard_limit:";
    v39 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v37, (const char (*)[19])" total_hard_limit:");
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 4;
    MaxItemCount = ConstValueExcelConfigMgr::getMaxItemCount();
    v41 = *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000);
    if ( v41 != 0 && v41 <= 3 )
    {
      LOBYTE(v38) = v41 != 0;
      __asan_report_store4(v1 + 80, v38);
    }
    *(_DWORD *)(v1 + 80) = MaxItemCount;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v39, (const unsigned int *)(v1 + 80));
    *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 288));
    *(_DWORD *)(((v1 + 288) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_reliquary_item_limit_);
  }
  hard_reliquary_item_limit = this->hard_reliquary_item_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->reliquary_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->reliquary_item_limit_);
  }
  if ( hard_reliquary_item_limit < this->reliquary_item_limit_
    || (v43 = this->hard_reliquary_item_limit_, v43 > ConstValueExcelConfigMgr::getMaxItemCount()) )
  {
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 352) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 127) & 7) >= *(_BYTE *)(((v1 + 383) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 352, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 352),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1789);
    v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 352),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v46 = common::milog::MiLogStream::operator<<<char [99],(char *[99])0>(v45, (const char (*)[99])byte_1A3125C0);
    v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, &this->hard_reliquary_item_limit_);
    v48 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v47,
            (const char (*)[23])" reliquary_item_limit:");
    v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, &this->reliquary_item_limit_);
    v50 = " total_hard_limit:";
    v51 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v49, (const char (*)[19])" total_hard_limit:");
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 4;
    v52 = ConstValueExcelConfigMgr::getMaxItemCount();
    v53 = *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000);
    if ( v53 != 0 && v53 <= 3 )
    {
      LOBYTE(v50) = v53 != 0;
      __asan_report_store4(v1 + 96, v50);
    }
    *(_DWORD *)(v1 + 96) = v52;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, (const unsigned int *)(v1 + 96));
    *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 352));
    *(_DWORD *)(((v1 + 352) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_weapon_item_limit_);
  }
  hard_weapon_item_limit = this->hard_weapon_item_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->weapon_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->weapon_item_limit_);
  }
  if ( hard_weapon_item_limit < this->weapon_item_limit_
    || (v55 = this->hard_weapon_item_limit_, v55 > ConstValueExcelConfigMgr::getMaxItemCount()) )
  {
    *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 65) & 7) >= *(_BYTE *)(((v1 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1794);
    v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v58 = common::milog::MiLogStream::operator<<<char [93],(char *[93])0>(v57, (const char (*)[93])byte_1A312660);
    v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, &this->hard_weapon_item_limit_);
    v60 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
            v59,
            (const char (*)[20])" weapon_item_limit:");
    v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &this->weapon_item_limit_);
    v62 = " total_hard_limit:";
    v63 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v61, (const char (*)[19])" total_hard_limit:");
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = 4;
    v64 = ConstValueExcelConfigMgr::getMaxItemCount();
    v65 = *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000);
    if ( v65 != 0 && v65 <= 3 )
    {
      LOBYTE(v62) = v65 != 0;
      __asan_report_store4(v1 + 112, v62);
    }
    *(_DWORD *)(v1 + 112) = v64;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v63, (const unsigned int *)(v1 + 112));
    *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 416));
    *(_DWORD *)(((v1 + 416) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_furniture_item_limit_);
  }
  hard_furniture_item_limit = this->hard_furniture_item_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->furniture_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->furniture_item_limit_);
  }
  if ( hard_furniture_item_limit < this->furniture_item_limit_
    || (v67 = this->hard_furniture_item_limit_, v67 > ConstValueExcelConfigMgr::getMaxItemCount()) )
  {
    *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 480) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 1) & 7) >= *(_BYTE *)(((v1 + 511) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 480, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 480),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1799);
    v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 480),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v70 = common::milog::MiLogStream::operator<<<char [96],(char *[96])0>(v69, (const char (*)[96])byte_1A3126E0);
    v71 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v70, &this->hard_furniture_item_limit_);
    v72 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
            v71,
            (const char (*)[23])" furniture_item_limit:");
    v73 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v72, &this->furniture_item_limit_);
    v74 = " total_hard_limit:";
    v75 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v73, (const char (*)[19])" total_hard_limit:");
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = 4;
    v76 = ConstValueExcelConfigMgr::getMaxItemCount();
    v77 = *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000);
    if ( v77 != 0 && v77 <= 3 )
    {
      LOBYTE(v74) = v77 != 0;
      __asan_report_store4(v1 + 128, v74);
    }
    *(_DWORD *)(v1 + 128) = v76;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v75, (const unsigned int *)(v1 + 128));
    *(_BYTE *)(((v1 + 128) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 480));
    *(_DWORD *)(((v1 + 480) >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hard_material_item_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hard_material_item_limit_);
  }
  v78 = this->hard_material_item_limit_;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_reliquary_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_reliquary_item_limit_);
  }
  v79 = this->hard_reliquary_item_limit_ + v78;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_weapon_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_weapon_item_limit_);
  }
  v80 = this->hard_weapon_item_limit_ + v79;
  if ( *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hard_furniture_item_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hard_furniture_item_limit_);
  }
  total_hard_item_limit = v80 + this->hard_furniture_item_limit_;
  if ( total_hard_item_limit > ConstValueExcelConfigMgr::getMaxItemCount() )
  {
    *(_DWORD *)(((v1 + 544) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v1 + 544) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 63) & 7) >= *(_BYTE *)(((v1 + 575) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 544, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 544),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkItemLimitConfig",
      1805);
    v81 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v1 + 544),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v82 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(v81, (const char (*)[77])byte_1A3127A0);
    v83 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v82, &this->hard_material_item_limit_);
    v84 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
            v83,
            (const char (*)[25])" hard_weapon_item_limit:");
    v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v84, &this->hard_weapon_item_limit_);
    v86 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
            v85,
            (const char (*)[28])" hard_reliquary_item_limit:");
    v87 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &this->hard_reliquary_item_limit_);
    v88 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
            v87,
            (const char (*)[29])" hard_furniture_item_limit_:");
    v89 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v88, &this->hard_furniture_item_limit_);
    v90 = " total_hard_limit:";
    v91 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(v89, (const char (*)[19])" total_hard_limit:");
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = 4;
    v92 = ConstValueExcelConfigMgr::getMaxItemCount();
    v93 = *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000);
    if ( v93 != 0 && v93 <= 3 )
    {
      LOBYTE(v90) = v93 != 0;
      __asan_report_store4(v1 + 144, v90);
    }
    *(_DWORD *)(v1 + 144) = v92;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v91, (const unsigned int *)(v1 + 144));
    *(_BYTE *)(((v1 + 144) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 544));
    ret = -1;
  }
  result = ret;
  if ( v98 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8040) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8048) = -168430091;
  }
  return result;
};

// Line 1813: range 000000000E13AAAC-000000000E13AFA7
int32_t __cdecl ConstValueExcelConfigMgr::checkCityReputationConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  char *v7; // rsi
  unsigned int *v8; // rax
  int *v9; // rdx
  int v10; // ecx
  char v11; // al
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  int v14; // eax
  int32_t result; // eax
  std::vector<unsigned int> *__for_range; // [rsp+18h] [rbp-138h]
  char v18[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 13 affix_id:1820 64 8 16 __for_begin:1820 96 8 14 __for_end:1820 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkCityReputationConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->city_reputation_history_request_num_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->city_reputation_history_request_num_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->city_reputation_history_request_num_);
  }
  if ( this->city_reputation_history_request_num_ )
  {
    __for_range = &this->hunting_clue_monster_affix_vec_;
    if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 64, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, txt_config_mgr);
    *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
    while ( 1 )
    {
      v7 = (char *)(v3 + 96);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
      {
        v14 = 1;
        goto LABEL_26;
      }
      v8 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
      v9 = (int *)v8;
      if ( *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v8 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v8 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v8);
      }
      v10 = *v9;
      v11 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
      if ( v11 != 0 && v11 <= 3 )
      {
        LOBYTE(v7) = v11 != 0;
        __asan_report_store4(v3 + 48, v7);
      }
      *(_DWORD *)(v3 + 48) = v10;
      if ( !data::MonsterExcelConfigMgrBase::findMonsterAffixExcelConfig(
              &txt_config_mgr->monster_config_mgr,
              *(unsigned int *)(v3 + 48)) )
        break;
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    }
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkCityReputationConfig",
      1824);
    v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 192),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v13 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(v12, (const char (*)[28])byte_1A312A00);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v3 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
    v14 = 0;
LABEL_26:
    if ( v14 == 1 )
      v2 = 0;
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkCityReputationConfig",
      1816);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v6, (const char (*)[47])byte_1A3129A0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = -1;
  }
  result = v2;
  if ( v18 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1833: range 000000000E13AFA8-000000000E13B08B
float __cdecl ConstValueExcelConfigMgr::getMoveSpeedLimit(
        const ConstValueExcelConfigMgr *const this,
        uint32_t move_type)
{
  std::array<float,5>::value_type *v2; // rax
  float *v3; // rdx
  std::array<float,5>::value_type *v5; // rax
  float *v6; // rdx

  if ( move_type < std::array<float,5ul>::size(&this->move_speed_limits_) )
  {
    v5 = (std::array<float,5>::value_type *)std::array<float,5ul>::operator[](&this->move_speed_limits_, move_type);
    v6 = v5;
    if ( *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v5 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v5 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v5);
    }
    return *v6;
  }
  else
  {
    v2 = (std::array<float,5>::value_type *)std::array<float,5ul>::at(&this->move_speed_limits_, 0LL);
    v3 = v2;
    if ( *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v2 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v2);
    }
    return *v3;
  }
};

// Line 1842: range 000000000E13B08C-000000000E13B64F
int32_t __cdecl ConstValueExcelConfigMgr::rewriteMiracleRingEnterPackItem(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  data::ConstValueExcelConfig *miracle_ring_config_ptr; // [rsp+18h] [rbp-178h]
  char v13[368]; // [rsp+20h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "5 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteMiracleRingEnterPackItem;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -202116109;
  miracle_ring_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 221LL);
  if ( miracle_ring_config_ptr )
  {
    if ( std::vector<std::string>::size(&miracle_ring_config_ptr->value) )
    {
      std::allocator<char>::allocator(v1 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 192),
        ",",
        (const std::allocator<char> *)(v1 + 48));
      v7 = std::vector<std::string>::operator[](&miracle_ring_config_ptr->value, 0LL);
      v8 = common::tools::StringUtils::splitToList<unsigned int>(
             v7,
             (const std::string *)(v1 + 192),
             &this->miracle_ring_item_vec_,
             1) != 0;
      std::string::~string((void *)(v1 + 192));
      *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 48);
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteMiracleRingEnterPackItem",
          1858);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 256),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
                v9,
                (const char (*)[21])"splitToList failed, ");
        v11 = std::vector<std::string>::operator[](&miracle_ring_config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteMiracleRingEnterPackItem",
        1852);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
        v6,
        (const char (*)[53])"rewriteMiracleRingEnterPackItemPram size less than 1");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteMiracleRingEnterPackItem",
      1846);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [71],(char *[71])0>(
      v4,
      (const char (*)[71])"findConstValueExcelConfig CONST_VALUE_MIRACLE_RING_ITEM_ADD_PACK fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1865: range 000000000E13B650-000000000E13BB70
int32_t __cdecl ConstValueExcelConfigMgr::checkMiracleRingEnterPackItem(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  int32_t result; // eax
  std::vector<unsigned int> *__for_range; // [rsp+10h] [rbp-140h]
  data::ItemConfig *item_config_ptr; // [rsp+18h] [rbp-138h]
  char v20[304]; // [rsp+20h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 48 4 12 item_id:1866 64 8 16 __for_begin:1866 96 8 14 __for_end:1866 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkMiracleRingEnterPackItem;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  __for_range = &this->miracle_ring_item_vec_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 64) = std::vector<unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<unsigned int>::const_iterator *)(v3 + 96) = std::vector<unsigned int>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 96)) )
    {
      v13 = 1;
      goto LABEL_26;
    }
    v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v6) = v10 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = v9;
    item_config_ptr = ItemExcelConfigMgr::findItemConfig(&txt_config_mgr->item_config_mgr, *(_DWORD *)(v3 + 48));
    if ( !item_config_ptr )
    {
      if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkMiracleRingEnterPackItem",
        1871);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
              v11,
              (const char (*)[32])"findItemConfig failed, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      v2 = -1;
      v13 = 0;
      goto LABEL_26;
    }
    if ( *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)item_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&item_config_ptr->item_type >> 3)
                                                                     + 0x7FFF8000) )
    {
      __asan_report_load4(&item_config_ptr->item_type);
    }
    if ( item_config_ptr->item_type != ITEM_MATERIAL )
      break;
    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 64));
  }
  if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 192, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 192),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
    "checkMiracleRingEnterPackItem",
    1876);
  v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v15 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
          v14,
          (const char (*)[39])"item is not material, failed, item_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 48));
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v13 = 0;
LABEL_26:
  if ( v13 == 1 )
    v2 = 0;
  result = v2;
  if ( v20 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1884: range 000000000E13BB72-000000000E13C550
int32_t __cdecl ConstValueExcelConfigMgr::checkHomeLimitedShopTime(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  uint32_t home_limited_shop_original_open_time; // ecx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  uint32_t close_time; // [rsp+14h] [rbp-18Ch]
  uint32_t guest_open_time; // [rsp+18h] [rbp-188h]
  char v21[384]; // [rsp+20h] [rbp-180h] BYREF

  v2 = (common::milog::MiLogStream *)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(352LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"5 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::checkHomeLimitedShopTime;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_limited_shop_original_open_time_);
  }
  if ( this->home_limited_shop_original_open_time_ <= 0x93A7F )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->home_limited_shop_original_close_time_);
    }
    if ( this->home_limited_shop_original_close_time_ <= 0x93A7F )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->home_limited_shop_original_open_time_);
      }
      home_limited_shop_original_open_time = this->home_limited_shop_original_open_time_;
      if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_load4(&this->home_limited_shop_original_close_time_);
      }
      if ( home_limited_shop_original_open_time == this->home_limited_shop_original_close_time_ )
      {
        if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v2[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v2 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkHomeLimitedShopTime",
          1899);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v2 + 5,
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v11, (const char (*)[60])byte_1A312E20);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v12,
          &this->home_limited_shop_original_open_time_);
        common::milog::MiLogStream::~MiLogStream(v2 + 5);
        result = -1;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&this->home_limited_shop_original_guest_open_time_);
        }
        if ( this->home_limited_shop_original_guest_open_time_ <= 0x93A7F )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_close_time_ >> 3)
                                                                + 0x7FFF8000) )
          {
            __asan_report_load4(&this->home_limited_shop_original_close_time_);
          }
          close_time = this->home_limited_shop_original_close_time_;
          if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_guest_open_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->home_limited_shop_original_guest_open_time_);
          }
          guest_open_time = this->home_limited_shop_original_guest_open_time_;
          if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->home_limited_shop_original_open_time_);
          }
          if ( close_time < this->home_limited_shop_original_open_time_ )
            close_time += 604800;
          if ( *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->home_limited_shop_original_open_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->home_limited_shop_original_open_time_);
          }
          if ( guest_open_time < this->home_limited_shop_original_open_time_ )
            guest_open_time += 604800;
          if ( guest_open_time <= close_time )
          {
            result = 0;
          }
          else
          {
            if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(&v2[9], 32LL);
            }
            common::milog::MiLogStream::create(
              v2 + 9,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkHomeLimitedShopTime",
              1922);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v2 + 9,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
                    v15,
                    (const char (*)[74])byte_1A312EE0);
            v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v16,
                    &this->home_limited_shop_original_guest_open_time_);
            v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v17,
                    (const char (*)[16])byte_1A312F60);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
              v18,
              &this->home_limited_shop_original_close_time_);
            common::milog::MiLogStream::~MiLogStream(v2 + 9);
            result = -1;
          }
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v2 - 1) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(&v2[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v2 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkHomeLimitedShopTime",
            1904);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v2 + 7,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v14 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v13, (const char (*)[62])byte_1A312E80);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
            v14,
            &this->home_limited_shop_original_guest_open_time_);
          common::milog::MiLogStream::~MiLogStream(v2 + 7);
          result = -1;
        }
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkHomeLimitedShopTime",
        1894);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v8, (const char (*)[53])byte_1A312DC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v9,
        &this->home_limited_shop_original_close_time_);
      common::milog::MiLogStream::~MiLogStream(v2 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkHomeLimitedShopTime",
      1889);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v5, (const char (*)[53])byte_1A312D60);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v6,
      &this->home_limited_shop_original_open_time_);
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  if ( v21 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = -168430091;
  }
  return result;
};

// Line 1929: range 000000000E13C552-000000000E13CFC3
int32_t __cdecl ConstValueExcelConfigMgr::checkWeeklyBossResinDiscountParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rdx
  int v14; // eax
  char *v15; // rsi
  unsigned int *v16; // rax
  int *v17; // rdx
  int v18; // ecx
  char v19; // al
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+10h] [rbp-230h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+18h] [rbp-228h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v27; // [rsp+20h] [rbp-220h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *scene_id; // [rsp+28h] [rbp-218h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *group_id_set; // [rsp+30h] [rbp-210h]
  const SceneScriptConfig *scene_script_config_ptr; // [rsp+38h] [rbp-208h]
  char v31[496]; // [rsp+50h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 4 13 group_id:1952 64 8 16 __for_begin:1943 96 8 14 __for_end:1943 128 8 16 __for_begin:195"
                        "2 160 8 14 __for_end:1952 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkWeeklyBossResinDiscountParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  v6 = (((_BYTE)this + 108) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->weekly_boss_resin_discount_num_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->weekly_boss_resin_discount_num_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->weekly_boss_resin_discount_num_limit_);
  }
  if ( this->weekly_boss_resin_discount_num_limit_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->weekly_boss_resin_discount_ratio_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->weekly_boss_resin_discount_ratio_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->weekly_boss_resin_discount_ratio_);
    }
    if ( this->weekly_boss_resin_discount_ratio_ <= 1.0 && this->weekly_boss_resin_discount_ratio_ >= 0.0 )
    {
      lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
      __for_range = &this->world_weekly_boss_config_map_;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v6);
      *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range);
      while ( 1 )
      {
        if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96)) )
        {
          v14 = 1;
          goto LABEL_49;
        }
        v27 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
        scene_id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v27);
        group_id_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v27);
        if ( *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)scene_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)scene_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(scene_id);
        }
        v11 = *scene_id;
        scene_script_config_ptr = LuaConfigMgr::findSceneScriptConfig(lua_config_mgr, v11);
        if ( !scene_script_config_ptr )
          break;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 128, v11);
        *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 128) = std::unordered_set<unsigned int>::begin(group_id_set);
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 160, v11);
        *(std::unordered_set<unsigned int>::const_iterator *)(v3 + 160) = std::unordered_set<unsigned int>::end(group_id_set);
        while ( 1 )
        {
          v15 = (char *)(v3 + 160);
          if ( !std::__detail::operator!=<unsigned int,false>(
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 128),
                  (const std::__detail::_Node_iterator_base<unsigned int,false> *)(v3 + 160)) )
          {
            v22 = 1;
            goto LABEL_45;
          }
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v16 = (unsigned int *)std::__detail::_Node_const_iterator<unsigned int,true,false>::operator*((const std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 128));
          v17 = (int *)v16;
          if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v16);
          }
          v18 = *v17;
          v19 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v19 != 0 && v19 <= 3 )
          {
            LOBYTE(v15) = v19 != 0;
            __asan_report_store4(v3 + 48, v15);
          }
          *(_DWORD *)(v3 + 48) = v18;
          if ( !SceneScriptConfig::findGroupInfoConfig(scene_script_config_ptr, *(unsigned int *)(v3 + 48)) )
            break;
          std::__detail::_Node_const_iterator<unsigned int,true,false>::operator++((std::__detail::_Node_const_iterator<unsigned int,true,false> *const)(v3 + 128));
        }
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkWeeklyBossResinDiscountParam",
          1957);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v20, (const char (*)[52])byte_1A313200);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, (const unsigned int *)(v3 + 48));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
        *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v22 = 0;
LABEL_45:
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
        if ( v22 != 1 )
        {
          v14 = 0;
          goto LABEL_49;
        }
        std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
      }
      *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkWeeklyBossResinDiscountParam",
        1948);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v12, (const char (*)[52])byte_1A3131A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, scene_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
      v2 = -1;
      v14 = 0;
LABEL_49:
      if ( v14 == 1 )
        v2 = 0;
    }
    else
    {
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkWeeklyBossResinDiscountParam",
        1938);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v9, (const char (*)[47])byte_1A313140);
      common::milog::MiLogStream::operator<<<float,(float *)0>(v10, &this->weekly_boss_resin_discount_ratio_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkWeeklyBossResinDiscountParam",
      1932);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v7, (const char (*)[53])byte_1A3130E0);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v8,
      &this->weekly_boss_resin_discount_num_limit_);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
    v2 = -1;
  }
  result = v2;
  if ( v31 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8034) = 0;
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
  }
  return result;
};

// Line 1967: range 000000000E13CFC4-000000000E13D470
int32_t __cdecl ConstValueExcelConfigMgr::checkHeroCourseTransferConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-D8h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+20h] [rbp-D0h]
  char v12[192]; // [rsp+30h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkHeroCourseTransferConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_config_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_config_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->hero_course_transfer_config_id_);
  }
  if ( this->hero_course_transfer_config_id_ )
    goto LABEL_11;
  if ( *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_group_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_group_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->hero_course_transfer_group_id_);
  }
  if ( this->hero_course_transfer_group_id_ )
  {
LABEL_11:
    lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_group_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_group_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->hero_course_transfer_group_id_);
    }
    group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, this->hero_course_transfer_group_id_);
    if ( group_script_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_config_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->hero_course_transfer_config_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->hero_course_transfer_config_id_);
      }
      if ( GroupScriptConfig::findPointConfig(group_script_config_ptr, this->hero_course_transfer_config_id_) )
      {
        result = 0;
      }
      else
      {
        if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 96, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 96),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkHeroCourseTransferConfig",
          1982);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 96),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v8, (const char (*)[43])byte_1A313300);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
          v9,
          &this->hero_course_transfer_config_id_);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 32, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 32),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkHeroCourseTransferConfig",
        1976);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 32),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1A3132A0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->hero_course_transfer_group_id_);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
      result = -1;
    }
  }
  else
  {
    result = 0;
  }
  if ( v12 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1989: range 000000000E13D472-000000000E13E14D
int32_t __cdecl ConstValueExcelConfigMgr::rewriteMuipMailLimitConfig(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  const std::string *v15; // rax
  bool v16; // r14
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // r14
  const std::string *v19; // rax
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  const std::string *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  data::ConstValueExcelConfig *muip_config_ptr; // [rsp+18h] [rbp-2B8h]
  char v29[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256"
                        " 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteMuipMailLimitConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -202116109;
  muip_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 234LL);
  if ( muip_config_ptr )
  {
    if ( std::vector<std::string>::size(&muip_config_ptr->value) > 4 )
    {
      v7 = std::vector<std::string>::operator[](&muip_config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->muip_mail_hcoin_limit_, 1) )
      {
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteMuipMailLimitConfig",
          2003);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
               v8,
               (const char (*)[39])"muip_mail_hcoin_limit_ strToNum fails:");
        v10 = std::vector<std::string>::operator[](&muip_config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
        result = -1;
      }
      else
      {
        v11 = std::vector<std::string>::operator[](&muip_config_ptr->value, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v11, &this->muip_mail_scoin_limit_, 1) )
        {
          if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteMuipMailLimitConfig",
            2008);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
                  v12,
                  (const char (*)[39])"muip_mail_scoin_limit_ strToNum fails:");
          v14 = std::vector<std::string>::operator[](&muip_config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
          result = -1;
        }
        else
        {
          std::allocator<char>::allocator(v1 + 48);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v1 + 384),
            ":",
            (const std::allocator<char> *)(v1 + 48));
          std::allocator<char>::allocator(v1 + 32);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v1 + 320),
            ",",
            (const std::allocator<char> *)(v1 + 32));
          v15 = std::vector<std::string>::operator[](&muip_config_ptr->value, 2uLL);
          v16 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
                  v15,
                  (const std::string *)(v1 + 320),
                  (const std::string *)(v1 + 384),
                  &this->muip_mail_item_limit_map_,
                  0) != 0;
          std::string::~string((void *)(v1 + 320));
          *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v1 + 32);
          *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
          std::string::~string((void *)(v1 + 384));
          *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v1 + 48);
          *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
          if ( v16 )
          {
            *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteMuipMailLimitConfig",
              2013);
            v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v18 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                    v17,
                    (const char (*)[18])"splitToMap fails:");
            v19 = std::vector<std::string>::operator[](&muip_config_ptr->value, 2uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v18, v19);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
            result = -1;
          }
          else
          {
            v20 = std::vector<std::string>::operator[](&muip_config_ptr->value, 3uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v20, &this->muip_mail_equip_limit_, 1) )
            {
              *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 512, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 512),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteMuipMailLimitConfig",
                2018);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v1 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
                      v21,
                      (const char (*)[30])"muip_mail_equip_limit_ fails:");
              v23 = std::vector<std::string>::operator[](&muip_config_ptr->value, 3uLL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
              result = -1;
            }
            else
            {
              v24 = std::vector<std::string>::operator[](&muip_config_ptr->value, 4uLL);
              if ( common::tools::StringUtils::strToNum<unsigned int>(v24, &this->muip_mail_avatar_limit_, 1) )
              {
                *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) != 0
                  && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v1 + 576, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v1 + 576),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteMuipMailLimitConfig",
                  2023);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v1 + 576),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                        v25,
                        (const char (*)[31])"muip_mail_avatar_limit_ fails:");
                v27 = std::vector<std::string>::operator[](&muip_config_ptr->value, 4uLL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 576));
                result = -1;
              }
              else
              {
                result = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteMuipMailLimitConfig",
        1998);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"size less than 3");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteMuipMailLimitConfig",
      1993);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      v4,
      (const char (*)[67])"findConstValueExcelConfig CONST_VALUE_MUIP_MAIL_REWARD_LIMIT fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v29 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2030: range 000000000E13E14E-000000000E13ED33
int32_t __cdecl ConstValueExcelConfigMgr::rewriteWaterSpriteConfig(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t v5; // r14d
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  unsigned __int64 v10; // rax
  const std::string *v11; // rax
  bool v12; // r14
  common::milog::MiLogStream *v13; // rax
  std::vector<unsigned int>::size_type v14; // r14
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::reference v16; // rax
  int *v17; // rdx
  int v18; // r14d
  const std::map<unsigned int,unsigned int>::key_type *v19; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  _DWORD *v21; // rdx
  char v22; // cl
  int32_t result; // eax
  size_t idx; // [rsp+10h] [rbp-2C0h]
  data::ConstValueExcelConfig *water_sprite_config_ptr; // [rsp+18h] [rbp-2B8h]
  char v26[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "11 32 1 9 <unknown> 48 1 9 <unknown> 64 24 15 search_vec:2042 128 24 13 days_vec:2048 192 32 9 <"
                        "unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <u"
                        "nknown> 576 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteWaterSpriteConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234881024;
  v3[536862723] = -218959118;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -202116109;
  water_sprite_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 239LL);
  if ( water_sprite_config_ptr )
  {
    if ( std::vector<std::string>::size(&water_sprite_config_ptr->value) > 4 )
    {
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 64));
      std::allocator<char>::allocator(v1 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 320),
        ",",
        (const std::allocator<char> *)(v1 + 32));
      v7 = std::vector<std::string>::operator[](&water_sprite_config_ptr->value, 3uLL);
      v8 = common::tools::StringUtils::splitToList<unsigned int>(
             v7,
             (const std::string *)(v1 + 320),
             (std::vector<unsigned int> *)(v1 + 64),
             1) != 0;
      std::string::~string((void *)(v1 + 320));
      *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 32);
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteWaterSpriteConfig",
          2045);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 384),
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v9, (const char (*)[21])"split to list failed");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
      }
      else
      {
        v10 = ((v1 + 128) >> 3) + 2147450880;
        *(_WORD *)v10 = 0;
        *(_BYTE *)(v10 + 2) = 0;
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v1 + 128));
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v1 + 48);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v1 + 448),
          ",",
          (const std::allocator<char> *)(v1 + 48));
        v11 = std::vector<std::string>::operator[](&water_sprite_config_ptr->value, 4uLL);
        v12 = common::tools::StringUtils::splitToList<unsigned int>(
                v11,
                (const std::string *)(v1 + 448),
                (std::vector<unsigned int> *)(v1 + 128),
                1) != 0;
        std::string::~string((void *)(v1 + 448));
        *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v1 + 48);
        *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
        if ( v12 )
        {
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 512, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 512),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteWaterSpriteConfig",
            2051);
          v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 512),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
            v13,
            (const char (*)[21])"split to list failed");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
          *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
        }
        else
        {
          v14 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64));
          if ( v14 == std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 128)) )
          {
            for ( idx = 0LL; idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v1 + 64)); ++idx )
            {
              v16 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 128), idx);
              v17 = (int *)v16;
              if ( *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v16 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v16 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v16);
              }
              v18 = *v17;
              v19 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v1 + 64), idx);
              v20 = std::map<unsigned int,unsigned int>::operator[](&this->water_sprite_search_map_, v19);
              v21 = v20;
              v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
              if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
              {
                LOBYTE(v19) = v22 != 0;
                __asan_report_store4(v20, v19);
              }
              *v21 = v18;
            }
            v5 = 0;
          }
          else
          {
            *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 576, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 576),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteWaterSpriteConfig",
              2056);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 576),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
              v15,
              (const char (*)[34])"water sprite search days dismatch");
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 576));
            *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
          }
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 128));
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v1 + 64));
    }
    else
    {
      if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteWaterSpriteConfig",
        2039);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 256),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v6, (const char (*)[17])"size less than 5");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
      v5 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteWaterSpriteConfig",
      2034);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 192),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(
      v4,
      (const char (*)[82])"findConstValueExcelConfig CONST_VALUE_ACTIVITY_WATER_SPRITE_PARA_SECONDPART fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
    v5 = -1;
  }
  result = v5;
  if ( v26 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2069: range 000000000E13ED34-000000000E13F47C
int32_t __cdecl ConstValueExcelConfigMgr::checkMuipMailLimitConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  __int64 v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v11; // rdx
  MaterialExcelConfigMgr *p_material_config_mgr; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  int v16; // eax
  int32_t result; // eax
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-188h]
  const unsigned int *item_id; // [rsp+20h] [rbp-180h]
  char v21[368]; // [rsp+30h] [rbp-170h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(320LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 9 <unknown> 64 8 16 __for_begin:2080 96 8 14 __for_end:2080 128 32 9 <unknown> 192 32 9 <"
                        "unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkMuipMailLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -218959118;
  v5[536862727] = -218959118;
  v5[536862729] = -202116109;
  v6 = (((_BYTE)this - 100) & 7u) + 3;
  if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_hcoin_limit_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->muip_mail_hcoin_limit_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->muip_mail_hcoin_limit_);
  }
  if ( this->muip_mail_hcoin_limit_ <= 0x270F )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->muip_mail_scoin_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->muip_mail_scoin_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->muip_mail_scoin_limit_);
    }
    if ( this->muip_mail_scoin_limit_ <= 0x98967F )
    {
      __for_range = &this->muip_mail_item_limit_map_;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 64, v6);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 64) = std::map<unsigned int,unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 96, v6);
      *(std::map<unsigned int,unsigned int>::const_iterator *)(v3 + 96) = std::map<unsigned int,unsigned int>::end(__for_range);
      while ( 1 )
      {
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 64),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 96)) )
        {
          v16 = 1;
          goto LABEL_34;
        }
        v11 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
        if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 32, v3 + 96);
        if ( ((unsigned __int8)v11 & 7) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000)
          && *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
          || *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v11 + 7) & 7) >= *(_BYTE *)((((unsigned __int64)&v11->second + 3) >> 3) + 0x7FFF8000) )
        {
          __asan_report_load_n(v11, 8LL);
        }
        *(std::pair<unsigned int const,unsigned int> *)(v3 + 32) = *v11;
        item_id = std::get<0ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 32));
        std::get<1ul,unsigned int const,unsigned int>((std::pair<unsigned int const,unsigned int> *)(v3 + 32));
        p_material_config_mgr = &txt_config_mgr->material_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)item_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)item_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(item_id);
        }
        if ( !data::MaterialExcelConfigMgrBase::findMaterialExcelConfig(p_material_config_mgr, *item_id) )
          break;
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 64));
      }
      if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 31) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkMuipMailLimitConfig",
        2084);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v13, (const char (*)[43])byte_1A313AC0);
      v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, item_id);
      common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v15, (const char (*)[10])byte_1A311380);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
      v2 = -1;
      v16 = 0;
LABEL_34:
      if ( v16 == 1 )
        v2 = 0;
    }
    else
    {
      if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 33) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkMuipMailLimitConfig",
        2077);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v9, (const char (*)[36])byte_1A313A60);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &TxtConfigMgr::max_scoin_max_count);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
      v2 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkMuipMailLimitConfig",
      2072);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v8 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(v7, (const char (*)[36])byte_1A313A00);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, &TxtConfigMgr::max_hcoin_max_count);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
    v2 = -1;
  }
  result = v2;
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2092: range 000000000E13F47E-000000000E13F8F5
int32_t __cdecl ConstValueExcelConfigMgr::checkWorldLevelAdjustConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  PlayerExcelConfigMgr *p_player_config_mgr; // rcx
  uint32_t world_level_adjust_min_limit; // esi
  common::milog::MiLogStream *v9; // rax
  char v10[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkWorldLevelAdjustConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_min_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_min_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->world_level_adjust_min_limit_);
  }
  if ( !this->world_level_adjust_min_limit_ )
    goto LABEL_30;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_cd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_cd_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->world_level_adjust_cd_);
  }
  if ( !this->world_level_adjust_cd_ )
    goto LABEL_30;
  if ( *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_pace_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_pace_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->world_level_adjust_pace_);
  }
  if ( this->world_level_adjust_pace_ )
  {
    p_player_config_mgr = &txt_config_mgr->player_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_min_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_min_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->world_level_adjust_min_limit_);
    }
    world_level_adjust_min_limit = this->world_level_adjust_min_limit_;
    if ( *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_pace_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->world_level_adjust_pace_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->world_level_adjust_pace_);
    }
    if ( data::PlayerExcelConfigMgrBase::findPlayerLevelLockExcelConfig(
           p_player_config_mgr,
           world_level_adjust_min_limit + this->world_level_adjust_pace_) )
    {
      result = 0;
    }
    else
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkWorldLevelAdjustConfig",
        2101);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v9, (const char (*)[64])byte_1A313BC0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = -1;
    }
  }
  else
  {
LABEL_30:
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkWorldLevelAdjustConfig",
      2095);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v5, (const char (*)[44])byte_1A313B60);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  if ( v10 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2108: range 000000000E13F8F6-000000000E13FAF2
uint32_t __fastcall ConstValueExcelConfigMgr::findMuipMailItemLimit(
        const ConstValueExcelConfigMgr *const this,
        __int64 item_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_muip_mail_item_limit_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  uint32_t result; // eax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 12 item_id:2107 64 8 9 iter:2109 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::findMuipMailItemLimit;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = item_id;
  p_muip_mail_item_limit_map = &this->muip_mail_item_limit_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, item_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_muip_mail_item_limit_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->muip_mail_item_limit_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = std::numeric_limits<unsigned int>::max();
  }
  if ( v11 == (char *)v2 )
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

// Line 2119: range 000000000E13FAF4-000000000E13FCD4
bool __fastcall ConstValueExcelConfigMgr::isWorldWeeklyBossGroup(
        const ConstValueExcelConfigMgr *const this,
        __int64 scene_id,
        uint32_t group_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *p_world_weekly_boss_config_map; // rdx
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *v7; // rdx
  bool v8; // al
  bool result; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::pointer v10; // rax
  char v12[160]; // [rsp+10h] [rbp-A0h] BYREF

  v3 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 4 13 scene_id:2118 48 4 13 group_id:2118 64 8 15 scene_iter:2120 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::isWorldWeeklyBossGroup;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 32) = scene_id;
  *(_DWORD *)(v3 + 48) = group_id;
  p_world_weekly_boss_config_map = &this->world_weekly_boss_config_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, scene_id);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::find(p_world_weekly_boss_config_map, (const std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->world_weekly_boss_config_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 64));
    result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
               &v10->second,
               (const unsigned int *)(v3 + 48));
  }
  if ( v12 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2130: range 000000000E13FCD6-000000000E13FD73
uint32_t __cdecl ConstValueExcelConfigMgr::getHomePriorCheckTime(const ConstValueExcelConfigMgr *const this)
{
  unsigned int home_prior_check_time_max; // edx

  if ( *(_BYTE *)(((unsigned __int64)&this->home_prior_check_time_max_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_prior_check_time_max_ >> 3)
                                                         + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_prior_check_time_max_);
  }
  home_prior_check_time_max = this->home_prior_check_time_max_;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_prior_check_time_min_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_prior_check_time_min_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_prior_check_time_min_);
  }
  return common::tools::RandomUtils::rand<unsigned int>(this->home_prior_check_time_min_, home_prior_check_time_max);
};

// Line 2135: range 000000000E13FD74-000000000E1400EE
int32_t __cdecl ConstValueExcelConfigMgr::checkHomeResourceConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  char v8[192]; // [rsp+10h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 32 9 <unknown> 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkHomeResourceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_coin_product_interval_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_coin_product_interval_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_coin_product_interval_);
  }
  if ( this->home_coin_product_interval_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_fetter_exp_product_interval_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_fetter_exp_product_interval_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->home_fetter_exp_product_interval_);
    }
    if ( this->home_fetter_exp_product_interval_ )
    {
      result = 0;
    }
    else
    {
      if ( *(char *)(((v2 + 96) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 127) & 7) >= *(_BYTE *)(((v2 + 127) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 96, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 96),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkHomeResourceConfig",
        2143);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v7, (const char (*)[32])byte_1A313D00);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 63) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 32, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 32),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkHomeResourceConfig",
      2138);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v5, (const char (*)[32])byte_1A313D00);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  if ( v8 == (char *)v2 )
  {
    *(_DWORD *)((v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 2150: range 000000000E1400F0-000000000E14067C
int32_t __cdecl ConstValueExcelConfigMgr::checkHomeFurnitureConfig(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  char v9[256]; // [rsp+10h] [rbp-100h] BYREF

  v2 = (common::milog::MiLogStream *)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::checkHomeFurnitureConfig;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_edit_mode_cd_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->home_edit_mode_cd_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->home_edit_mode_cd_);
  }
  if ( !this->home_edit_mode_cd_ )
    goto LABEL_34;
  if ( *(_BYTE *)(((unsigned __int64)&this->home_furniture_update_cd_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this + 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_furniture_update_cd_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->home_furniture_update_cd_);
  }
  if ( this->home_furniture_update_cd_ )
  {
    if ( *(_BYTE *)(((unsigned __int64)&this->home_world_block_furniture_limit_ >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->home_world_block_furniture_limit_ >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->home_world_block_furniture_limit_);
    }
    if ( !this->home_world_block_furniture_limit_ )
      goto LABEL_35;
    if ( *(_BYTE *)(((unsigned __int64)&this->home_room_block_furniture_limit_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_room_block_furniture_limit_ >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->home_room_block_furniture_limit_);
    }
    if ( this->home_room_block_furniture_limit_ )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->home_suite_furniture_id_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_suite_furniture_id_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&this->home_suite_furniture_id_);
      }
      if ( this->home_suite_furniture_id_ )
      {
        result = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v2 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v2[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v2 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkHomeFurnitureConfig",
          2163);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v2 + 5,
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1A313E80);
        common::milog::MiLogStream::~MiLogStream(v2 + 5);
        result = -1;
      }
    }
    else
    {
LABEL_35:
      if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkHomeFurnitureConfig",
        2158);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v2 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v7, (const char (*)[44])byte_1A313E20);
      common::milog::MiLogStream::~MiLogStream(v2 + 3);
      result = -1;
    }
  }
  else
  {
LABEL_34:
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkHomeFurnitureConfig",
      2153);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(v5, (const char (*)[58])byte_1A313DC0);
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    result = -1;
  }
  if ( v9 == (char *)v2 )
  {
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2170: range 000000000E14067E-000000000E140CAB
int32_t __cdecl ConstValueExcelConfigMgr::rewriteMapMarkParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  common::milog::MiLogStream *v5; // r14
  __int64 v6; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  __int64 v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  __int64 v14; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-178h]
  char v16[368]; // [rsp+20h] [rbp-170h] BYREF

  v1 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(320LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "6 32 8 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteMapMarkParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -218959360;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 411LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 1 )
    {
      v11 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v11, &this->map_mark_max_count_, 1) )
      {
        if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 256, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 256),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteMapMarkParam",
          2185);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v1 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v12,
                (const char (*)[35])"parse ConstValueConfig fail, name:");
        v14 = (__int64)data::enumValToStr(CONST_VALUE_MAP_MARK_PARAM, (__int64)"parse ConstValueConfig fail, name:");
        if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
          v14 = __asan_report_store8(v1 + 96, "parse ConstValueConfig fail, name:");
        *(_QWORD *)(v1 + 96) = v14;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v13, (const char *const *)(v1 + 96));
        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteMapMarkParam",
        2179);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v8,
             (const char (*)[32])"invalid ConstValueConfig, name:");
      v10 = (__int64)data::enumValToStr(CONST_VALUE_MAP_MARK_PARAM, (__int64)"invalid ConstValueConfig, name:");
      if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
        v10 = __asan_report_store8(v1 + 64, "invalid ConstValueConfig, name:");
      *(_QWORD *)(v1 + 64) = v10;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v9, (const char *const *)(v1 + 64));
      *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteMapMarkParam",
      2174);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v5 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
           v4,
           (const char (*)[39])"findConstValueExcelConfig fails, name:");
    v6 = (__int64)data::enumValToStr(CONST_VALUE_MAP_MARK_PARAM, (__int64)"findConstValueExcelConfig fails, name:");
    if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) )
      v6 = __asan_report_store8(v1 + 32, "findConstValueExcelConfig fails, name:");
    *(_QWORD *)(v1 + 32) = v6;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v5, (const char *const *)(v1 + 32));
    *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    result = -1;
  }
  if ( v16 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2192: range 000000000E140CAC-000000000E140F88
int32_t __cdecl ConstValueExcelConfigMgr::checkMapMarkParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // r14
  __int64 v9; // rax
  int32_t result; // eax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 32 8 9 <unknown> 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkMapMarkParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862723] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&this->map_mark_max_count_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->map_mark_max_count_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->map_mark_max_count_);
  }
  if ( this->map_mark_max_count_ && this->map_mark_max_count_ <= 0x96 )
  {
    result = 0;
  }
  else
  {
    if ( *(char *)(((v2 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 + 95) & 7) >= *(_BYTE *)(((v2 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkMapMarkParam",
      2195);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
           v5,
           (const char (*)[28])"invalid map_mark_max_count:");
    v7 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, &this->map_mark_max_count_);
    v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" name:");
    v9 = (__int64)data::enumValToStr(CONST_VALUE_MAP_MARK_PARAM, (__int64)" name:");
    if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
      v9 = __asan_report_store8(v2 + 32, " name:");
    *(_QWORD *)(v2 + 32) = v9;
    common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v8, (const char *const *)(v2 + 32));
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = -1;
  }
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2202: range 000000000E140F8A-000000000E141A76
int32_t __cdecl ConstValueExcelConfigMgr::checkChessCardParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> >::reference v7; // rax
  __int64 v8; // rsi
  unsigned int first; // ecx
  char v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // eax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  __int64 v16; // rsi
  unsigned int second; // ecx
  char v18; // al
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  int v23; // edx
  int v24; // eax
  int32_t result; // eax
  std::vector<std::vector<std::pair<unsigned int,unsigned int>>> *__for_range; // [rsp+10h] [rbp-220h]
  __gnu_cxx::__normal_iterator<const std::vector<std::pair<unsigned int,unsigned int>>*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>> >::reference __for_range_0; // [rsp+20h] [rbp-210h]
  const std::pair<unsigned int,unsigned int> *card_id_pair; // [rsp+28h] [rbp-208h]
  const data::ActivityChessCardExcelConfig *card_config_ptr; // [rsp+30h] [rbp-200h]
  const data::ActivityChessCardExcelConfig *curse_card_config_ptr; // [rsp+38h] [rbp-1F8h]
  char v32[496]; // [rsp+40h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "10 32 4 12 card_id:2207 48 4 18 curse_card_id:2220 64 8 16 __for_begin:2203 96 8 14 __for_end:22"
                        "03 128 8 16 __for_begin:2205 160 8 14 __for_end:2205 192 32 9 <unknown> 256 32 9 <unknown> 320 3"
                        "2 9 <unknown> 384 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkChessCardParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -218959118;
  v5[536862729] = -218959118;
  v5[536862731] = -218959118;
  v5[536862733] = -202116109;
  __for_range = &this->chess_teach_dungeon_card_config_vec_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 64) = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::const_iterator *)(v3 + 96) = std::vector<std::vector<std::pair<unsigned int,unsigned int>>>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !__gnu_cxx::operator!=<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>(
            (const __gnu_cxx::__normal_iterator<const std::vector<std::pair<unsigned int,unsigned int>>*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>> > *)(v3 + 64),
            (const __gnu_cxx::__normal_iterator<const std::vector<std::pair<unsigned int,unsigned int>>*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>> > *)(v3 + 96)) )
      break;
    __for_range_0 = __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator*((const __gnu_cxx::__normal_iterator<const std::vector<std::pair<unsigned int,unsigned int>>*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>> > *const)(v3 + 64));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 128) = std::vector<std::pair<unsigned int,unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::vector<std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 160) = std::vector<std::pair<unsigned int,unsigned int>>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>(
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *)(v3 + 160)) )
    {
      v7 = __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator*((const __gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v3 + 128));
      card_id_pair = v7;
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
      v8 = ((unsigned __int8)v7 & 7u) + 3;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      first = card_id_pair->first;
      v10 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v8) = v10 != 0;
        __asan_report_store4(v3 + 32, v8);
      }
      *(_DWORD *)(v3 + 32) = first;
      card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                          &txt_config_mgr->activity_chess_config_mgr,
                          *(unsigned int *)(v3 + 32));
      if ( card_config_ptr )
      {
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&card_config_ptr->card_type);
        }
        if ( card_config_ptr->card_type )
        {
          *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
          v16 = (((_BYTE)card_id_pair + 4) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&card_id_pair->second >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_id_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_id_pair->second >> 3)
                                                                       + 0x7FFF8000) )
          {
            __asan_report_load4(&card_id_pair->second);
          }
          second = card_id_pair->second;
          v18 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
          if ( v18 != 0 && v18 <= 3 )
          {
            LOBYTE(v16) = v18 != 0;
            __asan_report_store4(v3 + 48, v16);
          }
          *(_DWORD *)(v3 + 48) = second;
          if ( !*(_DWORD *)(v3 + 48) )
          {
LABEL_45:
            v13 = 1;
            goto LABEL_46;
          }
          curse_card_config_ptr = data::ActivityChessExcelConfigMgrBase::findActivityChessCardExcelConfig(
                                    &txt_config_mgr->activity_chess_config_mgr,
                                    *(unsigned int *)(v3 + 48));
          if ( curse_card_config_ptr )
          {
            if ( *(_BYTE *)(((unsigned __int64)&curse_card_config_ptr->card_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&curse_card_config_ptr->card_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&curse_card_config_ptr->card_type);
            }
            if ( curse_card_config_ptr->card_type == CHESS_CARD_CURSE )
              goto LABEL_45;
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 384) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 97) & 7) >= *(_BYTE *)(((v3 + 415) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 384, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 384),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkChessCardParam",
              2231);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 384),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                    v21,
                    (const char (*)[29])"card type invalid, card_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 384));
            *(_DWORD *)(((v3 + 384) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
          else
          {
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 95) & 7) >= *(_BYTE *)(((v3 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkChessCardParam",
              2226);
            v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                    v19,
                    (const char (*)[57])"findActivityChessCardExcelConfig failed, curse_card_id: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 320));
            *(_DWORD *)(((v3 + 320) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v13 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 64 + 95) & 7) >= *(_BYTE *)(((v3 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkChessCardParam",
            2216);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                  v14,
                  (const char (*)[29])"card type invalid, card_id: ");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 256));
          *(_DWORD *)(((v3 + 256) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v13 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 64 + 31) & 7) >= *(_BYTE *)(((v3 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkChessCardParam",
          2211);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                v11,
                (const char (*)[51])"findActivityChessCardExcelConfig failed, card_id: ");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
        *(_DWORD *)(((v3 + 192) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v13 = 0;
      }
LABEL_46:
      *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v13 != 1 )
      {
        v23 = 0;
        goto LABEL_50;
      }
      __gnu_cxx::__normal_iterator<std::pair<unsigned int,unsigned int> const*,std::vector<std::pair<unsigned int,unsigned int>>>::operator++((__gnu_cxx::__normal_iterator<const std::pair<unsigned int,unsigned int>*,std::vector<std::pair<unsigned int,unsigned int>> > *const)(v3 + 128));
    }
    v23 = 1;
LABEL_50:
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v23 != 1 )
    {
      v24 = 0;
      goto LABEL_54;
    }
    __gnu_cxx::__normal_iterator<std::vector<std::pair<unsigned int,unsigned int>> const*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>>>::operator++((__gnu_cxx::__normal_iterator<const std::vector<std::pair<unsigned int,unsigned int>>*,std::vector<std::vector<std::pair<unsigned int,unsigned int>>> > *const)(v3 + 64));
  }
  v24 = 1;
LABEL_54:
  if ( v24 == 1 )
    v2 = 0;
  result = v2;
  if ( v32 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
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
  }
  return result;
};

// Line 2242: range 000000000E141A78-000000000E141F4A
int32_t __cdecl ConstValueExcelConfigMgr::checkHitTreeParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 *v2; // r9
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  int v8; // eax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char v14[256]; // [rsp+10h] [rbp-100h] BYREF

  v3 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(224LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 17 tree_vec_cap:2243 48 4 26 tree_drop_times_limit:2245 64 8 15 drop_cd_ms:2244 96 32 9 <"
                        "unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkHitTreeParam;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -202116109;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 32, txt_config_mgr);
  *(_DWORD *)(v3 + 32) = 0;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(_QWORD *)(v3 + 64) = 0LL;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_store4(v3 + 48, txt_config_mgr);
  *(_DWORD *)(v3 + 48) = 0;
  if ( ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned long &,unsigned int &>(
         &txt_config_mgr->const_value_config_mgr,
         CONST_VALUE_HIT_TREE_DROP_PARAM,
         (unsigned int *)(v3 + 32),
         (unsigned __int64 *)(v3 + 64),
         (unsigned int *)(v3 + 48),
         v2,
         (unsigned int *)txt_config_mgr) )
  {
    if ( *(char *)(((v3 + 96) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 127) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 96, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 96),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkHitTreeParam",
      2248);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 96),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
      v6,
      (const char (*)[54])"findConstValue CONST_VALUE_HIT_TREE_DROP_PARAM failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
    result = -1;
  }
  else
  {
    v8 = *(unsigned __int8 *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 != 0 && (char)v8 <= 3 )
      __asan_report_load4(v3 + 32);
    if ( !*(_DWORD *)(v3 + 32) )
      goto LABEL_30;
    if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v3 + 48);
    if ( *(_DWORD *)(v3 + 48) && *(_DWORD *)(v3 + 48) <= 5u )
    {
      result = 0;
    }
    else
    {
LABEL_30:
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkHitTreeParam",
        2253);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v9,
              (const char (*)[27])"const value tree_vec_cap: ");
      v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)(v3 + 32));
      v12 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v11,
              (const char (*)[26])", tree_drop_times_limit: ");
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 48));
      common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" invalid");
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      result = -1;
    }
  }
  if ( v14 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2260: range 000000000E141F4C-000000000E143552
int32_t __cdecl ConstValueExcelConfigMgr::checkGCGParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  common::milog::MiLogStream *v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  SceneExcelConfigMgr *p_scene_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  GCGGameExcelConfigMgr *p_gcg_game_config_mgr; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  const JsonConfigMgr *p_json_config_mgr; // rdi
  uint32_t gcg_tavern_entry_point; // ecx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  const JsonConfigMgr *p_gcg_tavern_guest_entry_point; // rdi
  uint32_t gcg_tavern_guest_entry_point; // ecx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rax
  int32_t ret; // [rsp+1Ch] [rbp-354h]
  const data::DungeonExcelConfig *dungeon_config_ptr; // [rsp+20h] [rbp-350h]
  const data::GCGGameExcelConfig *game_config_ptr; // [rsp+28h] [rbp-348h]
  char v34[832]; // [rsp+30h] [rbp-340h] BYREF

  v2 = (common::milog::MiLogStream *)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(800LL);
    if ( v3 )
      v2 = (common::milog::MiLogStream *)v3;
  }
  v2->log_ = (common::milog::MiLog *)1102416563;
  v2->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"12 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown>";
  v2->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::checkGCGParam;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862722] = -218959118;
  v4[536862724] = -218959118;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -218959118;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -218959118;
  v4[536862742] = -218959118;
  v4[536862744] = -202116109;
  ret = 0;
  p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_dungeon_id_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_dungeon_id_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_dungeon_id_);
  }
  dungeon_config_ptr = data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(
                         p_dungeon_config_mgr,
                         this->gcg_dungeon_id_);
  if ( !dungeon_config_ptr )
    goto LABEL_95;
  if ( *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)dungeon_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_config_ptr->type >> 3)
                                                                      + 0x7FFF8000) )
  {
    __asan_report_load4(&dungeon_config_ptr->type);
  }
  if ( dungeon_config_ptr->type != DUNGEON_GCG )
  {
LABEL_95:
    if ( *(char *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2265);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v6, (const char (*)[51])byte_1A314700);
    common::milog::MiLogStream::~MiLogStream(v2 + 1);
    *(_DWORD *)(((unsigned __int64)&v2[1] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_card_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_card_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_card_limit_);
  }
  if ( !this->gcg_card_limit_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[3], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 3,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2270);
    v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 3, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(v7, (const char (*)[29])byte_1A314760);
    common::milog::MiLogStream::~MiLogStream(v2 + 3);
    *(_DWORD *)(((unsigned __int64)&v2[3] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_deck_card_limit_size_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_deck_card_limit_size_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_deck_card_limit_size_);
  }
  if ( !this->gcg_deck_card_limit_size_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[5], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 5,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2275);
    v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 5, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(v8, (const char (*)[35])byte_1A3147A0);
    common::milog::MiLogStream::~MiLogStream(v2 + 5);
    *(_DWORD *)(((unsigned __int64)&v2[5] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_deck_char_limit_size_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_deck_char_limit_size_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_deck_char_limit_size_);
  }
  if ( !this->gcg_deck_char_limit_size_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[7].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[7], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 7,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2280);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 7, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v9, (const char (*)[41])byte_1A314800);
    common::milog::MiLogStream::~MiLogStream(v2 + 7);
    *(_DWORD *)(((unsigned __int64)&v2[7] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  p_scene_config_mgr = &txt_config_mgr->scene_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_tavern_scene_id_);
  }
  if ( !data::SceneExcelConfigMgrBase::findSceneExcelConfig(p_scene_config_mgr, this->gcg_tavern_scene_id_) )
  {
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[9].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[9], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 9,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2285);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v2 + 9, (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v11, (const char (*)[42])byte_1A314860);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, &this->gcg_tavern_scene_id_);
    common::milog::MiLogStream::~MiLogStream(v2 + 9);
    *(_DWORD *)(((unsigned __int64)&v2[9] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_round_limit_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_round_limit_);
  }
  if ( !this->gcg_round_limit_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[11].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[11], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 11,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2290);
    v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 11,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(v13, (const char (*)[27])byte_1A3148C0);
    common::milog::MiLogStream::~MiLogStream(v2 + 11);
    *(_DWORD *)(((unsigned __int64)&v2[11] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_invite_expire_time_ >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_invite_expire_time_ >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_invite_expire_time_);
  }
  if ( !this->gcg_invite_expire_time_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[13].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[13], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 13,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2295);
    v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 13,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v14, (const char (*)[39])byte_1A314900);
    common::milog::MiLogStream::~MiLogStream(v2 + 13);
    *(_DWORD *)(((unsigned __int64)&v2[13] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_settle_wait_time_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_settle_wait_time_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_settle_wait_time_);
  }
  if ( !this->gcg_settle_wait_time_ )
  {
    *(_DWORD *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[15].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[15], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 15,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2300);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 15,
            (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v15, (const char (*)[42])byte_1A314960);
    common::milog::MiLogStream::~MiLogStream(v2 + 15);
    *(_DWORD *)(((unsigned __int64)&v2[15] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  p_gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_default_pvp_game_id_ >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_default_pvp_game_id_ >> 3)
                                                        + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_default_pvp_game_id_);
  }
  game_config_ptr = data::GCGGameExcelConfigMgrBase::findGCGGameExcelConfig(
                      p_gcg_game_config_mgr,
                      this->gcg_default_pvp_game_id_);
  if ( game_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&game_config_ptr->game_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&game_config_ptr->game_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&game_config_ptr->game_type);
    }
    if ( game_config_ptr->game_type )
    {
      *(_DWORD *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[17].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[17], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 17,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGParam",
        2309);
      v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v2 + 17,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v18 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(v17, (const char (*)[45])byte_1A3149C0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, &this->gcg_default_pvp_game_id_);
      common::milog::MiLogStream::~MiLogStream(v2 + 17);
      *(_DWORD *)(((unsigned __int64)&v2[17] >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
  }
  else
  {
    *(_DWORD *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v2 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[19].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v2[19], 32LL);
    }
    common::milog::MiLogStream::create(
      v2 + 19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGParam",
      2315);
    v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            v2 + 19,
            (const char (*)[16])"[CONFIG_ERROR] ");
    v20 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v19, (const char (*)[57])byte_1A314A20);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &this->gcg_default_pvp_game_id_);
    common::milog::MiLogStream::~MiLogStream(v2 + 19);
    *(_DWORD *)(((unsigned __int64)&v2[19] >> 3) + 0x7FFF8000) = -117901064;
    ret = -1;
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_entry_point >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_entry_point >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&this->gcg_tavern_entry_point);
  }
  if ( this->gcg_tavern_entry_point )
  {
    p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_entry_point >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_entry_point >> 3) + 0x7FFF8000) <= 3 )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&this->gcg_tavern_entry_point;
      __asan_report_load4(&this->gcg_tavern_entry_point);
    }
    gcg_tavern_entry_point = this->gcg_tavern_entry_point;
    if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      p_json_config_mgr = (const JsonConfigMgr *)&this->gcg_tavern_scene_id_;
      __asan_report_load4(&this->gcg_tavern_scene_id_);
    }
    if ( !(unsigned int)JsonConfigMgr::findDungeonExitPointId(
                          p_json_config_mgr,
                          this->gcg_tavern_scene_id_,
                          gcg_tavern_entry_point) )
    {
      *(_DWORD *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[21].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[21], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 21,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGParam",
        2324);
      v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v2 + 21,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v24 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v23, (const char (*)[59])byte_1A314A80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &this->gcg_tavern_entry_point);
      common::milog::MiLogStream::~MiLogStream(v2 + 21);
      *(_DWORD *)(((unsigned __int64)&v2[21] >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
  }
  if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_guest_entry_point >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_guest_entry_point >> 3)
                                                       + 0x7FFF8000) )
  {
    __asan_report_load4(&this->gcg_tavern_guest_entry_point);
  }
  if ( this->gcg_tavern_guest_entry_point )
  {
    p_gcg_tavern_guest_entry_point = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_guest_entry_point >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_guest_entry_point >> 3)
                                                         + 0x7FFF8000) )
    {
      p_gcg_tavern_guest_entry_point = (const JsonConfigMgr *)&this->gcg_tavern_guest_entry_point;
      __asan_report_load4(&this->gcg_tavern_guest_entry_point);
    }
    gcg_tavern_guest_entry_point = this->gcg_tavern_guest_entry_point;
    if ( *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->gcg_tavern_scene_id_ >> 3)
                                                          + 0x7FFF8000) )
    {
      p_gcg_tavern_guest_entry_point = (const JsonConfigMgr *)&this->gcg_tavern_scene_id_;
      __asan_report_load4(&this->gcg_tavern_scene_id_);
    }
    if ( !(unsigned int)JsonConfigMgr::findDungeonExitPointId(
                          p_gcg_tavern_guest_entry_point,
                          this->gcg_tavern_scene_id_,
                          gcg_tavern_guest_entry_point) )
    {
      *(_DWORD *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((unsigned __int64)&v2[23] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v2 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v2[23].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v2[23], 32LL);
      }
      common::milog::MiLogStream::create(
        v2 + 23,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGParam",
        2332);
      v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              v2 + 23,
              (const char (*)[16])"[CONFIG_ERROR] ");
      v28 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(v27, (const char (*)[59])byte_1A314A80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, &this->gcg_tavern_guest_entry_point);
      common::milog::MiLogStream::~MiLogStream(v2 + 23);
      ret = -1;
    }
  }
  if ( v34 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8054) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 92) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = 0;
  }
  else
  {
    v2->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8058) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8060) = -168430091;
  }
  return ret;
};

// Line 2341: range 000000000E143554-000000000E143EEB
int32_t __cdecl ConstValueExcelConfigMgr::checkGCGTavernPointIdParam(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  GCGPlayingExcelConfigMgr *p_gcg_playing_config_mgr; // rcx
  __int64 v6; // rsi
  bool v7; // al
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  GCGPlayingExcelConfigMgr *v14; // rcx
  __int64 v15; // rsi
  bool v16; // al
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-1D4h]
  std::map<unsigned int,unsigned int> *__for_range; // [rsp+20h] [rbp-1D0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v27; // [rsp+28h] [rbp-1C8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *sit_point_id; // [rsp+30h] [rbp-1C0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *stand_point_id; // [rsp+38h] [rbp-1B8h]
  const data::GCGScenePointExcelConfig *sit_point_config_ptr; // [rsp+40h] [rbp-1B0h]
  const data::GCGScenePointExcelConfig *stand_point_config_ptr; // [rsp+48h] [rbp-1A8h]
  char v32[416]; // [rsp+50h] [rbp-1A0h] BYREF

  v2 = (unsigned __int64)v32;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(384LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 4 9 <unknown> 48 4 9 <unknown> 64 8 16 __for_begin:2343 96 8 14 __for_end:2343 128 32 9 <un"
                        "known> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::checkGCGTavernPointIdParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -218959118;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -202116109;
  ret = 0;
  __for_range = &this->gcg_character_npc_sit_stand_point_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
            (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96)) )
  {
    v27 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    sit_point_id = std::get<0ul,unsigned int const,unsigned int>(v27);
    stand_point_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v27);
    p_gcg_playing_config_mgr = &txt_config_mgr->gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)sit_point_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)sit_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)sit_point_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(sit_point_id);
    }
    v6 = *sit_point_id;
    sit_point_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGScenePointExcelConfig(
                             p_gcg_playing_config_mgr,
                             v6);
    if ( sit_point_config_ptr )
    {
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 32, v6);
      *(_DWORD *)(v2 + 32) = 1;
      v7 = common::tools::MiscUtils::isContains<data::GCGSupportType>(
             &sit_point_config_ptr->support_type_list,
             (const data::GCGSupportType *)(v2 + 32));
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( !v7 )
      {
        ret = -1;
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
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkGCGTavernPointIdParam",
          2351);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 128),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v8, (const char (*)[23])byte_1A314BC0);
        v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, sit_point_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v10, (const char (*)[20])byte_1A314C00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
        *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGTavernPointIdParam",
        2357);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 192),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v11, (const char (*)[32])byte_1A314C40);
      v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, sit_point_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v13, (const char (*)[11])byte_1A314C80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
      *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
    }
    v14 = &txt_config_mgr->gcg_playing_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)stand_point_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)stand_point_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)stand_point_id >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(stand_point_id);
    }
    v15 = *stand_point_id;
    stand_point_config_ptr = data::GCGPlayingExcelConfigMgrBase::findGCGScenePointExcelConfig(v14, v15);
    if ( stand_point_config_ptr )
    {
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 48, v15);
      *(_DWORD *)(v2 + 48) = 1;
      v16 = common::tools::MiscUtils::isContains<data::GCGSupportType>(
              &stand_point_config_ptr->support_type_list,
              (const data::GCGSupportType *)(v2 + 48));
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( !v16 )
      {
        ret = -1;
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
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkGCGTavernPointIdParam",
          2366);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 256),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(v17, (const char (*)[23])byte_1A314CC0);
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, stand_point_id);
        common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(v19, (const char (*)[20])byte_1A314C00);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
        *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      }
    }
    else
    {
      ret = -1;
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
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGTavernPointIdParam",
        2372);
      v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 320),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v21 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(v20, (const char (*)[32])byte_1A314D00);
      v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, stand_point_id);
      common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v22, (const char (*)[11])byte_1A314C80);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
      *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
    }
    std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
  }
  result = ret;
  if ( v32 == (char *)v2 )
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

// Line 2379: range 000000000E143EEC-000000000E14595D
int32_t __cdecl ConstValueExcelConfigMgr::checkGCGDeckSystemInitDeck(
        const ConstValueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  uint32_t GCGDeckCardLimitSize; // edx
  char v7; // al
  uint32_t GCGDeckCharacterLimitSize; // edx
  char v9; // al
  std::vector<unsigned int>::size_type v10; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // r14
  std::vector<unsigned int>::size_type v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  std::vector<unsigned int>::size_type v16; // rcx
  char v17; // al
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  std::vector<unsigned int>::size_type v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  char *v23; // rsi
  unsigned int *v24; // rax
  int *v25; // rdx
  int v26; // ecx
  char v27; // al
  std::map<unsigned int,unsigned int>::mapped_type *v28; // rax
  uint32_t *p_limit; // rsi
  const data::GCGDeckExcelConfigMgrBase *v30; // rcx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  int v33; // eax
  unsigned int v34; // ecx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  common::milog::MiLogStream *v37; // rax
  common::milog::MiLogStream *v38; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  unsigned __int64 v43; // rax
  char *v44; // rsi
  unsigned int *v45; // rax
  int *v46; // rdx
  int v47; // ecx
  char v48; // al
  std::map<unsigned int,unsigned int>::mapped_type *v49; // rax
  const data::GCGDeckExcelConfigMgrBase *v50; // rcx
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  int v53; // eax
  unsigned int v54; // ecx
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rdx
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rdx
  GCGGameExcelConfigMgr *gcg_game_config_mgr; // [rsp+10h] [rbp-4E0h]
  GCGDeckExcelConfigMgr *gcg_deck_config_mgr; // [rsp+18h] [rbp-4D8h]
  std::vector<unsigned int> *__for_range; // [rsp+20h] [rbp-4D0h]
  std::map<unsigned int,unsigned int> *__for_range_0; // [rsp+28h] [rbp-4C8h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference __in; // [rsp+30h] [rbp-4C0h]
  uint32_t *card_id; // [rsp+38h] [rbp-4B8h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num; // [rsp+40h] [rbp-4B0h]
  const data::GCGDeckCardExcelConfig *card_config_ptr; // [rsp+48h] [rbp-4A8h]
  std::vector<unsigned int> *__for_range_1; // [rsp+50h] [rbp-4A0h]
  std::map<unsigned int,unsigned int> *__for_range_2; // [rsp+58h] [rbp-498h]
  std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::reference v73; // [rsp+60h] [rbp-490h]
  const unsigned int *card_id_0; // [rsp+68h] [rbp-488h]
  std::tuple_element<1,std::pair<unsigned int const,unsigned int> >::type *num_0; // [rsp+70h] [rbp-480h]
  const data::GCGDeckCardExcelConfig *card_config_ptr_0; // [rsp+78h] [rbp-478h]
  char v77[1136]; // [rsp+80h] [rbp-470h] BYREF

  v3 = (unsigned __int64)v77;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1088LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 32 4 24 deck_card_num_limit:2382 48 4 29 character_card_num_limit:2383 64 4 12 card_id:2397 8"
                        "0 4 12 card_id:2423 96 8 9 <unknown> 128 8 9 <unknown> 160 8 16 __for_begin:2397 192 8 14 __for_"
                        "end:2397 224 8 16 __for_begin:2401 256 8 14 __for_end:2401 288 8 16 __for_begin:2423 320 8 14 __"
                        "for_end:2423 352 8 16 __for_begin:2427 384 8 14 __for_end:2427 416 32 9 <unknown> 480 32 9 <unkn"
                        "own> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unkno"
                        "wn> 864 32 9 <unknown> 928 48 19 card_count_map:2396 1008 48 29 character_card_count_map:2422";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::checkGCGDeckSystemInitDeck;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862731] = -218959360;
  v5[536862732] = -218959360;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -219021312;
  v5[536862751] = 62194;
  v5[536862753] = -202116109;
  gcg_game_config_mgr = &txt_config_mgr->gcg_game_config_mgr;
  gcg_deck_config_mgr = &txt_config_mgr->gcg_deck_config_mgr;
  GCGDeckCardLimitSize = ConstValueExcelConfigMgr::getGCGDeckCardLimitSize(this);
  v7 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
  if ( v7 != 0 && v7 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v7 != 0;
    __asan_report_store4(v3 + 32, txt_config_mgr);
  }
  *(_DWORD *)(v3 + 32) = GCGDeckCardLimitSize;
  GCGDeckCharacterLimitSize = ConstValueExcelConfigMgr::getGCGDeckCharacterLimitSize(this);
  v9 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
  if ( v9 != 0 && v9 <= 3 )
  {
    LOBYTE(txt_config_mgr) = v9 != 0;
    __asan_report_store4(v3 + 48, txt_config_mgr);
  }
  *(_DWORD *)(v3 + 48) = GCGDeckCharacterLimitSize;
  v10 = std::vector<unsigned int>::size(&this->gcg_deck_system_init_card_vec_);
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) <= 3 )
    __asan_report_load4(v3 + 32);
  if ( v10 == *(_DWORD *)(v3 + 32) )
  {
    v16 = std::vector<unsigned int>::size(&this->gcg_deck_system_init_character_vec_);
    v17 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    LOBYTE(txt_config_mgr) = v17 != 0;
    if ( v17 != 0 && v17 <= 3 )
      __asan_report_load4(v3 + 48);
    if ( v16 <= *(unsigned int *)(v3 + 48) )
    {
      std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
      __for_range = &this->gcg_deck_system_init_card_vec_;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, txt_config_mgr);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 160) = std::vector<unsigned int>::begin(__for_range);
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, txt_config_mgr);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 192) = std::vector<unsigned int>::end(__for_range);
      while ( 1 )
      {
        v23 = (char *)(v3 + 192);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 160),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 192)) )
          break;
        v24 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
        v25 = (int *)v24;
        if ( *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v24 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v24 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v24);
        }
        v26 = *v25;
        v27 = *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000);
        if ( v27 != 0 && v27 <= 3 )
        {
          LOBYTE(v23) = v27 != 0;
          __asan_report_store4(v3 + 64, v23);
        }
        *(_DWORD *)(v3 + 64) = v26;
        v28 = std::map<unsigned int,unsigned int>::operator[](
                (std::map<unsigned int,unsigned int> *const)(v3 + 928),
                (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 64));
        if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v28);
        }
        ++*v28;
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 160));
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
      __for_range_0 = (std::map<unsigned int,unsigned int> *)(v3 + 928);
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 224, v23);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 224) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 256, v23);
      *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 256) = std::map<unsigned int,unsigned int>::end(__for_range_0);
      while ( 1 )
      {
        p_limit = (uint32_t *)(v3 + 256);
        if ( !std::operator!=(
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 224),
                (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 256)) )
        {
          v33 = 1;
          goto LABEL_65;
        }
        __in = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 224));
        card_id = std::get<0ul,unsigned int const,unsigned int>(__in);
        num = std::get<1ul,unsigned int const,unsigned int>(__in);
        v30 = gcg_deck_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        card_config_ptr = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(v30, *card_id);
        if ( !card_config_ptr )
        {
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 544) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 575) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 544, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 544),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkGCGDeckSystemInitDeck",
            2406);
          v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 544),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v32 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v31, (const char (*)[41])byte_1A3150C0);
          p_limit = card_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
          *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v33 = 0;
          goto LABEL_65;
        }
        if ( *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(num);
        }
        v34 = *num;
        if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)card_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr->limit >> 3)
                                                                         + 0x7FFF8000) )
        {
          __asan_report_load4(&card_config_ptr->limit);
        }
        if ( v34 > card_config_ptr->limit )
        {
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 608) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 639) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 608, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 608),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "checkGCGDeckSystemInitDeck",
            2412);
          v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v36 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v35, (const char (*)[47])byte_1A315120);
          v37 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, card_id);
          v38 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v37, (const char (*)[7])" num: ");
          v39 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v38, num);
          v40 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v39, (const char (*)[9])" limit: ");
          p_limit = &card_config_ptr->limit;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, &card_config_ptr->limit);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
          *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v33 = 0;
          goto LABEL_65;
        }
        if ( *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)card_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(card_id);
        }
        if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id) == GCG_CARD_CHARACTER )
          break;
        std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 224));
      }
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGDeckSystemInitDeck",
        2418);
      v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v42 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(v41, (const char (*)[47])byte_1A315200);
      p_limit = card_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v33 = 0;
LABEL_65:
      *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
      if ( v33 == 1 )
      {
        v43 = ((v3 + 1008) >> 3) + 2147450880;
        *(_DWORD *)v43 = 0;
        *(_WORD *)(v43 + 4) = 0;
        std::map<unsigned int,unsigned int>::map((std::map<unsigned int,unsigned int> *const)(v3 + 1008));
        __for_range_1 = &this->gcg_deck_system_init_character_vec_;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 288, p_limit);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 320, p_limit);
        *(std::vector<unsigned int>::const_iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v44 = (char *)(v3 + 320);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 288),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 320)) )
            break;
          *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
          v45 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
          v46 = (int *)v45;
          if ( *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v45 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v45 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v45);
          }
          v47 = *v46;
          v48 = *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000);
          if ( v48 != 0 && v48 <= 3 )
          {
            LOBYTE(v44) = v48 != 0;
            __asan_report_store4(v3 + 80, v44);
          }
          *(_DWORD *)(v3 + 80) = v47;
          v49 = std::map<unsigned int,unsigned int>::operator[](
                  (std::map<unsigned int,unsigned int> *const)(v3 + 1008),
                  (const std::map<unsigned int,unsigned int>::key_type *)(v3 + 80));
          if ( *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v49 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v49 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v49);
          }
          ++*v49;
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 288));
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        __for_range_2 = (std::map<unsigned int,unsigned int> *)(v3 + 1008);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v44);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 352) = std::map<unsigned int,unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 384, v44);
        *(std::map<unsigned int,unsigned int>::iterator *)(v3 + 384) = std::map<unsigned int,unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          if ( !std::operator!=(
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 352),
                  (const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v3 + 384)) )
          {
            v53 = 1;
            goto LABEL_107;
          }
          v73 = std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 352));
          card_id_0 = std::get<0ul,unsigned int const,unsigned int>(v73);
          num_0 = std::get<1ul,unsigned int const,unsigned int>(v73);
          v50 = gcg_deck_config_mgr;
          if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(card_id_0);
          }
          card_config_ptr_0 = data::GCGDeckExcelConfigMgrBase::findGCGDeckCardExcelConfig(v50, *card_id_0);
          if ( !card_config_ptr_0 )
          {
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 736, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 736),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkGCGDeckSystemInitDeck",
              2432);
            v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 736),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v52 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
                    v51,
                    (const char (*)[41])byte_1A3150C0);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v52, card_id_0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
            *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v53 = 0;
            goto LABEL_107;
          }
          if ( *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)num_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)num_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(num_0);
          }
          v54 = *num_0;
          if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->limit >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)card_config_ptr_0 + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&card_config_ptr_0->limit >> 3)
                                                                             + 0x7FFF8000) )
          {
            __asan_report_load4(&card_config_ptr_0->limit);
          }
          if ( v54 > card_config_ptr_0->limit )
          {
            *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 800) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 831) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 800, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 800),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "checkGCGDeckSystemInitDeck",
              2438);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 800),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v55,
                    (const char (*)[47])byte_1A315120);
            v57 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v56, card_id_0);
            v58 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v57, (const char (*)[7])" num: ");
            v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, num_0);
            v60 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v59, (const char (*)[9])" limit: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &card_config_ptr_0->limit);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
            *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v53 = 0;
            goto LABEL_107;
          }
          if ( *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)card_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)card_id_0 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(card_id_0);
          }
          if ( GCGGameExcelConfigMgr::getCardType(gcg_game_config_mgr, *card_id_0) != GCG_CARD_CHARACTER )
            break;
          std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> > *const)(v3 + 352));
        }
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 864) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 895) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 864, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 864),
          &common::milog::MiLogDefault::default_log_obj_,
          1u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "checkGCGDeckSystemInitDeck",
          2444);
        v61 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                (common::milog::MiLogStream *const)(v3 + 864),
                (const char (*)[56])byte_1A315260);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v61, card_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
        *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v53 = 0;
LABEL_107:
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
        if ( v53 == 1 )
          v2 = 0;
        std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 1008));
      }
      std::map<unsigned int,unsigned int>::~map((std::map<unsigned int,unsigned int> *const)(v3 + 928));
    }
    else
    {
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "checkGCGDeckSystemInitDeck",
        2393);
      v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v19 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(v18, (const char (*)[33])byte_1A315060);
      v20 = std::vector<unsigned int>::size(&this->gcg_deck_system_init_character_vec_);
      if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
        v20 = __asan_report_store8(v3 + 128, byte_1A315060);
      *(_QWORD *)(v3 + 128) = v20;
      v21 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v19,
              (const unsigned __int64 *)(v3 + 128));
      v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v21, (const char (*)[16])byte_1A315020);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v3 + 48));
      *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      v2 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "checkGCGDeckSystemInitDeck",
      2387);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v11, (const char (*)[44])byte_1A314FC0);
    v13 = std::vector<unsigned int>::size(&this->gcg_deck_system_init_card_vec_);
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      v13 = __asan_report_store8(v3 + 96, byte_1A314FC0);
    *(_QWORD *)(v3 + 96) = v13;
    v14 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
            v12,
            (const unsigned __int64 *)(v3 + 96));
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v14, (const char (*)[16])byte_1A315020);
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, (const unsigned int *)(v3 + 32));
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    v2 = -1;
  }
  if ( v77 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8040) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8048) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8050) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8058) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8068) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8070) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8078) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8084) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1088LL, v77);
  }
  return v2;
};

// Line 2452: range 000000000E14595E-000000000E145F65
int32_t __cdecl ConstValueExcelConfigMgr::rewriteMechanicus2Param(ConstValueExcelConfigMgr *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  std::vector<std::string>::const_reference v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  std::vector<std::string>::const_reference v10; // rax
  data::ConstValueExcelConfig *mechanicus_2_attack_config_ptr; // [rsp+10h] [rbp-150h]
  data::ConstValueExcelConfig *mechanicus_2_mastery_config_ptr; // [rsp+18h] [rbp-148h]
  char v13[320]; // [rsp+20h] [rbp-140h] BYREF

  v1 = (common::milog::MiLogStream *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::rewriteMechanicus2Param;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -202116109;
  mechanicus_2_attack_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 416LL);
  if ( mechanicus_2_attack_config_ptr )
  {
    if ( std::vector<std::string>::size(&mechanicus_2_attack_config_ptr->value) > 2 )
    {
      v7 = std::vector<std::string>::operator[](&mechanicus_2_attack_config_ptr->value, 2uLL);
      std::string::operator=(&this->mechanicus_2_attack_key_, v7);
      mechanicus_2_mastery_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 417LL);
      if ( mechanicus_2_mastery_config_ptr )
      {
        if ( std::vector<std::string>::size(&mechanicus_2_mastery_config_ptr->value) > 2 )
        {
          v10 = std::vector<std::string>::operator[](&mechanicus_2_mastery_config_ptr->value, 2uLL);
          std::string::operator=(&this->mechanicus_2_mastery_key_, v10);
          result = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v1 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store_n(&v1[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v1 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteMechanicus2Param",
            2474);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 v1 + 7,
                 (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v9, (const char (*)[53])byte_1A315420);
          common::milog::MiLogStream::~MiLogStream(v1 + 7);
          result = -1;
        }
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v1[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v1 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteMechanicus2Param",
          2469);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v1 + 5,
               (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v8, (const char (*)[49])byte_1A3153C0);
        common::milog::MiLogStream::~MiLogStream(v1 + 5);
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteMechanicus2Param",
        2461);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v1 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v6, (const char (*)[52])byte_1A315360);
      common::milog::MiLogStream::~MiLogStream(v1 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteMechanicus2Param",
      2456);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v4, (const char (*)[48])byte_1A315300);
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    result = -1;
  }
  if ( v13 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2482: range 000000000E145F66-000000000E146AE0
int32_t __cdecl ConstValueExcelConfigMgr::rewriteActivityExpeditionRewardLevel(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  char *v8; // rsi
  bool v9; // r14
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // r14
  const std::string *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v14; // rax
  uint32_t *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  int32_t ret; // [rsp+1Ch] [rbp-294h]
  uint32_t value; // [rsp+24h] [rbp-28Ch]
  data::ConstValueExcelConfig *activity_expedition_config_ptr; // [rsp+28h] [rbp-288h]
  std::vector<unsigned int> *__for_range; // [rsp+38h] [rbp-278h]
  char v24[624]; // [rsp+40h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 1 9 <unknown> 64 8 16 __for_begin:2508 96 8 14 __for_end:2508 128 32 9 <unknown> 192 32 9 "
                        "<unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteActivityExpeditionRewardLevel;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862722] = -218959360;
  v3[536862723] = -218959360;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -202116109;
  activity_expedition_config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 440LL);
  if ( activity_expedition_config_ptr )
  {
    if ( std::vector<std::string>::size(&activity_expedition_config_ptr->value) > 1 )
    {
      std::allocator<char>::allocator(v1 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 256),
        ",",
        (const std::allocator<char> *)(v1 + 48));
      v7 = std::vector<std::string>::operator[](&activity_expedition_config_ptr->value, 1uLL);
      v8 = (char *)(v1 + 256);
      v9 = common::tools::StringUtils::splitToList<unsigned int>(
             v7,
             (const std::string *)(v1 + 256),
             &this->activity_expedition_reward_level_vec_,
             1) != 0;
      std::string::~string((void *)(v1 + 256));
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 48);
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v9 )
      {
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteActivityExpeditionRewardLevel",
          2496);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v1 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v10, (const char (*)[57])byte_1A315680);
        v12 = std::vector<std::string>::operator[](&activity_expedition_config_ptr->value, 1uLL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, v12);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        result = -1;
      }
      else if ( std::vector<unsigned int>::size(&this->activity_expedition_reward_level_vec_) == 2 )
      {
        ret = 0;
        __for_range = &this->activity_expedition_reward_level_vec_;
        *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 64, v8);
        *(std::vector<unsigned int>::iterator *)(v1 + 64) = std::vector<unsigned int>::begin(__for_range);
        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v1 + 96, v8);
        *(std::vector<unsigned int>::iterator *)(v1 + 96) = std::vector<unsigned int>::end(__for_range);
        while ( __gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 64),
                  (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v1 + 96)) )
        {
          v14 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 64));
          v15 = v14;
          if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v14);
          }
          value = *v15;
          if ( *v15 && value <= 0x64 )
          {
            if ( !value )
            {
              *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 512, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 512),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteActivityExpeditionRewardLevel",
                2517);
              v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v1 + 512),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v19 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v18,
                      (const char (*)[57])byte_1A3157C0);
              common::milog::MiLogStream::operator<<<unsigned int>(v19, &this->activity_expedition_reward_level_vec_);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
              *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
          {
            *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteActivityExpeditionRewardLevel",
              2512);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                    v16,
                    (const char (*)[70])byte_1A315740);
            common::milog::MiLogStream::operator<<<unsigned int>(v17, &this->activity_expedition_reward_level_vec_);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
            *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v1 + 64));
        }
        result = ret;
      }
      else
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteActivityExpeditionRewardLevel",
          2502);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v1 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v13, (const char (*)[41])byte_1A3156E0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        result = -1;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 192, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 192),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteActivityExpeditionRewardLevel",
        2491);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 192),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v6, (const char (*)[61])byte_1A315620);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 128, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 128),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteActivityExpeditionRewardLevel",
      2486);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 128),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v4, (const char (*)[57])byte_1A3155C0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
    result = -1;
  }
  if ( v24 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8034) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2525: range 000000000E146AE2-000000000E147584
int32_t __cdecl ConstValueExcelConfigMgr::rewriteProductParam(ConstValueExcelConfigMgr *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-218h]
  char v28[528]; // [rsp+20h] [rbp-210h] BYREF

  v1 = (common::milog::MiLogStream *)v28;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(480LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"7 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::rewriteProductParam;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -218959118;
  v3[536862730] = -218959118;
  v3[536862732] = -218959118;
  v3[536862734] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 160LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 5 )
    {
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->package_product_reward_mail_id_, 1) )
      {
        if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v1 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v1[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v1 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteProductParam",
          2547);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v1 + 5,
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
               v8,
               (const char (*)[65])"CONST_VALUE_PRODUCT_PARAM config_ptr->value[1] strToNum failed: ");
        v10 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(v1 + 5);
        result = -1;
      }
      else
      {
        v11 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v11, &this->mcoin_exchange_hcoin_ratio_, 1) )
        {
          if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v1 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store_n(&v1[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v1 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteProductParam",
            2553);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v1 + 7,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                  v12,
                  (const char (*)[65])"CONST_VALUE_PRODUCT_PARAM config_ptr->value[2] strToNum failed: ");
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream(v1 + 7);
          result = -1;
        }
        else
        {
          v15 = std::vector<std::string>::operator[](&config_ptr->value, 4uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v15, &this->mcoin_product_refresh_time_, 1) )
          {
            if ( *(char *)(((unsigned __int64)&v1[9] >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
              && (((unsigned __int8)v1 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[9].ostr_ + 7) >> 3)
                                                                   + 0x7FFF8000) )
            {
              __asan_report_store_n(&v1[9], 32LL);
            }
            common::milog::MiLogStream::create(
              v1 + 9,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteProductParam",
              2559);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    v1 + 9,
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                    v16,
                    (const char (*)[65])"CONST_VALUE_PRODUCT_PARAM config_ptr->value[4] strToNum failed: ");
            v18 = std::vector<std::string>::operator[](&config_ptr->value, 4uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
            common::milog::MiLogStream::~MiLogStream(v1 + 9);
            result = -1;
          }
          else
          {
            v19 = *(unsigned __int8 *)(((unsigned __int64)&this->mcoin_product_refresh_time_ >> 3) + 0x7FFF8000);
            if ( (_BYTE)v19 != 0 && (char)v19 <= 3 )
              __asan_report_load4(&this->mcoin_product_refresh_time_);
            if ( this->mcoin_product_refresh_time_ )
            {
              if ( *(char *)(((unsigned __int64)&v1[13] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&v1[13].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v1 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[13].ostr_ + 7) >> 3)
                                                                     + 0x7FFF8000) )
              {
                __asan_report_store_n(&v1[13], 32LL);
              }
              common::milog::MiLogStream::create(
                v1 + 13,
                &common::milog::MiLogDefault::default_log_obj_,
                1u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteProductParam",
                2569);
              v22 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                      v1 + 13,
                      (const char (*)[60])"CONST_VALUE_PRODUCT_PARAM package_product_reward_mail_id_: ");
              v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v22,
                      &this->package_product_reward_mail_id_);
              v24 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v23,
                      (const char (*)[32])" ,mcoin_exchange_hcoin_ratio_: ");
              v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v24,
                      &this->mcoin_exchange_hcoin_ratio_);
              v26 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v25,
                      (const char (*)[32])" ,mcoin_product_refresh_time_: ");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                &this->mcoin_product_refresh_time_);
              common::milog::MiLogStream::~MiLogStream(v1 + 13);
              result = 0;
            }
            else
            {
              if ( *(char *)(((unsigned __int64)&v1[11] >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
                && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[11].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
              {
                __asan_report_store_n(&v1[11], 32LL);
              }
              common::milog::MiLogStream::create(
                v1 + 11,
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteProductParam",
                2565);
              v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      v1 + 11,
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v21 = common::milog::MiLogStream::operator<<<char [75],(char *[75])0>(
                      v20,
                      (const char (*)[75])byte_1A315B40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v21,
                &this->mcoin_product_refresh_time_);
              common::milog::MiLogStream::~MiLogStream(v1 + 11);
              result = -1;
            }
          }
        }
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteProductParam",
        2535);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v1 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v6, (const char (*)[51])byte_1A315960);
      common::milog::MiLogStream::~MiLogStream(v1 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteProductParam",
      2529);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v4,
      (const char (*)[62])"findConstValueExcelConfig CONST_VALUE_SEA_LAMP_PRAY_URL fails");
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    result = -1;
  }
  if ( v28 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8038) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8038) = -168430091;
  }
  return result;
};

// Line 2577: range 000000000E147586-000000000E147BB2
int32_t __cdecl ConstValueExcelConfigMgr::rewriteMinorsGachaParam(ConstValueExcelConfigMgr *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  const std::string *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-158h]
  char v16[336]; // [rsp+20h] [rbp-150h] BYREF

  v1 = (common::milog::MiLogStream *)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(288LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"4 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::rewriteMinorsGachaParam;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -218959118;
  v3[536862728] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 446LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 1 )
    {
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->minors_gacha_times_limit_, 1) )
      {
        if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v1 - 65) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v1[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v1 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteMinorsGachaParam",
          2593);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v1 + 5,
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
               v8,
               (const char (*)[70])"CONST_VALUE_MINORS_GACHA_PARAM config_ptr->value[0] strToNum failed: ");
        v10 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(v1 + 5);
        result = -1;
      }
      else
      {
        v11 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
        if ( common::tools::StringUtils::strToNum<unsigned int>(v11, &this->minors_gacha_display_value_, 1) )
        {
          if ( *(char *)(((unsigned __int64)&v1[7] >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)v1 - 32 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[7].ostr_ + 7) >> 3)
                                                                 + 0x7FFF8000) )
          {
            __asan_report_store_n(&v1[7], 32LL);
          }
          common::milog::MiLogStream::create(
            v1 + 7,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteMinorsGachaParam",
            2599);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  v1 + 7,
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                  v12,
                  (const char (*)[70])"CONST_VALUE_MINORS_GACHA_PARAM config_ptr->value[1] strToNum failed: ");
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream(v1 + 7);
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteMinorsGachaParam",
        2587);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v1 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v6, (const char (*)[56])byte_1A315D40);
      common::milog::MiLogStream::~MiLogStream(v1 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 + 63) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteMinorsGachaParam",
      2581);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
      v4,
      (const char (*)[63])"findConstValueExcelConfig CONST_VALUE_MINORS_GACHA_PARAM fails");
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    result = -1;
  }
  if ( v16 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 2607: range 000000000E147BB4-000000000E14838D
int32_t __cdecl ConstValueExcelConfigMgr::rewriteHomeFurnitureCustomSuiteParam(ConstValueExcelConfigMgr *const this)
{
  unsigned int *v1; // r8
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // r14
  __int64 v7; // rax
  common::milog::MiLogStream *v8; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v11; // r14
  __int64 v12; // rax
  const std::string *v13; // rax
  bool v14; // r14
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  const std::string *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r14
  __int64 v20; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-1D8h]
  char v22[464]; // [rsp+20h] [rbp-1D0h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 48 1 9 <unknown> 64 8 9 <unknown> 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unknown> 224 32"
                        " 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteHomeFurnitureCustomSuiteParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753551;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  if ( ConstValueExcelConfigMgr::findConstValue<unsigned int,unsigned int &>(
         this,
         CONST_VALUE_HOME_FURNITURE_CUSTOM_SUITE_PARAM,
         &this->home_furniture_custom_suite_num_limit_,
         &this->home_furniture_custom_suite_capacity_,
         v1) )
  {
    if ( *(char *)(((v2 + 160) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 96 + 31) & 7) >= *(_BYTE *)(((v2 + 191) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 160, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 160),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteHomeFurnitureCustomSuiteParam",
      2610);
    v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])"findConstValue ");
    v7 = (__int64)data::enumValToStr(CONST_VALUE_HOME_FURNITURE_CUSTOM_SUITE_PARAM, (__int64)"findConstValue ");
    if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
      v7 = __asan_report_store8(v2 + 64, "findConstValue ");
    *(_QWORD *)(v2 + 64) = v7;
    v8 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v6, (const char *const *)(v2 + 64));
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v8, (const char (*)[7])" fails");
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
    result = -1;
  }
  else
  {
    config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 356LL);
    if ( !config_ptr || std::vector<std::string>::size(&config_ptr->value) <= 2 )
    {
      if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteHomeFurnitureCustomSuiteParam",
        2616);
      v11 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[39])"findConstValueExcelConfig fails, name:");
      v12 = (__int64)data::enumValToStr(
                       CONST_VALUE_HOME_FURNITURE_CUSTOM_SUITE_PARAM,
                       (__int64)"findConstValueExcelConfig fails, name:");
      if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
        v12 = __asan_report_store8(v2 + 96, "findConstValueExcelConfig fails, name:");
      *(_QWORD *)(v2 + 96) = v12;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v11, (const char *const *)(v2 + 96));
      *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      result = -1;
    }
    else
    {
      std::allocator<char>::allocator(v2 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v2 + 288),
        ";",
        (const std::allocator<char> *)(v2 + 48));
      v13 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
      v14 = common::tools::StringUtils::splitToEnumSet<data::FurnitureDeploySurfaceType>(
              v13,
              (const std::string *)(v2 + 288),
              &this->home_furniture_custom_suite_forbidden_type_set_,
              0) != 0;
      std::string::~string((void *)(v2 + 288));
      *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v2 + 48);
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v14 )
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
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteHomeFurnitureCustomSuiteParam",
          2621);
        v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 352),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v16 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                v15,
                (const char (*)[44])"splitToEnumSet fail, surface_type_list_str:");
        v17 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, v17);
        v19 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v18, (const char (*)[7])" name:");
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
        v20 = (__int64)data::enumValToStr(CONST_VALUE_HOME_FURNITURE_CUSTOM_SUITE_PARAM, (__int64)" name:");
        if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
          v20 = __asan_report_store8(v2 + 128, " name:");
        *(_QWORD *)(v2 + 128) = v20;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v2 + 128));
        *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
  }
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8018) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = 0;
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8030) = -168430091;
  }
  return result;
};

// Line 2628: range 000000000E14838E-000000000E148841
int32_t __cdecl ConstValueExcelConfigMgr::rewriteFireworksLaunchParam(ConstValueExcelConfigMgr *const this)
{
  common::milog::MiLogStream *v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-118h]
  char v12[272]; // [rsp+20h] [rbp-110h] BYREF

  v1 = (common::milog::MiLogStream *)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_2(224LL);
    if ( v2 )
      v1 = (common::milog::MiLogStream *)v2;
  }
  v1->log_ = (common::milog::MiLog *)1102416563;
  v1->ostr_ptr_._M_ptr = (std::__shared_ptr<common::tools::StringStream<common::tools::FixedBuffer<16384> >,(__gnu_cxx::_Lock_policy)2>::element_type *)"3 32 32 9 <unknown> 96 32 9 <unknown> 160 32 9 <unknown>";
  v1->ostr_ptr_._M_refcount._M_pi = (std::_Sp_counted_base<(__gnu_cxx::_Lock_policy)2> *)ConstValueExcelConfigMgr::rewriteFireworksLaunchParam;
  v3 = (_DWORD *)((unsigned __int64)v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862722] = -218959118;
  v3[536862724] = -218959118;
  v3[536862726] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 447LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) )
    {
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->fireworks_launch_max_length_, 1) )
      {
        if ( *(char *)(((unsigned __int64)&v1[5] >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)v1 - 96 + 31) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[5].ostr_ + 7) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(&v1[5], 32LL);
        }
        common::milog::MiLogStream::create(
          v1 + 5,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteFireworksLaunchParam",
          2642);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               v1 + 5,
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
               v8,
               (const char (*)[74])"CONST_VALUE_FIREWORKS_LAUNCH_PARAM config_ptr->value[0] strToNum failed: ");
        v10 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream(v1 + 5);
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&v1[3] >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)v1 + 127) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[3].ostr_ + 7) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(&v1[3], 32LL);
      }
      common::milog::MiLogStream::create(
        v1 + 3,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteFireworksLaunchParam",
        2637);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             v1 + 3,
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v6, (const char (*)[60])byte_1A3160C0);
      common::milog::MiLogStream::~MiLogStream(v1 + 3);
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((unsigned __int64)&v1[1] >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)v1 - 32 + 95) & 7) >= *(_BYTE *)((((unsigned __int64)&v1[1].ostr_ + 7) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(&v1[1], 32LL);
    }
    common::milog::MiLogStream::create(
      v1 + 1,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteFireworksLaunchParam",
      2632);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v1 + 1, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      v4,
      (const char (*)[67])"findConstValueExcelConfig CONST_VALUE_FIREWORKS_LAUNCH_PARAM fails");
    common::milog::MiLogStream::~MiLogStream(v1 + 1);
    result = -1;
  }
  if ( v12 == (char *)v1 )
  {
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = 0;
  }
  else
  {
    v1->log_ = (common::milog::MiLog *)1172321806;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v1 >> 3) + 0x7FFF8018) = -168430091;
  }
  return result;
};

// Line 2649: range 000000000E148842-000000000E14A61D
int32_t __cdecl ConstValueExcelConfigMgr::rewriteCustomDungeonParam(ConstValueExcelConfigMgr *const this)
{
  int32_t v1; // r14d
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int v8; // eax
  unsigned __int64 v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  std::vector<unsigned int>::reference v12; // rax
  _DWORD *v13; // rdx
  char v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  unsigned int *v17; // rcx
  unsigned __int64 v18; // rdx
  const std::string *v19; // rax
  char *v20; // rsi
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  int v24; // eax
  __int64 v25; // rsi
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  int v28; // eax
  unsigned __int64 v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rdx
  std::vector<unsigned int>::reference v32; // rax
  _DWORD *v33; // rdx
  char v34; // al
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  unsigned int *v37; // rcx
  unsigned __int64 v38; // rdx
  const std::string *v39; // rax
  char *v40; // rsi
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r14
  const std::string *v43; // rax
  int v44; // eax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::array<unsigned int,6>::reference v48; // rax
  _DWORD *v49; // rdx
  __int64 v50; // rsi
  std::array<unsigned int,6>::reference v51; // rax
  _DWORD *v52; // rdx
  char v53; // cl
  std::array<unsigned int,6>::reference v54; // rax
  _DWORD *v55; // rdx
  __int64 v56; // rsi
  std::array<unsigned int,6>::reference v57; // rax
  _DWORD *v58; // rdx
  char v59; // cl
  std::vector<unsigned int>::reference __y; // [rsp+8h] [rbp-5B8h]
  std::vector<unsigned int>::reference __ya; // [rsp+8h] [rbp-5B8h]
  bool v63; // [rsp+10h] [rbp-5B0h]
  int v64; // [rsp+10h] [rbp-5B0h]
  bool v65; // [rsp+10h] [rbp-5B0h]
  int v66; // [rsp+10h] [rbp-5B0h]
  uint32_t idx; // [rsp+28h] [rbp-598h]
  uint32_t idx_0; // [rsp+2Ch] [rbp-594h]
  data::ConstValueExcelConfig *config_ptr; // [rsp+30h] [rbp-590h]
  std::vector<std::string>::const_reference value_str; // [rsp+38h] [rbp-588h]
  data::ConstValueExcelConfig *config_2_ptr; // [rsp+40h] [rbp-580h]
  std::vector<std::string>::const_reference value_str_0; // [rsp+48h] [rbp-578h]
  char v73[1392]; // [rsp+50h] [rbp-570h] BYREF

  v2 = (unsigned __int64)v73;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1344LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "28 32 1 9 <unknown> 48 1 9 <unknown> 64 4 16 score_limit:2682 80 4 9 <unknown> 96 4 17 score_lim"
                        "it2:2722 112 4 9 <unknown> 128 8 9 <unknown> 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknow"
                        "n> 256 8 9 <unknown> 288 8 9 <unknown> 320 24 14 param_vec:2669 384 24 14 param_vec:2709 448 32 "
                        "9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown> 640 32 9 <unknown> 704 32 9 <unknown> 768 32 9"
                        " <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 1024 32 9 <unknown> 1088 32 "
                        "9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::rewriteCustomDungeonParam;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234753535;
  v4[536862722] = -234556924;
  v4[536862723] = -234556924;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -234881024;
  v4[536862731] = -218959118;
  v4[536862732] = -234881024;
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
  v4[536862761] = -202116109;
  v5 = 450LL;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 450LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 4 )
    {
      for ( idx = 0; idx <= 3; ++idx )
      {
        v5 = idx;
        value_str = std::vector<std::string>::operator[](&config_ptr->value, idx);
        if ( (unsigned __int8)std::string::empty() )
        {
          v8 = 0;
        }
        else
        {
          v9 = ((v2 + 320) >> 3) + 2147450880;
          *(_WORD *)v9 = 0;
          *(_BYTE *)(v9 + 2) = 0;
          std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 320));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 1;
          std::allocator<char>::allocator(v2 + 32);
          std::string::basic_string<std::allocator<char>>(
            (std::string *const)(v2 + 576),
            ";",
            (const std::allocator<char> *)(v2 + 32));
          v63 = common::tools::StringUtils::splitToList<unsigned int>(
                  value_str,
                  (const std::string *)(v2 + 576),
                  (std::vector<unsigned int> *)(v2 + 320),
                  0) != 0;
          std::string::~string((void *)(v2 + 576));
          *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
          std::allocator<char>::~allocator(v2 + 32);
          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
          if ( v63 )
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
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteCustomDungeonParam",
              2672);
            v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 640),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v11 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    v10,
                    (const char (*)[66])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_1 split to list failed, str:");
            v5 = (__int64)value_str;
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, value_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
            *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
            v1 = -1;
            v64 = 0;
          }
          else
          {
            if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 320)) <= 1 )
              goto LABEL_24;
            v12 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 1uLL);
            v13 = v12;
            if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(v12);
            }
            if ( *v13 )
              v14 = 0;
            else
LABEL_24:
              v14 = 1;
            if ( v14 )
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
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteCustomDungeonParam",
                2677);
              v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 704),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v16 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v15,
                      (const char (*)[57])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_1 size failed, str:");
              v5 = (__int64)value_str;
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v16, value_str);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
              *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
              v1 = -1;
              v64 = 0;
            }
            else
            {
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
              __y = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 1uLL);
              v17 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 320), 0LL);
              if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 128, 0LL);
              *(std::pair<unsigned int,unsigned int> *)(v2 + 128) = std::make_pair<unsigned int &,unsigned int &>(
                                                                      v17,
                                                                      __y);
              v5 = v2 + 128;
              std::vector<std::pair<unsigned int,unsigned int>>::push_back(
                &this->custom_dungeon_recommend_param_vec_1_,
                (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 128));
              *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
              v64 = 1;
            }
          }
          std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 320));
          if ( v64 == 1 )
            v8 = 2;
          else
            v8 = 1;
        }
        v18 = ((v2 + 320) >> 3) + 2147450880;
        *(_WORD *)v18 = -1800;
        *(_BYTE *)(v18 + 2) = -8;
        if ( v8 && v8 != 2 )
          goto LABEL_119;
      }
      *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v2 + 64, v5);
      *(_DWORD *)(v2 + 64) = 0;
      v19 = std::vector<std::string>::operator[](&config_ptr->value, 4uLL);
      v20 = (char *)(v2 + 64);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v19, (unsigned int *)(v2 + 64), 1) )
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
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCustomDungeonParam",
          2685);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 768),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                v21,
                (const char (*)[52])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_1 score_limit:");
        v23 = std::vector<std::string>::operator[](&config_ptr->value, 4uLL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
        v1 = -1;
      }
      else
      {
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
        v24 = *(unsigned __int8 *)(((v2 + 80) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v24 != 0 && (char)v24 <= 3 )
          __asan_report_store4(v2 + 80, v20);
        *(_DWORD *)(v2 + 80) = 0;
        if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 160, v20);
        *(std::pair<unsigned int,int> *)(v2 + 160) = std::make_pair<unsigned int &,int>(
                                                       (unsigned int *)(v2 + 64),
                                                       (int *)(v2 + 80));
        std::pair<unsigned int,unsigned int>::pair<unsigned int,int,true>(
          (std::pair<unsigned int,unsigned int> *const)(v2 + 192),
          (std::pair<unsigned int,int> *)(v2 + 160));
        std::vector<std::pair<unsigned int,unsigned int>>::push_back(
          &this->custom_dungeon_recommend_param_vec_1_,
          (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 192));
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
        v25 = 451LL;
        config_2_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 451LL);
        if ( config_2_ptr )
        {
          if ( std::vector<std::string>::size(&config_2_ptr->value) > 3 )
          {
            for ( idx_0 = 0; idx_0 <= 3; ++idx_0 )
            {
              v25 = idx_0;
              value_str_0 = std::vector<std::string>::operator[](&config_2_ptr->value, idx_0);
              if ( (unsigned __int8)std::string::empty() )
              {
                v28 = 0;
              }
              else
              {
                v29 = ((v2 + 384) >> 3) + 2147450880;
                *(_WORD *)v29 = 0;
                *(_BYTE *)(v29 + 2) = 0;
                std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v2 + 384));
                *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = 0;
                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 1;
                std::allocator<char>::allocator(v2 + 48);
                std::string::basic_string<std::allocator<char>>(
                  (std::string *const)(v2 + 960),
                  ";",
                  (const std::allocator<char> *)(v2 + 48));
                v65 = common::tools::StringUtils::splitToList<unsigned int>(
                        value_str_0,
                        (const std::string *)(v2 + 960),
                        (std::vector<unsigned int> *)(v2 + 384),
                        0) != 0;
                std::string::~string((void *)(v2 + 960));
                *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
                std::allocator<char>::~allocator(v2 + 48);
                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                if ( v65 )
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
                    4u,
                    "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                    "rewriteCustomDungeonParam",
                    2712);
                  v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1024),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v31 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                          v30,
                          (const char (*)[66])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_2 split to list failed, str:");
                  v25 = (__int64)value_str_0;
                  common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v31, value_str_0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
                  *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
                  v1 = -1;
                  v66 = 0;
                }
                else
                {
                  if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 384)) <= 1 )
                    goto LABEL_69;
                  v32 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 384), 1uLL);
                  v33 = v32;
                  if ( *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) != 0
                    && (char)(((unsigned __int8)v32 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v32 >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_load4(v32);
                  }
                  if ( *v33 )
                    v34 = 0;
                  else
LABEL_69:
                    v34 = 1;
                  if ( v34 )
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
                      4u,
                      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                      "rewriteCustomDungeonParam",
                      2717);
                    v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1088),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v36 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                            v35,
                            (const char (*)[57])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_2 size failed, str:");
                    v25 = (__int64)value_str_0;
                    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v36, value_str_0);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
                    *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
                    v1 = -1;
                    v66 = 0;
                  }
                  else
                  {
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
                    __ya = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 384), 1uLL);
                    v37 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v2 + 384), 0LL);
                    if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 224, 0LL);
                    *(std::pair<unsigned int,unsigned int> *)(v2 + 224) = std::make_pair<unsigned int &,unsigned int &>(
                                                                            v37,
                                                                            __ya);
                    v25 = v2 + 224;
                    std::vector<std::pair<unsigned int,unsigned int>>::push_back(
                      &this->custom_dungeon_recommend_param_vec_2_,
                      (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 224));
                    *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                    v66 = 1;
                  }
                }
                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 384));
                if ( v66 == 1 )
                  v28 = 2;
                else
                  v28 = 1;
              }
              v38 = ((v2 + 384) >> 3) + 2147450880;
              *(_WORD *)v38 = -1800;
              *(_BYTE *)(v38 + 2) = -8;
              if ( v28 && v28 != 2 )
                goto LABEL_119;
            }
            *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v2 + 96, v25);
            *(_DWORD *)(v2 + 96) = 0;
            v39 = std::vector<std::string>::operator[](&config_2_ptr->value, 4uLL);
            v40 = (char *)(v2 + 96);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v39, (unsigned int *)(v2 + 96), 1) )
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
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteCustomDungeonParam",
                2725);
              v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1152),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v42 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                      v41,
                      (const char (*)[52])"CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_2 score_limit:");
              v43 = std::vector<std::string>::operator[](&config_2_ptr->value, 4uLL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v42, v43);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
              v1 = -1;
            }
            else
            {
              *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = 4;
              v44 = *(unsigned __int8 *)(((v2 + 112) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v44 != 0 && (char)v44 <= 3 )
                __asan_report_store4(v2 + 112, v40);
              *(_DWORD *)(v2 + 112) = 0;
              if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                __asan_report_store8(v2 + 256, v40);
              *(std::pair<unsigned int,int> *)(v2 + 256) = std::make_pair<unsigned int &,int>(
                                                             (unsigned int *)(v2 + 96),
                                                             (int *)(v2 + 112));
              std::pair<unsigned int,unsigned int>::pair<unsigned int,int,true>(
                (std::pair<unsigned int,unsigned int> *const)(v2 + 288),
                (std::pair<unsigned int,int> *)(v2 + 256));
              std::vector<std::pair<unsigned int,unsigned int>>::push_back(
                &this->custom_dungeon_recommend_param_vec_2_,
                (std::vector<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 288));
              *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
              *(_BYTE *)(((v2 + 112) >> 3) + 0x7FFF8000) = -8;
              if ( std::vector<std::pair<unsigned int,unsigned int>>::size(&this->custom_dungeon_recommend_param_vec_1_) <= 4
                || std::vector<std::pair<unsigned int,unsigned int>>::size(&this->custom_dungeon_recommend_param_vec_2_) <= 4 )
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
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteCustomDungeonParam",
                  2732);
                v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1216),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v46, (const char (*)[60])byte_1A316780);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
                v1 = -1;
              }
              else if ( std::array<unsigned int,6ul>::size(&this->custom_dungeon_recommend_params_) > 4 )
              {
                v48 = std::array<unsigned int,6ul>::operator[](&this->custom_dungeon_recommend_params_, 3uLL);
                v49 = v48;
                if ( *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v48 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v48 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v48);
                }
                if ( !*v49 )
                {
                  v50 = 3LL;
                  v51 = std::array<unsigned int,6ul>::operator[](&this->custom_dungeon_recommend_params_, 3uLL);
                  v52 = v51;
                  v53 = *(_BYTE *)(((unsigned __int64)v51 >> 3) + 0x7FFF8000);
                  if ( v53 != 0 && (char)(((unsigned __int8)v51 & 7) + 3) >= v53 )
                  {
                    LOBYTE(v50) = v53 != 0;
                    __asan_report_store4(v51, v50);
                  }
                  *v52 = 3;
                }
                v54 = std::array<unsigned int,6ul>::operator[](&this->custom_dungeon_recommend_params_, 4uLL);
                v55 = v54;
                if ( *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v54 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v54 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v54);
                }
                if ( !*v55 )
                {
                  v56 = 4LL;
                  v57 = std::array<unsigned int,6ul>::operator[](&this->custom_dungeon_recommend_params_, 4uLL);
                  v58 = v57;
                  v59 = *(_BYTE *)(((unsigned __int64)v57 >> 3) + 0x7FFF8000);
                  if ( v59 != 0 && (char)(((unsigned __int8)v57 & 7) + 3) >= v59 )
                  {
                    LOBYTE(v56) = v59 != 0;
                    __asan_report_store4(v57, v56);
                  }
                  *v58 = 3;
                }
                v1 = 0;
              }
              else
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
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteCustomDungeonParam",
                  2737);
                v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1280),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v47, (const char (*)[64])byte_1A3167E0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
                v1 = -1;
              }
            }
          }
          else
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
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteCustomDungeonParam",
              2699);
            v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 896),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v27, (const char (*)[64])byte_1A3164A0);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
            v1 = -1;
          }
        }
        else
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
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteCustomDungeonParam",
            2694);
          v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 832),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
            v26,
            (const char (*)[65])"findConstValueExcelConfig CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_1");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
          v1 = -1;
        }
      }
    }
    else
    {
      if ( *(char *)(((v2 + 512) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 + 31) & 7) >= *(_BYTE *)(((v2 + 543) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 512, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 512),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteCustomDungeonParam",
        2659);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 512),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(v7, (const char (*)[64])byte_1A3164A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
      v1 = -1;
    }
  }
  else
  {
    if ( *(char *)(((v2 + 448) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) != 0
      && (char)((v2 - 33) & 7) >= *(_BYTE *)(((v2 + 479) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v2 + 448, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v2 + 448),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteCustomDungeonParam",
      2654);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 448),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
      v6,
      (const char (*)[65])"findConstValueExcelConfig CONST_VALUE_CUSTOM_DUNGEON_RECOMMEND_1");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
    v1 = -1;
  }
LABEL_119:
  if ( v73 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8030) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF803C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8054) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF805C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8064) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF806C) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8074) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF807C) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8084) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF808C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8094) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF809C) = 0;
    *(_DWORD *)((v2 >> 3) + 0x7FFF80A4) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1344LL, v73);
  }
  return v1;
};

// Line 2752: range 000000000E14A61E-000000000E14B362
int32_t __cdecl ConstValueExcelConfigMgr::rewriteCollectibleMailParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  int v11; // eax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // r14
  time_t collectible_mail_max_check_send_time; // rdi
  const std::string *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // r14
  const std::string *v25; // rax
  const std::string *v26; // rax
  bool v27; // r14
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // r14
  const std::string *v30; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-2B8h]
  char v33[688]; // [rsp+20h] [rbp-2B0h] BYREF

  v1 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(640LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 3"
                        "20 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteCollectibleMailParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753551;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -218959118;
  v3[536862739] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 460LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 2 )
    {
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, &this->collectible_mail_max_check_send_time_, 1) )
      {
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteCollectibleMailParam",
          2766);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [82],(char *[82])0>(v8, (const char (*)[82])byte_1A316A20);
        v10 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
        result = -1;
      }
      else
      {
        v11 = *(unsigned __int8 *)(((unsigned __int64)&this->collectible_mail_max_check_send_time_ >> 3) + 0x7FFF8000);
        if ( (_BYTE)v11 != 0 && (char)v11 <= 3 )
          __asan_report_load4(&this->collectible_mail_max_check_send_time_);
        if ( this->collectible_mail_max_check_send_time_ == 1641337200 )
        {
          if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 320, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 320),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteCollectibleMailParam",
            2774);
          v15 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
                  (common::milog::MiLogStream *const)(v1 + 320),
                  (const char (*)[26])"[COLLECT_MAIL] utc time: ");
          v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v15,
                  &this->collectible_mail_max_check_send_time_);
          v17 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v16, (const char (*)[10])" by str: ");
          v18 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
          v19 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
          v20 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v19, (const char (*)[9])" local: ");
          if ( *(_BYTE *)(((unsigned __int64)&this->collectible_mail_max_check_send_time_ >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->collectible_mail_max_check_send_time_ >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&this->collectible_mail_max_check_send_time_);
          }
          collectible_mail_max_check_send_time = this->collectible_mail_max_check_send_time_;
          if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
          {
            collectible_mail_max_check_send_time = v1 + 384;
            __asan_report_store_n(v1 + 384, 32LL);
          }
          common::tools::TimeUtils::getStrByTime[abi:cxx11](
            (std::string *)(v1 + 384),
            collectible_mail_max_check_send_time);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v20, (const std::string *)(v1 + 384));
          std::string::~string((void *)(v1 + 384));
          *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = -117901064;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
          *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = -117901064;
          v22 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v22, &this->collectible_mail_min_check_expir_days_, 1) )
          {
            *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 448, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 448),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteCollectibleMailParam",
              2777);
            v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 448),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v24 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                    v23,
                    (const char (*)[66])byte_1A316BE0);
            v25 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v24, v25);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
            result = -1;
          }
          else
          {
            *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = 0;
            *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = 1;
            std::allocator<char>::allocator(v1 + 48);
            std::string::basic_string<std::allocator<char>>(
              (std::string *const)(v1 + 512),
              ",",
              (const std::allocator<char> *)(v1 + 48));
            v26 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
            v27 = common::tools::StringUtils::splitToSet<std::set<unsigned int>>(
                    v26,
                    (const std::string *)(v1 + 512),
                    &this->collectible_mail_exclude_item_set_,
                    1) != 0;
            std::string::~string((void *)(v1 + 512));
            *(_DWORD *)(((v1 + 512) >> 3) + 0x7FFF8000) = -117901064;
            std::allocator<char>::~allocator(v1 + 48);
            *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
            if ( v27 )
            {
              *(_DWORD *)(((v1 + 576) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v1 + 576) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 607) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 576, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 576),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteCollectibleMailParam",
                2782);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v1 + 576),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(
                      v28,
                      (const char (*)[81])byte_1A316C60);
              v30 = std::vector<std::string>::operator[](&config_ptr->value, 2uLL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, v30);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 576));
              result = -1;
            }
            else
            {
              result = 0;
            }
          }
        }
        else
        {
          if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteCollectibleMailParam",
            2771);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v12, (const char (*)[81])byte_1A316AA0);
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
          result = -1;
        }
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteCollectibleMailParam",
        2761);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(v6, (const char (*)[60])byte_1A3169C0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteCollectibleMailParam",
      2756);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
      v4,
      (const char (*)[67])"findConstValueExcelConfig CONST_VALUE_COLLECTIBLE_MAIL_PARAM fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v33 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8024) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF802C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2789: range 000000000E14B364-000000000E14B5C2
bool __cdecl ConstValueExcelConfigMgr::isCollectibleMailByItems(
        const ConstValueExcelConfigMgr *const this,
        const std::set<unsigned int> *item_set)
{
  bool v2; // r15
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  int v11; // eax
  bool result; // al
  char v13[176]; // [rsp+20h] [rbp-B0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 12 item_id:2790 64 8 16 __for_begin:2790 96 8 14 __for_end:2790";
  *(_QWORD *)(v3 + 16) = ConstValueExcelConfigMgr::isCollectibleMailByItems;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, item_set);
  *(std::set<unsigned int>::iterator *)(v3 + 64) = std::set<unsigned int>::begin(item_set);
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, item_set);
  *(std::set<unsigned int>::iterator *)(v3 + 96) = std::set<unsigned int>::end(item_set);
  while ( 1 )
  {
    v6 = (char *)(v3 + 96);
    if ( !std::operator!=(
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 64),
            (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)(v3 + 96)) )
      break;
    v7 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
    v8 = (int *)v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v7);
    }
    v9 = *v8;
    v10 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
    if ( v10 != 0 && v10 <= 3 )
    {
      LOBYTE(v6) = v10 != 0;
      __asan_report_store4(v3 + 48, v6);
    }
    *(_DWORD *)(v3 + 48) = v9;
    if ( common::tools::MiscUtils::isContains<std::set<unsigned int> const,unsigned int>(
           &this->collectible_mail_exclude_item_set_,
           (const unsigned int *)(v3 + 48)) )
    {
      v2 = 0;
      v11 = 0;
      goto LABEL_18;
    }
    std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)(v3 + 64));
  }
  v11 = 1;
LABEL_18:
  if ( v11 == 1 )
    v2 = 1;
  result = v2;
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2801: range 000000000E14B5C4-000000000E14B7BF
__int64 __fastcall ConstValueExcelConfigMgr::findGCGCharacterNpcStandPoint(
        const ConstValueExcelConfigMgr *const this,
        __int64 sit_point_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<unsigned int,unsigned int> *p_gcg_character_npc_sit_stand_point_map; // rdx
  std::map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::pointer v8; // rdx
  unsigned int *p_second; // rax
  __int64 result; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 17 sit_point_id:2800 64 8 9 iter:2802 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ConstValueExcelConfigMgr::findGCGCharacterNpcStandPoint;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = sit_point_id;
  p_gcg_character_npc_sit_stand_point_map = &this->gcg_character_npc_sit_stand_point_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, sit_point_id);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::map<unsigned int,unsigned int>::find(
                                                                        p_gcg_character_npc_sit_stand_point_map,
                                                                        (const std::map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->gcg_character_npc_sit_stand_point_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::end(v6);
  v7 = std::operator!=(
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    v8 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 64));
    p_second = &v8->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v8->second;
  }
  else
  {
    result = 0LL;
  }
  if ( v11 == (char *)v2 )
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

// Line 2811: range 000000000E14B7C0-000000000E14B87D
std::set<unsigned int> *__cdecl ConstValueExcelConfigMgr::getGCGDeckSystemAllInitCardSet(
        std::set<unsigned int> *retstr,
        const ConstValueExcelConfigMgr *const this)
{
  const unsigned int *M_current; // rbx
  const unsigned int *v3; // rcx
  const unsigned int *v4; // rbx
  const unsigned int *v5; // rcx

  std::set<unsigned int>::set(retstr);
  M_current = std::vector<unsigned int>::end(&this->gcg_deck_system_init_character_vec_)._M_current;
  v3 = std::vector<unsigned int>::begin(&this->gcg_deck_system_init_character_vec_)._M_current;
  std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    retstr,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v3,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
  v4 = std::vector<unsigned int>::end(&this->gcg_deck_system_init_card_vec_)._M_current;
  v5 = std::vector<unsigned int>::begin(&this->gcg_deck_system_init_card_vec_)._M_current;
  std::set<unsigned int>::insert<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
    retstr,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v5,
    (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v4);
  return retstr;
};

// Line 2819: range 000000000E14B87E-000000000E14C4F1
int32_t __cdecl ConstValueExcelConfigMgr::rewriteNightCrowGadgetParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // r14
  const std::string *v10; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  const std::string *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // r14
  const std::string *v18; // rax
  int v19; // eax
  const std::string *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // r14
  const std::string *v23; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r14
  const std::string *v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-278h]
  char v31[624]; // [rsp+20h] [rbp-270h] BYREF

  v1 = (unsigned __int64)v31;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(576LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "10 32 4 16 mute_state1:2832 48 4 16 mute_state2:2848 64 32 9 <unknown> 128 32 9 <unknown> 192 32"
                        " 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteNightCrowGadgetParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234556924;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862737] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 483LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 5 )
    {
      std::set<unsigned int>::clear(&this->night_crow_gadget_mute_state_set_);
      if ( *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v1 + 32, 483LL);
      *(_DWORD *)(v1 + 32) = 0;
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      if ( common::tools::StringUtils::strToNum<unsigned int>(v7, (unsigned int *)(v1 + 32), 1) )
      {
        if ( *(char *)(((v1 + 192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteNightCrowGadgetParam",
          2835);
        v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 192),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v9 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v8, (const char (*)[69])byte_1A316F40);
        v10 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v9, v10);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 192));
        result = -1;
      }
      else
      {
        v11 = std::set<unsigned int>::insert(
                &this->night_crow_gadget_mute_state_set_,
                (const std::set<unsigned int>::value_type *)(v1 + 32));
        if ( !v11.second )
        {
          if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteNightCrowGadgetParam",
            2840);
          v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 256),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v13 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v12, (const char (*)[63])byte_1A316FC0);
          v14 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
          result = -1;
        }
        else
        {
          v15 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          if ( common::tools::StringUtils::strToNum<unsigned int>(v15, &this->night_crow_gadget_init_state_, 1) )
          {
            if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
              && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v1 + 320, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v1 + 320),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ConstValueExcelConfig.cpp",
              "rewriteNightCrowGadgetParam",
              2845);
            v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v1 + 320),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v17 = common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
                    v16,
                    (const char (*)[70])byte_1A317020);
            v18 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, v18);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
            result = -1;
          }
          else
          {
            v19 = *(unsigned __int8 *)(((v1 + 48) >> 3) + 0x7FFF8000);
            if ( (_BYTE)v19 != 0 && (char)v19 <= 3 )
              __asan_report_store4(v1 + 48, &this->night_crow_gadget_init_state_);
            *(_DWORD *)(v1 + 48) = 0;
            v20 = std::vector<std::string>::operator[](&config_ptr->value, 5uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v20, (unsigned int *)(v1 + 48), 1) )
            {
              if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
                && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v1 + 384, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v1 + 384),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                "rewriteNightCrowGadgetParam",
                2851);
              v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v1 + 384),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v22 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                      v21,
                      (const char (*)[69])byte_1A3170A0);
              v23 = std::vector<std::string>::operator[](&config_ptr->value, 5uLL);
              common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v22, v23);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
              result = -1;
            }
            else
            {
              v24 = std::set<unsigned int>::insert(
                      &this->night_crow_gadget_mute_state_set_,
                      (const std::set<unsigned int>::value_type *)(v1 + 48));
              if ( !v24.second )
              {
                if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
                  && (char)((v1 - 33) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v1 + 448, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v1 + 448),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteNightCrowGadgetParam",
                  2856);
                v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v1 + 448),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v26 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                        v25,
                        (const char (*)[63])byte_1A317120);
                v27 = std::vector<std::string>::operator[](&config_ptr->value, 5uLL);
                common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, v27);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
                result = -1;
              }
              else if ( common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                          &this->night_crow_gadget_mute_state_set_,
                          &this->night_crow_gadget_init_state_) )
              {
                if ( *(char *)(((v1 + 512) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) != 0
                  && (char)((v1 + 31) & 7) >= *(_BYTE *)(((v1 + 543) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v1 + 512, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v1 + 512),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ConstValueExcelConfig.cpp",
                  "rewriteNightCrowGadgetParam",
                  2861);
                v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v1 + 512),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v29 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v28,
                        (const char (*)[77])byte_1A317180);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v29,
                  &this->night_crow_gadget_init_state_);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 512));
                result = -1;
              }
              else
              {
                result = 0;
              }
            }
          }
        }
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteNightCrowGadgetParam",
        2828);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(v6, (const char (*)[55])byte_1A316EE0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteNightCrowGadgetParam",
      2823);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
      v4,
      (const char (*)[62])"findConstValueExcelConfig CONST_VALUE_NIGHT_CROW_CONFIG fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v31 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8014) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF803C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8044) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2868: range 000000000E14C4F2-000000000E14CBA2
int32_t __cdecl ConstValueExcelConfigMgr::rewriteGCGTavernPointIdParam(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  bool v8; // r14
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // r14
  const std::string *v11; // rax
  data::ConstValueExcelConfig *config_ptr; // [rsp+18h] [rbp-1B8h]
  char v13[432]; // [rsp+20h] [rbp-1B0h] BYREF

  v1 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_3(384LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "7 32 1 9 <unknown> 48 1 9 <unknown> 64 32 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown> 256 "
                        "32 9 <unknown> 320 32 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteGCGTavernPointIdParam;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862723] = -218959118;
  v3[536862725] = -218959118;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 511LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) )
    {
      std::allocator<char>::allocator(v1 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 256),
        ":",
        (const std::allocator<char> *)(v1 + 48));
      std::allocator<char>::allocator(v1 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 192),
        ",",
        (const std::allocator<char> *)(v1 + 32));
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      v8 = common::tools::StringUtils::splitToMap<unsigned int,unsigned int>(
             v7,
             (const std::string *)(v1 + 192),
             (const std::string *)(v1 + 256),
             &this->gcg_character_npc_sit_stand_point_map_,
             0) != 0;
      std::string::~string((void *)(v1 + 192));
      *(_DWORD *)(((v1 + 192) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 32);
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      std::string::~string((void *)(v1 + 256));
      *(_DWORD *)(((v1 + 256) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v1 + 48);
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteGCGTavernPointIdParam",
          2882);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v1 + 320),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
                v9,
                (const char (*)[18])"splitToMap fails:");
        v11 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v10, v11);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
        result = -1;
      }
      else
      {
        result = 0;
      }
    }
    else
    {
      if ( *(char *)(((v1 + 128) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 159) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 128, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 128),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteGCGTavernPointIdParam",
        2877);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(v6, (const char (*)[57])byte_1A3172A0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 128));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 95) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 64, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 64),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteGCGTavernPointIdParam",
      2872);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 64),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
      v4,
      (const char (*)[64])"findConstValueExcelConfig CONST_VALUE_GCG_TAVERN_POINT_ID fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 64));
    result = -1;
  }
  if ( v13 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF800C) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8014) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF801C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2889: range 000000000E14CBA4-000000000E14D88C
int32_t __cdecl ConstValueExcelConfigMgr::rewriteGCGDeckSystemInitDeck(ConstValueExcelConfigMgr *const this)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rax
  _DWORD *v3; // r12
  common::milog::MiLogStream *v4; // rax
  int32_t result; // eax
  common::milog::MiLogStream *v6; // rax
  const std::string *v7; // rax
  bool v8; // r15
  unsigned __int64 v9; // rax
  char *i; // r14
  _DWORD *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // r14
  const std::string *v14; // rax
  unsigned __int64 v15; // rax
  _DWORD *v16; // rax
  const std::string *v17; // rax
  bool v18; // r15
  unsigned __int64 v19; // rax
  char *j; // r14
  _DWORD *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  const std::string *v24; // rax
  std::initializer_list<std::string > __l; // [rsp+10h] [rbp-320h]
  data::ConstValueExcelConfig *config_ptr; // [rsp+38h] [rbp-2F8h]
  char v27[752]; // [rsp+40h] [rbp-2F0h] BYREF

  v1 = (unsigned __int64)v27;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_4(704LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "14 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 1 9 <unknown> 112 1 9 "
                        "<unknown> 128 24 9 <unknown> 192 24 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 <"
                        "unknown> 448 32 9 <unknown> 512 64 9 <unknown> 608 64 9 <unknown>";
  *(_QWORD *)(v1 + 16) = ConstValueExcelConfigMgr::rewriteGCGDeckSystemInitDeck;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -234753535;
  v3[536862722] = -234753535;
  v3[536862723] = -234753535;
  v3[536862724] = -234881024;
  v3[536862725] = -218959118;
  v3[536862726] = -234881024;
  v3[536862727] = -218959118;
  v3[536862729] = -218959118;
  v3[536862731] = -218959118;
  v3[536862733] = -218959118;
  v3[536862735] = -218959118;
  v3[536862738] = -218959118;
  v3[536862741] = -202116109;
  config_ptr = data::ConstValueExcelConfigMgrBase::findConstValueExcelConfig(this, 520LL);
  if ( config_ptr )
  {
    if ( std::vector<std::string>::size(&config_ptr->value) > 1 )
    {
      std::allocator<char>::allocator(v1 + 32);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 512),
        ";",
        (const std::allocator<char> *)(v1 + 32));
      std::allocator<char>::allocator(v1 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v1 + 544),
        ",",
        (const std::allocator<char> *)(v1 + 48));
      std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v1 + 64));
      std::vector<std::string>::vector(
        (std::vector<std::string> *const)(v1 + 128),
        (std::initializer_list<std::string >)__PAIR128__(2LL, v1 + 512),
        (const std::vector<std::string>::allocator_type *)(v1 + 64));
      v7 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
      v8 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
             v7,
             (const std::vector<std::string> *)(v1 + 128),
             &this->gcg_deck_system_init_character_vec_,
             1) != 0;
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 128));
      v9 = ((v1 + 128) >> 3) + 2147450880;
      *(_WORD *)v9 = -1800;
      *(_BYTE *)(v9 + 2) = -8;
      std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v1 + 64));
      *(_BYTE *)(((v1 + 64) >> 3) + 0x7FFF8000) = -8;
      for ( i = (char *)(v1 + 576); i != (char *)(v1 + 512); std::string::~string(i) )
        i -= 32;
      v11 = (_DWORD *)(((v1 + 512) >> 3) + 2147450880);
      *v11 = -117901064;
      v11[1] = -117901064;
      std::allocator<char>::~allocator(v1 + 48);
      *(_BYTE *)(((v1 + 48) >> 3) + 0x7FFF8000) = -8;
      std::allocator<char>::~allocator(v1 + 32);
      *(_BYTE *)(((v1 + 32) >> 3) + 0x7FFF8000) = -8;
      if ( v8 )
      {
        *(_DWORD *)(((v1 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v1 + 384) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) != 0
          && (char)((v1 - 97) & 7) >= *(_BYTE *)(((v1 + 415) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v1 + 384, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v1 + 384),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ConstValueExcelConfig.cpp",
          "rewriteGCGDeckSystemInitDeck",
          2903);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v1 + 384),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                v12,
                (const char (*)[25])"splitToListBySeps fails:");
        v14 = std::vector<std::string>::operator[](&config_ptr->value, 0LL);
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, v14);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 384));
        result = -1;
      }
      else
      {
        v15 = ((v1 + 192) >> 3) + 2147450880;
        *(_WORD *)v15 = 0;
        *(_BYTE *)(v15 + 2) = 0;
        v16 = (_DWORD *)(((v1 + 608) >> 3) + 2147450880);
        *v16 = 0;
        v16[1] = 0;
        *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v1 + 80);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v1 + 608),
          ";",
          (const std::allocator<char> *)(v1 + 80));
        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = 1;
        std::allocator<char>::allocator(v1 + 96);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v1 + 640),
          ",",
          (const std::allocator<char> *)(v1 + 96));
        __l._M_array = (std::initializer_list<std::string >::iterator)(v1 + 608);
        __l._M_len = 2LL;
        *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = 1;
        std::allocator<std::string>::allocator((std::allocator<std::string > *const)(v1 + 112));
        std::vector<std::string>::vector(
          (std::vector<std::string> *const)(v1 + 192),
          __l,
          (const std::vector<std::string>::allocator_type *)(v1 + 112));
        v17 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
        v18 = common::tools::StringUtils::splitToListBySeps<unsigned int>(
                v17,
                (const std::vector<std::string> *)(v1 + 192),
                &this->gcg_deck_system_init_card_vec_,
                1) != 0;
        std::vector<std::string>::~vector((std::vector<std::string> *const)(v1 + 192));
        v19 = ((v1 + 192) >> 3) + 2147450880;
        *(_WORD *)v19 = -1800;
        *(_BYTE *)(v19 + 2) = -8;
        std::allocator<std::string>::~allocator((std::allocator<std::string > *const)(v1 + 112));
        *(_BYTE *)(((v1 + 112) >> 3) + 0x7FFF8000) = -8;
        for ( j = (char *)(v1 + 672); j != (char *)(v1 + 608); std::string::~string(j) )
          j -= 32;
        v21 = (_DWORD *)(((v1 + 608) >> 3) + 2147450880);
        *v21 = -117901064;
        v21[1] = -117901064;
        std::allocator<char>::~allocator(v1 + 96);
        *(_BYTE *)(((v1 + 96) >> 3) + 0x7FFF8000) = -8;
        std::allocator<char>::~allocator(v1 + 80);
        *(_BYTE *)(((v1 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v18 )
        {
          *(_DWORD *)(((v1 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v1 + 448) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) != 0
            && (char)((v1 - 64 + 31) & 7) >= *(_BYTE *)(((v1 + 479) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v1 + 448, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v1 + 448),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ConstValueExcelConfig.cpp",
            "rewriteGCGDeckSystemInitDeck",
            2908);
          v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v1 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v23 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
                  v22,
                  (const char (*)[25])"splitToListBySeps fails:");
          v24 = std::vector<std::string>::operator[](&config_ptr->value, 1uLL);
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v23, v24);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 448));
          result = -1;
        }
        else
        {
          result = 0;
        }
      }
    }
    else
    {
      if ( *(char *)(((v1 + 320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) != 0
        && (char)((v1 + 95) & 7) >= *(_BYTE *)(((v1 + 351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v1 + 320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v1 + 320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ConstValueExcelConfig.cpp",
        "rewriteGCGDeckSystemInitDeck",
        2898);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v1 + 320),
             (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(v6, (const char (*)[63])byte_1A3174E0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 320));
      result = -1;
    }
  }
  else
  {
    if ( *(char *)(((v1 + 256) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) != 0
      && (char)((v1 - 64 + 95) & 7) >= *(_BYTE *)(((v1 + 287) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v1 + 256, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v1 + 256),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ConstValueExcelConfig.cpp",
      "rewriteGCGDeckSystemInitDeck",
      2893);
    v4 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v1 + 256),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [70],(char *[70])0>(
      v4,
      (const char (*)[70])"findConstValueExcelConfig CONST_VALUE_GCG_DECK_SYSTEM_INIT_DECK fails");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v1 + 256));
    result = -1;
  }
  if ( v27 == (char *)v1 )
  {
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v1 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8044) = 0LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF804C) = 0LL;
    *(_DWORD *)((v1 >> 3) + 0x7FFF8054) = 0;
  }
  else
  {
    *(_QWORD *)v1 = 1172321806LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v1 >> 3) + 0x7FFF8050) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};
