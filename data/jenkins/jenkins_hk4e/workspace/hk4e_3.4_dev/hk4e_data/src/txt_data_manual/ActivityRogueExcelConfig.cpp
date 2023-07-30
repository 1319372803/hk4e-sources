// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/hk4e_data/src/txt_data_manual/ActivityRogueExcelConfig.cpp

// Line 21: range 0000000012820322-00000000128206CE
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::rewriteConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityRogueExcelConfigMgr::rewriteRogueShikigamiConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueShikigamiGroupConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueRuneData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueCardData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueCurseData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueDungeonWeightData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteSequenceConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueGadgetData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteGadgetRotData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRougeDungeonCellConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteMonsterPoolData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueAbilityGroup(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueTokenConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteRogueStageExcelConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::rewriteGadgetWidgetConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "rewriteConfig",
      38);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 45: range 00000000128206D0-0000000012820A5B
int32_t __cdecl ActivityRogueExcelConfigMgr::checkConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  char v8[128]; // [rsp+10h] [rbp-80h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450888) = -202116109;
  if ( ActivityRogueExcelConfigMgr::checkRogueShikigamiConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueShikigamiGroupConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueRuneData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueCardData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueCurseData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueDungeonWeightData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueGadgetData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkGadgetRotData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueAbilityGroup(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRougeDungeonCellConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkSequenceConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkMonsterPoolData(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkRogueStageExcelConfig(this, txt_config_mgr)
    || ActivityRogueExcelConfigMgr::checkGadgetWidgetConfig(this, txt_config_mgr) )
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
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "checkConfig",
      61);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v2 + 32),
           (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(v6, (const char (*)[21])"rewriteConfig failed");
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 32));
    result = -1;
  }
  else
  {
    result = 0;
  }
  if ( v8 == (char *)v2 )
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

// Line 68: range 0000000012820A5C-0000000012826CB7
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRoguelikeEffectConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr,
        const data::RoguelikeEffectExcelConfig *effect_config,
        bool is_shikigami,
        bool is_clear_at_next_level)
{
  int32_t v5; // r13d
  unsigned __int64 v6; // r14
  __int64 v7; // rax
  _DWORD *v8; // r12
  float *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  int v12; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,float>,false,true>,bool> v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // r13
  __int64 v20; // rax
  int v21; // eax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r13
  __int64 v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // r13
  __int64 v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // r13
  __int64 v32; // rax
  int v33; // eax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // r13
  __int64 v36; // rax
  _BOOL4 v37; // eax
  bool v38; // r15
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // r13
  __int64 v43; // rax
  int v44; // r15d
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // r13
  __int64 v49; // rax
  std::vector<unsigned int>::reference v50; // rax
  _DWORD *v51; // rdx
  std::vector<unsigned int>::reference v52; // rax
  _DWORD *v53; // rdx
  char v54; // al
  common::milog::MiLogStream *v55; // rax
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // r13
  __int64 v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  common::milog::MiLogStream *v63; // r13
  __int64 v64; // rax
  int v65; // eax
  int v66; // eax
  common::milog::MiLogStream *v67; // rax
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r13
  __int64 v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // r13
  __int64 v74; // rax
  common::milog::MiLogStream *v75; // rax
  common::milog::MiLogStream *v76; // r13
  __int64 v77; // rax
  int v78; // eax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rax
  common::milog::MiLogStream *v81; // rax
  common::milog::MiLogStream *v82; // r13
  __int64 v83; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rax
  common::milog::MiLogStream *v88; // r13
  __int64 v89; // rax
  float v90; // xmm0_4
  common::milog::MiLogStream *v91; // rax
  common::milog::MiLogStream *v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // r13
  __int64 v95; // rax
  int v96; // eax
  int v97; // eax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rax
  common::milog::MiLogStream *v101; // r13
  __int64 v102; // rax
  bool v103; // r15
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // r13
  __int64 v108; // rax
  int v109; // r15d
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  common::milog::MiLogStream *v112; // rax
  common::milog::MiLogStream *v113; // r13
  __int64 v114; // rax
  std::vector<std::string>::reference v115; // rax
  const char *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  common::milog::MiLogStream *v120; // r13
  __int64 v121; // rax
  int v122; // eax
  const std::string *v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // r13
  const std::string *v126; // rax
  common::milog::MiLogStream *v127; // rax
  common::milog::MiLogStream *v128; // r13
  __int64 v129; // rax
  bool v130; // r15
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // r13
  __int64 v135; // rax
  int v136; // r15d
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // r13
  __int64 v141; // rax
  std::vector<std::string>::reference v142; // rax
  const char *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // r13
  __int64 v148; // rax
  int v149; // eax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // r13
  __int64 v154; // rax
  const std::string *v155; // rax
  common::milog::MiLogStream *v156; // rax
  common::milog::MiLogStream *v157; // r13
  const std::string *v158; // rax
  common::milog::MiLogStream *v159; // rax
  common::milog::MiLogStream *v160; // r13
  __int64 v161; // rax
  int v162; // eax
  common::milog::MiLogStream *v163; // rax
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // r13
  __int64 v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // r13
  __int64 v172; // rax
  int v173; // eax
  int v174; // eax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // r13
  __int64 v179; // rax
  bool v180; // r15
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // r13
  __int64 v185; // rax
  int v186; // r15d
  common::milog::MiLogStream *v187; // rax
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rax
  common::milog::MiLogStream *v190; // r13
  __int64 v191; // rax
  std::vector<unsigned int>::reference v192; // rax
  _DWORD *v193; // rdx
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // r13
  const unsigned int *v196; // rax
  common::milog::MiLogStream *v197; // rax
  common::milog::MiLogStream *v198; // r13
  __int64 v199; // rax
  std::vector<unsigned int>::reference v200; // rax
  _DWORD *v201; // rdx
  common::milog::MiLogStream *v202; // rax
  common::milog::MiLogStream *v203; // r13
  const unsigned int *v204; // rax
  common::milog::MiLogStream *v205; // rax
  common::milog::MiLogStream *v206; // r13
  __int64 v207; // rax
  common::milog::MiLogStream *v208; // rax
  common::milog::MiLogStream *v209; // r13
  __int64 v210; // rax
  __int64 v211; // rsi
  std::vector<unsigned int>::reference v212; // rax
  uint32_t *v213; // rdx
  uint32_t v214; // ecx
  char v215; // al
  common::milog::MiLogStream *v216; // rax
  common::milog::MiLogStream *v217; // r13
  __int64 v218; // rax
  int v219; // eax
  common::milog::MiLogStream *v220; // rax
  common::milog::MiLogStream *v221; // rax
  common::milog::MiLogStream *v222; // rax
  common::milog::MiLogStream *v223; // r13
  __int64 v224; // rax
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // r13
  __int64 v227; // rax
  char v232[4432]; // [rsp+30h] [rbp-1150h] BYREF

  v6 = (unsigned __int64)v232;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v7 = __asan_stack_malloc_7(4384LL);
    if ( v7 )
      v6 = v7;
  }
  *(_QWORD *)v6 = 1102416563LL;
  *(_QWORD *)(v6 + 8) = "98 32 1 9 <unknown> 48 1 9 <unknown> 64 1 9 <unknown> 80 1 9 <unknown> 96 4 8 value:74 112 4 14 "
                        "delta_count:91 128 4 15 delta_count:119 144 4 15 delta_count:155 160 4 9 value:184 176 4 15 delt"
                        "a_count:201 192 4 15 gadget_type:228 208 4 15 delta_count:234 224 4 13 card_type:257 240 4 15 de"
                        "lta_count:268 256 4 15 delta_count:284 272 4 15 delta_count:338 288 8 9 <unknown> 320 8 9 <unkno"
                        "wn> 352 8 9 <unknown> 384 8 9 <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 51"
                        "2 8 9 <unknown> 544 8 9 <unknown> 576 8 9 <unknown> 608 8 9 <unknown> 640 8 9 <unknown> 672 8 9 "
                        "<unknown> 704 8 9 <unknown> 736 8 9 <unknown> 768 8 9 <unknown> 800 8 9 <unknown> 832 8 9 <unkno"
                        "wn> 864 8 9 <unknown> 896 8 9 <unknown> 928 8 9 <unknown> 960 8 9 <unknown> 992 8 9 <unknown> 10"
                        "24 8 9 <unknown> 1056 8 9 <unknown> 1088 8 9 <unknown> 1120 8 9 <unknown> 1152 8 9 <unknown> 118"
                        "4 8 9 <unknown> 1216 8 9 <unknown> 1248 8 9 <unknown> 1280 8 9 <unknown> 1312 8 9 <unknown> 1344"
                        " 8 9 <unknown> 1376 8 9 <unknown> 1408 8 9 <unknown> 1440 24 13 param_vec:134 1504 24 17 param_s"
                        "tr_vec:217 1568 24 17 param_str_vec:246 1632 24 13 param_vec:300 1696 32 9 <unknown> 1760 32 9 <"
                        "unknown> 1824 32 9 <unknown> 1888 32 9 <unknown> 1952 32 9 <unknown> 2016 32 9 <unknown> 2080 32"
                        " 9 <unknown> 2144 32 9 <unknown> 2208 32 9 <unknown> 2272 32 9 <unknown> 2336 32 9 <unknown> 240"
                        "0 32 9 <unknown> 2464 32 9 <unknown> 2528 32 9 <unknown> 2592 32 9 <unknown> 2656 32 9 <unknown>"
                        " 2720 32 9 <unknown> 2784 32 9 <unknown> 2848 32 9 <unknown> 2912 32 9 <unknown> 2976 32 9 <unkn"
                        "own> 3040 32 9 <unknown> 3104 32 9 <unknown> 3168 32 9 <unknown> 3232 32 9 <unknown> 3296 32 9 <"
                        "unknown> 3360 32 9 <unknown> 3424 32 9 <unknown> 3488 32 9 <unknown> 3552 32 9 <unknown> 3616 32"
                        " 9 <unknown> 3680 32 9 <unknown> 3744 32 9 <unknown> 3808 32 9 <unknown> 3872 32 9 <unknown> 393"
                        "6 32 9 <unknown> 4000 32 9 <unknown> 4064 32 9 <unknown> 4128 32 9 <unknown> 4192 32 9 <unknown>"
                        " 4256 32 9 <unknown> 4320 32 9 <unknown>";
  *(_QWORD *)(v6 + 16) = ActivityRogueExcelConfigMgr::rewriteRoguelikeEffectConfig;
  v8 = (_DWORD *)(v6 >> 3);
  v8[536862720] = -235802127;
  v8[536862721] = -234753535;
  v8[536862722] = -234753535;
  v8[536862723] = -234556924;
  v8[536862724] = -234556924;
  v8[536862725] = -234556924;
  v8[536862726] = -234556924;
  v8[536862727] = -234556924;
  v8[536862728] = -234556924;
  v8[536862729] = -218959360;
  v8[536862730] = -218959360;
  v8[536862731] = -218959360;
  v8[536862732] = -218959360;
  v8[536862733] = -218959360;
  v8[536862734] = -218959360;
  v8[536862735] = -218959360;
  v8[536862736] = -218959360;
  v8[536862737] = -218959360;
  v8[536862738] = -218959360;
  v8[536862739] = -218959360;
  v8[536862740] = -218959360;
  v8[536862741] = -218959360;
  v8[536862742] = -218959360;
  v8[536862743] = -218959360;
  v8[536862744] = -218959360;
  v8[536862745] = -218959360;
  v8[536862746] = -218959360;
  v8[536862747] = -218959360;
  v8[536862748] = -218959360;
  v8[536862749] = -218959360;
  v8[536862750] = -218959360;
  v8[536862751] = -218959360;
  v8[536862752] = -218959360;
  v8[536862753] = -218959360;
  v8[536862754] = -218959360;
  v8[536862755] = -218959360;
  v8[536862756] = -218959360;
  v8[536862757] = -218959360;
  v8[536862758] = -218959360;
  v8[536862759] = -218959360;
  v8[536862760] = -218959360;
  v8[536862761] = -218959360;
  v8[536862762] = -218959360;
  v8[536862763] = -218959360;
  v8[536862764] = -218959360;
  v8[536862765] = -234881024;
  v8[536862766] = -218959118;
  v8[536862767] = -234881024;
  v8[536862768] = -218959118;
  v8[536862769] = -234881024;
  v8[536862770] = -218959118;
  v8[536862771] = -234881024;
  v8[536862772] = -218959118;
  v8[536862774] = -218959118;
  v8[536862776] = -218959118;
  v8[536862778] = -218959118;
  v8[536862780] = -218959118;
  v8[536862782] = -218959118;
  v8[536862784] = -218959118;
  v8[536862786] = -218959118;
  v8[536862788] = -218959118;
  v8[536862790] = -218959118;
  v8[536862792] = -218959118;
  v8[536862794] = -218959118;
  v8[536862796] = -218959118;
  v8[536862798] = -218959118;
  v8[536862800] = -218959118;
  v8[536862802] = -218959118;
  v8[536862804] = -218959118;
  v8[536862806] = -218959118;
  v8[536862808] = -218959118;
  v8[536862810] = -218959118;
  v8[536862812] = -218959118;
  v8[536862814] = -218959118;
  v8[536862816] = -218959118;
  v8[536862818] = -218959118;
  v8[536862820] = -218959118;
  v8[536862822] = -218959118;
  v8[536862824] = -218959118;
  v8[536862826] = -218959118;
  v8[536862828] = -218959118;
  v8[536862830] = -218959118;
  v8[536862832] = -218959118;
  v8[536862834] = -218959118;
  v8[536862836] = -218959118;
  v8[536862838] = -218959118;
  v8[536862840] = -218959118;
  v8[536862842] = -218959118;
  v8[536862844] = -218959118;
  v8[536862846] = -218959118;
  v8[536862848] = -218959118;
  v8[536862850] = -218959118;
  v8[536862852] = -218959118;
  v8[536862854] = -218959118;
  v8[536862856] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_load4(&effect_config->effect_type);
  }
  switch ( effect_config->effect_type )
  {
    case ROGUELIKE_EFFECT_STATIC_COMBAT:
    case ROGUELIKE_EFFECT_DYNAMIC_COMBAT:
      if ( *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 96) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 96, txt_config_mgr);
      *(_DWORD *)(v6 + 96) = 0;
      if ( common::tools::StringUtils::strToNum<float>(&effect_config->effect_param, (float *)(v6 + 96), 1) )
      {
        if ( *(char *)(((v6 + 1696) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1727) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 1727) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 1696, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 1696),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          77);
        v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 1696),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v11 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                v10,
                (const char (*)[51])"[ROGUELIKE] team sgv value strToNum failed, value:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, &effect_config->effect_param);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1696));
        v5 = -1;
        v12 = 0;
      }
      else
      {
        v13 = std::unordered_map<std::string,float>::emplace<std::string const&,float &>(
                &this->team_sgv_value_map,
                &effect_config->effect_key,
                (float *)(v6 + 96),
                (const std::string *)&this->team_sgv_value_map,
                v9);
        if ( !v13.second )
        {
          if ( *(char *)(((v6 + 1760) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 1791) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 1791) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 1760, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 1760),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            82);
          v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 1760),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  v14,
                  (const char (*)[49])"[ROGUELIKE] duplicated roguelike effect sgv, key");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v15, &effect_config->effect_key);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1760));
          v5 = -1;
          v12 = 0;
        }
        else
        {
          v12 = 1;
        }
      }
      if ( v12 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_DISABLE_SPRING_CELL:
    case ROGUELIKE_EFFECT_ADD_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_CLEAR_LEVEL_TRAP:
    case ROGUELIKE_EFFECT_RANDOM_CLEAR_A_CURSE:
    case ROGUELIKE_EFFECT_CLEAR_ALL_CURSE:
      if ( is_shikigami )
      {
        if ( *(char *)(((v6 + 1888) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1919) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 1919) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 1888, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 1888),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          107);
        v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 1888),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v23 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v22,
                (const char (*)[50])"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v24 = (__int64)data::enumValToStr(
                         effect_config->effect_type,
                         (__int64)"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((v6 + 320) >> 3) + 0x7FFF8000) )
          v24 = __asan_report_store8(v6 + 320, "[ROGUELIKE] shikigami can not support effect_type");
        *(_QWORD *)(v6 + 320) = v24;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)(v6 + 320));
        *(_BYTE *)(((v6 + 320) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1888));
        v5 = -1;
      }
      else
      {
        if ( is_clear_at_next_level )
          goto LABEL_400;
        if ( *(char *)(((v6 + 1952) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1983) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 1983) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 1952, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 1952),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          112);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 1952),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                v25,
                (const char (*)[60])"[ROGUELIKE] effect must be clear at next level, effect_type");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v27 = (__int64)data::enumValToStr(
                         effect_config->effect_type,
                         (__int64)"[ROGUELIKE] effect must be clear at next level, effect_type");
        if ( *(_BYTE *)(((v6 + 352) >> 3) + 0x7FFF8000) )
          v27 = __asan_report_store8(v6 + 352, "[ROGUELIKE] effect must be clear at next level, effect_type");
        *(_QWORD *)(v6 + 352) = v27;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v26, (const char *const *)(v6 + 352));
        *(_BYTE *)(((v6 + 352) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1952));
        v5 = -1;
      }
      break;
    case ROGUELIKE_EFFECT_ADD_TALENT:
      if ( is_shikigami )
      {
        if ( *(char *)(((v6 + 2080) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 2111) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 2111) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2080, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2080),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          131);
        v34 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 2080),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v35 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v34,
                (const char (*)[50])"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v36 = (__int64)data::enumValToStr(
                         effect_config->effect_type,
                         (__int64)"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((v6 + 416) >> 3) + 0x7FFF8000) )
          v36 = __asan_report_store8(v6 + 416, "[ROGUELIKE] shikigami can not support effect_type");
        *(_QWORD *)(v6 + 416) = v36;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v35, (const char *const *)(v6 + 416));
        *(_BYTE *)(((v6 + 416) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2080));
        v5 = -1;
        v37 = 0;
      }
      else
      {
        std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 1440));
        std::allocator<char>::allocator(v6 + 32);
        std::string::basic_string<std::allocator<char>>(
          (std::string *const)(v6 + 2144),
          ",",
          (const std::allocator<char> *)(v6 + 32));
        v38 = common::tools::StringUtils::splitToList<unsigned int>(
                &effect_config->effect_param,
                (const std::string *)(v6 + 2144),
                (std::vector<unsigned int> *)(v6 + 1440),
                0) != 0;
        std::string::~string((void *)(v6 + 2144));
        *(_DWORD *)(((v6 + 2144) >> 3) + 0x7FFF8000) = -117901064;
        std::allocator<char>::~allocator(v6 + 32);
        *(_BYTE *)(((v6 + 32) >> 3) + 0x7FFF8000) = -8;
        if ( v38 )
        {
          *(_DWORD *)(((v6 + 2208) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 2208) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2239) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 2239) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2208, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2208),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            137);
          v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2208),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v40 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                  v39,
                  (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
          v41 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v40, &effect_config->effect_param);
          v42 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v41, (const char (*)[8])", type:");
          *(_BYTE *)(((v6 + 448) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v43 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 448) >> 3) + 0x7FFF8000) )
            v43 = __asan_report_store8(v6 + 448, ", type:");
          *(_QWORD *)(v6 + 448) = v43;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v42, (const char *const *)(v6 + 448));
          *(_BYTE *)(((v6 + 448) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2208));
          *(_DWORD *)(((v6 + 2208) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          v44 = 0;
        }
        else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 1440)) > 1 )
        {
          v50 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1440), 0LL);
          v51 = v50;
          if ( *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v50 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v50 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v50);
          }
          if ( !*v51 )
            goto LABEL_92;
          v52 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1440), 1uLL);
          v53 = v52;
          if ( *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v52 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v52 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v52);
          }
          if ( *v53 )
            v54 = 0;
          else
LABEL_92:
            v54 = 1;
          if ( v54 )
          {
            *(_DWORD *)(((v6 + 2336) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v6 + 2336) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 2367) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 2367) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 2336, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 2336),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRoguelikeEffectConfig",
              148);
            v55 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v6 + 2336),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v56 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                    v55,
                    (const char (*)[46])"[ROGUELIKE] effect param config error, value:");
            v57 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v56, &effect_config->effect_param);
            v58 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v57, (const char (*)[8])", type:");
            *(_BYTE *)(((v6 + 512) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->effect_type);
            }
            v59 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
            if ( *(_BYTE *)(((v6 + 512) >> 3) + 0x7FFF8000) )
              v59 = __asan_report_store8(v6 + 512, ", type:");
            *(_QWORD *)(v6 + 512) = v59;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v58, (const char *const *)(v6 + 512));
            *(_BYTE *)(((v6 + 512) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2336));
            *(_DWORD *)(((v6 + 2336) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
            v44 = 0;
          }
          else
          {
            v44 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v6 + 2272) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 2272) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2303) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 2303) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2272, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2272),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            142);
          v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2272),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v46 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                  v45,
                  (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
          v47 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v46, &effect_config->effect_param);
          v48 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v47, (const char (*)[8])", type:");
          *(_BYTE *)(((v6 + 480) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v49 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 480) >> 3) + 0x7FFF8000) )
            v49 = __asan_report_store8(v6 + 480, ", type:");
          *(_QWORD *)(v6 + 480) = v49;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v48, (const char *const *)(v6 + 480));
          *(_BYTE *)(((v6 + 480) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2272));
          *(_DWORD *)(((v6 + 2272) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          v44 = 0;
        }
        std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 1440));
        v37 = v44 != 0;
      }
      if ( v37 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_ADD_RUNE_MAX_COUNT:
    case ROGUELIKE_EFFECT_ADD_RUNE_USE_COUNT:
    case ROGUELIKE_EFFECT_FILL_RUNE_USE_COUNT:
      if ( *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 112) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 112, txt_config_mgr);
      *(_DWORD *)(v6 + 112) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 112),
             1) )
      {
        if ( *(char *)(((v6 + 1824) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 1855) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 1855) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 1824, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 1824),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          94);
        v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 1824),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v17 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v16,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v18 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v17, &effect_config->effect_param);
        v19 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v18, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v20 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 288) >> 3) + 0x7FFF8000) )
          v20 = __asan_report_store8(v6 + 288, ", type:");
        *(_QWORD *)(v6 + 288) = v20;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v19, (const char *const *)(v6 + 288));
        *(_BYTE *)(((v6 + 288) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 1824));
        v5 = -1;
        v21 = 0;
      }
      else
      {
        v21 = 1;
      }
      if ( v21 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_USE_RUNE_PROB_NOT_SUB:
      if ( *(_BYTE *)(((v6 + 144) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 144) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 144, txt_config_mgr);
      *(_DWORD *)(v6 + 144) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 144),
             1) )
      {
        if ( *(char *)(((v6 + 2400) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 2431) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 2431) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2400, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2400),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          158);
        v60 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 2400),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v61 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v60,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v62 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v61, &effect_config->effect_param);
        v63 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v62, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v64 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 544) >> 3) + 0x7FFF8000) )
          v64 = __asan_report_store8(v6 + 544, ", type:");
        *(_QWORD *)(v6 + 544) = v64;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v63, (const char *const *)(v6 + 544));
        *(_BYTE *)(((v6 + 544) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2400));
        v5 = -1;
        v65 = 0;
      }
      else
      {
        v66 = *(unsigned __int8 *)(((v6 + 144) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v66 != 0 && (char)v66 <= 3 )
          __asan_report_load4(v6 + 144);
        if ( *(_DWORD *)(v6 + 144) <= 0x64u )
        {
          v65 = 1;
        }
        else
        {
          if ( *(char *)(((v6 + 2464) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2495) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 2495) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2464, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2464),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            163);
          v67 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2464),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v68 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v67,
                  (const char (*)[50])"[ROGUELIKE] effect param config too large, value:");
          v69 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v68,
                  (const unsigned int *)(v6 + 144));
          v70 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v69, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v71 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 576) >> 3) + 0x7FFF8000) )
            v71 = __asan_report_store8(v6 + 576, ", type:");
          *(_QWORD *)(v6 + 576) = v71;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v70, (const char *const *)(v6 + 576));
          *(_BYTE *)(((v6 + 576) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2464));
          v5 = -1;
          v65 = 0;
        }
      }
      if ( v65 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_CLEAR_MIST:
      if ( !is_shikigami )
        goto LABEL_400;
      if ( *(char *)(((v6 + 2528) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 2559) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 2559) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 2528, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 2528),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRoguelikeEffectConfig",
        172);
      v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v6 + 2528),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v73 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v72,
              (const char (*)[50])"[ROGUELIKE] shikigami can not support effect_type");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      v74 = (__int64)data::enumValToStr(
                       effect_config->effect_type,
                       (__int64)"[ROGUELIKE] shikigami can not support effect_type");
      if ( *(_BYTE *)(((v6 + 608) >> 3) + 0x7FFF8000) )
        v74 = __asan_report_store8(v6 + 608, "[ROGUELIKE] shikigami can not support effect_type");
      *(_QWORD *)(v6 + 608) = v74;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v73, (const char *const *)(v6 + 608));
      *(_BYTE *)(((v6 + 608) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2528));
      v5 = -1;
      break;
    case ROGUELIKE_EFFECT_ADD_RESOURCE:
      if ( *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 128) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 128, txt_config_mgr);
      *(_DWORD *)(v6 + 128) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 128),
             1) )
      {
        if ( *(char *)(((v6 + 2016) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 2047) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 2047) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2016, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2016),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          122);
        v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 2016),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v29 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v28,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v30 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v29, &effect_config->effect_param);
        v31 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v30, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v32 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 384) >> 3) + 0x7FFF8000) )
          v32 = __asan_report_store8(v6 + 384, ", type:");
        *(_QWORD *)(v6 + 384) = v32;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v31, (const char *const *)(v6 + 384));
        *(_BYTE *)(((v6 + 384) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2016));
        v5 = -1;
        v33 = 0;
      }
      else
      {
        v33 = 1;
      }
      if ( v33 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_RANDOM_AVATAR_NOHEAL:
      if ( is_shikigami )
      {
        if ( *(char *)(((v6 + 2592) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 2623) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 2623) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2592, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2592),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          181);
        v75 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 2592),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v76 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v75,
                (const char (*)[50])"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v77 = (__int64)data::enumValToStr(
                         effect_config->effect_type,
                         (__int64)"[ROGUELIKE] shikigami can not support effect_type");
        if ( *(_BYTE *)(((v6 + 640) >> 3) + 0x7FFF8000) )
          v77 = __asan_report_store8(v6 + 640, "[ROGUELIKE] shikigami can not support effect_type");
        *(_QWORD *)(v6 + 640) = v77;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v76, (const char *const *)(v6 + 640));
        *(_BYTE *)(((v6 + 640) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2592));
        v5 = -1;
        v78 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v6 + 160, txt_config_mgr);
        *(_DWORD *)(v6 + 160) = 0;
        if ( common::tools::StringUtils::strToNum<float>(&effect_config->effect_param, (float *)(v6 + 160), 1) )
        {
          if ( *(char *)(((v6 + 2656) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2687) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 2687) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2656, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2656),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            187);
          v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2656),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v80 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  v79,
                  (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
          v81 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v80, &effect_config->effect_param);
          v82 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v81, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v83 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 672) >> 3) + 0x7FFF8000) )
            v83 = __asan_report_store8(v6 + 672, ", type:");
          *(_QWORD *)(v6 + 672) = v83;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v82, (const char *const *)(v6 + 672));
          *(_BYTE *)(((v6 + 672) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2656));
          v5 = -1;
          v78 = 0;
        }
        else if ( (unsigned __int8)std::string::empty() != 1
               && std::operator!=<char>(&this->noheal_avatar_sgv_key, &effect_config->effect_key) )
        {
          if ( *(char *)(((v6 + 2720) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2751) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 2751) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2720, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2720),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            192);
          v85 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2720),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v86 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                  v85,
                  (const char (*)[63])"[ROGUELIKE] two more noheal avatar sgv key, config error, key:");
          v87 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v86, &effect_config->effect_key);
          v88 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v87, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v89 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 704) >> 3) + 0x7FFF8000) )
            v89 = __asan_report_store8(v6 + 704, ", type:");
          *(_QWORD *)(v6 + 704) = v89;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v88, (const char *const *)(v6 + 704));
          *(_BYTE *)(((v6 + 704) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2720));
          v5 = -1;
          v78 = 0;
        }
        else
        {
          std::string::operator=(&this->noheal_avatar_sgv_key, &effect_config->effect_key);
          if ( *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 160) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v6 + 160);
          v90 = *(float *)(v6 + 160);
          if ( *(_BYTE *)(((unsigned __int64)&this->noheal_avatar_sgv_value >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&this->noheal_avatar_sgv_value >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_store4(&this->noheal_avatar_sgv_value, &effect_config->effect_key);
          }
          this->noheal_avatar_sgv_value = v90;
          v78 = 1;
        }
      }
      if ( v78 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT:
    case ROGUELIKE_EFFECT_ADD_CARD_TYPE_WEIGHT_ROOM_FIRST:
      std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 1568));
      std::allocator<char>::allocator(v6 + 64);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v6 + 3232),
        ",",
        (const std::allocator<char> *)(v6 + 64));
      v130 = common::tools::StringUtils::splitToList(
               &effect_config->effect_param,
               (const std::string *)(v6 + 3232),
               (std::vector<std::string> *)(v6 + 1568),
               0) != 0;
      std::string::~string((void *)(v6 + 3232));
      *(_DWORD *)(((v6 + 3232) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v6 + 64);
      *(_BYTE *)(((v6 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v130 )
      {
        *(_DWORD *)(((v6 + 3296) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 3296) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3327) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 3327) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3296, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3296),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          249);
        v131 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3296),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v132 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 v131,
                 (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v133 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v132, &effect_config->effect_param);
        v134 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v133, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 928) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v135 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 928) >> 3) + 0x7FFF8000) )
          v135 = __asan_report_store8(v6 + 928, ", type:");
        *(_QWORD *)(v6 + 928) = v135;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v134, (const char *const *)(v6 + 928));
        *(_BYTE *)(((v6 + 928) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3296));
        *(_DWORD *)(((v6 + 3296) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v136 = 0;
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 1568)) > 1 )
      {
        *(_BYTE *)(((v6 + 224) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v6 + 224) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 224) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v6 + 224, v6 + 3232);
        *(_DWORD *)(v6 + 224) = 0;
        v142 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1568), 0LL);
        v143 = (const char *)std::string::c_str(v142);
        if ( (unsigned int)data::enumStrToVal(v143, v6 + 224) )
        {
          *(_DWORD *)(((v6 + 3424) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 3424) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 3455) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 3455) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 3424, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 3424),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            260);
          v144 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v6 + 3424),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v145 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                   v144,
                   (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
          v146 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v145, &effect_config->effect_param);
          v147 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v146, (const char (*)[8])", type:");
          *(_BYTE *)(((v6 + 992) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v148 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 992) >> 3) + 0x7FFF8000) )
            v148 = __asan_report_store8(v6 + 992, ", type:");
          *(_QWORD *)(v6 + 992) = v148;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v147, (const char *const *)(v6 + 992));
          *(_BYTE *)(((v6 + 992) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3424));
          *(_DWORD *)(((v6 + 3424) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          v136 = 0;
        }
        else
        {
          v149 = *(unsigned __int8 *)(((v6 + 224) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v149 != 0 && (char)v149 <= 3 )
            __asan_report_load4(v6 + 224);
          if ( *(_DWORD *)(v6 + 224) )
          {
            *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 240) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v6 + 240, v6 + 224);
            *(_DWORD *)(v6 + 240) = 0;
            v155 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1568), 1uLL);
            if ( common::tools::StringUtils::strToNum<unsigned int>(v155, (unsigned int *)(v6 + 240), 1) )
            {
              *(_DWORD *)(((v6 + 3552) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v6 + 3552) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 3583) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 3583) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 3552, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 3552),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "rewriteRoguelikeEffectConfig",
                271);
              v156 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v6 + 3552),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v157 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                       v156,
                       (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
              v158 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1568), 1uLL);
              v159 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v157, v158);
              v160 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v159, (const char (*)[8])", type:");
              *(_BYTE *)(((v6 + 1056) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->effect_type);
              }
              v161 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
              if ( *(_BYTE *)(((v6 + 1056) >> 3) + 0x7FFF8000) )
                v161 = __asan_report_store8(v6 + 1056, ", type:");
              *(_QWORD *)(v6 + 1056) = v161;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                v160,
                (const char *const *)(v6 + 1056));
              *(_BYTE *)(((v6 + 1056) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3552));
              *(_DWORD *)(((v6 + 3552) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
              v136 = 0;
            }
            else
            {
              v162 = *(unsigned __int8 *)(((v6 + 240) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v162 != 0 && (char)v162 <= 3 )
                __asan_report_load4(v6 + 240);
              if ( *(_DWORD *)(v6 + 240) <= 0x64u )
              {
                v136 = 1;
              }
              else
              {
                *(_DWORD *)(((v6 + 3616) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v6 + 3616) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v6 + 3647) >> 3) + 0x7FFF8000) != 0
                  && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 3647) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v6 + 3616, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v6 + 3616),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "rewriteRoguelikeEffectConfig",
                  276);
                v163 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                         (common::milog::MiLogStream *const)(v6 + 3616),
                         (const char (*)[16])"[CONFIG_ERROR] ");
                v164 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                         v163,
                         (const char (*)[53])"[ROGUELIKE] effect param config error failed, value:");
                v165 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                         v164,
                         (const unsigned int *)(v6 + 240));
                v166 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v165, (const char (*)[8])", type:");
                *(_BYTE *)(((v6 + 1088) >> 3) + 0x7FFF8000) = 0;
                if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
                  && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
                {
                  __asan_report_load4(&effect_config->effect_type);
                }
                v167 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
                if ( *(_BYTE *)(((v6 + 1088) >> 3) + 0x7FFF8000) )
                  v167 = __asan_report_store8(v6 + 1088, ", type:");
                *(_QWORD *)(v6 + 1088) = v167;
                common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                  v166,
                  (const char *const *)(v6 + 1088));
                *(_BYTE *)(((v6 + 1088) >> 3) + 0x7FFF8000) = -8;
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3616));
                *(_DWORD *)(((v6 + 3616) >> 3) + 0x7FFF8000) = -117901064;
                v5 = -1;
                v136 = 0;
              }
            }
          }
          else
          {
            *(_DWORD *)(((v6 + 3488) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v6 + 3488) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 3519) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 3519) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 3488, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 3488),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRoguelikeEffectConfig",
              265);
            v150 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v6 + 3488),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v151 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                     v150,
                     (const char (*)[51])"[ROGUELIKE] effect param config type error, value:");
            v152 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
                     v151,
                     &effect_config->effect_param);
            v153 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v152, (const char (*)[8])", type:");
            *(_BYTE *)(((v6 + 1024) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->effect_type);
            }
            v154 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
            if ( *(_BYTE *)(((v6 + 1024) >> 3) + 0x7FFF8000) )
              v154 = __asan_report_store8(v6 + 1024, ", type:");
            *(_QWORD *)(v6 + 1024) = v154;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v153, (const char *const *)(v6 + 1024));
            *(_BYTE *)(((v6 + 1024) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3488));
            *(_DWORD *)(((v6 + 3488) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
            v136 = 0;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v6 + 3360) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 3360) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3391) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 3391) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3360, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3360),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          254);
        v137 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3360),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v138 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 v137,
                 (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v139 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v138, &effect_config->effect_param);
        v140 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v139, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 960) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v141 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 960) >> 3) + 0x7FFF8000) )
          v141 = __asan_report_store8(v6 + 960, ", type:");
        *(_QWORD *)(v6 + 960) = v141;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v140, (const char *const *)(v6 + 960));
        *(_BYTE *)(((v6 + 960) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3360));
        *(_DWORD *)(((v6 + 3360) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v136 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 1568));
      if ( v136 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_SUB_REFRESH_CARD_COST:
      if ( *(_BYTE *)(((v6 + 176) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 176) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 176, txt_config_mgr);
      *(_DWORD *)(v6 + 176) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 176),
             1) )
      {
        if ( *(char *)(((v6 + 2784) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 2815) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 2815) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2784, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2784),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          204);
        v91 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v6 + 2784),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v92 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                v91,
                (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v93 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v92, &effect_config->effect_param);
        v94 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v93, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v95 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 736) >> 3) + 0x7FFF8000) )
          v95 = __asan_report_store8(v6 + 736, ", type:");
        *(_QWORD *)(v6 + 736) = v95;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v94, (const char *const *)(v6 + 736));
        *(_BYTE *)(((v6 + 736) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2784));
        v5 = -1;
        v96 = 0;
      }
      else
      {
        v97 = *(unsigned __int8 *)(((v6 + 176) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v97 != 0 && (char)v97 <= 3 )
          __asan_report_load4(v6 + 176);
        if ( *(_DWORD *)(v6 + 176) <= 0x63u )
        {
          v96 = 1;
        }
        else
        {
          if ( *(char *)(((v6 + 2848) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 2879) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 2879) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 2848, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 2848),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            209);
          v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v6 + 2848),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v99 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                  v98,
                  (const char (*)[49])"[ROGUELIKE] effect param config too large value:");
          v100 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v99,
                   (const unsigned int *)(v6 + 176));
          v101 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v100, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v102 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 768) >> 3) + 0x7FFF8000) )
            v102 = __asan_report_store8(v6 + 768, ", type:");
          *(_QWORD *)(v6 + 768) = v102;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v101, (const char *const *)(v6 + 768));
          *(_BYTE *)(((v6 + 768) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2848));
          v5 = -1;
          v96 = 0;
        }
      }
      if ( v96 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_CHANGE_GADGET_NUM:
      std::vector<std::string>::vector((std::vector<std::string> *const)(v6 + 1504));
      std::allocator<char>::allocator(v6 + 48);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v6 + 2912),
        ",",
        (const std::allocator<char> *)(v6 + 48));
      v103 = common::tools::StringUtils::splitToList(
               &effect_config->effect_param,
               (const std::string *)(v6 + 2912),
               (std::vector<std::string> *)(v6 + 1504),
               0) != 0;
      std::string::~string((void *)(v6 + 2912));
      *(_DWORD *)(((v6 + 2912) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v6 + 48);
      *(_BYTE *)(((v6 + 48) >> 3) + 0x7FFF8000) = -8;
      if ( v103 )
      {
        *(_DWORD *)(((v6 + 2976) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 2976) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3007) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 3007) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 2976, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 2976),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          220);
        v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 2976),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v105 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 v104,
                 (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v106 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, &effect_config->effect_param);
        v107 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v106, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 800) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v108 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 800) >> 3) + 0x7FFF8000) )
          v108 = __asan_report_store8(v6 + 800, ", type:");
        *(_QWORD *)(v6 + 800) = v108;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v107, (const char *const *)(v6 + 800));
        *(_BYTE *)(((v6 + 800) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 2976));
        *(_DWORD *)(((v6 + 2976) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v109 = 0;
      }
      else if ( std::vector<std::string>::size((const std::vector<std::string> *const)(v6 + 1504)) > 1 )
      {
        *(_BYTE *)(((v6 + 192) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v6 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 192) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v6 + 192, v6 + 2912);
        *(_DWORD *)(v6 + 192) = 0;
        v115 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1504), 0LL);
        v116 = (const char *)std::string::c_str(v115);
        if ( (unsigned int)data::enumStrToVal(v116, v6 + 192) )
        {
          *(_DWORD *)(((v6 + 3104) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 3104) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 3135) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 3135) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 3104, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 3104),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            231);
          v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v6 + 3104),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v118 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                   v117,
                   (const char (*)[53])"[ROGUELIKE] effect param enumStrToVal failed, value:");
          v119 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v118, &effect_config->effect_param);
          v120 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v119, (const char (*)[8])", type:");
          *(_BYTE *)(((v6 + 864) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v121 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 864) >> 3) + 0x7FFF8000) )
            v121 = __asan_report_store8(v6 + 864, ", type:");
          *(_QWORD *)(v6 + 864) = v121;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v120, (const char *const *)(v6 + 864));
          *(_BYTE *)(((v6 + 864) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3104));
          *(_DWORD *)(((v6 + 3104) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          v109 = 0;
        }
        else
        {
          *(_BYTE *)(((v6 + 208) >> 3) + 0x7FFF8000) = 4;
          v122 = *(unsigned __int8 *)(((v6 + 208) >> 3) + 0x7FFF8000);
          if ( (_BYTE)v122 != 0 && (char)v122 <= 3 )
            __asan_report_store4(v6 + 208, v6 + 192);
          *(_DWORD *)(v6 + 208) = 0;
          v123 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1504), 1uLL);
          if ( common::tools::StringUtils::strToNum<int>(v123, (int *)(v6 + 208), 1) )
          {
            *(_DWORD *)(((v6 + 3168) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v6 + 3168) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 3199) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 3199) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 3168, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 3168),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRoguelikeEffectConfig",
              237);
            v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v6 + 3168),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v125 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                     v124,
                     (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
            v126 = std::vector<std::string>::operator[]((std::vector<std::string> *const)(v6 + 1504), 1uLL);
            v127 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v125, v126);
            v128 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v127, (const char (*)[8])", type:");
            *(_BYTE *)(((v6 + 896) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->effect_type);
            }
            v129 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
            if ( *(_BYTE *)(((v6 + 896) >> 3) + 0x7FFF8000) )
              v129 = __asan_report_store8(v6 + 896, ", type:");
            *(_QWORD *)(v6 + 896) = v129;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v128, (const char *const *)(v6 + 896));
            *(_BYTE *)(((v6 + 896) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3168));
            *(_DWORD *)(((v6 + 3168) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
            v109 = 0;
          }
          else
          {
            v109 = 1;
          }
        }
      }
      else
      {
        *(_DWORD *)(((v6 + 3040) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 3040) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3071) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 3071) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3040, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3040),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          225);
        v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3040),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v111 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 v110,
                 (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v112 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v111, &effect_config->effect_param);
        v113 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v112, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 832) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v114 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 832) >> 3) + 0x7FFF8000) )
          v114 = __asan_report_store8(v6 + 832, ", type:");
        *(_QWORD *)(v6 + 832) = v114;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v113, (const char *const *)(v6 + 832));
        *(_BYTE *)(((v6 + 832) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3040));
        *(_DWORD *)(((v6 + 3040) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v109 = 0;
      }
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v6 + 1504));
      if ( v109 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_SUB_CURSE_PROB:
      if ( *(_BYTE *)(((v6 + 256) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 256) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v6 + 256, txt_config_mgr);
      *(_DWORD *)(v6 + 256) = 0;
      if ( common::tools::StringUtils::strToNum<unsigned int>(
             &effect_config->effect_param,
             (unsigned int *)(v6 + 256),
             1) )
      {
        if ( *(char *)(((v6 + 3680) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3711) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 3711) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3680, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3680),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          287);
        v168 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3680),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v169 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                 v168,
                 (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
        v170 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v169, &effect_config->effect_param);
        v171 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v170, (const char (*)[8])", type:");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v172 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 1120) >> 3) + 0x7FFF8000) )
          v172 = __asan_report_store8(v6 + 1120, ", type:");
        *(_QWORD *)(v6 + 1120) = v172;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v171, (const char *const *)(v6 + 1120));
        *(_BYTE *)(((v6 + 1120) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3680));
        v5 = -1;
        v173 = 0;
      }
      else
      {
        v174 = *(unsigned __int8 *)(((v6 + 256) >> 3) + 0x7FFF8000);
        if ( (_BYTE)v174 != 0 && (char)v174 <= 3 )
          __asan_report_load4(v6 + 256);
        if ( *(_DWORD *)(v6 + 256) <= 0x64u )
        {
          v173 = 1;
        }
        else
        {
          if ( *(char *)(((v6 + 3744) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 3775) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 3775) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 3744, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 3744),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            292);
          v175 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v6 + 3744),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v176 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                   v175,
                   (const char (*)[53])"[ROGUELIKE] effect param config error failed, value:");
          v177 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                   v176,
                   (const unsigned int *)(v6 + 256));
          v178 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v177, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v179 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 1152) >> 3) + 0x7FFF8000) )
            v179 = __asan_report_store8(v6 + 1152, ", type:");
          *(_QWORD *)(v6 + 1152) = v179;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v178, (const char *const *)(v6 + 1152));
          *(_BYTE *)(((v6 + 1152) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3744));
          v5 = -1;
          v173 = 0;
        }
      }
      if ( v173 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_PROB_FREE_REFRESH_CARD:
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v6 + 1632));
      std::allocator<char>::allocator(v6 + 80);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v6 + 3808),
        ",",
        (const std::allocator<char> *)(v6 + 80));
      v180 = common::tools::StringUtils::splitToList<unsigned int>(
               &effect_config->effect_param,
               (const std::string *)(v6 + 3808),
               (std::vector<unsigned int> *)(v6 + 1632),
               0) != 0;
      std::string::~string((void *)(v6 + 3808));
      *(_DWORD *)(((v6 + 3808) >> 3) + 0x7FFF8000) = -117901064;
      std::allocator<char>::~allocator(v6 + 80);
      *(_BYTE *)(((v6 + 80) >> 3) + 0x7FFF8000) = -8;
      if ( v180 )
      {
        *(_DWORD *)(((v6 + 3872) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 3872) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3903) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 3903) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3872, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3872),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          303);
        v181 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3872),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v182 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                 v181,
                 (const char (*)[52])"[ROGUELIKE] effect param splitToList failed, value:");
        v183 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v182, &effect_config->effect_param);
        v184 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v183, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v185 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 1184) >> 3) + 0x7FFF8000) )
          v185 = __asan_report_store8(v6 + 1184, ", type:");
        *(_QWORD *)(v6 + 1184) = v185;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v184, (const char *const *)(v6 + 1184));
        *(_BYTE *)(((v6 + 1184) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3872));
        *(_DWORD *)(((v6 + 3872) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v186 = 0;
      }
      else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v6 + 1632)) > 1 )
      {
        v192 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1632), 0LL);
        v193 = v192;
        if ( *(_BYTE *)(((unsigned __int64)v192 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v192 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v192 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v192);
        }
        if ( *v193 <= 0x64u )
        {
          v200 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1632), 1uLL);
          v201 = v200;
          if ( *(_BYTE *)(((unsigned __int64)v200 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v200 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v200 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v200);
          }
          if ( *v201 )
          {
            if ( *(_BYTE *)(((unsigned __int64)&this->max_refresh_free_count >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&this->max_refresh_free_count >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&this->max_refresh_free_count);
            }
            if ( this->max_refresh_free_count )
            {
              *(_DWORD *)(((v6 + 4128) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v6 + 4128) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v6 + 4159) >> 3) + 0x7FFF8000) != 0
                && (char)((v6 + 63) & 7) >= *(_BYTE *)(((v6 + 4159) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v6 + 4128, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v6 + 4128),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "rewriteRoguelikeEffectConfig",
                323);
              v208 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                       (common::milog::MiLogStream *const)(v6 + 4128),
                       (const char (*)[16])"[CONFIG_ERROR] ");
              v209 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                       v208,
                       (const char (*)[48])"[ROGUELIKE] effect can only config once , type:");
              *(_BYTE *)(((v6 + 1312) >> 3) + 0x7FFF8000) = 0;
              if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
                && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
              {
                __asan_report_load4(&effect_config->effect_type);
              }
              v210 = (__int64)data::enumValToStr(
                                effect_config->effect_type,
                                (__int64)"[ROGUELIKE] effect can only config once , type:");
              if ( *(_BYTE *)(((v6 + 1312) >> 3) + 0x7FFF8000) )
                v210 = __asan_report_store8(v6 + 1312, "[ROGUELIKE] effect can only config once , type:");
              *(_QWORD *)(v6 + 1312) = v210;
              common::milog::MiLogStream::operator<<<char const*,(char const**)0>(
                v209,
                (const char *const *)(v6 + 1312));
              *(_BYTE *)(((v6 + 1312) >> 3) + 0x7FFF8000) = -8;
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4128));
              *(_DWORD *)(((v6 + 4128) >> 3) + 0x7FFF8000) = -117901064;
              v5 = -1;
              v186 = 0;
            }
            else
            {
              v211 = 1LL;
              v212 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1632), 1uLL);
              v213 = v212;
              if ( *(_BYTE *)(((unsigned __int64)v212 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v212 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v212 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v212);
              }
              v214 = *v213;
              v215 = *(_BYTE *)(((unsigned __int64)&this->max_refresh_free_count >> 3) + 0x7FFF8000);
              if ( v215 != 0 && v215 <= 3 )
              {
                LOBYTE(v211) = v215 != 0;
                __asan_report_store4(&this->max_refresh_free_count, v211);
              }
              this->max_refresh_free_count = v214;
              v186 = 1;
            }
          }
          else
          {
            *(_DWORD *)(((v6 + 4064) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v6 + 4064) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v6 + 4095) >> 3) + 0x7FFF8000) != 0
              && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 4095) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v6 + 4064, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v6 + 4064),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRoguelikeEffectConfig",
              318);
            v202 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v6 + 4064),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v203 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
                     v202,
                     (const char (*)[60])"[ROGUELIKE] effect param max_count config too small, value:");
            v204 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1632), 1uLL);
            v205 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v203, v204);
            v206 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v205, (const char (*)[8])", type:");
            *(_BYTE *)(((v6 + 1280) >> 3) + 0x7FFF8000) = 0;
            if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&effect_config->effect_type);
            }
            v207 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
            if ( *(_BYTE *)(((v6 + 1280) >> 3) + 0x7FFF8000) )
              v207 = __asan_report_store8(v6 + 1280, ", type:");
            *(_QWORD *)(v6 + 1280) = v207;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v206, (const char *const *)(v6 + 1280));
            *(_BYTE *)(((v6 + 1280) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4064));
            *(_DWORD *)(((v6 + 4064) >> 3) + 0x7FFF8000) = -117901064;
            v5 = -1;
            v186 = 0;
          }
        }
        else
        {
          *(_DWORD *)(((v6 + 4000) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v6 + 4000) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 4031) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 4031) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 4000, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 4000),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            313);
          v194 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v6 + 4000),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v195 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                   v194,
                   (const char (*)[55])"[ROGUELIKE] effect param prob config too large, value:");
          v196 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v6 + 1632), 0LL);
          v197 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v195, v196);
          v198 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v197, (const char (*)[8])", type:");
          *(_BYTE *)(((v6 + 1248) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v199 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 1248) >> 3) + 0x7FFF8000) )
            v199 = __asan_report_store8(v6 + 1248, ", type:");
          *(_QWORD *)(v6 + 1248) = v199;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v198, (const char *const *)(v6 + 1248));
          *(_BYTE *)(((v6 + 1248) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4000));
          *(_DWORD *)(((v6 + 4000) >> 3) + 0x7FFF8000) = -117901064;
          v5 = -1;
          v186 = 0;
        }
      }
      else
      {
        *(_DWORD *)(((v6 + 3936) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v6 + 3936) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 3967) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 3967) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 3936, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 3936),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          308);
        v187 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 3936),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v188 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                 v187,
                 (const char (*)[48])"[ROGUELIKE] effect param size too small, value:");
        v189 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v188, &effect_config->effect_param);
        v190 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v189, (const char (*)[8])", type:");
        *(_BYTE *)(((v6 + 1216) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v191 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
        if ( *(_BYTE *)(((v6 + 1216) >> 3) + 0x7FFF8000) )
          v191 = __asan_report_store8(v6 + 1216, ", type:");
        *(_QWORD *)(v6 + 1216) = v191;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v190, (const char *const *)(v6 + 1216));
        *(_BYTE *)(((v6 + 1216) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 3936));
        *(_DWORD *)(((v6 + 3936) >> 3) + 0x7FFF8000) = -117901064;
        v5 = -1;
        v186 = 0;
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v6 + 1632));
      if ( v186 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_AT_MOST_TRAP_COUNT:
    case ROGUELIKE_EFFECT_AT_LEAST_STORE_COUNT:
      if ( !is_shikigami )
      {
        if ( *(char *)(((v6 + 4192) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v6 + 4223) >> 3) + 0x7FFF8000) != 0
          && (char)((v6 + 127) & 7) >= *(_BYTE *)(((v6 + 4223) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v6 + 4192, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v6 + 4192),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRoguelikeEffectConfig",
          335);
        v216 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v6 + 4192),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v217 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
                 v216,
                 (const char (*)[51])"[ROGUELIKE] only shikigami can support effect_type");
        if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&effect_config->effect_type);
        }
        v218 = (__int64)data::enumValToStr(
                          effect_config->effect_type,
                          (__int64)"[ROGUELIKE] only shikigami can support effect_type");
        if ( *(_BYTE *)(((v6 + 1344) >> 3) + 0x7FFF8000) )
          v218 = __asan_report_store8(v6 + 1344, "[ROGUELIKE] only shikigami can support effect_type");
        *(_QWORD *)(v6 + 1344) = v218;
        common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v217, (const char *const *)(v6 + 1344));
        *(_BYTE *)(((v6 + 1344) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4192));
        v5 = -1;
        v219 = 0;
      }
      else
      {
        if ( *(_BYTE *)(((v6 + 272) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v6 + 272) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v6 + 272, txt_config_mgr);
        *(_DWORD *)(v6 + 272) = 0;
        if ( common::tools::StringUtils::strToNum<unsigned int>(
               &effect_config->effect_param,
               (unsigned int *)(v6 + 272),
               1) )
        {
          if ( *(char *)(((v6 + 4256) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v6 + 4287) >> 3) + 0x7FFF8000) != 0
            && (char)((v6 - 65) & 7) >= *(_BYTE *)(((v6 + 4287) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v6 + 4256, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v6 + 4256),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRoguelikeEffectConfig",
            341);
          v220 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v6 + 4256),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v221 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                   v220,
                   (const char (*)[49])"[ROGUELIKE] effect param strToNum failed, value:");
          v222 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v221, &effect_config->effect_param);
          v223 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v222, (const char (*)[8])", type:");
          if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&effect_config->effect_type);
          }
          v224 = (__int64)data::enumValToStr(effect_config->effect_type, (__int64)", type:");
          if ( *(_BYTE *)(((v6 + 1376) >> 3) + 0x7FFF8000) )
            v224 = __asan_report_store8(v6 + 1376, ", type:");
          *(_QWORD *)(v6 + 1376) = v224;
          common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v223, (const char *const *)(v6 + 1376));
          *(_BYTE *)(((v6 + 1376) >> 3) + 0x7FFF8000) = -8;
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4256));
          v5 = -1;
          v219 = 0;
        }
        else
        {
          v219 = 1;
        }
      }
      if ( v219 )
        goto LABEL_400;
      break;
    case ROGUELIKE_EFFECT_SPRING_AND_BOSS:
      if ( is_shikigami )
        goto LABEL_400;
      if ( *(char *)(((v6 + 4320) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v6 + 4351) >> 3) + 0x7FFF8000) != 0
        && (char)((v6 - 32 + 31) & 7) >= *(_BYTE *)(((v6 + 4351) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v6 + 4320, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v6 + 4320),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRoguelikeEffectConfig",
        352);
      v225 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v6 + 4320),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v226 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(
               v225,
               (const char (*)[51])"[ROGUELIKE] only shikigami can support effect_type");
      if ( *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&effect_config->effect_type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&effect_config->effect_type);
      }
      v227 = (__int64)data::enumValToStr(
                        effect_config->effect_type,
                        (__int64)"[ROGUELIKE] only shikigami can support effect_type");
      if ( *(_BYTE *)(((v6 + 1408) >> 3) + 0x7FFF8000) )
        v227 = __asan_report_store8(v6 + 1408, "[ROGUELIKE] only shikigami can support effect_type");
      *(_QWORD *)(v6 + 1408) = v227;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v226, (const char *const *)(v6 + 1408));
      *(_BYTE *)(((v6 + 1408) >> 3) + 0x7FFF8000) = -8;
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v6 + 4320));
      v5 = -1;
      break;
    default:
LABEL_400:
      v5 = 0;
      break;
  }
  if ( v232 == (char *)v6 )
  {
    *(_QWORD *)((v6 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v8 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v8 + 2147450880 - (((_DWORD)v8 + 2147450888) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v6 >> 3) + 0x7FFF80D8) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80E0) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80E8) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80F0) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF80F8) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8100) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8108) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8110) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8118) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8120) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8128) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8130) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8138) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8140) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8148) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8150) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8158) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8160) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8168) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81C4) = 0LL;
    memset(
      (void *)((unsigned __int64)(v8 + 536862812) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v8 + 2147451240 - (((_DWORD)v8 + 2147451248) & 0xFFFFFFF8) + 100) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v6 >> 3) + 0x7FFF81D0) = 0;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81D8) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81E0) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81E8) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81F0) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF81F8) = 0LL;
    *(_QWORD *)((v6 >> 3) + 0x7FFF8200) = 0LL;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8208) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8210) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8218) = 0;
    *(_DWORD *)((v6 >> 3) + 0x7FFF8220) = 0;
  }
  else
  {
    *(_QWORD *)v6 = 1172321806LL;
    __asan_stack_free_7(v6, 4384LL, v232);
  }
  return v5;
};

// Line 370: range 0000000012826CB8-00000000128278D9
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueStageExcelConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  uint32_t *p_first_pass_reward_id; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  _BOOL4 v11; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  unsigned __int64 v15; // rax
  const unsigned int *M_current; // r15
  std::vector<unsigned int>::const_iterator v17; // rax
  std::set<unsigned int>::size_type v18; // r15
  const std::vector<unsigned int> *v19; // r8
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // r15d
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>,bool> v23; // rax
  const unsigned int *v24; // r8
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  unsigned __int64 v30; // rdx
  int v31; // eax
  int32_t result; // eax
  data::RogueStageExcelConfigMap *__for_range; // [rsp+20h] [rbp-250h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false>::reference v34; // [rsp+28h] [rbp-248h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueStageExcelConfig> >::type *config; // [rsp+38h] [rbp-238h]
  char v36[560]; // [rsp+40h] [rbp-230h] BYREF

  v3 = (unsigned __int64)v36;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(512LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "8 48 8 15 __for_begin:371 80 8 13 __for_end:371 112 32 9 <unknown> 176 32 9 <unknown> 240 32 9 <"
                        "unknown> 304 32 9 <unknown> 368 32 9 <unknown> 432 48 12 rune_set:389";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueStageExcelConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862724] = -219021312;
  v5[536862725] = 62194;
  v5[536862726] = -219021312;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862735] = -202116109;
  __for_range = &this->rogue_stage_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueStageExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::RogueStageExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueStageExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::RogueStageExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueStageExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueStageExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueStageExcelConfig>,false> *)(v3 + 80)) )
  {
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false> *const)(v3 + 48));
    std::get<0ul,unsigned int const,data::RogueStageExcelConfig>(v34);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueStageExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueStageExcelConfig>(v34);
    p_first_pass_reward_id = &config->first_pass_reward_id;
    if ( *(_BYTE *)(((unsigned __int64)p_first_pass_reward_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_first_pass_reward_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_first_pass_reward_id >> 3)
                                                                               + 0x7FFF8000) )
    {
      __asan_report_load4(p_first_pass_reward_id);
    }
    if ( config->first_pass_reward_id
      && (v8 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                 &this->stage_first_pass_reward_map,
                 &config->stage_id,
                 &config->first_pass_reward_id,
                 &config->stage_id,
                 v6),
          !v8.second) )
    {
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 112) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 143) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 112, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 112),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueStageExcelConfig",
        377);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 112),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
              v9,
              (const char (*)[33])"[ROGUELIKE] duplicated stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, &config->stage_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 112));
      *(_DWORD *)(((v3 + 112) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v11 = 0;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->pre_quest_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->pre_quest_id);
      }
      if ( config->pre_quest_id
        && (v12 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                    &this->stage_pre_quest_map,
                    &config->stage_id,
                    &config->pre_quest_id,
                    &config->stage_id,
                    v6),
            !v12.second) )
      {
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 176) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 80 + 31) & 7) >= *(_BYTE *)(((v3 + 207) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 176, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 176),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueStageExcelConfig",
          385);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 176),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                v13,
                (const char (*)[33])"[ROGUELIKE] duplicated stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->stage_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 176));
        *(_DWORD *)(((v3 + 176) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v11 = 0;
      }
      else
      {
        v15 = ((v3 + 432) >> 3) + 2147450880;
        *(_DWORD *)v15 = 0;
        *(_WORD *)(v15 + 4) = 0;
        M_current = std::vector<unsigned int>::end(&config->unlock_rune_list)._M_current;
        v17._M_current = std::vector<unsigned int>::begin(&config->unlock_rune_list)._M_current;
        std::set<unsigned int>::set<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>>(
          (std::set<unsigned int> *const)(v3 + 432),
          v17,
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current);
        v18 = std::set<unsigned int>::size((const std::set<unsigned int> *const)(v3 + 432));
        if ( v18 == std::vector<unsigned int>::size(&config->unlock_rune_list) )
        {
          v23 = std::unordered_map<unsigned int,std::vector<unsigned int>>::emplace<unsigned int const&,std::vector<unsigned int> const&>(
                  &this->stage_unlock_rune_map,
                  &config->stage_id,
                  &config->unlock_rune_list,
                  &config->stage_id,
                  v19);
          if ( !v23.second )
          {
            *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 304, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 304),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRogueStageExcelConfig",
              397);
            v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 304),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v26 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                    v25,
                    (const char (*)[33])"[ROGUELIKE] duplicated stage_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->stage_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
            *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v22 = 0;
          }
          else
          {
            v27 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                    &this->stage_ssr_max_rand_count_map,
                    &config->stage_id,
                    &config->ssr_max_rand_count,
                    &config->stage_id,
                    v24);
            if ( !v27.second )
            {
              *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 368, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 368),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "rewriteRogueStageExcelConfig",
                402);
              v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 368),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v29 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
                      v28,
                      (const char (*)[33])"[ROGUELIKE] duplicated stage_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->stage_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
              *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v22 = 0;
            }
            else
            {
              v22 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 16 + 31) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 240, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 240),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueStageExcelConfig",
            392);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 240),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                  v20,
                  (const char (*)[50])"[ROGUELIKE] duplicated unlock runeList, stage_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->stage_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
          *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v22 = 0;
        }
        std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 432));
        v11 = v22 == 1;
      }
    }
    v30 = ((v3 + 432) >> 3) + 2147450880;
    *(_DWORD *)v30 = -117901064;
    *(_WORD *)(v30 + 4) = -1800;
    if ( !v11 )
    {
      v31 = 0;
      goto LABEL_42;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueStageExcelConfig>,false,false> *const)(v3 + 48));
  }
  v31 = 1;
LABEL_42:
  if ( v31 == 1 )
    v2 = 0;
  result = v2;
  if ( v36 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8030) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8038) = 0LL;
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
  }
  return result;
};

// Line 410: range 00000000128278DA-0000000012828105
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteGadgetWidgetConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  uint32_t *p_dungeon_id; // rsi
  uint32_t weight; // r14d
  uint32_t *p_gadget_id; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v14; // rax
  uint32_t *v15; // rdx
  char v16; // cl
  uint32_t *v17; // rsi
  uint32_t v18; // r14d
  uint32_t *v19; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v20; // rax
  uint32_t *v21; // rdx
  char v22; // cl
  int32_t result; // eax
  data::RogueGadgetWeightExcelConfigMap *__for_range; // [rsp+20h] [rbp-1A0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false,false>::reference v25; // [rsp+28h] [rbp-198h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig> >::type *config_id; // [rsp+30h] [rbp-190h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig> >::type *config; // [rsp+38h] [rbp-188h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *trap_weight_map; // [rsp+40h] [rbp-180h]
  const std::vector<data::RogueGadgetWidgetConfig> *__for_range_0; // [rsp+48h] [rbp-178h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::mapped_type *ball_weight_map; // [rsp+50h] [rbp-170h]
  const std::vector<data::RogueGadgetWidgetConfig> *__for_range_1; // [rsp+58h] [rbp-168h]
  const data::RogueGadgetWidgetConfig *ball_weight_config; // [rsp+60h] [rbp-160h]
  const data::RogueGadgetWidgetConfig *trap_weight_config; // [rsp+68h] [rbp-158h]
  char v34[336]; // [rsp+70h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "7 32 8 15 __for_begin:411 64 8 13 __for_end:411 96 8 15 __for_begin:419 128 8 13 __for_end:419 1"
                        "60 8 15 __for_begin:427 192 8 13 __for_end:427 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteGadgetWidgetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862728] = -202116109;
  __for_range = &this->rogue_gadget_weight_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetWeightExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueGadgetWeightExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetWeightExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueGadgetWeightExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_46;
    }
    v25 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false,false> *const)(v3 + 32));
    config_id = std::get<0ul,unsigned int const,data::RogueGadgetWeightExcelConfig>(v25);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueGadgetWeightExcelConfig>(v25);
    v7 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
           &this->dungeon_id_2_gadget_weight_config_map,
           &config->dungeon_id,
           config_id,
           (const unsigned int *)&this->dungeon_id_2_gadget_weight_config_map,
           v6);
    if ( !v7.second )
      break;
    p_dungeon_id = &config->dungeon_id;
    trap_weight_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->dungeon_trap_gadget_weight_map,
                        &config->dungeon_id);
    __for_range_0 = &config->trap_widget_config_list;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, p_dungeon_id);
    *(std::vector<data::RogueGadgetWidgetConfig>::const_iterator *)(v3 + 96) = std::vector<data::RogueGadgetWidgetConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_dungeon_id);
    *(std::vector<data::RogueGadgetWidgetConfig>::const_iterator *)(v3 + 128) = std::vector<data::RogueGadgetWidgetConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *)(v3 + 96),
              (const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *)(v3 + 128)) )
    {
      trap_weight_config = __gnu_cxx::__normal_iterator<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&trap_weight_config->gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&trap_weight_config->gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&trap_weight_config->gadget_id);
      }
      if ( trap_weight_config->gadget_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&trap_weight_config->weight >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)trap_weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&trap_weight_config->weight >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&trap_weight_config->weight);
        }
        weight = trap_weight_config->weight;
        p_gadget_id = &trap_weight_config->gadget_id;
        v14 = std::map<unsigned int,unsigned int>::operator[](trap_weight_map, &trap_weight_config->gadget_id);
        v15 = v14;
        v16 = *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000);
        if ( v16 != 0 && (char)(((unsigned __int8)v14 & 7) + 3) >= v16 )
        {
          LOBYTE(p_gadget_id) = v16 != 0;
          __asan_report_store4(v14, p_gadget_id);
        }
        *v15 = weight;
      }
      __gnu_cxx::__normal_iterator<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *const)(v3 + 96));
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    v17 = &config->dungeon_id;
    ball_weight_map = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
                        &this->dungeon_ball_gadget_weight_map,
                        &config->dungeon_id);
    __for_range_1 = &config->ball_widget_config_list;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v17);
    *(std::vector<data::RogueGadgetWidgetConfig>::const_iterator *)(v3 + 160) = std::vector<data::RogueGadgetWidgetConfig>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v17);
    *(std::vector<data::RogueGadgetWidgetConfig>::const_iterator *)(v3 + 192) = std::vector<data::RogueGadgetWidgetConfig>::end(__for_range_1);
    while ( __gnu_cxx::operator!=<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *)(v3 + 160),
              (const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *)(v3 + 192)) )
    {
      ball_weight_config = __gnu_cxx::__normal_iterator<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *const)(v3 + 160));
      if ( *(_BYTE *)(((unsigned __int64)&ball_weight_config->gadget_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&ball_weight_config->gadget_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&ball_weight_config->gadget_id);
      }
      if ( ball_weight_config->gadget_id )
      {
        if ( *(_BYTE *)(((unsigned __int64)&ball_weight_config->weight >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)ball_weight_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&ball_weight_config->weight >> 3)
                                                                            + 0x7FFF8000) )
        {
          __asan_report_load4(&ball_weight_config->weight);
        }
        v18 = ball_weight_config->weight;
        v19 = &ball_weight_config->gadget_id;
        v20 = std::map<unsigned int,unsigned int>::operator[](ball_weight_map, &ball_weight_config->gadget_id);
        v21 = v20;
        v22 = *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000);
        if ( v22 != 0 && (char)(((unsigned __int8)v20 & 7) + 3) >= v22 )
        {
          LOBYTE(v19) = v22 != 0;
          __asan_report_store4(v20, v19);
        }
        *v21 = v18;
      }
      __gnu_cxx::__normal_iterator<data::RogueGadgetWidgetConfig const*,std::vector<data::RogueGadgetWidgetConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueGadgetWidgetConfig*,std::vector<data::RogueGadgetWidgetConfig> > *const)(v3 + 160));
    }
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetWeightExcelConfig>,false,false> *const)(v3 + 32));
  }
  *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 224, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 224),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "rewriteGadgetWidgetConfig",
    415);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 224),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
         v8,
         (const char (*)[43])"[ROGUE] duplicated dungeon id, dungeon_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->dungeon_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
  v2 = -1;
  v10 = 0;
LABEL_46:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v34 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 439: range 0000000012828106-0000000012829067
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueStageExcelConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  char *v11; // rsi
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v12; // rax
  QuestExcelConfigMgr *p_quest_config_mgr; // rcx
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  char *v18; // rsi
  char *v19; // rsi
  unsigned int *v20; // rax
  int *v21; // rdx
  int v22; // ecx
  char v23; // al
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+10h] [rbp-330h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+18h] [rbp-328h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_0; // [rsp+20h] [rbp-320h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_1; // [rsp+28h] [rbp-318h]
  std::unordered_map<unsigned int,unsigned int> *__for_range_3; // [rsp+30h] [rbp-310h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v38; // [rsp+38h] [rbp-308h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id_2; // [rsp+40h] [rbp-300h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *count; // [rsp+48h] [rbp-2F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v41; // [rsp+50h] [rbp-2F0h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *id_1; // [rsp+58h] [rbp-2E8h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__for_range_2; // [rsp+68h] [rbp-2D8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v44; // [rsp+70h] [rbp-2D0h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id_0; // [rsp+78h] [rbp-2C8h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *quest_id; // [rsp+80h] [rbp-2C0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v47; // [rsp+88h] [rbp-2B8h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *id; // [rsp+90h] [rbp-2B0h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *reward_id; // [rsp+98h] [rbp-2A8h]
  char v50[672]; // [rsp+A0h] [rbp-2A0h] BYREF

  v2 = (unsigned __int64)v50;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(640LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "15 48 4 11 rune_id:462 64 8 15 __for_begin:442 96 8 13 __for_end:442 128 8 15 __for_begin:451 16"
                        "0 8 13 __for_end:451 192 8 15 __for_begin:460 224 8 13 __for_end:460 256 8 15 __for_begin:462 28"
                        "8 8 13 __for_end:462 320 8 15 __for_begin:472 352 8 13 __for_end:472 384 32 9 <unknown> 448 32 9"
                        " <unknown> 512 32 9 <unknown> 576 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueStageExcelConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -218959118;
  v4[536862739] = -202116109;
  ret = 0;
  __for_range = &this->stage_first_pass_reward_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96)) )
      break;
    v47 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    id = std::get<0ul,unsigned int const,unsigned int>(v47);
    v6 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v47);
    reward_id = v6;
    if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v6);
    }
    if ( (unsigned __int8)TxtConfigMgr::isValidRewardIdAndMatchItemLimitType(
                            txt_config_mgr,
                            *reward_id,
                            ITEM_LIMIT_ACTIVITY_ROGUELIKE_DUNGEON) != 1 )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueStageExcelConfig",
        446);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 384),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
             v7,
             (const char (*)[66])"[ROGUELIKE] isValidRewardIdAndMatchItemLimitType fail, reward_id:");
      v9 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, reward_id);
      v10 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v9, (const char (*)[12])", stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
      *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->stage_pre_quest_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_0);
  while ( 1 )
  {
    v11 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 160)) )
      break;
    v44 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 128));
    id_0 = std::get<0ul,unsigned int const,unsigned int>(v44);
    v12 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v44);
    quest_id = v12;
    p_quest_config_mgr = &txt_config_mgr->quest_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v12 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v12 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v12);
    }
    if ( !data::QuestExcelConfigMgrBase::findQuestExcelConfig(p_quest_config_mgr, *quest_id) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueStageExcelConfig",
        455);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 448),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
              v14,
              (const char (*)[49])"[ROGUELIKE] findQuestExcelConfig fail, quest_id:");
      v16 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, quest_id);
      v17 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v16, (const char (*)[12])", stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
      *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 128));
  }
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->stage_unlock_rune_map;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v11);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v11);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_1);
  while ( 1 )
  {
    v18 = (char *)(v2 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 224)) )
      break;
    v41 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 192));
    id_1 = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v41);
    __for_range_2 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v41);
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 256, v18);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::begin(__for_range_2);
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 288, v18);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::end(__for_range_2);
    while ( 1 )
    {
      v19 = (char *)(v2 + 288);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288)) )
        break;
      *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
      v20 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
      v21 = (int *)v20;
      if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v20);
      }
      v22 = *v21;
      v23 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
      if ( v23 != 0 && v23 <= 3 )
      {
        LOBYTE(v19) = v23 != 0;
        __asan_report_store4(v2 + 48, v19);
      }
      *(_DWORD *)(v2 + 48) = v22;
      if ( !data::ActivityRogueExcelConfigMgrBase::findRoguelikeRuneExcelConfig(this, *(unsigned int *)(v2 + 48)) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueStageExcelConfig",
          466);
        v24 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 512),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v25 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                v24,
                (const char (*)[56])"[ROGUELIKE] findRoguelikeRuneExcelConfig fail, rune_id:");
        v26 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v25,
                (const unsigned int *)(v2 + 48));
        v27 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v26, (const char (*)[12])", stage_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
        *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 192));
  }
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  __for_range_3 = &this->stage_ssr_max_rand_count_map;
  *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 320, v18);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 320) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range_3);
  *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 352, v18);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v2 + 352) = std::unordered_map<unsigned int,unsigned int>::end(__for_range_3);
  while ( std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 320),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 352)) )
  {
    v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 320));
    id_2 = std::get<0ul,unsigned int const,unsigned int>(v38);
    v28 = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v38);
    count = v28;
    if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v28);
    }
    if ( !*count )
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
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueStageExcelConfig",
        476);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 576),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
              v29,
              (const char (*)[50])"[ROGUELIKE] ssr max rand count 0 error, stage_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id_2);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 576));
      *(_DWORD *)(((v2 + 576) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 320));
  }
  result = ret;
  if ( v50 == (char *)v2 )
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
  }
  return result;
};

// Line 486: range 0000000012829068-00000000128296BD
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueShikigamiConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v6; // r14
  const unsigned int *p_cost_item_count; // rcx
  const unsigned int *p_cost_item_id; // rdx
  __int64 v9; // rsi
  uint32_t *p_level; // rsi
  std::pair<unsigned int,unsigned int> *v11; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >,bool> v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int v17; // eax
  std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> *v18; // rax
  std::vector<data::RoguelikeShikigamiUnlockConfig> *v19; // rdx
  int32_t result; // eax
  data::RoguelikeShikigamiExcelConfigMap *__for_range; // [rsp+20h] [rbp-160h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false,false>::reference v22; // [rsp+28h] [rbp-158h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig> >::type *config; // [rsp+38h] [rbp-148h]
  const std::vector<data::RoguelikeShikigamiUnlockConfig> *__for_range_0; // [rsp+40h] [rbp-140h]
  const data::RoguelikeShikigamiUnlockConfig *unlock_config; // [rsp+48h] [rbp-138h]
  char v26[304]; // [rsp+50h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v26;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 15 __for_begin:487 64 8 13 __for_end:487 96 8 9 <unknown> 128 8 15 __for_begin:498 160 8 "
                        "13 __for_end:498 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueShikigamiConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->roguelike_shikigami_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RoguelikeShikigamiExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RoguelikeShikigamiExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false> *)(v3 + 64)) )
    {
      v17 = 1;
      goto LABEL_32;
    }
    v22 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::RoguelikeShikigamiExcelConfig>(v22);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeShikigamiExcelConfig>(v22);
    if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->level);
    }
    if ( config->level )
      break;
LABEL_30:
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiExcelConfig>,false,false> *const)(v3 + 32));
  }
  v6 = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::operator[](
         &this->shikigami_level_cost_map,
         &config->group_id);
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
  p_cost_item_count = &config->cost_item_count;
  p_cost_item_id = &config->cost_item_id;
  v9 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
  if ( (_BYTE)v9 )
    __asan_report_store8(v3 + 96, v9);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                         p_cost_item_id,
                                                         p_cost_item_count);
  p_level = &config->level;
  v12 = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
          v6,
          &config->level,
          (std::pair<unsigned int,unsigned int> *)(v3 + 96),
          &config->level,
          v11);
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v12.second )
  {
    __for_range_0 = &config->unlock_cond;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_level);
    *(std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator *)(v3 + 128) = std::vector<data::RoguelikeShikigamiUnlockConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_level);
    *(std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator *)(v3 + 160) = std::vector<data::RoguelikeShikigamiUnlockConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>(
              (const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *)(v3 + 160)) )
    {
      unlock_config = __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&unlock_config->type >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&unlock_config->type >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&unlock_config->type);
      }
      if ( unlock_config->type == SHIKIGAMI_UNLOCK_NONE )
        break;
      v18 = std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::operator[](
              &this->shikigami_level_unlock_map,
              &config->group_id);
      v19 = std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator[](v18, &config->level);
      std::vector<data::RoguelikeShikigamiUnlockConfig>::push_back(v19, unlock_config);
      __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    goto LABEL_30;
  }
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
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "rewriteRogueShikigamiConfig",
    495);
  v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 192),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v14 = common::milog::MiLogStream::operator<<<char [74],(char *[74])0>(
          v13,
          (const char (*)[74])"[ROGUELIKE] duplicated shikigami_group_id level fail, shikigami_group_id:");
  v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &config->group_id);
  v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])", level:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, &config->level);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v17 = 0;
LABEL_32:
  if ( v17 == 1 )
    v2 = 0;
  result = v2;
  if ( v26 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 514: range 00000000128296BE-000000001282B128
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueShikigamiConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::type *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // eax
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  int v19; // edx
  char *v20; // rsi
  char *v21; // rsi
  char *v22; // rsi
  int type; // eax
  unsigned __int64 v24; // rax
  bool v25; // r15
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rdx
  int v30; // r15d
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  const unsigned int *v35; // rax
  const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *v36; // rax
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v37; // rax
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  unsigned __int64 v43; // rax
  int v44; // eax
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  int v49; // edx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rdx
  int v54; // eax
  ActivityRogueExcelConfigMgr *v55; // rdx
  int v56; // eax
  common::milog::MiLogStream *v57; // rax
  common::milog::MiLogStream *v58; // rdx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rdx
  int v61; // edx
  int v62; // eax
  unsigned int *value; // [rsp+0h] [rbp-550h]
  uint32_t mark_level; // [rsp+2Ch] [rbp-524h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *__for_range; // [rsp+30h] [rbp-520h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false>::reference v68; // [rsp+38h] [rbp-518h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::type *id; // [rsp+40h] [rbp-510h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::type *__for_range_0; // [rsp+50h] [rbp-500h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::reference v71; // [rsp+58h] [rbp-4F8h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *level; // [rsp+60h] [rbp-4F0h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *cost_pair; // [rsp+68h] [rbp-4E8h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>> *__for_range_1; // [rsp+70h] [rbp-4E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> >,false,false>::reference v75; // [rsp+78h] [rbp-4D8h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> > >::type *id_0; // [rsp+80h] [rbp-4D0h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> > >::type *__for_range_2; // [rsp+90h] [rbp-4C0h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > >::reference v78; // [rsp+98h] [rbp-4B8h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > >::type *level_0; // [rsp+A0h] [rbp-4B0h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > >::type *__for_range_3; // [rsp+B0h] [rbp-4A0h]
  const data::RoguelikeShikigamiUnlockConfig *unlock_config; // [rsp+B8h] [rbp-498h]
  char v82[1168]; // [rsp+C0h] [rbp-490h] BYREF

  v3 = (unsigned __int64)v82;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1120LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "24 48 1 9 <unknown> 64 4 13 day_count:568 80 4 12 stage_id:578 96 8 15 __for_begin:515 128 8 13 "
                        "__for_end:515 160 8 15 __for_begin:518 192 8 13 __for_end:518 224 8 15 __for_begin:538 256 8 13 "
                        "__for_end:538 288 8 15 __for_begin:540 320 8 13 __for_end:540 352 8 15 __for_begin:542 384 8 13 "
                        "__for_end:542 416 24 13 param_vec:548 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 99"
                        "2 32 9 <unknown> 1056 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::checkRogueShikigamiConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234753551;
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
  v5[536862733] = -234881024;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -218959118;
  v5[536862742] = -218959118;
  v5[536862744] = -218959118;
  v5[536862746] = -218959118;
  v5[536862748] = -218959118;
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -202116109;
  __for_range = &this->shikigami_level_cost_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::type *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v3 + 128)) )
      break;
    v68 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>(v68);
    mark_level = 1;
    __for_range_0 = std::get<1ul,unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>(v68);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v6);
    *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 160) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 192, v6);
    *(std::map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v3 + 192) = std::map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> > >::type *)(v3 + 192);
      if ( !std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v3 + 160),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::_Self *)(v3 + 192)) )
      {
        v9 = 1;
        goto LABEL_36;
      }
      v71 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v3 + 160));
      level = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v71);
      cost_pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v71);
      if ( *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)level & 7) + 3) >= *(_BYTE *)(((unsigned __int64)level >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(level);
      }
      if ( mark_level != *level )
      {
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 480, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 480),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueShikigamiConfig",
          522);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v3 + 480),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
               v7,
               (const char (*)[76])"[ROGUELIKE] shikigami_group_id level is not continuous, shikigami_group_id:");
        v6 = id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
        *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
        goto LABEL_36;
      }
      ++mark_level;
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cost_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cost_pair);
      }
      if ( !ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, cost_pair->first) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueShikigamiConfig",
          528);
        v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v12 = common::milog::MiLogStream::operator<<<char [78],(char *[78])0>(
                v11,
                (const char (*)[78])"[ROGUELIKE] shikigami_group_id level cost item not found, shikigami_group_id:");
        v13 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
        v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])", level:");
        v6 = level;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, level);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v9 = 0;
        goto LABEL_36;
      }
      if ( *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3)
                                                                + 0x7FFF8000) )
      {
        __asan_report_load4(&cost_pair->second);
      }
      if ( !cost_pair->second )
        break;
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > *const)(v3 + 160));
    }
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
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "checkRogueShikigamiConfig",
      533);
    v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 608),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v16 = common::milog::MiLogStream::operator<<<char [79],(char *[79])0>(
            v15,
            (const char (*)[79])"[ROGUELIKE] shikigami_group_id level cost item count zero, shikigami_group_id:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, id);
    v18 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v17, (const char (*)[9])", level:");
    v6 = level;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, level);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
    *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v9 = 0;
LABEL_36:
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v9 != 1 )
    {
      v19 = 0;
      goto LABEL_40;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v3 + 96));
  }
  v19 = 1;
LABEL_40:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v19 == 1 )
  {
    __for_range_1 = &this->shikigami_level_unlock_map;
    *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 224, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::begin(__for_range_1);
    *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 256, v6);
    *(std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::iterator *)(v3 + 256) = std::unordered_map<unsigned int,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::end(__for_range_1);
    while ( 1 )
    {
      v20 = (char *)(v3 + 256);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> >,false> *)(v3 + 224),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> >,false> *)(v3 + 256)) )
        break;
      v75 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> >,false,false> *const)(v3 + 224));
      id_0 = std::get<0ul,unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>(v75);
      __for_range_2 = std::get<1ul,unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>(v75);
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, v20);
      *(std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::const_iterator *)(v3 + 288) = std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, v20);
      *(std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::const_iterator *)(v3 + 320) = std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>::end(__for_range_2);
      while ( 1 )
      {
        v21 = (char *)(v3 + 320);
        if ( !std::operator!=(
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > >::_Self *)(v3 + 288),
                (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > >::_Self *)(v3 + 320)) )
          break;
        v78 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > > *const)(v3 + 288));
        level_0 = std::get<0ul,unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig>>(v78);
        __for_range_3 = std::get<1ul,unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig>>(v78);
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 352, v21);
        *(std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator *)(v3 + 352) = std::vector<data::RoguelikeShikigamiUnlockConfig>::begin(__for_range_3);
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 384, v21);
        *(std::vector<data::RoguelikeShikigamiUnlockConfig>::const_iterator *)(v3 + 384) = std::vector<data::RoguelikeShikigamiUnlockConfig>::end(__for_range_3);
        while ( 1 )
        {
          v22 = (char *)(v3 + 384);
          if ( !__gnu_cxx::operator!=<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *)(v3 + 352),
                  (const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *)(v3 + 384)) )
            break;
          unlock_config = __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *const)(v3 + 352));
          if ( *(_BYTE *)(((unsigned __int64)&unlock_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&unlock_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&unlock_config->type);
          }
          type = unlock_config->type;
          if ( type == 3 )
          {
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_store4(v3 + 80, v22);
            *(_DWORD *)(v3 + 80) = 0;
            if ( common::tools::StringUtils::strToNum<unsigned int>(&unlock_config->param, (unsigned int *)(v3 + 80), 1) )
            {
              *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 992, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 992),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "checkRogueShikigamiConfig",
                581);
              v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 992),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v51 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                      v50,
                      (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
              v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, id_0);
              v53 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v52, (const char (*)[9])", level:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, level_0);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
              *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v54 = 0;
            }
            else
            {
              v55 = this;
              v56 = *(unsigned __int8 *)(((v3 + 80) >> 3) + 0x7FFF8000);
              if ( (_BYTE)v56 != 0 && (char)v56 <= 3 )
                __asan_report_load4(v3 + 80);
              if ( data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(v55, *(unsigned int *)(v3 + 80)) )
              {
                v54 = 1;
              }
              else
              {
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 1056, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 1056),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRogueShikigamiConfig",
                  586);
                v57 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 1056),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v58 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v57,
                        (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
                v59 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v58, id_0);
                v60 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v59, (const char (*)[9])", level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, level_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
                *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v54 = 0;
              }
            }
            *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
            if ( !v54 )
            {
              v44 = 0;
              goto LABEL_111;
            }
          }
          else if ( type <= 3 )
          {
            if ( type == 1 )
            {
              v24 = ((v3 + 416) >> 3) + 2147450880;
              *(_WORD *)v24 = 0;
              *(_BYTE *)(v24 + 2) = 0;
              std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v3 + 416));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 1;
              std::allocator<char>::allocator(v3 + 48);
              std::string::basic_string<std::allocator<char>>(
                (std::string *const)(v3 + 672),
                ",",
                (const std::allocator<char> *)(v3 + 48));
              v25 = common::tools::StringUtils::splitToList<unsigned int>(
                      &unlock_config->param,
                      (const std::string *)(v3 + 672),
                      (std::vector<unsigned int> *)(v3 + 416),
                      0) != 0;
              std::string::~string((void *)(v3 + 672));
              *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
              std::allocator<char>::~allocator(v3 + 48);
              *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
              if ( v25 )
              {
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 1) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 736, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 736),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRogueShikigamiConfig",
                  551);
                v26 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 736),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v27 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v26,
                        (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
                v28 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, id_0);
                v29 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v28, (const char (*)[9])", level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, level_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
                *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v30 = 0;
              }
              else if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v3 + 416)) > 1 )
              {
                v35 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 416), 0LL);
                if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,unsigned int>(
                        &this->shikigami_level_cost_map,
                        v35)
                  || (value = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 416), 1uLL),
                      v36 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v3 + 416), 0LL),
                      v37 = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::operator[](
                              &this->shikigami_level_cost_map,
                              v36),
                      !common::tools::MiscUtils::isContains<std::map<unsigned int,std::pair<unsigned int,unsigned int>>,unsigned int>(
                         v37,
                         value)) )
                {
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
                    4u,
                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                    "checkRogueShikigamiConfig",
                    561);
                  v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v3 + 864),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v40 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                          v39,
                          (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
                  v41 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id_0);
                  v42 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(
                          v41,
                          (const char (*)[9])", level:");
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, level_0);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
                  *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
                  v2 = -1;
                  v30 = 0;
                }
                else
                {
                  v30 = 1;
                }
              }
              else
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
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRogueShikigamiConfig",
                  556);
                v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v32 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v31,
                        (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
                v33 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, id_0);
                v34 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v33, (const char (*)[9])", level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, level_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
                *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v30 = 0;
              }
              std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v3 + 416));
              v43 = ((v3 + 416) >> 3) + 2147450880;
              *(_WORD *)v43 = -1800;
              *(_BYTE *)(v43 + 2) = -8;
              if ( !v30 )
              {
                v44 = 0;
                goto LABEL_111;
              }
            }
            else if ( type == 2 )
            {
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
              if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
                __asan_report_store4(v3 + 64, v22);
              *(_DWORD *)(v3 + 64) = 0;
              if ( common::tools::StringUtils::strToNum<unsigned int>(
                     &unlock_config->param,
                     (unsigned int *)(v3 + 64),
                     1) )
              {
                *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
                if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
                  || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
                  && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
                {
                  __asan_report_store_n(v3 + 928, 32LL);
                }
                common::milog::MiLogStream::create(
                  (common::milog::MiLogStream *)(v3 + 928),
                  &common::milog::MiLogDefault::default_log_obj_,
                  4u,
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRogueShikigamiConfig",
                  571);
                v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v3 + 928),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v46 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                        v45,
                        (const char (*)[77])"[ROGUELIKE] shikigami_group_id unlock cond config error, shikigami_group_id:");
                v47 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, id_0);
                v48 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v47, (const char (*)[9])", level:");
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, level_0);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
                *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
                v2 = -1;
                v49 = 0;
              }
              else
              {
                v49 = 1;
              }
              *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
              if ( !v49 )
              {
                v44 = 0;
                goto LABEL_111;
              }
            }
          }
          __gnu_cxx::__normal_iterator<data::RoguelikeShikigamiUnlockConfig const*,std::vector<data::RoguelikeShikigamiUnlockConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RoguelikeShikigamiUnlockConfig*,std::vector<data::RoguelikeShikigamiUnlockConfig> > *const)(v3 + 352));
        }
        v44 = 1;
LABEL_111:
        *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
        if ( v44 != 1 )
        {
          v61 = 0;
          goto LABEL_115;
        }
        std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig>>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::vector<data::RoguelikeShikigamiUnlockConfig> > > *const)(v3 + 288));
      }
      v61 = 1;
LABEL_115:
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v61 != 1 )
      {
        v62 = 0;
        goto LABEL_119;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,std::vector<data::RoguelikeShikigamiUnlockConfig>> >,false,false> *const)(v3 + 224));
    }
    v62 = 1;
LABEL_119:
    if ( v62 == 1 )
      v2 = 0;
  }
  if ( v82 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8084) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 140) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1120LL, v82);
  }
  return v2;
};

// Line 601: range 000000001282B12A-000000001282B493
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueShikigamiGroupConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  data::RoguelikeEffectExcelConfig *p_effect_config; // rdx
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::RoguelikeShikigamiGroupExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v13[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:603 64 8 13 __for_end:603 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueShikigamiGroupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->roguelike_shikigami_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>(v11);
    p_effect_config = &std::get<1ul,unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>(v11)->effect_config;
    if ( ActivityRogueExcelConfigMgr::rewriteRoguelikeEffectConfig(this, txt_config_mgr, p_effect_config, 1, 0) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueShikigamiGroupConfig",
        608);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
             v6,
             (const char (*)[57])"rewriteRoguelikeEffectConfig failed, shikigami_group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v13 == (char *)v2 )
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
  return result;
};

// Line 618: range 000000001282B494-000000001282B7EF
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueShikigamiGroupConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  common::milog::MiLogStream *v6; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-E4h]
  data::RoguelikeShikigamiGroupExcelConfigMap *__for_range; // [rsp+20h] [rbp-E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::reference v10; // [rsp+28h] [rbp-D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig> >::type *id; // [rsp+30h] [rbp-D0h]
  char v12[192]; // [rsp+40h] [rbp-C0h] BYREF

  v2 = (unsigned __int64)v12;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(160LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 32 8 15 __for_begin:620 64 8 13 __for_end:620 96 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueShikigamiGroupConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -202116109;
  ret = 0;
  __for_range = &this->roguelike_shikigami_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoguelikeShikigamiGroupExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false> *)(v2 + 64)) )
  {
    v10 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>(v10);
    std::get<1ul,unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>(v10);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,unsigned int>(
            &this->shikigami_level_cost_map,
            id) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueShikigamiGroupConfig",
        624);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v6 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
             v5,
             (const char (*)[53])"shikigami_group_id is not found, shikigami_group_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v6, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeShikigamiGroupExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v12 == (char *)v2 )
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
  return result;
};

// Line 634: range 000000001282B7F0-000000001282B802
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueRuneData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 639: range 000000001282B804-000000001282B816
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueRuneData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 644: range 000000001282B818-000000001282BD04
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueAbilityGroup(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::pair<std::__detail::_Node_iterator<std::string,true,true>,bool> v5; // rax
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-154h]
  data::RoguelikeTeamAbilityGroupExcelConfigMap *__for_range; // [rsp+20h] [rbp-150h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false,false>::reference v11; // [rsp+28h] [rbp-148h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig> >::type *ability_group_config; // [rsp+38h] [rbp-138h]
  char v13[304]; // [rsp+40h] [rbp-130h] BYREF

  v2 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "4 32 8 15 __for_begin:647 64 8 13 __for_end:647 96 32 9 <unknown> 160 56 21 ability_group_set:645";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueAbilityGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862724] = -218959118;
  v4[536862726] = -218103808;
  v4[536862727] = -202116109;
  std::unordered_set<std::string>::unordered_set((std::unordered_set<std::string> *const)(v2 + 160));
  ret = 0;
  __for_range = &this->roguelike_team_ability_group_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeTeamAbilityGroupExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoguelikeTeamAbilityGroupExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeTeamAbilityGroupExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoguelikeTeamAbilityGroupExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false> *)(v2 + 64)) )
  {
    v11 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false,false> *const)(v2 + 32));
    std::get<0ul,unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>(v11);
    ability_group_config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>(v11);
    v5 = std::unordered_set<std::string>::insert(
           (std::unordered_set<std::string> *const)(v2 + 160),
           &ability_group_config->ability_group);
    if ( !v5.second )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueAbilityGroup",
        651);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v6,
             (const char (*)[38])"[ROGUELIKE] duplicated ability_group:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, &ability_group_config->ability_group);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 96));
      *(_DWORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      if ( *(char *)(((unsigned __int64)&ability_group_config->is_target_avatar >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(
          &ability_group_config->is_target_avatar,
          &ability_group_config->ability_group,
          &ability_group_config->is_target_avatar);
      if ( ability_group_config->is_target_avatar )
        std::vector<std::string>::push_back(&this->avatar_ability_group_vec, &ability_group_config->ability_group);
      else
        std::vector<std::string>::push_back(&this->team_ability_group_vec, &ability_group_config->ability_group);
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeTeamAbilityGroupExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  std::unordered_set<std::string>::~unordered_set((std::unordered_set<std::string> *const)(v2 + 160));
  result = ret;
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8010) = 0;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 669: range 000000001282BD06-000000001282C13B
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueTokenConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *p_level; // rcx
  const unsigned int *p_stage_id; // rdx
  __int64 v8; // rsi
  const unsigned int *v9; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,unsigned int> >,bool> v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // edx
  int v14; // eax
  int32_t result; // eax
  data::RogueTokenExcelConfigMap *__for_range; // [rsp+18h] [rbp-118h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false,false>::reference v17; // [rsp+20h] [rbp-110h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueTokenExcelConfig> >::type *id; // [rsp+28h] [rbp-108h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueTokenExcelConfig> >::type *config; // [rsp+30h] [rbp-100h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > >::mapped_type *diff_map; // [rsp+38h] [rbp-F8h]
  char v21[240]; // [rsp+40h] [rbp-F0h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "4 32 8 15 __for_begin:670 64 8 13 __for_end:670 96 8 20 stage_level_pair:672 128 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueTokenConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862725] = -202116109;
  __for_range = &this->rogue_token_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueTokenExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueTokenExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueTokenExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueTokenExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false> *)(v3 + 64)) )
  {
    v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,data::RogueTokenExcelConfig>(v17);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueTokenExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueTokenExcelConfig>(v17);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    p_level = &config->level;
    p_stage_id = &config->stage_id;
    v8 = *(unsigned __int8 *)(((v3 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v8 )
      __asan_report_store8(v3 + 96, v8);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_stage_id,
                                                           p_level);
    diff_map = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>>>::operator[](
                 &this->stage_level_token_map_,
                 (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > >::key_type *)(v3 + 96));
    v10 = std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::emplace<data::RogueMonsterPoolDifficultyType const&,unsigned int const&>(
            diff_map,
            &config->cell_type,
            id,
            &config->cell_type,
            v9);
    if ( !v10.second )
    {
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueTokenConfig",
        676);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 128),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v12 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v11, (const char (*)[24])byte_1A989D00);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 128));
      *(_DWORD *)(((v3 + 128) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v13 = 0;
    }
    else
    {
      v13 = 1;
    }
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( v13 != 1 )
    {
      v14 = 0;
      goto LABEL_21;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueTokenExcelConfig>,false,false> *const)(v3 + 32));
  }
  v14 = 1;
LABEL_21:
  if ( v14 == 1 )
    v2 = 0;
  result = v2;
  if ( v21 == (char *)v3 )
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

// Line 685: range 000000001282C13C-000000001282C763
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueAbilityGroup(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  JsonConfigMgr *p_json_config_mgr; // rdx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  JsonConfigMgr *v9; // rdx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-164h]
  std::vector<std::string> *__for_range; // [rsp+20h] [rbp-160h]
  std::vector<std::string> *__for_range_0; // [rsp+28h] [rbp-158h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference ability_group_name_0; // [rsp+30h] [rbp-150h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference ability_group_name; // [rsp+38h] [rbp-148h]
  char v19[320]; // [rsp+40h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v19;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 15 __for_begin:687 64 8 13 __for_end:687 96 8 15 __for_begin:696 128 8 13 __for_end:696 1"
                        "60 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueAbilityGroup;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->team_ability_group_vec;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::vector<std::string>::iterator *)(v2 + 32) = std::vector<std::string>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::vector<std::string>::iterator *)(v2 + 64) = std::vector<std::string>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !__gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 32),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 64)) )
      break;
    ability_group_name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 32));
    p_json_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( !JsonConfigMgr::findAbilityGroupConfig(p_json_config_mgr, ability_group_name) )
    {
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueAbilityGroup",
        691);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
             v7,
             (const char (*)[62])"[ROGUELIKE] can not find ability_group config, ability_group:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v8, ability_group_name);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->avatar_ability_group_vec;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::vector<std::string>::iterator *)(v2 + 96) = std::vector<std::string>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::vector<std::string>::iterator *)(v2 + 128) = std::vector<std::string>::end(__for_range_0);
  while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 96),
            (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v2 + 128)) )
  {
    ability_group_name_0 = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
    v9 = &TxtConfigMgr::getConfig(txt_config_mgr)->json_config_mgr;
    if ( !JsonConfigMgr::findAbilityGroupConfig(v9, ability_group_name_0) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueAbilityGroup",
        700);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
              v10,
              (const char (*)[62])"[ROGUELIKE] can not find ability_group config, ability_group:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v11, ability_group_name_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
      *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v2 + 96));
  }
  result = ret;
  if ( v19 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 709: range 000000001282C764-000000001282E4DD
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRougeDungeonCellConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  __int64 v5; // rsi
  unsigned int first; // ecx
  char v7; // al
  __int64 v8; // rsi
  unsigned int second; // ecx
  char v10; // al
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *p_dungeon_cell_depot_map; // rdx
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *v12; // rdx
  bool v13; // al
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  ActivityRogueExcelConfigMgr *v16; // rcx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rdx
  ActivityRogueExcelConfigMgr *v24; // rcx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rdx
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  const unsigned int *v29; // r15
  const unsigned int *v30; // rcx
  char *v31; // rsi
  std::pair<std::_Rb_tree_const_iterator<std::pair<unsigned int,unsigned int> >,bool> v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  char *v37; // rsi
  unsigned int *v38; // rax
  int *v39; // rdx
  int v40; // ecx
  char v41; // al
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_dungeon_cell_pair_config_id_map; // rdx
  bool v43; // al
  common::milog::MiLogStream *v44; // rax
  common::milog::MiLogStream *v45; // rdx
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rax
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v48; // rdx
  unsigned int *p_second; // rax
  __int64 v50; // rsi
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rdx
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  const unsigned int *M_current; // r15
  const unsigned int *v56; // rcx
  bool v57; // al
  common::milog::MiLogStream *v58; // rax
  common::milog::MiLogStream *v59; // rdx
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  int32_t ret; // [rsp+14h] [rbp-58Ch]
  LuaConfigMgr *lua_config_mgr; // [rsp+18h] [rbp-588h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *__for_range; // [rsp+20h] [rbp-580h]
  std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::reference v67; // [rsp+28h] [rbp-578h]
  std::tuple_element<0,std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *dungeon_cell_pair; // [rsp+30h] [rbp-570h]
  std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *cell_config_id; // [rsp+38h] [rbp-568h]
  data::RogueDungeonCellExcelConfig *cell_config_ptr; // [rsp+40h] [rbp-560h]
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::mapped_type *coord_set; // [rsp+50h] [rbp-550h]
  const std::vector<unsigned int> *__for_range_0; // [rsp+58h] [rbp-548h]
  data::RogueDungeonCellExcelConfig *adj_cell_config_ptr; // [rsp+60h] [rbp-540h]
  const std::vector<unsigned int> *adj_cell_adj_vec; // [rsp+68h] [rbp-538h]
  char v75[1328]; // [rsp+70h] [rbp-530h] BYREF

  v2 = (unsigned __int64)v75;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_5(1280LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "27 48 4 14 dungeon_id:715 64 4 11 cell_id:716 80 4 15 adj_cell_id:768 96 8 15 __for_begin:713 12"
                        "8 8 13 __for_end:713 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 15 __for_begin:"
                        "768 288 8 13 __for_end:768 320 8 17 adj_cell_iter:770 352 8 9 <unknown> 384 8 9 <unknown> 416 8 "
                        "9 <unknown> 448 8 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 672 32 9 "
                        "<unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 992 32 9 <"
                        "unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 56 26 dungeon_coordinate_map:712";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRougeDungeonCellConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -234556924;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
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
  v4[536862758] = -218103808;
  v4[536862759] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::unordered_map((std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v2 + 1184));
  __for_range = &this->dungeon_cell_pair_config_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, txt_config_mgr);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 128)) )
  {
    v67 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator*((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 96));
    dungeon_cell_pair = std::get<0ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v67);
    cell_config_id = (std::tuple_element<1,const std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> >::type *)std::get<1ul,std::pair<unsigned int,unsigned int> const,unsigned int>(v67);
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
    v5 = ((unsigned __int8)dungeon_cell_pair & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_cell_pair >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_cell_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_cell_pair >> 3)
                                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_cell_pair);
    }
    first = dungeon_cell_pair->first;
    v7 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
    if ( v7 != 0 && v7 <= 3 )
    {
      LOBYTE(v5) = v7 != 0;
      __asan_report_store4(v2 + 48, v5);
    }
    *(_DWORD *)(v2 + 48) = first;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = 4;
    v8 = (((_BYTE)dungeon_cell_pair + 4) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&dungeon_cell_pair->second >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)dungeon_cell_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_cell_pair->second >> 3)
                                                                      + 0x7FFF8000) )
    {
      __asan_report_load4(&dungeon_cell_pair->second);
    }
    second = dungeon_cell_pair->second;
    v10 = *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000);
    LOBYTE(v8) = v10 != 0;
    if ( v10 != 0 && v10 <= 3 )
      __asan_report_store4(v2 + 64, v8);
    *(_DWORD *)(v2 + 64) = second;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
    p_dungeon_cell_depot_map = &this->dungeon_cell_depot_map;
    if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 192, v8);
    *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::end(p_dungeon_cell_depot_map);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    v12 = &this->dungeon_cell_depot_map;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v8);
    *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::find(
                                                                                                  v12,
                                                                                                  (const std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::key_type *)(v2 + 48));
    v13 = std::__detail::operator==<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 160),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 192));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRougeDungeonCellConfig",
        719);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v14, (const char (*)[44])byte_1A98A100);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, cell_config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
      *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      v16 = this;
      if ( *(_BYTE *)(((unsigned __int64)cell_config_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cell_config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cell_config_id >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(cell_config_id);
      }
      cell_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(v16, *cell_config_id);
      if ( cell_config_ptr )
      {
        p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
        if ( *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v2 + 48);
        if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *(unsigned int *)(v2 + 48)) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&cell_config_ptr->group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&cell_config_ptr->group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&cell_config_ptr->group_id);
          }
          if ( LuaConfigMgr::findGroupInfoConfig(lua_config_mgr, cell_config_ptr->group_id) )
          {
            v24 = this;
            if ( *(_BYTE *)(((unsigned __int64)&cell_config_ptr->weight_id >> 3) + 0x7FFF8000) != 0
              && (char)((((_BYTE)cell_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_config_ptr->weight_id >> 3)
                                                                              + 0x7FFF8000) )
            {
              __asan_report_load4(&cell_config_ptr->weight_id);
            }
            if ( data::ActivityRogueExcelConfigMgrBase::findRogueCellWeightExcelConfig(v24, cell_config_ptr->weight_id) )
            {
              if ( std::vector<unsigned int>::size(&cell_config_ptr->map_coordinate) == 2 )
              {
                coord_set = std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::operator[](
                              (std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v2 + 1184),
                              (const std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::key_type *)(v2 + 48));
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
                v29 = std::vector<unsigned int>::operator[](&cell_config_ptr->map_coordinate, 1uLL);
                v30 = std::vector<unsigned int>::operator[](&cell_config_ptr->map_coordinate, 0LL);
                if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
                  __asan_report_store8(v2 + 224, 0LL);
                *(std::pair<unsigned int,unsigned int> *)(v2 + 224) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                        v30,
                                                                        v29);
                v31 = (char *)(v2 + 224);
                v32 = std::set<std::pair<unsigned int,unsigned int>>::insert(
                        coord_set,
                        (std::set<std::pair<unsigned int,unsigned int>>::value_type *)(v2 + 224));
                *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
                if ( !v32.second )
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
                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                    "checkRougeDungeonCellConfig",
                    758);
                  v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 864),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v34 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
                          v33,
                          (const char (*)[49])byte_1A98A360);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, cell_config_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 864));
                  *(_DWORD *)(((v2 + 864) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
                else if ( std::vector<unsigned int>::size(&cell_config_ptr->adjacency_cell_list) <= 4 )
                {
                  __for_range_0 = &cell_config_ptr->adjacency_cell_list;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 256, v31);
                  *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::begin(__for_range_0);
                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
                  if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
                    __asan_report_store8(v2 + 288, v31);
                  *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::end(__for_range_0);
                  while ( 1 )
                  {
                    v37 = (char *)(v2 + 288);
                    if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256),
                            (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288)) )
                      break;
                    *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = 4;
                    v38 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
                    v39 = (int *)v38;
                    if ( *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) != 0
                      && (char)(((unsigned __int8)v38 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v38 >> 3) + 0x7FFF8000) )
                    {
                      __asan_report_load4(v38);
                    }
                    v40 = *v39;
                    v41 = *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000);
                    LOBYTE(v37) = v41 != 0;
                    if ( v41 != 0 && v41 <= 3 )
                      __asan_report_store4(v2 + 80, v37);
                    *(_DWORD *)(v2 + 80) = v40;
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
                    if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 352, v37);
                    *(std::pair<unsigned int,unsigned int> *)(v2 + 352) = std::make_pair<unsigned int &,unsigned int &>(
                                                                            (unsigned int *)(v2 + 48),
                                                                            (unsigned int *)(v2 + 80));
                    if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 320, v2 + 80);
                    *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 320) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(&this->dungeon_cell_pair_config_id_map_, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v2 + 352));
                    *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
                    p_dungeon_cell_pair_config_id_map = &this->dungeon_cell_pair_config_id_map_;
                    if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
                      __asan_report_store8(v2 + 384, v2 + 352);
                    *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 384) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(p_dungeon_cell_pair_config_id_map);
                    v43 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
                            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 320),
                            (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 384));
                    *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                    if ( v43 )
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
                        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                        "checkRougeDungeonCellConfig",
                        773);
                      v44 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 992),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v45 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                              v44,
                              (const char (*)[47])byte_1A98A420);
                      v46 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v45, cell_config_id);
                      v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              v46,
                              (const char (*)[16])byte_1A98A480);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                        v47,
                        (const unsigned int *)(v2 + 80));
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 992));
                      *(_DWORD *)(((v2 + 992) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                    else
                    {
                      v48 = std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 320));
                      p_second = &v48->second;
                      if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3)
                                                                                   + 0x7FFF8000) )
                      {
                        __asan_report_load4(p_second);
                      }
                      v50 = v48->second;
                      adj_cell_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(
                                              this,
                                              v50);
                      if ( adj_cell_config_ptr )
                      {
                        adj_cell_adj_vec = &adj_cell_config_ptr->adjacency_cell_list;
                        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
                        if ( *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v2 + 448, v50);
                        *(std::vector<unsigned int>::const_iterator *)(v2 + 448) = std::vector<unsigned int>::end(adj_cell_adj_vec);
                        *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                        M_current = std::vector<unsigned int>::end(adj_cell_adj_vec)._M_current;
                        v56 = std::vector<unsigned int>::begin(adj_cell_adj_vec)._M_current;
                        if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
                          __asan_report_store8(v2 + 416, v50);
                        *(__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 416) = std::find<__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>,unsigned int>((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)v56, (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> >)M_current, (const unsigned int *)(v2 + 64));
                        v57 = __gnu_cxx::operator==<unsigned int const*,std::vector<unsigned int>>(
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 416),
                                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 448));
                        *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                        *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                        if ( v57 )
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
                            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                            "checkRougeDungeonCellConfig",
                            787);
                          v58 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1120),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v59 = common::milog::MiLogStream::operator<<<char [72],(char *[72])0>(
                                  v58,
                                  (const char (*)[72])byte_1A98A4C0);
                          v60 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v59,
                                  cell_config_id);
                          v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  v60,
                                  (const char (*)[16])byte_1A98A480);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                            v61,
                            (const unsigned int *)(v2 + 80));
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1120));
                          *(_DWORD *)(((v2 + 1120) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                      }
                      else
                      {
                        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = 0;
                        if ( *(char *)(((v2 + 1056) >> 3) + 0x7FFF8000) < 0
                          || *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) != 0
                          && (char)((v2 + 63) & 7) >= *(_BYTE *)(((v2 + 1087) >> 3) + 0x7FFF8000) )
                        {
                          __asan_report_store_n(v2 + 1056, 32LL);
                        }
                        common::milog::MiLogStream::create(
                          (common::milog::MiLogStream *)(v2 + 1056),
                          &common::milog::MiLogDefault::default_log_obj_,
                          4u,
                          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                          "checkRougeDungeonCellConfig",
                          780);
                        v51 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1056),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v52 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                                v51,
                                (const char (*)[47])byte_1A98A420);
                        v53 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v52,
                                cell_config_id);
                        v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                v53,
                                (const char (*)[16])byte_1A98A480);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                          v54,
                          (const unsigned int *)(v2 + 80));
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1056));
                        *(_DWORD *)(((v2 + 1056) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                    }
                    *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                    __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
                  }
                  *(_BYTE *)(((v2 + 80) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                  *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                }
                else
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
                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                    "checkRougeDungeonCellConfig",
                    764);
                  v35 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 928),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v36 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(
                          v35,
                          (const char (*)[56])byte_1A98A3C0);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, cell_config_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 928));
                  *(_DWORD *)(((v2 + 928) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
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
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRougeDungeonCellConfig",
                  751);
                v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 800),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v28 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(
                        v27,
                        (const char (*)[69])byte_1A98A2E0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, cell_config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 800));
                *(_DWORD *)(((v2 + 800) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
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
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "checkRougeDungeonCellConfig",
                745);
              v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 736),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v26 = common::milog::MiLogStream::operator<<<char [55],(char *[55])0>(
                      v25,
                      (const char (*)[55])byte_1A98A280);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, cell_config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 736));
              *(_DWORD *)(((v2 + 736) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
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
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "checkRougeDungeonCellConfig",
              739);
            v22 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 672),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v23 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v22,
                    (const char (*)[42])byte_1A98A220);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v23, cell_config_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 672));
            *(_DWORD *)(((v2 + 672) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
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
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "checkRougeDungeonCellConfig",
            733);
          v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 608),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v21 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v20, (const char (*)[43])byte_1A98A1C0);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, cell_config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
          *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRougeDungeonCellConfig",
          726);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                v17,
                (const char (*)[38])"[ROGUE][Cell] Fatal Error! config_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, cell_config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
        *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator++((std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v2 + 96));
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>>::~unordered_map((std::unordered_map<unsigned int,std::set<std::pair<unsigned int,unsigned int>>> *const)(v2 + 1184));
  if ( v75 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF808C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 148) & 0xFFFFFFF8) >> 3));
    *(_QWORD *)((v2 >> 3) + 0x7FFF8098) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_5(v2, 1280LL, v75);
  }
  return ret;
};

// Line 797: range 000000001282E4DE-000000001282F400
int32_t __cdecl ActivityRogueExcelConfigMgr::checkSequenceConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  char *v6; // rsi
  unsigned int *v7; // rax
  int *v8; // rdx
  int v9; // ecx
  char v10; // al
  __int64 v11; // rsi
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  char *v14; // rsi
  unsigned int *v15; // rax
  int *v16; // rdx
  int v17; // ecx
  char v18; // al
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_dungeon_cell_pair_config_id_map; // rdx
  bool v20; // al
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v25; // rax
  unsigned int *v26; // rdx
  unsigned int v27; // r14d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  unsigned int *v29; // rdx
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  int32_t ret; // [rsp+14h] [rbp-31Ch]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range; // [rsp+18h] [rbp-318h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference v35; // [rsp+20h] [rbp-310h]
  std::tuple_element<0,std::pair<unsigned int const,std::vector<unsigned int> > >::type *dungeon_id; // [rsp+28h] [rbp-308h]
  const std::tuple_element<1,std::pair<unsigned int const,std::vector<unsigned int> > >::type *__for_range_0; // [rsp+38h] [rbp-2F8h]
  data::RogueSequenceExcelConfig *seq_config_ptr; // [rsp+40h] [rbp-2F0h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+48h] [rbp-2E8h]
  const std::vector<data::RogueSequenceCellConfig> *__for_range_2; // [rsp+50h] [rbp-2E0h]
  const data::RogueSequenceCellConfig *seq_cell_config; // [rsp+58h] [rbp-2D8h]
  char v42[720]; // [rsp+60h] [rbp-2D0h] BYREF

  v2 = (unsigned __int64)v42;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(672LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "17 32 4 10 seq_id:801 48 4 11 cell_id:810 64 8 15 __for_begin:799 96 8 13 __for_end:799 128 8 15"
                        " __for_begin:801 160 8 13 __for_end:801 192 8 15 __for_begin:810 224 8 13 __for_end:810 256 8 9 "
                        "<unknown> 288 8 9 <unknown> 320 8 9 <unknown> 352 8 15 __for_begin:819 384 8 13 __for_end:819 41"
                        "6 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkSequenceConfig;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862734] = -218959118;
  v4[536862736] = -218959118;
  v4[536862738] = -218959118;
  v4[536862740] = -202116109;
  ret = 0;
  __for_range = &this->dungeon_sequence_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v2 + 96)) )
      break;
    v35 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,std::vector<unsigned int>>(v35);
    __for_range_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(v35);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 128) = std::vector<unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v5);
    *(std::vector<unsigned int>::const_iterator *)(v2 + 160) = std::vector<unsigned int>::end(__for_range_0);
    while ( 1 )
    {
      v6 = (char *)(v2 + 160);
      if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 128),
              (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 160)) )
        break;
      *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
      v7 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
      v8 = (int *)v7;
      if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v7 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v7);
      }
      v9 = *v8;
      v10 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
      if ( v10 != 0 && v10 <= 3 )
      {
        LOBYTE(v6) = v10 != 0;
        __asan_report_store4(v2 + 32, v6);
      }
      *(_DWORD *)(v2 + 32) = v9;
      v11 = *(unsigned int *)(v2 + 32);
      seq_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueSequenceExcelConfig(this, v11);
      if ( seq_config_ptr )
      {
        __for_range_1 = &seq_config_ptr->cell_list;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 192, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 192) = std::vector<unsigned int>::begin(__for_range_1);
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 224, v11);
        *(std::vector<unsigned int>::const_iterator *)(v2 + 224) = std::vector<unsigned int>::end(__for_range_1);
        while ( 1 )
        {
          v14 = (char *)(v2 + 224);
          if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 192),
                  (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 224)) )
            break;
          *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
          v15 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
          v16 = (int *)v15;
          if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v15);
          }
          v17 = *v16;
          v18 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
          LOBYTE(v14) = v18 != 0;
          if ( v18 != 0 && v18 <= 3 )
            __asan_report_store4(v2 + 48, v14);
          *(_DWORD *)(v2 + 48) = v17;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
          p_dungeon_cell_pair_config_id_map = &this->dungeon_cell_pair_config_id_map_;
          if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 320, v14);
          *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 320) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(p_dungeon_cell_pair_config_id_map);
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 256, v14);
          *(std::pair<unsigned int,unsigned int> *)(v2 + 256) = std::make_pair<unsigned int const&,unsigned int &>(
                                                                  dungeon_id,
                                                                  (unsigned int *)(v2 + 48));
          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 288, v2 + 48);
          *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::iterator *)(v2 + 288) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(&this->dungeon_cell_pair_config_id_map_, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v2 + 256));
          v20 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
                  (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 288),
                  (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v2 + 320));
          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
          *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
          if ( v20 )
          {
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v2 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v2 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v2 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "checkSequenceConfig",
              814);
            v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v22 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(
                    v21,
                    (const char (*)[48])byte_1A98A760);
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v2 + 32));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 480));
            *(_DWORD *)(((v2 + 480) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
          __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 192));
        }
        *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
        __for_range_2 = &seq_config_ptr->cell_seq_list;
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 352, v14);
        *(std::vector<data::RogueSequenceCellConfig>::const_iterator *)(v2 + 352) = std::vector<data::RogueSequenceCellConfig>::begin(__for_range_2);
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v2 + 384, v14);
        *(std::vector<data::RogueSequenceCellConfig>::const_iterator *)(v2 + 384) = std::vector<data::RogueSequenceCellConfig>::end(__for_range_2);
        while ( __gnu_cxx::operator!=<data::RogueSequenceCellConfig const*,std::vector<data::RogueSequenceCellConfig>>(
                  (const __gnu_cxx::__normal_iterator<const data::RogueSequenceCellConfig*,std::vector<data::RogueSequenceCellConfig> > *)(v2 + 352),
                  (const __gnu_cxx::__normal_iterator<const data::RogueSequenceCellConfig*,std::vector<data::RogueSequenceCellConfig> > *)(v2 + 384)) )
        {
          seq_cell_config = __gnu_cxx::__normal_iterator<data::RogueSequenceCellConfig const*,std::vector<data::RogueSequenceCellConfig>>::operator*((const __gnu_cxx::__normal_iterator<const data::RogueSequenceCellConfig*,std::vector<data::RogueSequenceCellConfig> > *const)(v2 + 352));
          if ( *(_BYTE *)(((unsigned __int64)&seq_cell_config->type >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&seq_cell_config->type >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&seq_cell_config->type);
          }
          if ( seq_cell_config->type )
          {
            if ( std::vector<unsigned int>::size(&seq_cell_config->range) == 2 )
            {
              v25 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&seq_cell_config->range, 0LL);
              v26 = v25;
              if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v25);
              }
              v27 = *v26;
              v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&seq_cell_config->range, 1uLL);
              v29 = v28;
              if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v28);
              }
              if ( v27 > *v29 )
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
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkSequenceConfig",
                  833);
                v30 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 608),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v31 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                        v30,
                        (const char (*)[53])byte_1A98A820);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v31,
                  (const unsigned int *)(v2 + 32));
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 608));
                *(_DWORD *)(((v2 + 608) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
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
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "checkSequenceConfig",
                827);
              v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 544),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v24 = common::milog::MiLogStream::operator<<<char [57],(char *[57])0>(
                      v23,
                      (const char (*)[57])byte_1A98A7C0);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v24,
                (const unsigned int *)(v2 + 32));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 544));
              *(_DWORD *)(((v2 + 544) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          __gnu_cxx::__normal_iterator<data::RogueSequenceCellConfig const*,std::vector<data::RogueSequenceCellConfig>>::operator++((__gnu_cxx::__normal_iterator<const data::RogueSequenceCellConfig*,std::vector<data::RogueSequenceCellConfig> > *const)(v2 + 352));
        }
        *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
      }
      else
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkSequenceConfig",
          806);
        v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 416),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v13 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v12, (const char (*)[49])byte_1A98A700);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v2 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 416));
        *(_DWORD *)(((v2 + 416) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 128));
    }
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v2 + 64));
  }
  if ( v42 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF804C) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 84) & 0xFFFFFFF8) >> 3));
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
    *(_DWORD *)((v2 >> 3) + 0x7FFF8050) = -168430091;
  }
  return ret;
};

// Line 844: range 000000001282F402-000000001282F868
int32_t __cdecl ActivityRogueExcelConfigMgr::checkMonsterPoolData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *p_dungeon_cell_depot_map; // rdx
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-124h]
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>> *__for_range; // [rsp+20h] [rbp-120h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false,false>::reference v14; // [rsp+28h] [rbp-118h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> > >::type *dungeon_id; // [rsp+30h] [rbp-110h]
  char v16[256]; // [rsp+40h] [rbp-100h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(224LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 15 __for_begin:846 64 8 13 __for_end:846 96 8 9 <unknown> 128 8 9 <unknown> 160 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkMonsterPoolData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -202116109;
  ret = 0;
  __for_range = &this->dungeon_monster_pool_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v2 + 64)) )
      break;
    v14 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false,false> *const)(v2 + 32));
    dungeon_id = std::get<0ul,unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>(v14);
    std::get<1ul,unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>(v14);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_dungeon_cell_depot_map = &this->dungeon_cell_depot_map;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::end(p_dungeon_cell_depot_map);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v7 = &this->dungeon_cell_depot_map;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::find(
                                                                                                 v7,
                                                                                                 dungeon_id);
    v8 = std::__detail::operator==<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false>(
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 96),
           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 128));
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v8 )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkMonsterPoolData",
        850);
      v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 160),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v9, (const char (*)[52])byte_1A98A940);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v16 == (char *)v2 )
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

// Line 859: range 000000001282F86A-0000000012831024
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRougeDungeonCellConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *p_group_id; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  const unsigned int *p_cell_id; // rcx
  const unsigned int *p_dungeon_id; // rdx
  __int64 v15; // rsi
  const unsigned int *v16; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v17; // rax
  const unsigned int *v18; // r8
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v23; // rax
  const unsigned int *v24; // r8
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v27; // rax
  common::milog::MiLogStream *v28; // rax
  common::milog::MiLogStream *v29; // rax
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  int v33; // edx
  uint32_t *v34; // rax
  uint32_t *v35; // rsi
  char *v36; // rsi
  unsigned int *v37; // rax
  int *v38; // rdx
  int v39; // ecx
  char v40; // al
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  int v45; // eax
  unsigned int *v46; // r8
  common::milog::MiLogStream *v47; // rax
  common::milog::MiLogStream *v48; // rdx
  common::milog::MiLogStream *v49; // rax
  common::milog::MiLogStream *v50; // rax
  std::pair<std::_Rb_tree_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> >,bool> v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int v54; // edx
  int v55; // edx
  uint32_t dungeon_id; // [rsp+1Ch] [rbp-424h]
  data::RogueDungeonCellExcelConfigMap *__for_range; // [rsp+20h] [rbp-420h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::reference v59; // [rsp+28h] [rbp-418h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *config_id; // [rsp+30h] [rbp-410h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *config; // [rsp+38h] [rbp-408h]
  std::unordered_map<unsigned int,std::set<unsigned int>>::mapped_type *cell_set; // [rsp+40h] [rbp-400h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *validate_cell_set; // [rsp+48h] [rbp-3F8h]
  data::RogueDungeonCellExcelConfigMap *__for_range_0; // [rsp+50h] [rbp-3F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::reference v65; // [rsp+58h] [rbp-3E8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *config_id_0; // [rsp+60h] [rbp-3E0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *config_0; // [rsp+68h] [rbp-3D8h]
  std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::mapped_type *dungeon_cell_adj_map; // [rsp+70h] [rbp-3D0h]
  std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::mapped_type *cell_adj_map; // [rsp+78h] [rbp-3C8h]
  const std::vector<unsigned int> *__for_range_1; // [rsp+80h] [rbp-3C0h]
  const data::RogueDungeonCellExcelConfig *adj_cell_config_ptr; // [rsp+88h] [rbp-3B8h]
  char v72[944]; // [rsp+90h] [rbp-3B0h] BYREF

  v3 = (unsigned __int64)v72;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(896LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "18 48 4 15 adj_cell_id:905 64 4 7 dir:913 80 8 15 __for_begin:861 112 8 13 __for_end:861 144 8 2"
                        "1 dungeon_cell_pair:871 176 8 15 __for_begin:900 208 8 13 __for_end:900 240 8 15 __for_begin:905"
                        " 272 8 13 __for_end:905 304 32 9 <unknown> 368 32 9 <unknown> 432 32 9 <unknown> 496 32 9 <unkno"
                        "wn> 560 32 9 <unknown> 624 32 9 <unknown> 688 32 9 <unknown> 752 32 9 <unknown> 816 48 24 dungeo"
                        "n_cell_set_map:860";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRougeDungeonCellConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862727] = -234881024;
  v5[536862728] = 62194;
  v5[536862728] = -234881024;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862732] = -219021312;
  v5[536862733] = 62194;
  v5[536862734] = -219021312;
  v5[536862735] = 62194;
  v5[536862736] = -219021312;
  v5[536862737] = 62194;
  v5[536862738] = -219021312;
  v5[536862739] = 62194;
  v5[536862740] = -219021312;
  v5[536862741] = 62194;
  v5[536862742] = -219021312;
  v5[536862743] = 62194;
  v5[536862744] = -219021312;
  v5[536862745] = 62194;
  v5[536862747] = -202116109;
  std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 816));
  __for_range = &this->rogue_dungeon_cell_excel_config_map;
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 112, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::iterator *)(v3 + 112) = std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_group_id = (std::tuple_element<0,std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *)(v3 + 112);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false> *)(v3 + 80),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false> *)(v3 + 112)) )
      break;
    v59 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false> *const)(v3 + 80));
    config_id = std::get<0ul,unsigned int const,data::RogueDungeonCellExcelConfig>(v59);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDungeonCellExcelConfig>(v59);
    cell_set = std::unordered_map<unsigned int,std::set<unsigned int>>::operator[](
                 &this->dungeon_cell_config_id_map_,
                 &config->dungeon_id);
    validate_cell_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                          (std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 816),
                          &config->dungeon_id);
    v7 = std::set<unsigned int>::insert(validate_cell_set, config_id);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 304, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 304),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRougeDungeonCellConfig",
        867);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 304),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v8, (const char (*)[34])byte_1A98AB80);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->dungeon_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" config_id:");
      p_group_id = config_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
      *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      std::set<unsigned int>::insert(cell_set, config_id);
      *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
      p_cell_id = &config->cell_id;
      p_dungeon_id = &config->dungeon_id;
      v15 = *(unsigned __int8 *)(((v3 + 144) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v15 )
        __asan_report_store8(v3 + 144, v15);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 144) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                              p_dungeon_id,
                                                              p_cell_id);
      v17 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>&,unsigned int const&>(
              &this->dungeon_cell_pair_config_id_map_,
              (std::pair<unsigned int,unsigned int> *)(v3 + 144),
              config_id,
              (std::pair<unsigned int,unsigned int> *)&this->dungeon_cell_pair_config_id_map_,
              v16);
      if ( !v17.second )
      {
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 368) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 399) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 368, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 368),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRougeDungeonCellConfig",
          874);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 368),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(v19, (const char (*)[37])byte_1A98AC20);
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, &config->dungeon_id);
        v22 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v21, (const char (*)[10])" cell_id:");
        p_group_id = &config->cell_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config->cell_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 368));
        *(_DWORD *)(((v3 + 368) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        p_group_id = &config->group_id;
        v23 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                &this->group_id_2_cell_config_id_map_,
                &config->group_id,
                config_id,
                (const unsigned int *)&this->group_id_2_cell_config_id_map_,
                v18);
        if ( !v23.second )
        {
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 432) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 463) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 432, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 432),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRougeDungeonCellConfig",
            879);
          v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 432),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v26 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                  v25,
                  (const char (*)[31])"group_id duplicated, group_id:");
          p_group_id = &config->group_id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v26, &config->group_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 432));
          *(_DWORD *)(((v3 + 432) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v12 = 0;
        }
        else
        {
          if ( *(char *)(((unsigned __int64)&config->is_init_cell >> 3) + 0x7FFF8000) < 0 )
            __asan_report_load1(&config->is_init_cell, p_group_id, &config->is_init_cell);
          if ( config->is_init_cell
            && (p_group_id = &config->dungeon_id,
                v27 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                        &this->dungeon_init_cell_map,
                        &config->dungeon_id,
                        config_id,
                        (const unsigned int *)&this->dungeon_init_cell_map,
                        v24),
                !v27.second) )
          {
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 496) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 527) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 496, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 496),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRougeDungeonCellConfig",
              886);
            v28 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 496),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v29 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                    v28,
                    (const char (*)[42])"duplicated dungeon init cell, dungeon_id:");
            p_group_id = &config->dungeon_id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v29, &config->dungeon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 496));
            *(_DWORD *)(((v3 + 496) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v12 = 0;
          }
          else
          {
            if ( *(_BYTE *)(((unsigned __int64)&config->special_type >> 3) + 0x7FFF8000) != 0
              && *(_BYTE *)(((unsigned __int64)&config->special_type >> 3) + 0x7FFF8000) <= 3 )
            {
              __asan_report_load4(&config->special_type);
            }
            if ( config->special_type == ROGUE_CELL_TYPE_BOSS
              && (p_group_id = &config->dungeon_id,
                  v30 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                          &this->dungeon_boss_group_map,
                          &config->dungeon_id,
                          &config->group_id,
                          &config->dungeon_id,
                          v24),
                  !v30.second) )
            {
              *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 560) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 591) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 560, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 560),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "rewriteRougeDungeonCellConfig",
                894);
              v31 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 560),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v32 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                      v31,
                      (const char (*)[42])"duplicated dungeon boss cell, dungeon_id:");
              p_group_id = &config->dungeon_id;
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->dungeon_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 560));
              *(_DWORD *)(((v3 + 560) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v12 = 0;
            }
            else
            {
              v12 = 1;
            }
          }
        }
      }
    }
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v33 = 0;
      goto LABEL_43;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false> *const)(v3 + 80));
  }
  v33 = 1;
LABEL_43:
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
  if ( v33 == 1 )
  {
    __for_range_0 = &this->rogue_dungeon_cell_excel_config_map;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, p_group_id);
    *(std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::iterator *)(v3 + 176) = std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, p_group_id);
    *(std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::iterator *)(v3 + 208) = std::unordered_map<unsigned int,data::RogueDungeonCellExcelConfig>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false> *)(v3 + 176),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false> *)(v3 + 208)) )
    {
      v65 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false> *const)(v3 + 176));
      config_id_0 = std::get<0ul,unsigned int const,data::RogueDungeonCellExcelConfig>(v65);
      config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueDungeonCellExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueDungeonCellExcelConfig>(v65);
      v34 = &config_0->dungeon_id;
      if ( *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v34 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v34 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v34);
      }
      dungeon_id = config_0->dungeon_id;
      dungeon_cell_adj_map = std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::operator[](
                               &this->cell_adj_dir_map_,
                               &config_0->dungeon_id);
      v35 = &config_0->cell_id;
      cell_adj_map = std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::operator[](
                       dungeon_cell_adj_map,
                       &config_0->cell_id);
      __for_range_1 = &config_0->adjacency_cell_list;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 240, v35);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 240) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 272, v35);
      *(std::vector<unsigned int>::const_iterator *)(v3 + 272) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v36 = (char *)(v3 + 272);
        if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 240),
                (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v3 + 272)) )
          break;
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v37 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 240));
        v38 = (int *)v37;
        if ( *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v37 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v37 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v37);
        }
        v39 = *v38;
        v40 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v40 != 0 && v40 <= 3 )
        {
          LOBYTE(v36) = v40 != 0;
          __asan_report_store4(v3 + 48, v36);
        }
        *(_DWORD *)(v3 + 48) = v39;
        adj_cell_config_ptr = ActivityRogueExcelConfigMgr::findDungeonCellConfigByDungeonIdAndCellId(
                                this,
                                dungeon_id,
                                *(_DWORD *)(v3 + 48));
        if ( adj_cell_config_ptr )
        {
          *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
          if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_store4(v3 + 64, dungeon_id);
          *(_DWORD *)(v3 + 64) = 0;
          if ( ActivityRogueExcelConfigMgr::getCellsDir(
                 this,
                 &config_0->map_coordinate,
                 &adj_cell_config_ptr->map_coordinate,
                 (data::RogueGadgetDirType *)(v3 + 64)) )
          {
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 688) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 49) & 7) >= *(_BYTE *)(((v3 + 719) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 688, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 688),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRougeDungeonCellConfig",
              916);
            v47 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 688),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v48 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
                    v47,
                    (const char (*)[36])byte_1A98AE60);
            v49 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v48, config_id_0);
            v50 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v49,
                    (const char (*)[14])" adj_cell_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v50, (const unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 688));
            *(_DWORD *)(((v3 + 688) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v45 = 0;
          }
          else
          {
            v51 = std::map<data::RogueGadgetDirType,unsigned int>::emplace<data::RogueGadgetDirType&,unsigned int &>(
                    cell_adj_map,
                    (data::RogueGadgetDirType *)(v3 + 64),
                    (unsigned int *)(v3 + 48),
                    (data::RogueGadgetDirType *)(v3 + 64),
                    v46);
            if ( !v51.second )
            {
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = 0;
              if ( *(char *)(((v3 + 752) >> 3) + 0x7FFF8000) < 0
                || *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) != 0
                && (char)((v3 + 15) & 7) >= *(_BYTE *)(((v3 + 783) >> 3) + 0x7FFF8000) )
              {
                __asan_report_store_n(v3 + 752, 32LL);
              }
              common::milog::MiLogStream::create(
                (common::milog::MiLogStream *)(v3 + 752),
                &common::milog::MiLogDefault::default_log_obj_,
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "rewriteRougeDungeonCellConfig",
                921);
              v52 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v3 + 752),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v53 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                      v52,
                      (const char (*)[32])"duplicated dir, cell_config_id:");
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v53,
                (const unsigned int *)(v3 + 48));
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 752));
              *(_DWORD *)(((v3 + 752) >> 3) + 0x7FFF8000) = -117901064;
              v2 = -1;
              v45 = 0;
            }
            else
            {
              v45 = 1;
            }
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 624) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 113) & 7) >= *(_BYTE *)(((v3 + 655) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 624, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 624),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRougeDungeonCellConfig",
            910);
          v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 624),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v42 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v41, (const char (*)[7])"cell: ");
          v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, config_id_0);
          v44 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(v43, (const char (*)[43])byte_1A98AE00);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, (const unsigned int *)(v3 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 624));
          *(_DWORD *)(((v3 + 624) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v45 = 0;
        }
        *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
        if ( v45 != 1 )
        {
          v54 = 0;
          goto LABEL_81;
        }
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v3 + 240));
      }
      v54 = 1;
LABEL_81:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 240) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 272) >> 3) + 0x7FFF8000) = -8;
      if ( v54 != 1 )
      {
        v55 = 0;
        goto LABEL_85;
      }
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueDungeonCellExcelConfig>,false,false> *const)(v3 + 176));
    }
    v55 = 1;
LABEL_85:
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    if ( v55 == 1 )
      v2 = 0;
  }
  std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 816));
  if ( v72 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8060) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 104) & 0xFFFFFFF8) >> 3));
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
  return v2;
};

// Line 930: range 0000000012831026-000000001283125E
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteMonsterPoolData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false> *v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::vector<unsigned int> *v5; // rax
  int32_t result; // eax
  data::RogueMonsterPoolExcelConfigMap *__for_range; // [rsp+18h] [rbp-B8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false>::reference v8; // [rsp+20h] [rbp-B0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig> >::type *config; // [rsp+30h] [rbp-A0h]
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::mapped_type *dungeon_diff_map; // [rsp+38h] [rbp-98h]
  char v11[144]; // [rsp+40h] [rbp-90h] BYREF

  v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false> *)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false>::__node_type *)"2 32 8 15 __for_begin:931 64 8 13 __for_end:931";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false>::__node_type *)ActivityRogueExcelConfigMgr::rewriteMonsterPoolData;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  __for_range = &this->rogue_monster_pool_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], txt_config_mgr);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::RogueMonsterPoolExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], txt_config_mgr);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::RogueMonsterPoolExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false>(
            v2 + 4,
            v2 + 8) )
  {
    v8 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false>::operator*(v2 + 4);
    std::get<0ul,unsigned int const,data::RogueMonsterPoolExcelConfig>(v8);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueMonsterPoolExcelConfig>(v8);
    dungeon_diff_map = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::operator[](
                         &this->dungeon_monster_pool_map_,
                         &config->dungeon_id);
    v5 = std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::operator[](
           dungeon_diff_map,
           &config->difficulty);
    std::vector<unsigned int>::operator=(v5, &config->pool_id_list);
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false,false>::operator++(v2 + 4);
  }
  result = 0;
  if ( v11 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueMonsterPoolExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return result;
};

// Line 941: range 0000000012831886-00000000128322BE
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteSequenceConfig(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  char *v6; // rsi
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  const unsigned int *p_sequence_id; // rcx
  const unsigned int *p_dungeon_id; // rdx
  __int64 v15; // rsi
  const unsigned int *v16; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>,bool> v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  int v22; // edx
  unsigned int *M_current; // r14
  unsigned int *v24; // rcx
  int32_t result; // eax
  data::RogueSequenceExcelConfigMap *__for_range; // [rsp+10h] [rbp-240h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::reference v27; // [rsp+18h] [rbp-238h]
  std::tuple_element<0,std::pair<unsigned int const,data::RogueSequenceExcelConfig> >::type *config_id; // [rsp+20h] [rbp-230h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueSequenceExcelConfig> >::type *config; // [rsp+28h] [rbp-228h]
  std::map<unsigned int,std::set<unsigned int>>::mapped_type *validate_seq_set; // [rsp+30h] [rbp-220h]
  std::unordered_map<unsigned int,std::vector<unsigned int>>::mapped_type *seq_vec; // [rsp+38h] [rbp-218h]
  std::unordered_map<unsigned int,std::vector<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-210h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::reference __in; // [rsp+48h] [rbp-208h]
  std::vector<unsigned int> *seq_vec_0; // [rsp+58h] [rbp-1F8h]
  char v35[496]; // [rsp+60h] [rbp-1F0h] BYREF

  v3 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(448LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 48 8 15 __for_begin:943 80 8 13 __for_end:943 112 8 25 dungeon_sequence_pair:953 144 8 13 sort"
                        "_comp:960 176 8 15 __for_begin:975 208 8 13 __for_end:975 240 32 9 <unknown> 304 32 9 <unknown> "
                        "368 48 23 dungeon_seq_set_map:942";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteSequenceConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = 61937;
  v5[536862721] = -234881024;
  v5[536862722] = 62194;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862725] = -234881024;
  v5[536862726] = 62194;
  v5[536862726] = -234881024;
  v5[536862727] = 62194;
  v5[536862728] = -219021312;
  v5[536862729] = 62194;
  v5[536862730] = -219021312;
  v5[536862731] = 62194;
  v5[536862733] = -202116109;
  std::map<unsigned int,std::set<unsigned int>>::map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 368));
  __for_range = &this->rogue_sequence_excel_config_map;
  if ( *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 48, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 48) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 80, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 80) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v6 = (char *)(v3 + 80);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 48),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 80)) )
      break;
    v27 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false> *const)(v3 + 48));
    config_id = std::get<0ul,unsigned int const,data::RogueSequenceExcelConfig>(v27);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueSequenceExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RogueSequenceExcelConfig>(v27);
    validate_seq_set = std::map<unsigned int,std::set<unsigned int>>::operator[](
                         (std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 368),
                         &config->dungeon_id);
    v7 = std::set<unsigned int>::insert(validate_seq_set, config_id);
    if ( !v7.second )
    {
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 240) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 64 + 79) & 7) >= *(_BYTE *)(((v3 + 271) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 240, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 240),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteSequenceConfig",
        948);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 240),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(v8, (const char (*)[38])byte_1A98B1C0);
      v10 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, &config->dungeon_id);
      v11 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v10, (const char (*)[12])" config_id:");
      v6 = (char *)config_id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 240));
      *(_DWORD *)(((v3 + 240) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v12 = 0;
    }
    else
    {
      seq_vec = std::unordered_map<unsigned int,std::vector<unsigned int>>::operator[](
                  &this->dungeon_sequence_map_,
                  &config->dungeon_id);
      std::vector<unsigned int>::push_back(seq_vec, config_id);
      *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = 0;
      p_sequence_id = &config->sequence_id;
      p_dungeon_id = &config->dungeon_id;
      v15 = *(unsigned __int8 *)(((v3 + 112) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v15 )
        __asan_report_store8(v3 + 112, v15);
      *(std::pair<unsigned int,unsigned int> *)(v3 + 112) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                              p_dungeon_id,
                                                              p_sequence_id);
      v6 = (char *)(v3 + 112);
      v17 = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::emplace<std::pair<unsigned int,unsigned int>&,unsigned int const&>(
              &this->dungeon_sequence_pair_config_id_map_,
              (std::pair<unsigned int,unsigned int> *)(v3 + 112),
              config_id,
              (std::pair<unsigned int,unsigned int> *)&this->dungeon_sequence_pair_config_id_map_,
              v16);
      if ( !v17.second )
      {
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 304) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 + 79) & 7) >= *(_BYTE *)(((v3 + 335) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 304, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 304),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteSequenceConfig",
          956);
        v18 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 304),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v19 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
                v18,
                (const char (*)[35])"dungeon_sequence_pair, dungeon_id:");
        v20 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, &config->dungeon_id);
        v21 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v20, (const char (*)[14])" sequence_id:");
        v6 = (char *)&config->sequence_id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, &config->sequence_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 304));
        *(_DWORD *)(((v3 + 304) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v12 = 0;
      }
      else
      {
        v12 = 1;
      }
    }
    *(_BYTE *)(((v3 + 112) >> 3) + 0x7FFF8000) = -8;
    if ( v12 != 1 )
    {
      v22 = 0;
      goto LABEL_25;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false> *const)(v3 + 48));
  }
  v22 = 1;
LABEL_25:
  *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
  if ( v22 == 1 )
  {
    *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 144, v6);
    *(_QWORD *)(v3 + 144) = this;
    __for_range_0 = &this->dungeon_sequence_map_;
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 176, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 176) = std::unordered_map<unsigned int,std::vector<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 208, v6);
    *(std::unordered_map<unsigned int,std::vector<unsigned int>>::iterator *)(v3 + 208) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(__for_range_0);
    while ( std::__detail::operator!=<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 176),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 208)) )
    {
      __in = std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 176));
      std::get<0ul,unsigned int const,std::vector<unsigned int>>(__in);
      seq_vec_0 = std::get<1ul,unsigned int const,std::vector<unsigned int>>(__in);
      M_current = std::vector<unsigned int>::end(seq_vec_0)._M_current;
      v24 = std::vector<unsigned int>::begin(seq_vec_0)._M_current;
      if ( *(_BYTE *)(((v3 + 144) >> 3) + 0x7FFF8000) )
        __asan_report_load8(v3 + 144);
      std::sort<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,ActivityRogueExcelConfigMgr::rewriteSequenceConfig(TxtConfigMgr &)::{lambda(unsigned int const&,unsigned int const&)#1}>(
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v24,
        (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
        *(ActivityRogueExcelConfigMgr::rewriteSequenceConfig::<lambda(const uint32_t&, const uint32_t&)> *)(v3 + 144));
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 176));
    }
    *(_BYTE *)(((v3 + 176) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 208) >> 3) + 0x7FFF8000) = -8;
    v2 = 0;
  }
  std::map<unsigned int,std::set<unsigned int>>::~map((std::map<unsigned int,std::set<unsigned int>> *const)(v3 + 368));
  result = v2;
  if ( v35 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 960: range 0000000012831260-0000000012831885
bool __cdecl ActivityRogueExcelConfigMgr::rewriteSequenceConfig(TxtConfigMgr &)::{lambda(unsigned int const&,unsigned int const&)#1}::operator()(
        const ActivityRogueExcelConfigMgr::rewriteSequenceConfig::<lambda(const uint32_t&, const uint32_t&)> *const __closure,
        const uint32_t *left_id,
        const uint32_t *right_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::RogueSequenceExcelConfigMap *p_rogue_sequence_excel_config_map; // rdx
  data::RogueSequenceExcelConfigMap *v7; // rdx
  bool v8; // al
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  bool result; // al
  data::RogueSequenceExcelConfigMap *v12; // rdx
  data::RogueSequenceExcelConfigMap *v13; // rdx
  bool v14; // al
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::pointer v17; // rax
  uint32_t sequence_id; // r14d
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::pointer v19; // rax
  char v21[336]; // [rsp+20h] [rbp-150h] BYREF

  v3 = (unsigned __int64)v21;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_3(288LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 13 left_iter:961 64 8 9 <unknown> 96 8 14 right_iter:967 128 8 9 <unknown> 160 32 9 <unkn"
                        "own> 224 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteSequenceConfig(TxtConfigMgr &)::{lambda(unsigned int const&,unsigned int const&)#1}::operator();
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862726] = -218959118;
  v5[536862728] = -202116109;
  if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  p_rogue_sequence_excel_config_map = &__closure->__this->rogue_sequence_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, left_id);
  *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::find(
                                                                                              p_rogue_sequence_excel_config_map,
                                                                                              left_id);
  v7 = &__closure->__this->rogue_sequence_excel_config_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, left_id);
  *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 32),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 64));
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
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
      4u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "operator()",
      964);
    v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 160),
           (const char (*)[16])"[CONFIG_ERROR] ");
    v10 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
            v9,
            (const char (*)[27])"seq id not found!, seq_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, left_id);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
    result = 0;
  }
  else
  {
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((unsigned __int64)__closure >> 3) + 0x7FFF8000) )
      __asan_report_load8(__closure);
    v12 = &__closure->__this->rogue_sequence_excel_config_map;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::find(
                                                                                                v12,
                                                                                                right_id);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    v13 = &__closure->__this->rogue_sequence_excel_config_map;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, right_id);
    *(std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::RogueSequenceExcelConfig>::end(v13);
    v14 = std::__detail::operator==<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false> *)(v3 + 128));
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v14 )
    {
      *(_DWORD *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "operator()",
        970);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              v15,
              (const char (*)[27])"seq id not found!, seq_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, right_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      result = 0;
    }
    else
    {
      v17 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false> *const)(v3 + 32));
      if ( *(_BYTE *)(((unsigned __int64)&v17->second.sequence_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v17->second.sequence_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v17->second.sequence_id);
      }
      sequence_id = v17->second.sequence_id;
      v19 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false>::operator->((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueSequenceExcelConfig>,false,false> *const)(v3 + 96));
      if ( *(_BYTE *)(((unsigned __int64)&v19->second.sequence_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&v19->second.sequence_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&v19->second.sequence_id);
      }
      result = sequence_id < v19->second.sequence_id;
    }
  }
  if ( v21 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 985: range 00000000128322C0-000000001283513F
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueCardData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  TxtConfigMgr *p_effect_key; // rsi
  unsigned int *v7; // r8
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  int stack_limit; // edx
  char v13; // al
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v14; // rax
  const unsigned int *v15; // r8
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  std::unordered_set<unsigned int> *v21; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeCardExcelConfig> >::type *v25; // rsi
  const unsigned int *p_related_add_weight; // rcx
  const unsigned int *p_related_group_id; // rdx
  __int64 v28; // rsi
  const unsigned int *v29; // rcx
  std::pair<unsigned int,unsigned int> *v30; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rdx
  std::unordered_set<unsigned int> *v34; // rdx
  std::pair<std::__detail::_Node_iterator<unsigned int,true,false>,bool> v35; // rax
  common::milog::MiLogStream *v36; // rax
  common::milog::MiLogStream *v37; // rdx
  common::milog::MiLogStream *v39; // rax
  common::milog::MiLogStream *v40; // rdx
  const unsigned int *v41; // r8
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  int v44; // eax
  std::pair<std::__detail::_Node_iterator<std::pair<const std::string,unsigned int>,false,true>,bool> v45; // rax
  common::milog::MiLogStream *v46; // rax
  common::milog::MiLogStream *v47; // rdx
  int v48; // edx
  uint32_t *p_weight; // rax
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rax
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  int v54; // eax
  ActivityRogueExcelConfigMgr *v55; // rdx
  common::milog::MiLogStream *v56; // rax
  common::milog::MiLogStream *v57; // rax
  data::RoguelikeCardType card_type; // ecx
  common::milog::MiLogStream *v59; // rax
  common::milog::MiLogStream *v60; // rax
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v63; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v64; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v65; // rax
  _DWORD *v66; // rdx
  char v67; // cl
  data::RoguelikeCardType *p_card_type; // rsi
  common::milog::MiLogStream *v69; // rax
  common::milog::MiLogStream *v70; // r14
  __int64 Description; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int> *v74; // rax
  std::unordered_map<data::RoguelikeCardType,unsigned int>::mapped_type *v75; // rax
  uint32_t *v76; // rdx
  char v77; // cl
  char *v78; // rsi
  __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >::reference v79; // rax
  int *v80; // rdx
  int v81; // ecx
  char v82; // al
  common::milog::MiLogStream *v83; // rax
  common::milog::MiLogStream *v84; // rax
  common::milog::MiLogStream *v85; // rax
  common::milog::MiLogStream *v86; // rax
  int v87; // eax
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *v88; // rax
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *v89; // rax
  std::map<unsigned int,unsigned int> *v90; // rax
  const unsigned int *v91; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v92; // rax
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rax
  common::milog::MiLogStream *v97; // rax
  common::milog::MiLogStream *v98; // rax
  common::milog::MiLogStream *v99; // rax
  common::milog::MiLogStream *v100; // rdx
  int v101; // eax
  common::milog::MiLogStream *v102; // rax
  common::milog::MiLogStream *v103; // rax
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rdx
  int v106; // esi
  int v107; // edx
  int v108; // eax
  common::milog::MiLogStream *v109; // rax
  common::milog::MiLogStream *v110; // rax
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>> *v111; // rax
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *v112; // rax
  std::map<unsigned int,unsigned int> *v113; // rax
  const unsigned int *v114; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v115; // rax
  common::milog::MiLogStream *v116; // rax
  common::milog::MiLogStream *v117; // rax
  common::milog::MiLogStream *v118; // rax
  common::milog::MiLogStream *v119; // rax
  std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>> *v120; // rax
  std::map<unsigned int,unsigned int> *v121; // rax
  const unsigned int *v122; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v123; // rax
  common::milog::MiLogStream *v124; // rax
  common::milog::MiLogStream *v125; // rax
  common::milog::MiLogStream *v126; // rax
  common::milog::MiLogStream *v127; // rax
  uint32_t prob; // [rsp+8h] [rbp-748h]
  uint32_t v130; // [rsp+8h] [rbp-748h]
  data::RoguelikeCardExcelConfigMap *__for_range; // [rsp+20h] [rbp-730h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false,false>::reference v133; // [rsp+28h] [rbp-728h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeCardExcelConfig> >::type *id; // [rsp+30h] [rbp-720h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCardExcelConfig> >::type *config; // [rsp+38h] [rbp-718h]
  data::RoguelikeCardPoolExcelConfigMap *__for_range_0; // [rsp+40h] [rbp-710h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false,false>::reference v137; // [rsp+48h] [rbp-708h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig> >::type *config_0; // [rsp+58h] [rbp-6F8h]
  data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+60h] [rbp-6F0h]
  std::vector<std::string> *__for_range_2; // [rsp+68h] [rbp-6E8h]
  __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> >::reference elem_str; // [rsp+70h] [rbp-6E0h]
  std::vector<unsigned int> *__for_range_1; // [rsp+78h] [rbp-6D8h]
  char v143[1744]; // [rsp+80h] [rbp-6D0h] BYREF

  v3 = (unsigned __int64)v143;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1696LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "34 32 4 9 count:994 48 4 12 rune_id:1087 64 4 8 key:1105 80 4 9 type:1108 96 8 15 __for_begin:98"
                        "7 128 8 13 __for_end:987 160 8 9 <unknown> 192 8 16 __for_begin:1050 224 8 14 __for_end:1050 256"
                        " 8 9 <unknown> 288 8 16 __for_begin:1087 320 8 14 __for_end:1087 352 8 16 __for_begin:1106 384 8"
                        " 14 __for_end:1106 416 32 9 <unknown> 480 32 9 <unknown> 544 32 9 <unknown> 608 32 9 <unknown> 6"
                        "72 32 9 <unknown> 736 32 9 <unknown> 800 32 9 <unknown> 864 32 9 <unknown> 928 32 9 <unknown> 99"
                        "2 32 9 <unknown> 1056 32 9 <unknown> 1120 32 9 <unknown> 1184 32 9 <unknown> 1248 32 9 <unknown>"
                        " 1312 32 9 <unknown> 1376 32 9 <unknown> 1440 32 9 <unknown> 1504 32 9 <unknown> 1568 32 9 <unkn"
                        "own> 1632 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueCardData;
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
  v5[536862750] = -218959118;
  v5[536862752] = -218959118;
  v5[536862754] = -218959118;
  v5[536862756] = -218959118;
  v5[536862758] = -218959118;
  v5[536862760] = -218959118;
  v5[536862762] = -218959118;
  v5[536862764] = -218959118;
  v5[536862766] = -218959118;
  v5[536862768] = -218959118;
  v5[536862770] = -218959118;
  v5[536862772] = -202116109;
  __for_range = &this->roguelike_card_excel_config_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeCardExcelConfig>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,data::RoguelikeCardExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeCardExcelConfig>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,data::RoguelikeCardExcelConfig>::end(__for_range);
  while ( 1 )
  {
    p_effect_key = (TxtConfigMgr *)(v3 + 128);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false> *)(v3 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false> *)(v3 + 128)) )
      break;
    v133 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false,false> *const)(v3 + 96));
    id = std::get<0ul,unsigned int const,data::RoguelikeCardExcelConfig>(v133);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCardExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeCardExcelConfig>(v133);
    if ( *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->type);
    }
    if ( config->type == ROGUELIKE_CARD_TPYE_NONE )
    {
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 416, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 416),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        991);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 416),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v8,
             (const char (*)[38])"invalid RoguelikeCardType, config_id:");
      p_effect_key = (TxtConfigMgr *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v9, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_74;
    }
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = 4;
    v11 = (((_BYTE)config + 20) & 7u) + 3;
    if ( *(_BYTE *)(((unsigned __int64)&config->stack_limit >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->stack_limit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(&config->stack_limit);
    }
    if ( config->stack_limit )
      stack_limit = config->stack_limit;
    else
      stack_limit = 1;
    v13 = *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v11) = v13 != 0;
      __asan_report_store4(v3 + 32, v11);
    }
    *(_DWORD *)(v3 + 32) = stack_limit;
    v14 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int &>(
            &this->card_pool_map,
            id,
            (unsigned int *)(v3 + 32),
            (const unsigned int *)&this->card_pool_map,
            v7);
    if ( !v14.second )
    {
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 480, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 480),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        997);
      v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 480),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v17 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v16,
              (const char (*)[29])"duplicated card_id, card_id:");
      p_effect_key = (TxtConfigMgr *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
      *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_74;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config->exclusive_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->exclusive_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->exclusive_group_id);
    }
    if ( config->exclusive_group_id )
    {
      v18 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
              &this->card_to_exclusive_group_map,
              id,
              &config->exclusive_group_id,
              (const unsigned int *)&this->card_to_exclusive_group_map,
              v15);
      if ( !v18.second )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueCardData",
          1004);
        v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v20 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
                v19,
                (const char (*)[29])"duplicated card_id, card_id:");
        p_effect_key = (TxtConfigMgr *)id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_74;
      }
      v21 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
              &this->exclusive_group_to_card_map,
              &config->exclusive_group_id);
      v22 = std::unordered_set<unsigned int>::insert(v21, id);
      if ( !v22.second )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueCardData",
          1009);
        v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 608),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v24 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v23,
                (const char (*)[45])"duplicated exclusive_group card_id, card_id:");
        p_effect_key = (TxtConfigMgr *)id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
        *(_DWORD *)(((v3 + 608) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
        goto LABEL_74;
      }
    }
    v25 = (std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeCardExcelConfig> >::type *)((((_BYTE)config + 28) & 7u) + 3);
    if ( *(_BYTE *)(((unsigned __int64)&config->related_group_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->related_group_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&config->related_group_id);
    }
    if ( !config->related_group_id )
      goto LABEL_205;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    p_related_add_weight = &config->related_add_weight;
    p_related_group_id = &config->related_group_id;
    v28 = *(unsigned __int8 *)(((v3 + 160) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v28 )
      __asan_report_store8(v3 + 160, v28);
    *(std::pair<unsigned int,unsigned int> *)(v3 + 160) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                            p_related_group_id,
                                                            p_related_add_weight);
    v31 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
            &this->card_to_related_group_map,
            id,
            (std::pair<unsigned int,unsigned int> *)(v3 + 160),
            v29,
            v30);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( !v31.second )
    {
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 672) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 703) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 672, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 672),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1017);
      v32 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 672),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v33 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
              v32,
              (const char (*)[29])"duplicated card_id, card_id:");
      p_effect_key = (TxtConfigMgr *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v33, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 672));
      *(_DWORD *)(((v3 + 672) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
      goto LABEL_74;
    }
    v34 = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::operator[](
            &this->related_group_to_card_map,
            &config->related_group_id);
    v25 = id;
    v35 = std::unordered_set<unsigned int>::insert(v34, id);
    if ( !v35.second )
    {
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 736) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 767) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 736, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 736),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1022);
      v36 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 736),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v37 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v36,
              (const char (*)[43])"duplicated related_group card_id, card_id:");
      p_effect_key = (TxtConfigMgr *)id;
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v37, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 736));
      *(_DWORD *)(((v3 + 736) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v10 = 0;
    }
    else
    {
LABEL_205:
      if ( !std::vector<unsigned int>::empty(&config->related_rune_list)
        && !std::vector<std::string>::empty(&config->related_element_list) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueCardData",
          1029);
        v39 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 800),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v40 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(
                v39,
                (const char (*)[53])"card cannot config related rune or element, card_id:");
        p_effect_key = (TxtConfigMgr *)id;
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v40, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 800));
        *(_DWORD *)(((v3 + 800) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v10 = 0;
      }
      else
      {
        if ( *(char *)(((unsigned __int64)&config->is_clear_at_next_level >> 3) + 0x7FFF8000) < 0 )
          __asan_report_load1(&config->is_clear_at_next_level, v25, &config->is_clear_at_next_level);
        p_effect_key = txt_config_mgr;
        if ( ActivityRogueExcelConfigMgr::rewriteRoguelikeEffectConfig(
               this,
               txt_config_mgr,
               &config->effect_config,
               0,
               config->is_clear_at_next_level) )
        {
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
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueCardData",
            1035);
          v42 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 864),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v43 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
                  v42,
                  (const char (*)[46])"rewriteRoguelikeEffectConfig failed, card_id:");
          p_effect_key = (TxtConfigMgr *)id;
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 864));
          *(_DWORD *)(((v3 + 864) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v10 = 0;
        }
        else
        {
          v44 = *(unsigned __int8 *)(((unsigned __int64)&config->effect_config.effect_type >> 3) + 0x7FFF8000);
          if ( (_BYTE)v44 != 0 && (char)v44 <= 3 )
            __asan_report_load4(&config->effect_config.effect_type);
          if ( (config->effect_config.effect_type == ROGUELIKE_EFFECT_STATIC_COMBAT
             || config->effect_config.effect_type == ROGUELIKE_EFFECT_DYNAMIC_COMBAT)
            && (p_effect_key = (TxtConfigMgr *)&config->effect_config.effect_key,
                v45 = std::unordered_map<std::string,unsigned int>::emplace<std::string const&,unsigned int const&>(
                        &this->sgv_to_card_map,
                        &config->effect_config.effect_key,
                        id,
                        (const std::string *)&this->sgv_to_card_map,
                        v41),
                !v45.second) )
          {
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 928) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 959) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 928, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 928),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRogueCardData",
              1044);
            v46 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 928),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v47 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
                    v46,
                    (const char (*)[47])"[ROGUELIKE] duplicate sgv_key failed, card_id:");
            p_effect_key = (TxtConfigMgr *)id;
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v47, id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 928));
            *(_DWORD *)(((v3 + 928) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v10 = 0;
          }
          else
          {
            v10 = 1;
          }
        }
      }
    }
LABEL_74:
    *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
    if ( v10 != 1 )
    {
      v48 = 0;
      goto LABEL_78;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardExcelConfig>,false,false> *const)(v3 + 96));
  }
  v48 = 1;
LABEL_78:
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v48 != 1 )
    goto LABEL_199;
  __for_range_0 = &this->roguelike_card_pool_excel_config_map;
  *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 192, p_effect_key);
  *(std::unordered_map<unsigned int,data::RoguelikeCardPoolExcelConfig>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,data::RoguelikeCardPoolExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 224, p_effect_key);
  *(std::unordered_map<unsigned int,data::RoguelikeCardPoolExcelConfig>::iterator *)(v3 + 224) = std::unordered_map<unsigned int,data::RoguelikeCardPoolExcelConfig>::end(__for_range_0);
  while ( 2 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false> *)(v3 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false> *)(v3 + 224)) )
    {
      v54 = 1;
      goto LABEL_197;
    }
    v137 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false,false> *const)(v3 + 192));
    std::get<0ul,unsigned int const,data::RoguelikeCardPoolExcelConfig>(v137);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeCardPoolExcelConfig>(v137);
    p_weight = &config_0->weight;
    if ( *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_weight >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_weight);
    }
    if ( !config_0->weight )
    {
      *(_DWORD *)(((v3 + 992) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 992) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1023) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 992, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 992),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1054);
      v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 992),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v51 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v50, (const char (*)[46])byte_1A98B840);
      v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, &config_0->card_id);
      v53 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v52, (const char (*)[16])", card_pool_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &config_0->card_pool_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 992));
      v2 = -1;
      v54 = 0;
      goto LABEL_197;
    }
    v55 = this;
    if ( *(_BYTE *)(((unsigned __int64)&config_0->card_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_0->card_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_0->card_id);
    }
    card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(v55, config_0->card_id);
    if ( !card_config_ptr )
    {
      *(_DWORD *)(((v3 + 1056) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1056) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1087) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1056, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1056),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1060);
      v56 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1056),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v57 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(v56, (const char (*)[41])byte_1A98B8E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v57, &config_0->card_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1056));
      v2 = -1;
      v54 = 0;
      goto LABEL_197;
    }
    if ( *(_BYTE *)(((unsigned __int64)&config_0->card_type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_0->card_type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_0->card_type);
    }
    card_type = config_0->card_type;
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_config_ptr->type);
    }
    if ( card_type != card_config_ptr->type )
    {
      *(_DWORD *)(((v3 + 1120) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1120) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1151) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1120, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1120),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1066);
      v59 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1120),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v60 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v59, (const char (*)[62])byte_1A98B940);
      v61 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v60, &config_0->card_id);
      v62 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v61, (const char (*)[16])", card_pool_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, &config_0->card_pool_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1120));
      v2 = -1;
      v54 = 0;
      goto LABEL_197;
    }
    v63 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
            &this->depot_card_type_prob_map,
            &config_0->card_pool_id);
    if ( common::tools::MiscUtils::isContains<std::unordered_map<data::RoguelikeCardType,unsigned int>,data::RoguelikeCardType>(
           v63,
           &config_0->card_type) )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_0->prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->prob >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config_0->prob);
      }
      prob = config_0->prob;
      v64 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
              &this->depot_card_type_prob_map,
              &config_0->card_pool_id);
      p_card_type = &config_0->card_type;
      v65 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](v64, &config_0->card_type);
      v66 = v65;
      v67 = *(_BYTE *)(((unsigned __int64)v65 >> 3) + 0x7FFF8000);
      LOBYTE(p_card_type) = v67 != 0;
      if ( v67 != 0 && (char)(((unsigned __int8)v65 & 7) + 3) >= v67 )
        __asan_report_load4(v65);
      if ( prob != *v66 )
      {
        *(_DWORD *)(((v3 + 1184) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v3 + 1184) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) != 0
          && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1215) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v3 + 1184, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v3 + 1184),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueCardData",
          1074);
        v69 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 1184),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v70 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v69, (const char (*)[56])byte_1A98B9A0);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config_0->card_type >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config_0->card_type >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config_0->card_type);
        }
        Description = (__int64)data::getDescription(config_0->card_type);
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          Description = __asan_report_store8(v3 + 256, byte_1A98B9A0);
        *(_QWORD *)(v3 + 256) = Description;
        v72 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v70, (const char *const *)(v3 + 256));
        v73 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                v72,
                (const char (*)[16])", card_pool_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, &config_0->card_pool_id);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1184));
        v2 = -1;
        v54 = 0;
        goto LABEL_197;
      }
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&config_0->prob >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)config_0 + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config_0->prob >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(&config_0->prob);
      }
      v130 = config_0->prob;
      v74 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::operator[](
              &this->depot_card_type_prob_map,
              &config_0->card_pool_id);
      p_card_type = &config_0->card_type;
      v75 = std::unordered_map<data::RoguelikeCardType,unsigned int>::operator[](v74, &config_0->card_type);
      v76 = v75;
      v77 = *(_BYTE *)(((unsigned __int64)v75 >> 3) + 0x7FFF8000);
      LOBYTE(p_card_type) = v77 != 0;
      if ( v77 != 0 && (char)(((unsigned __int8)v75 & 7) + 3) >= v77 )
        __asan_report_store4(v75, p_card_type);
      *v76 = v130;
    }
    if ( !std::vector<unsigned int>::empty(&card_config_ptr->related_rune_list) )
    {
      __for_range_1 = &card_config_ptr->related_rune_list;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 288, p_card_type);
      *(std::vector<unsigned int>::iterator *)(v3 + 288) = std::vector<unsigned int>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 320, p_card_type);
      *(std::vector<unsigned int>::iterator *)(v3 + 320) = std::vector<unsigned int>::end(__for_range_1);
      while ( 1 )
      {
        v78 = (char *)(v3 + 320);
        if ( !__gnu_cxx::operator!=<unsigned int *,std::vector<unsigned int>>(
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 288),
                (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v3 + 320)) )
        {
          v87 = 1;
          goto LABEL_144;
        }
        *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = 4;
        v79 = __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
        v80 = (int *)v79;
        if ( *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v79 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v79 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v79);
        }
        v81 = *v80;
        v82 = *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000);
        if ( v82 != 0 && v82 <= 3 )
        {
          LOBYTE(v78) = v82 != 0;
          __asan_report_store4(v3 + 48, v78);
        }
        *(_DWORD *)(v3 + 48) = v81;
        if ( !data::ActivityRogueExcelConfigMgrBase::findRoguelikeRuneExcelConfig(this, *(unsigned int *)(v3 + 48)) )
        {
          *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1248) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1279) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1248, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1248),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueCardData",
            1091);
          v83 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1248),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v84 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(v83, (const char (*)[48])byte_1A98BA00);
          v85 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v84,
                  (const unsigned int *)(v3 + 48));
          v86 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v85, (const char (*)[11])", card_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v86, &config_0->card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1248));
          *(_DWORD *)(((v3 + 1248) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v87 = 0;
          goto LABEL_144;
        }
        v88 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::operator[](
                &this->rune_card_depot_map,
                (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::key_type *)(v3 + 48));
        v89 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
                v88,
                &config_0->card_pool_id);
        v90 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
                v89,
                &config_0->card_type);
        v92 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                v90,
                &config_0->card_id,
                &config_0->weight,
                (const unsigned int *)v90,
                v91);
        if ( !v92.second )
          break;
        __gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *const)(v3 + 288));
      }
      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v3 + 1312) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1343) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 1312, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 1312),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCardData",
        1096);
      v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 1312),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v94 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              v93,
              (const char (*)[43])"duplicate card_id in a card_pool, card_id:");
      v95 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v94, &config_0->card_id);
      v96 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v95, (const char (*)[16])", card_pool_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, &config_0->card_pool_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1312));
      *(_DWORD *)(((v3 + 1312) >> 3) + 0x7FFF8000) = -117901064;
      v2 = -1;
      v87 = 0;
LABEL_144:
      *(_BYTE *)(((v3 + 48) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
      if ( v87 != 1 )
      {
        v54 = 0;
        goto LABEL_197;
      }
      goto LABEL_195;
    }
    if ( !std::vector<std::string>::empty(&card_config_ptr->related_element_list) )
    {
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v3 + 64, p_card_type);
      *(_DWORD *)(v3 + 64) = 0;
      __for_range_2 = &card_config_ptr->related_element_list;
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 352, p_card_type);
      *(std::vector<std::string>::iterator *)(v3 + 352) = std::vector<std::string>::begin(__for_range_2);
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 384, p_card_type);
      *(std::vector<std::string>::iterator *)(v3 + 384) = std::vector<std::string>::end(__for_range_2);
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 352),
                (const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *)(v3 + 384)) )
      {
        elem_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*((const __gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 352));
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = 4;
        if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v3 + 80, v3 + 384);
        *(_DWORD *)(v3 + 80) = 0;
        if ( !data::enumStrToVal(elem_str, (data::ElementType *)(v3 + 80)) )
        {
          *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1376) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1407) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1376, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1376),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueCardData",
            1111);
          v97 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v3 + 1376),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v98 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                  v97,
                  (const char (*)[44])"card related element config error, card_id:");
          v99 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v98, &config_0->card_id);
          v100 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v99, (const char (*)[12])", elem_str:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v100, elem_str);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1376));
          *(_DWORD *)(((v3 + 1376) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v101 = 0;
        }
        else
        {
          if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v3 + 80);
          if ( *(_DWORD *)(v3 + 80) <= 0x1Fu )
          {
            if ( *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 80);
            v106 = 1 << *(_DWORD *)(v3 + 80);
            if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
              __asan_report_load4(v3 + 64);
            *(_DWORD *)(v3 + 64) |= v106;
            v101 = 1;
          }
          else
          {
            *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1440) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 1471) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1440, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1440),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRogueCardData",
              1116);
            v102 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1440),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v103 = common::milog::MiLogStream::operator<<<char [54],(char *[54])0>(
                     v102,
                     (const char (*)[54])"card related element value exceed 32, error, card_id:");
            v104 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v103, &config_0->card_id);
            v105 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(
                     v104,
                     (const char (*)[12])", elem_str:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v105, elem_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1440));
            *(_DWORD *)(((v3 + 1440) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v101 = 0;
          }
        }
        *(_BYTE *)(((v3 + 80) >> 3) + 0x7FFF8000) = -8;
        if ( v101 != 1 )
        {
          v107 = 0;
          goto LABEL_176;
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++((__gnu_cxx::__normal_iterator<std::string*,std::vector<std::string> > *const)(v3 + 352));
      }
      v107 = 1;
LABEL_176:
      *(_BYTE *)(((v3 + 352) >> 3) + 0x7FFF8000) = -8;
      *(_BYTE *)(((v3 + 384) >> 3) + 0x7FFF8000) = -8;
      if ( v107 == 1 )
      {
        if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v3 + 64);
        if ( *(_DWORD *)(v3 + 64) )
        {
          v111 = std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::operator[](
                   &this->elem_card_depot_map,
                   (const std::unordered_map<unsigned int,std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>>::key_type *)(v3 + 64));
          v112 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
                   v111,
                   &config_0->card_pool_id);
          v113 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
                   v112,
                   &config_0->card_type);
          v115 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                   v113,
                   &config_0->card_id,
                   &config_0->weight,
                   (const unsigned int *)v113,
                   v114);
          if ( !v115.second )
          {
            *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 1568) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 1599) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 1568, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1568),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRogueCardData",
              1128);
            v116 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     (common::milog::MiLogStream *const)(v3 + 1568),
                     (const char (*)[16])"[CONFIG_ERROR] ");
            v117 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
                     v116,
                     (const char (*)[43])"duplicate card_id in a card_pool, card_id:");
            v118 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v117, &config_0->card_id);
            v119 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v118,
                     (const char (*)[16])", card_pool_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v119, &config_0->card_pool_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1568));
            *(_DWORD *)(((v3 + 1568) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v108 = 0;
          }
          else
          {
            v108 = 1;
          }
        }
        else
        {
          *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v3 + 1504) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) != 0
            && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 1535) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v3 + 1504, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v3 + 1504),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueCardData",
            1123);
          v109 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v3 + 1504),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v110 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                   v109,
                   (const char (*)[44])"card related element config error, card_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v110, &config_0->card_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1504));
          *(_DWORD *)(((v3 + 1504) >> 3) + 0x7FFF8000) = -117901064;
          v2 = -1;
          v108 = 0;
        }
      }
      else
      {
        v108 = 0;
      }
      *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
      if ( v108 != 1 )
      {
        v54 = 0;
        goto LABEL_197;
      }
      goto LABEL_195;
    }
    v120 = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>>::operator[](
             &this->basic_card_depot_map,
             &config_0->card_pool_id);
    v121 = std::unordered_map<data::RoguelikeCardType,std::map<unsigned int,unsigned int>>::operator[](
             v120,
             &config_0->card_type);
    v123 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
             v121,
             &config_0->card_id,
             &config_0->weight,
             (const unsigned int *)v121,
             v122);
    if ( v123.second )
    {
LABEL_195:
      std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCardPoolExcelConfig>,false,false> *const)(v3 + 192));
      continue;
    }
    break;
  }
  *(_DWORD *)(((v3 + 1632) >> 3) + 0x7FFF8000) = 0;
  if ( *(char *)(((v3 + 1632) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 1663) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 1632, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 1632),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "rewriteRogueCardData",
    1137);
  v124 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
           (common::milog::MiLogStream *const)(v3 + 1632),
           (const char (*)[16])"[CONFIG_ERROR] ");
  v125 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
           v124,
           (const char (*)[43])"duplicate card_id in a card_pool, card_id:");
  v126 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v125, &config_0->card_id);
  v127 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v126, (const char (*)[16])", card_pool_id:");
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v127, &config_0->card_pool_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1632));
  v2 = -1;
  v54 = 0;
LABEL_197:
  if ( v54 == 1 )
    v2 = 0;
LABEL_199:
  if ( v143 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8074) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 124) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8080) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8088) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8090) = 0;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8098) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80A8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B0) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80B8) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80C0) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80C8) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D0) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1696LL, v143);
  }
  return v2;
};

// Line 1147: range 0000000012835140-0000000012836151
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueCardData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *v6; // rsi
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  int v9; // edx
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *v10; // rsi
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int v13; // edx
  char *v14; // rsi
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  int v19; // eax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rdx
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // r14
  __int64 v24; // rsi
  __int64 v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rdx
  int v28; // eax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  uint32_t total_weight; // [rsp+1Ch] [rbp-354h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range; // [rsp+20h] [rbp-350h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v34; // [rsp+28h] [rbp-348h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *id; // [rsp+30h] [rbp-340h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *card_set; // [rsp+38h] [rbp-338h]
  std::unordered_map<unsigned int,std::unordered_set<unsigned int>> *__for_range_0; // [rsp+40h] [rbp-330h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false>::reference v38; // [rsp+48h] [rbp-328h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *id_0; // [rsp+50h] [rbp-320h]
  std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *card_set_0; // [rsp+58h] [rbp-318h]
  std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>> *__for_range_1; // [rsp+60h] [rbp-310h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false,false>::reference v42; // [rsp+68h] [rbp-308h]
  std::tuple_element<0,std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > >::type *depot_id; // [rsp+70h] [rbp-300h]
  const std::tuple_element<1,std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> > >::type *__for_range_2; // [rsp+80h] [rbp-2F0h]
  std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false>::reference v45; // [rsp+88h] [rbp-2E8h]
  std::tuple_element<0,std::pair<const data::RoguelikeCardType,unsigned int> >::type *type; // [rsp+90h] [rbp-2E0h]
  std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *weight; // [rsp+98h] [rbp-2D8h]
  char v48[720]; // [rsp+A0h] [rbp-2D0h] BYREF

  v3 = (unsigned __int64)v48;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(672LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "15 32 8 16 __for_begin:1148 64 8 14 __for_end:1148 96 8 16 __for_begin:1156 128 8 14 __for_end:1"
                        "156 160 8 16 __for_begin:1164 192 8 14 __for_end:1164 224 8 16 __for_begin:1167 256 8 14 __for_e"
                        "nd:1167 288 8 9 <unknown> 320 8 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unkn"
                        "own> 544 32 9 <unknown> 608 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::checkRogueCardData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862726] = -218959360;
  v5[536862727] = -218959360;
  v5[536862728] = -218959360;
  v5[536862729] = -218959360;
  v5[536862730] = -218959360;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -218959118;
  v5[536862738] = -218959118;
  v5[536862740] = -202116109;
  __for_range = &this->exclusive_group_to_card_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v6 = (std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)(v3 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 64)) )
    {
      v9 = 1;
      goto LABEL_16;
    }
    v34 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 32));
    id = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v34);
    card_set = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v34);
    if ( std::unordered_set<unsigned int>::size(card_set) <= 1 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 32));
  }
  if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
    || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
    && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
  {
    __asan_report_store_n(v3 + 352, 32LL);
  }
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)(v3 + 352),
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "checkRogueCardData",
    1152);
  v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 352),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v8 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v7, (const char (*)[65])byte_1A98BDA0);
  v6 = id;
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
  *(_DWORD *)(((v3 + 352) >> 3) + 0x7FFF8000) = -117901064;
  v2 = -1;
  v9 = 0;
LABEL_16:
  *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) = -8;
  if ( v9 == 1 )
  {
    __for_range_0 = &this->related_group_to_card_map;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v6);
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v6);
    *(std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::iterator *)(v3 + 128) = std::unordered_map<unsigned int,std::unordered_set<unsigned int>>::end(__for_range_0);
    while ( 1 )
    {
      v10 = (std::tuple_element<0,std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)(v3 + 128);
      if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false>(
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 96),
              (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false> *)(v3 + 128)) )
      {
        v13 = 1;
        goto LABEL_29;
      }
      v38 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 96));
      id_0 = std::get<0ul,unsigned int const,std::unordered_set<unsigned int>>(v38);
      card_set_0 = (std::tuple_element<1,const std::pair<unsigned int const,std::unordered_set<unsigned int> > >::type *)std::get<1ul,unsigned int const,std::unordered_set<unsigned int>>(v38);
      if ( std::unordered_set<unsigned int>::size(card_set_0) <= 1 )
        break;
      std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_set<unsigned int> >,false,false> *const)(v3 + 96));
    }
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v3 + 416) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) != 0
      && (char)((v3 - 96 + 31) & 7) >= *(_BYTE *)(((v3 + 447) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v3 + 416, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v3 + 416),
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "checkRogueCardData",
      1160);
    v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
            (common::milog::MiLogStream *const)(v3 + 416),
            (const char (*)[16])"[CONFIG_ERROR] ");
    v12 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(v11, (const char (*)[65])byte_1A98BE20);
    v10 = id_0;
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, id_0);
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
    *(_DWORD *)(((v3 + 416) >> 3) + 0x7FFF8000) = -117901064;
    v2 = -1;
    v13 = 0;
LABEL_29:
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    if ( v13 == 1 )
    {
      __for_range_1 = &this->depot_card_type_prob_map;
      *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 160, v10);
      *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::iterator *)(v3 + 160) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::begin(__for_range_1);
      *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) = 0;
      if ( *(_BYTE *)(((v3 + 192) >> 3) + 0x7FFF8000) )
        __asan_report_store8(v3 + 192, v10);
      *(std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::iterator *)(v3 + 192) = std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>::end(__for_range_1);
      while ( 1 )
      {
        v14 = (char *)(v3 + 192);
        if ( !std::__detail::operator!=<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false>(
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false> *)(v3 + 160),
                (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false> *)(v3 + 192)) )
        {
          v28 = 1;
          goto LABEL_74;
        }
        v42 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false,false> *const)(v3 + 160));
        depot_id = std::get<0ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>(v42);
        total_weight = 0;
        __for_range_2 = std::get<1ul,unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>(v42);
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 224, v14);
        *(std::unordered_map<data::RoguelikeCardType,unsigned int>::const_iterator *)(v3 + 224) = std::unordered_map<data::RoguelikeCardType,unsigned int>::begin(__for_range_2);
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v3 + 256, v14);
        *(std::unordered_map<data::RoguelikeCardType,unsigned int>::const_iterator *)(v3 + 256) = std::unordered_map<data::RoguelikeCardType,unsigned int>::end(__for_range_2);
        while ( 1 )
        {
          if ( !std::__detail::operator!=<std::pair<data::RoguelikeCardType const,unsigned int>,false>(
                  (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)(v3 + 224),
                  (const std::__detail::_Node_iterator_base<std::pair<const data::RoguelikeCardType,unsigned int>,false> *)(v3 + 256)) )
          {
            v19 = 1;
            goto LABEL_66;
          }
          v45 = std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator*((const std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)(v3 + 224));
          type = std::get<0ul,data::RoguelikeCardType const,unsigned int>(v45);
          weight = (std::tuple_element<1,const std::pair<const data::RoguelikeCardType,unsigned int> >::type *)std::get<1ul,data::RoguelikeCardType const,unsigned int>(v45);
          if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(type);
          }
          if ( *type == ROGUELIKE_CARD_TPYE_NONE )
          {
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = 0;
            if ( *(char *)(((v3 + 480) >> 3) + 0x7FFF8000) < 0
              || *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) != 0
              && (char)((v3 - 96 + 95) & 7) >= *(_BYTE *)(((v3 + 511) >> 3) + 0x7FFF8000) )
            {
              __asan_report_store_n(v3 + 480, 32LL);
            }
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 480),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "checkRogueCardData",
              1171);
            v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v3 + 480),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v16 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
                    v15,
                    (const char (*)[19])"invalid card type:");
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = 0;
            v17 = ((unsigned __int8)type & 7u) + 3;
            if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
              && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
            {
              __asan_report_load4(type);
            }
            v18 = (__int64)data::enumValToStr(*type, v17);
            if ( *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) )
              v18 = __asan_report_store8(v3 + 288, v17);
            *(_QWORD *)(v3 + 288) = v18;
            common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v16, (const char *const *)(v3 + 288));
            *(_BYTE *)(((v3 + 288) >> 3) + 0x7FFF8000) = -8;
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
            *(_DWORD *)(((v3 + 480) >> 3) + 0x7FFF8000) = -117901064;
            v2 = -1;
            v19 = 0;
            goto LABEL_66;
          }
          if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(weight);
          }
          if ( *weight > 0x64 )
            break;
          if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(weight);
          }
          total_weight += *weight;
          std::__detail::_Node_const_iterator<std::pair<data::RoguelikeCardType const,unsigned int>,false,false>::operator++((std::__detail::_Node_const_iterator<std::pair<const data::RoguelikeCardType,unsigned int>,false,false> *const)(v3 + 224));
        }
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueCardData",
          1176);
        v20 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v3 + 544),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v21 = common::milog::MiLogStream::operator<<<char [53],(char *[53])0>(v20, (const char (*)[53])byte_1A98BEE0);
        v22 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v21, depot_id);
        v23 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v22, (const char (*)[10])byte_1A98BF40);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = 0;
        v24 = ((unsigned __int8)type & 7u) + 3;
        if ( *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)type & 7) + 3) >= *(_BYTE *)(((unsigned __int64)type >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(type);
        }
        v25 = (__int64)data::enumValToStr(*type, v24);
        if ( *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) )
          v25 = __asan_report_store8(v3 + 320, v24);
        *(_QWORD *)(v3 + 320) = v25;
        v26 = common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v23, (const char *const *)(v3 + 320));
        v27 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v26, (const char (*)[16])byte_1A98BF80);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v27, weight);
        *(_BYTE *)(((v3 + 320) >> 3) + 0x7FFF8000) = -8;
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 544));
        *(_DWORD *)(((v3 + 544) >> 3) + 0x7FFF8000) = -117901064;
        v2 = -1;
        v19 = 0;
LABEL_66:
        *(_BYTE *)(((v3 + 224) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v3 + 256) >> 3) + 0x7FFF8000) = -8;
        if ( v19 != 1 )
        {
          v28 = 0;
          goto LABEL_74;
        }
        if ( total_weight <= 0x63 )
          break;
        std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::unordered_map<data::RoguelikeCardType,unsigned int> >,false,false> *const)(v3 + 160));
      }
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueCardData",
        1183);
      v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 608),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v30 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(v29, (const char (*)[62])byte_1A98BFC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, depot_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 608));
      v2 = -1;
      v28 = 0;
LABEL_74:
      if ( v28 == 1 )
        v2 = 0;
    }
  }
  if ( v48 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8044) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 76) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8050) = -168430091;
  }
  return v2;
};

// Line 1192: range 0000000012836152-0000000012836BA3
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueCurseData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  bool *p_is_clear_at_next_level; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  const unsigned int *v9; // r8
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  int v12; // eax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>,bool> v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rdx
  std::map<unsigned int,unsigned int> *v18; // rax
  const unsigned int *v19; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,unsigned int> >,bool> v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-204h]
  data::RoguelikeCurseExcelConfigMap *__for_range; // [rsp+20h] [rbp-200h]
  data::RoguelikeCursePoolExcelConfigMap *__for_range_0; // [rsp+28h] [rbp-1F8h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false,false>::reference v30; // [rsp+30h] [rbp-1F0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig> >::type *config_0; // [rsp+40h] [rbp-1E0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false,false>::reference v32; // [rsp+48h] [rbp-1D8h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeCurseExcelConfig> >::type *id; // [rsp+50h] [rbp-1D0h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCurseExcelConfig> >::type *config; // [rsp+58h] [rbp-1C8h]
  char v35[448]; // [rsp+60h] [rbp-1C0h] BYREF

  v2 = (unsigned __int64)v35;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(416LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "8 32 8 16 __for_begin:1194 64 8 14 __for_end:1194 96 8 16 __for_begin:1217 128 8 14 __for_end:12"
                        "17 160 32 9 <unknown> 224 32 9 <unknown> 288 32 9 <unknown> 352 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueCurseData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -218959118;
  v4[536862730] = -218959118;
  v4[536862732] = -202116109;
  ret = 0;
  __for_range = &this->roguelike_curse_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeCurseExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoguelikeCurseExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeCurseExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoguelikeCurseExcelConfig>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false> *)(v2 + 64)) )
      break;
    v32 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RoguelikeCurseExcelConfig>(v32);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCurseExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeCurseExcelConfig>(v32);
    p_is_clear_at_next_level = &config->is_clear_at_next_level;
    v7 = ((_BYTE)config + 105) & 7;
    v8 = (*(_BYTE *)(((unsigned __int64)p_is_clear_at_next_level >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v7 >= *(_BYTE *)(((unsigned __int64)p_is_clear_at_next_level >> 3) + 0x7FFF8000));
    if ( (_BYTE)v8 )
      __asan_report_load1(p_is_clear_at_next_level, v7, v8);
    if ( ActivityRogueExcelConfigMgr::rewriteRoguelikeEffectConfig(
           this,
           txt_config_mgr,
           &config->effect_config,
           0,
           config->is_clear_at_next_level) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCurseData",
        1200);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              v10,
              (const char (*)[59])"[ROGUELIKE] rewriteRoguelikeEffectConfig failed, curse_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
      *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    else
    {
      v12 = *(unsigned __int8 *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000);
      if ( (_BYTE)v12 != 0 && (char)v12 <= 3 )
        __asan_report_load4(&config->level);
      if ( config->level )
      {
        v15 = std::unordered_map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
                &this->curse_count_map,
                id,
                &config->level,
                (const unsigned int *)&this->curse_count_map,
                v9);
        if ( !v15.second )
        {
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
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
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueCurseData",
            1212);
          v16 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 288),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v17 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
                  v16,
                  (const char (*)[32])"[ROGUELIKE] duplicate curse_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v17, id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 288));
          *(_DWORD *)(((v2 + 288) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 224) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 96 + 95) & 7) >= *(_BYTE *)(((v2 + 255) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 224, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 224),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueCurseData",
          1206);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 224),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [37],(char *[37])0>(
                v13,
                (const char (*)[37])"[ROGUELIKE] curse level 0, curse_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
        *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCurseExcelConfig>,false,false> *const)(v2 + 32));
  }
  *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->roguelike_curse_pool_excel_config_map;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v5);
  *(std::unordered_map<unsigned int,data::RoguelikeCursePoolExcelConfig>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,data::RoguelikeCursePoolExcelConfig>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,data::RoguelikeCursePoolExcelConfig>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,data::RoguelikeCursePoolExcelConfig>::end(__for_range_0);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false> *)(v2 + 96),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false> *)(v2 + 128)) )
  {
    v30 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false,false> *const)(v2 + 96));
    std::get<0ul,unsigned int const,data::RoguelikeCursePoolExcelConfig>(v30);
    config_0 = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeCursePoolExcelConfig>(v30);
    v18 = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::operator[](
            &this->curse_pool_weight_map,
            &config_0->pool_id);
    v20 = std::map<unsigned int,unsigned int>::emplace<unsigned int const&,unsigned int const&>(
            v18,
            &config_0->group_id,
            &config_0->weight,
            (const unsigned int *)v18,
            v19);
    if ( !v20.second )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueCurseData",
        1221);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
              v21,
              (const char (*)[38])"[ROGUELIKE] duplicate curse_group_id:");
      v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &config_0->group_id);
      v24 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
              v23,
              (const char (*)[20])", in curse_pool_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config_0->pool_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 352));
      *(_DWORD *)(((v2 + 352) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeCursePoolExcelConfig>,false,false> *const)(v2 + 96));
  }
  result = ret;
  if ( v35 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8028) = 0LL;
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

// Line 1230: range 0000000012836BA4-0000000012837281
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueCurseData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  ActivityRogueExcelConfigMgr *v6; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  int32_t result; // eax
  int32_t ret; // [rsp+1Ch] [rbp-184h]
  std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *__for_range; // [rsp+20h] [rbp-180h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::reference v16; // [rsp+28h] [rbp-178h]
  std::tuple_element<0,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *pool_id; // [rsp+30h] [rbp-170h]
  const std::tuple_element<1,std::pair<unsigned int const,std::map<unsigned int,unsigned int> > >::type *__for_range_0; // [rsp+40h] [rbp-160h]
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::reference v19; // [rsp+48h] [rbp-158h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *curse_id; // [rsp+50h] [rbp-150h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *weight; // [rsp+58h] [rbp-148h]
  char v22[320]; // [rsp+60h] [rbp-140h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_3(288LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "6 32 8 16 __for_begin:1232 64 8 14 __for_end:1232 96 8 16 __for_begin:1234 128 8 14 __for_end:12"
                        "34 160 32 9 <unknown> 224 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueCurseData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862726] = -218959118;
  v4[536862728] = -202116109;
  ret = 0;
  __for_range = &this->curse_pool_weight_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 64);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v2 + 64)) )
      break;
    v16 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 32));
    pool_id = std::get<0ul,unsigned int const,std::map<unsigned int,unsigned int>>(v16);
    __for_range_0 = std::get<1ul,unsigned int const,std::map<unsigned int,unsigned int>>(v16);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 96, v5);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::map<unsigned int,unsigned int>::begin(__for_range_0);
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v5);
    *(std::map<unsigned int,unsigned int>::const_iterator *)(v2 + 128) = std::map<unsigned int,unsigned int>::end(__for_range_0);
    while ( std::operator!=(
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 96),
              (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> >::_Self *)(v2 + 128)) )
    {
      v19 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator*((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
      curse_id = std::get<0ul,unsigned int const,unsigned int>(v19);
      weight = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v19);
      v6 = this;
      if ( *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)curse_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)curse_id >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(curse_id);
      }
      if ( data::ActivityRogueExcelConfigMgrBase::findRoguelikeCurseExcelConfig(v6, *curse_id) )
      {
        if ( *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)weight & 7) + 3) >= *(_BYTE *)(((unsigned __int64)weight >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(weight);
        }
        if ( !*weight )
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
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "checkRogueCurseData",
            1244);
          v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 224),
                 (const char (*)[16])"[CONFIG_ERROR] ");
          v10 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                  v9,
                  (const char (*)[38])"[ROGUELIKE] curse weight 0, curse_id:");
          v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, curse_id);
          v12 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                  v11,
                  (const char (*)[17])", curse_pool_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, pool_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 224));
          *(_DWORD *)(((v2 + 224) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
      {
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueCurseData",
          1238);
        v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 160),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v8 = common::milog::MiLogStream::operator<<<char [60],(char *[60])0>(
               v7,
               (const char (*)[60])"[ROGUELIKE] findRoguelikeCurseExcelConfig failed, curse_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, curse_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 160));
        *(_DWORD *)(((v2 + 160) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int>>::operator++((std::_Rb_tree_const_iterator<std::pair<unsigned int const,unsigned int> > *const)(v2 + 96));
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v22 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = 0;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v2 >> 3) + 0x7FFF8020) = -168430091;
  }
  return result;
};

// Line 1255: range 0000000012837282-0000000012838274
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueDungeonWeightData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  const unsigned int *p_level; // rcx
  const unsigned int *p_stage; // rdx
  __int64 v7; // rsi
  uint32_t weight; // r14d
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *v9; // rsi
  std::map<unsigned int,unsigned int>::mapped_type *v10; // rax
  uint32_t *v11; // rdx
  char v12; // cl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rdx
  const unsigned int *p_shop_curse_prob; // rcx
  const unsigned int *p_curse_pool_id; // rdx
  __int64 v17; // rsi
  std::pair<unsigned int,unsigned int> *v18; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v19; // rax
  RoguelikeDungeonCellDepotRecord *v20; // r8
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rdx
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // rsi
  __int64 v27; // rsi
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false>,bool> v28; // rax
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rdx
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rax
  const unsigned int *v37; // r15
  const unsigned int *v38; // rcx
  std::pair<unsigned int,unsigned int> *v39; // r8
  std::pair<std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>,bool> v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rdx
  common::milog::MiLogStream *v43; // rax
  common::milog::MiLogStream *v44; // rax
  unsigned __int64 v45; // rax
  int32_t result; // eax
  int32_t ret; // [rsp+24h] [rbp-29Ch]
  data::RoguelikeDungeonWeightExcelConfigMap *__for_range; // [rsp+28h] [rbp-298h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::reference v49; // [rsp+30h] [rbp-290h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *id; // [rsp+38h] [rbp-288h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *config; // [rsp+40h] [rbp-280h]
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > >::mapped_type *config_weight_map; // [rsp+48h] [rbp-278h]
  char v53[624]; // [rsp+50h] [rbp-270h] BYREF

  v2 = (unsigned __int64)v53;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_4(576LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "11 32 8 16 __for_begin:1257 64 8 14 __for_end:1257 96 8 21 stage_level_pair:1259 128 8 9 <unknow"
                        "n> 160 8 9 <unknown> 192 20 17 depot_record:1277 256 32 9 <unknown> 320 32 9 <unknown> 384 32 9 "
                        "<unknown> 448 32 9 <unknown> 512 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueDungeonWeightData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -234618880;
  v4[536862727] = -218959118;
  v4[536862729] = -218959118;
  v4[536862731] = -218959118;
  v4[536862733] = -218959118;
  v4[536862735] = -218959118;
  v4[536862737] = -202116109;
  ret = 0;
  __for_range = &this->roguelike_dungeon_weight_excel_config_map;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::iterator *)(v2 + 32) = std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::end(__for_range);
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false> *)(v2 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false> *)(v2 + 64)) )
  {
    v49 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false> *const)(v2 + 32));
    id = std::get<0ul,unsigned int const,data::RoguelikeDungeonWeightExcelConfig>(v49);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeDungeonWeightExcelConfig>(v49);
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    p_level = &config->level;
    p_stage = &config->stage;
    v7 = *(unsigned __int8 *)(((v2 + 96) >> 3) + 0x7FFF8000);
    if ( (_BYTE)v7 )
      __asan_report_store8(v2 + 96, v7);
    *(std::pair<unsigned int,unsigned int> *)(v2 + 96) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                           p_stage,
                                                           p_level);
    config_weight_map = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<unsigned int,unsigned int>>>>::operator[](
                          &this->dungeon_stage_level_map_,
                          (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > >::key_type *)(v2 + 96));
    if ( *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->weight >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->weight);
    }
    weight = config->weight;
    v9 = id;
    v10 = std::map<unsigned int,unsigned int>::operator[](config_weight_map, id);
    v11 = v10;
    v12 = *(_BYTE *)(((unsigned __int64)v10 >> 3) + 0x7FFF8000);
    if ( v12 != 0 && (char)(((unsigned __int8)v10 & 7) + 3) >= v12 )
    {
      LOBYTE(v9) = v12 != 0;
      __asan_report_store4(v10, v9);
    }
    *v11 = weight;
    if ( *(_BYTE *)(((unsigned __int64)&config->shop_curse_prob >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config->shop_curse_prob >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config->shop_curse_prob);
    }
    if ( config->shop_curse_prob <= 0x64 )
    {
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
      p_shop_curse_prob = &config->shop_curse_prob;
      p_curse_pool_id = &config->curse_pool_id;
      v17 = *(unsigned __int8 *)(((v2 + 128) >> 3) + 0x7FFF8000);
      if ( (_BYTE)v17 )
        __asan_report_store8(v2 + 128, v17);
      *(std::pair<unsigned int,unsigned int> *)(v2 + 128) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                              p_curse_pool_id,
                                                              p_shop_curse_prob);
      v19 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
              &this->dungeon_curse_depot_prob_map,
              &config->dungeon_id,
              (std::pair<unsigned int,unsigned int> *)(v2 + 128),
              &config->dungeon_id,
              v18);
      *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
      if ( !v19.second )
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "rewriteRogueDungeonWeightData",
          1272);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 320),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                v21,
                (const char (*)[45])"[ROGUELIKE] duplicate dungeon_id, config_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, id);
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, &config->dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 320));
        *(_DWORD *)(((v2 + 320) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else
      {
        v25 = ((v2 + 192) >> 3) + 2147450880;
        *(_WORD *)v25 = 0;
        *(_BYTE *)(v25 + 2) = 4;
        if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 192, &config->dungeon_id);
        *(_DWORD *)(v2 + 192) = 0;
        v26 = (((_BYTE)v2 - 60) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 196) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 - 60) & 7) + 3) >= *(_BYTE *)(((v2 + 196) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 196, v26);
        }
        *(_DWORD *)(v2 + 196) = 0;
        if ( *(_BYTE *)(((v2 + 200) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 200) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 200, v26);
        *(_DWORD *)(v2 + 200) = 0;
        v27 = (((_BYTE)v2 - 52) & 7u) + 3;
        if ( *(_BYTE *)(((v2 + 204) >> 3) + 0x7FFF8000) != 0
          && (char)(((v2 - 52) & 7) + 3) >= *(_BYTE *)(((v2 + 204) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(v2 + 204, v27);
        }
        *(_DWORD *)(v2 + 204) = 0;
        if ( *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v2 + 208) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_store4(v2 + 208, v27);
        *(_DWORD *)(v2 + 208) = 0;
        if ( *(_BYTE *)(((unsigned __int64)&config->normal_card_pool_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->normal_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->normal_card_pool_id);
        }
        *(_DWORD *)(v2 + 192) = config->normal_card_pool_id;
        if ( *(_BYTE *)(((unsigned __int64)&config->elite_card_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->elite_card_pool_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->elite_card_pool_id);
        }
        *(_DWORD *)(v2 + 196) = config->elite_card_pool_id;
        if ( *(_BYTE *)(((unsigned __int64)&config->elite_hard_card_pool_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->elite_hard_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->elite_hard_card_pool_id);
        }
        *(_DWORD *)(v2 + 200) = config->elite_hard_card_pool_id;
        if ( *(_BYTE *)(((unsigned __int64)&config->shop_card_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->shop_card_pool_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->shop_card_pool_id);
        }
        *(_DWORD *)(v2 + 204) = config->shop_card_pool_id;
        if ( *(_BYTE *)(((unsigned __int64)&config->boss_card_pool_id >> 3) + 0x7FFF8000) != 0
          && *(_BYTE *)(((unsigned __int64)&config->boss_card_pool_id >> 3) + 0x7FFF8000) <= 3 )
        {
          __asan_report_load4(&config->boss_card_pool_id);
        }
        *(_DWORD *)(v2 + 208) = config->boss_card_pool_id;
        v28 = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::emplace<unsigned int const&,RoguelikeDungeonCellDepotRecord&>(
                &this->dungeon_cell_depot_map,
                &config->dungeon_id,
                (RoguelikeDungeonCellDepotRecord *)(v2 + 192),
                (const unsigned int *)&this->dungeon_cell_depot_map,
                v20);
        if ( !v28.second )
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
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueDungeonWeightData",
            1285);
          v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 384),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v30 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                  v29,
                  (const char (*)[45])"[ROGUELIKE] duplicate dungeon_id, config_id:");
          v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v30, id);
          v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v31,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, &config->dungeon_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 384));
          *(_DWORD *)(((v2 + 384) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
        else if ( std::vector<unsigned int>::size(&config->refresh_card_cost) > 1 )
        {
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
          v37 = std::vector<unsigned int>::operator[](&config->refresh_card_cost, 1uLL);
          v38 = std::vector<unsigned int>::operator[](&config->refresh_card_cost, 0LL);
          if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
            __asan_report_store8(v2 + 160, 0LL);
          *(std::pair<unsigned int,unsigned int> *)(v2 + 160) = std::make_pair<unsigned int const&,unsigned int const&>(
                                                                  v38,
                                                                  v37);
          v40 = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::emplace<unsigned int const&,std::pair<unsigned int,unsigned int>>(
                  &this->dungeon_refresh_cost_map,
                  &config->dungeon_id,
                  (std::pair<unsigned int,unsigned int> *)(v2 + 160),
                  &config->dungeon_id,
                  v39);
          *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
          if ( !v40.second )
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
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "rewriteRogueDungeonWeightData",
              1297);
            v41 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 512),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v42 = common::milog::MiLogStream::operator<<<char [45],(char *[45])0>(
                    v41,
                    (const char (*)[45])"[ROGUELIKE] duplicate dungeon_id, config_id:");
            v43 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v42, id);
            v44 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                    v43,
                    (const char (*)[14])", dungeon_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v44, &config->dungeon_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 512));
            *(_DWORD *)(((v2 + 512) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
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
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "rewriteRogueDungeonWeightData",
            1291);
          v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 448),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v34 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                  v33,
                  (const char (*)[66])"[ROGUELIKE] dungeon_id refresh card cost config error, config_id:");
          v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v34, id);
          v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(
                  v35,
                  (const char (*)[14])", dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, &config->dungeon_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 448));
          *(_DWORD *)(((v2 + 448) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "rewriteRogueDungeonWeightData",
        1266);
      v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 256),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v14 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(v13, (const char (*)[61])byte_1A98C5E0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 256));
      *(_DWORD *)(((v2 + 256) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
    v45 = ((v2 + 192) >> 3) + 2147450880;
    *(_WORD *)v45 = -1800;
    *(_BYTE *)(v45 + 2) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false> *const)(v2 + 32));
  }
  result = ret;
  if ( v53 == (char *)v2 )
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

// Line 1306: range 0000000012838276-000000001283C60F
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueDungeonWeightData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  char *v5; // rsi
  DungeonExcelConfigMgr *p_dungeon_config_mgr; // rcx
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rdx
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rdx
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rdx
  char *v13; // rsi
  DungeonExcelConfigMgr *v14; // rcx
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rdx
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  common::milog::MiLogStream *v27; // rax
  common::milog::MiLogStream *v28; // rdx
  common::milog::MiLogStream *v29; // rax
  common::milog::MiLogStream *v30; // rax
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rdx
  common::milog::MiLogStream *v33; // rax
  common::milog::MiLogStream *v34; // rax
  common::milog::MiLogStream *v35; // rax
  common::milog::MiLogStream *v36; // rdx
  char *v37; // rsi
  ActivityRogueExcelConfigMgr *v38; // rcx
  uint32_t *p_stage; // rax
  common::milog::MiLogStream *v40; // rax
  common::milog::MiLogStream *v41; // rax
  common::milog::MiLogStream *v42; // rax
  common::milog::MiLogStream *v43; // rdx
  uint32_t level; // ecx
  common::milog::MiLogStream *v45; // rax
  common::milog::MiLogStream *v46; // rdx
  DungeonExcelConfigMgr *v47; // rcx
  common::milog::MiLogStream *v48; // rax
  common::milog::MiLogStream *v49; // rdx
  common::milog::MiLogStream *v50; // rax
  common::milog::MiLogStream *v51; // rdx
  common::milog::MiLogStream *v52; // rax
  common::milog::MiLogStream *v53; // rax
  common::milog::MiLogStream *v54; // rax
  common::milog::MiLogStream *v55; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v56; // rax
  unsigned int *v57; // rdx
  unsigned int v58; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v59; // rax
  unsigned int *v60; // rdx
  common::milog::MiLogStream *v61; // rax
  common::milog::MiLogStream *v62; // rdx
  std::unordered_map<unsigned int,PointScriptConfig>::size_type v63; // r15
  std::vector<unsigned int>::const_reference v64; // rax
  unsigned int *v65; // rdx
  common::milog::MiLogStream *v66; // rax
  common::milog::MiLogStream *v67; // rdx
  common::milog::MiLogStream *v68; // rax
  common::milog::MiLogStream *v69; // rdx
  common::milog::MiLogStream *v70; // rax
  common::milog::MiLogStream *v71; // rax
  common::milog::MiLogStream *v72; // rax
  common::milog::MiLogStream *v73; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v74; // rax
  unsigned int *v75; // rdx
  unsigned int v76; // r15d
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v77; // rax
  unsigned int *v78; // rdx
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rdx
  std::unordered_map<unsigned int,PointScriptConfig>::size_type v81; // r15
  std::vector<unsigned int>::const_reference v82; // rax
  unsigned int *v83; // rdx
  char v84; // cl
  __int64 v85; // rsi
  common::milog::MiLogStream *v86; // rax
  common::milog::MiLogStream *v87; // rdx
  char *v88; // rsi
  unsigned int *v89; // rax
  int *v90; // rdx
  int v91; // ecx
  char v92; // al
  common::milog::MiLogStream *v93; // rax
  common::milog::MiLogStream *v94; // rax
  common::milog::MiLogStream *v95; // rax
  common::milog::MiLogStream *v96; // rdx
  common::milog::MiLogStream *v98; // rax
  __int64 p_point_config_map; // rsi
  unsigned int *v100; // rax
  int *v101; // rdx
  int v102; // ecx
  char v103; // al
  common::milog::MiLogStream *v104; // rax
  common::milog::MiLogStream *v105; // rax
  common::milog::MiLogStream *v106; // rax
  common::milog::MiLogStream *v107; // rax
  _BOOL4 v108; // edx
  unsigned __int64 v109; // rax
  common::milog::MiLogStream *v110; // rax
  common::milog::MiLogStream *v111; // rax
  int v112; // r15d
  common::milog::MiLogStream *v113; // rax
  common::milog::MiLogStream *v114; // rax
  unsigned __int64 v115; // rax
  common::milog::MiLogStream *v117; // rax
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>> *p_dungeon_monster_pool_map; // rdx
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>> *v119; // rdx
  const std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::key_type *p_dungeon_id; // rcx
  __int64 v121; // rsi
  bool v122; // al
  common::milog::MiLogStream *v123; // rax
  common::milog::MiLogStream *v124; // rax
  std::unordered_map<unsigned int,std::set<unsigned int>> *p_dungeon_cell_config_id_map; // rdx
  std::unordered_map<unsigned int,std::set<unsigned int>> *v126; // rdx
  const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *v127; // rcx
  __int64 v128; // rsi
  bool v129; // al
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  DungeonExcelConfigMgr *v135; // rcx
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rdx
  ItemExcelConfigMgr *p_item_config_mgr; // rcx
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rdx
  common::milog::MiLogStream *v141; // rax
  common::milog::MiLogStream *v142; // rdx
  int32_t ret; // [rsp+1Ch] [rbp-BB4h]
  LuaConfigMgr *lua_config_mgr; // [rsp+20h] [rbp-BB0h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range; // [rsp+28h] [rbp-BA8h]
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *__for_range_0; // [rsp+30h] [rbp-BA0h]
  data::RoguelikeDungeonWeightExcelConfigMap *__for_range_1; // [rsp+38h] [rbp-B98h]
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *__for_range_4; // [rsp+40h] [rbp-B90h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::reference v151; // [rsp+48h] [rbp-B88h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *dungeon_id_1; // [rsp+50h] [rbp-B80h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *cost_pair; // [rsp+58h] [rbp-B78h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::reference v154; // [rsp+60h] [rbp-B70h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *config_id; // [rsp+68h] [rbp-B68h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *config; // [rsp+70h] [rbp-B60h]
  data::RogueStageExcelConfig *stage_config_ptr; // [rsp+78h] [rbp-B58h]
  const GroupScriptConfig *group_script_config_ptr; // [rsp+88h] [rbp-B48h]
  const GroupScriptConfig *break_group_script_config_ptr; // [rsp+90h] [rbp-B40h]
  const std::vector<unsigned int> *__for_range_2; // [rsp+98h] [rbp-B38h]
  const std::vector<unsigned int> *__for_range_3; // [rsp+A0h] [rbp-B30h]
  const GroupScriptConfig *byobu_group_script_config_ptr; // [rsp+A8h] [rbp-B28h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false>::reference v163; // [rsp+B0h] [rbp-B20h]
  std::tuple_element<0,std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord> >::type *dungeon_id_0; // [rsp+B8h] [rbp-B18h]
  std::tuple_element<1,const std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord> >::type *depot_record; // [rsp+C0h] [rbp-B10h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false>::reference v166; // [rsp+C8h] [rbp-B08h]
  std::tuple_element<0,std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *dungeon_id; // [rsp+D0h] [rbp-B00h]
  std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *pair; // [rsp+D8h] [rbp-AF8h]
  char v169[2800]; // [rsp+E0h] [rbp-AF0h] BYREF

  v2 = (unsigned __int64)v169;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_6(2752LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "52 32 4 14 gadget_id:1438 48 4 14 gadget_id:1460 64 8 16 __for_begin:1309 96 8 14 __for_end:1309"
                        " 128 8 16 __for_begin:1324 160 8 14 __for_end:1324 192 8 16 __for_begin:1364 224 8 14 __for_end:"
                        "1364 256 8 16 __for_begin:1438 288 8 14 __for_end:1438 320 8 16 __for_begin:1460 352 8 14 __for_"
                        "end:1460 384 8 9 <unknown> 416 8 9 <unknown> 448 8 9 <unknown> 480 8 9 <unknown> 512 8 16 __for_"
                        "begin:1520 544 8 14 __for_end:1520 576 24 30 byobu_point_config_id_vec:1478 640 32 9 <unknown> 7"
                        "04 32 9 <unknown> 768 32 9 <unknown> 832 32 9 <unknown> 896 32 9 <unknown> 960 32 9 <unknown> 10"
                        "24 32 9 <unknown> 1088 32 9 <unknown> 1152 32 9 <unknown> 1216 32 9 <unknown> 1280 32 9 <unknown"
                        "> 1344 32 9 <unknown> 1408 32 9 <unknown> 1472 32 9 <unknown> 1536 32 9 <unknown> 1600 32 9 <unk"
                        "nown> 1664 32 9 <unknown> 1728 32 9 <unknown> 1792 32 9 <unknown> 1856 32 9 <unknown> 1920 32 9 "
                        "<unknown> 1984 32 9 <unknown> 2048 32 9 <unknown> 2112 32 9 <unknown> 2176 32 9 <unknown> 2240 3"
                        "2 9 <unknown> 2304 32 9 <unknown> 2368 32 9 <unknown> 2432 32 9 <unknown> 2496 32 9 <unknown> 25"
                        "60 32 9 <unknown> 2624 32 9 <unknown> 2688 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueDungeonWeightData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -218959360;
  v4[536862726] = -218959360;
  v4[536862727] = -218959360;
  v4[536862728] = -218959360;
  v4[536862729] = -218959360;
  v4[536862730] = -218959360;
  v4[536862731] = -218959360;
  v4[536862732] = -218959360;
  v4[536862733] = -218959360;
  v4[536862734] = -218959360;
  v4[536862735] = -218959360;
  v4[536862736] = -218959360;
  v4[536862737] = -218959360;
  v4[536862738] = -234881024;
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
  v4[536862805] = -202116109;
  ret = 0;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->dungeon_curse_depot_prob_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, txt_config_mgr);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range);
  while ( 1 )
  {
    v5 = (char *)(v2 + 96);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 96)) )
      break;
    v166 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
    dungeon_id = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v166);
    pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v166);
    p_dungeon_config_mgr = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id);
    }
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(p_dungeon_config_mgr, *dungeon_id) )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>,unsigned int>(
              &this->curse_pool_weight_map,
              (const unsigned int *)pair) )
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1319);
        v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 704),
               (const char (*)[16])"[CONFIG_ERROR] ");
        v10 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                v9,
                (const char (*)[52])"[ROGUELIKE] curse_pool is not found, curse_pool_id:");
        v11 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v10, (const unsigned int *)pair);
        v12 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v11, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, dungeon_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 704));
        *(_DWORD *)(((v2 + 704) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueDungeonWeightData",
        1313);
      v7 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 640),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v8 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
             v7,
             (const char (*)[59])"[ROGUELIKE] findDungeonExcelConfig dungeon_id, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v8, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 640));
      *(_DWORD *)(((v2 + 640) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64));
  }
  *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  __for_range_0 = &this->dungeon_cell_depot_map;
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 128, v5);
  *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 128) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::begin(__for_range_0);
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 160, v5);
  *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::iterator *)(v2 + 160) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::end(__for_range_0);
  while ( 1 )
  {
    v13 = (char *)(v2 + 160);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 128),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v2 + 160)) )
      break;
    v163 = std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false> *const)(v2 + 128));
    dungeon_id_0 = std::get<0ul,unsigned int const,RoguelikeDungeonCellDepotRecord>(v163);
    depot_record = (std::tuple_element<1,const std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord> >::type *)std::get<1ul,unsigned int const,RoguelikeDungeonCellDepotRecord>(v163);
    v14 = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id_0 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id_0 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id_0);
    }
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v14, *dungeon_id_0) )
    {
      if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
              &this->depot_card_type_prob_map,
              &depot_record->normal_card_pool_id) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1334);
        v17 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 832),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v18 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v17,
                (const char (*)[50])"[ROGUELIKE] card_pool is not found, card_pool_id:");
        v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v18,
                &depot_record->normal_card_pool_id);
        v20 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v19, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, dungeon_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 832));
        *(_DWORD *)(((v2 + 832) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
                   &this->depot_card_type_prob_map,
                   &depot_record->elite_card_pool_id) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1340);
        v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 896),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v22 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v21,
                (const char (*)[50])"[ROGUELIKE] card_pool is not found, card_pool_id:");
        v23 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v22,
                &depot_record->elite_card_pool_id);
        v24 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v23, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, dungeon_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 896));
        *(_DWORD *)(((v2 + 896) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
                   &this->depot_card_type_prob_map,
                   &depot_record->elite_hard_card_pool_id) )
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1346);
        v25 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 960),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v26 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v25,
                (const char (*)[50])"[ROGUELIKE] card_pool is not found, card_pool_id:");
        v27 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v26,
                &depot_record->elite_hard_card_pool_id);
        v28 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v27, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v28, dungeon_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 960));
        *(_DWORD *)(((v2 + 960) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
                   &this->depot_card_type_prob_map,
                   &depot_record->shop_card_pool_id) )
      {
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v2 + 1024) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) != 0
          && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1055) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v2 + 1024, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v2 + 1024),
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1352);
        v29 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1024),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v30 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v29,
                (const char (*)[50])"[ROGUELIKE] card_pool is not found, card_pool_id:");
        v31 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v30,
                &depot_record->shop_card_pool_id);
        v32 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v31, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v32, dungeon_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1024));
        *(_DWORD *)(((v2 + 1024) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
      else if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::unordered_map<data::RoguelikeCardType,unsigned int>>,unsigned int>(
                   &this->depot_card_type_prob_map,
                   &depot_record->boss_card_pool_id) )
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
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1358);
        v33 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1088),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v34 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
                v33,
                (const char (*)[50])"[ROGUELIKE] card_pool is not found, card_pool_id:");
        v35 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v34,
                &depot_record->boss_card_pool_id);
        v36 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v35, (const char (*)[14])", dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v36, dungeon_id_0);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1088));
        *(_DWORD *)(((v2 + 1088) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 768) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 799) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 768, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 768),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueDungeonWeightData",
        1328);
      v15 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 768),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v16 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
              v15,
              (const char (*)[59])"[ROGUELIKE] findDungeonExcelConfig dungeon_id, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, dungeon_id_0);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 768));
      *(_DWORD *)(((v2 + 768) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false> *const)(v2 + 128));
  }
  *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
  __for_range_1 = &this->roguelike_dungeon_weight_excel_config_map;
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 192, v13);
  *(std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::iterator *)(v2 + 192) = std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::begin(__for_range_1);
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 224, v13);
  *(std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::iterator *)(v2 + 224) = std::unordered_map<unsigned int,data::RoguelikeDungeonWeightExcelConfig>::end(__for_range_1);
  while ( 1 )
  {
    v37 = (char *)(v2 + 224);
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false> *)(v2 + 192),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false> *)(v2 + 224)) )
      break;
    v154 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false> *const)(v2 + 192));
    config_id = std::get<0ul,unsigned int const,data::RoguelikeDungeonWeightExcelConfig>(v154);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeDungeonWeightExcelConfig>(v154);
    v38 = this;
    p_stage = &config->stage;
    if ( *(_BYTE *)(((unsigned __int64)p_stage >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_stage & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_stage >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_stage);
    }
    stage_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueStageExcelConfig(v38, config->stage);
    if ( stage_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&config->level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&config->level);
      }
      level = config->level;
      if ( *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_level >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&stage_config_ptr->max_level >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&stage_config_ptr->max_level);
      }
      if ( level <= stage_config_ptr->max_level )
      {
        v47 = &txt_config_mgr->dungeon_config_mgr;
        if ( *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)config + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->dungeon_id >> 3)
                                                                + 0x7FFF8000) )
        {
          __asan_report_load4(&config->dungeon_id);
        }
        if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v47, config->dungeon_id) )
        {
          if ( *(_BYTE *)(((unsigned __int64)&config->blast_bucket_group_id >> 3) + 0x7FFF8000) != 0
            && *(_BYTE *)(((unsigned __int64)&config->blast_bucket_group_id >> 3) + 0x7FFF8000) <= 3 )
          {
            __asan_report_load4(&config->blast_bucket_group_id);
          }
          group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, config->blast_bucket_group_id);
          if ( group_script_config_ptr )
          {
            if ( std::vector<unsigned int>::size(&config->blast_bucket_count_range) == 2 )
            {
              v56 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config->blast_bucket_count_range, 0LL);
              v57 = v56;
              if ( *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v56 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v56 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v56);
              }
              v58 = *v57;
              v59 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config->blast_bucket_count_range, 1uLL);
              v60 = v59;
              if ( *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) != 0
                && (char)(((unsigned __int8)v59 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v59 >> 3) + 0x7FFF8000) )
              {
                __asan_report_load4(v59);
              }
              if ( v58 <= *v60 )
              {
                v63 = std::unordered_map<unsigned int,PointScriptConfig>::size(&group_script_config_ptr->point_config_map);
                v64 = std::vector<unsigned int>::operator[](&config->blast_bucket_count_range, 1uLL);
                v65 = (unsigned int *)v64;
                if ( *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) != 0
                  && (char)(((unsigned __int8)v64 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v64 >> 3) + 0x7FFF8000) )
                {
                  __asan_report_load4(v64);
                }
                if ( v63 >= *v65 )
                {
                  if ( *(_BYTE *)(((unsigned __int64)&config->breakages_group_id >> 3) + 0x7FFF8000) != 0
                    && *(_BYTE *)(((unsigned __int64)&config->breakages_group_id >> 3) + 0x7FFF8000) <= 3 )
                  {
                    __asan_report_load4(&config->breakages_group_id);
                  }
                  break_group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                                    lua_config_mgr,
                                                    config->breakages_group_id);
                  if ( break_group_script_config_ptr )
                  {
                    if ( std::vector<unsigned int>::size(&config->breakages_count_range) == 2 )
                    {
                      v74 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config->breakages_count_range, 0LL);
                      v75 = v74;
                      if ( *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v74 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v74 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v74);
                      }
                      v76 = *v75;
                      v77 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](&config->breakages_count_range, 1uLL);
                      v78 = v77;
                      if ( *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) != 0
                        && (char)(((unsigned __int8)v77 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v77 >> 3) + 0x7FFF8000) )
                      {
                        __asan_report_load4(v77);
                      }
                      if ( v76 <= *v78 )
                      {
                        v81 = std::unordered_map<unsigned int,PointScriptConfig>::size(&break_group_script_config_ptr->point_config_map);
                        v85 = 1LL;
                        v82 = std::vector<unsigned int>::operator[](&config->breakages_count_range, 1uLL);
                        v83 = (unsigned int *)v82;
                        v84 = *(_BYTE *)(((unsigned __int64)v82 >> 3) + 0x7FFF8000);
                        LOBYTE(v85) = v84 != 0;
                        if ( v84 != 0 && (char)(((unsigned __int8)v82 & 7) + 3) >= v84 )
                          __asan_report_load4(v82);
                        if ( v81 >= *v83 )
                        {
                          __for_range_2 = &config->breakages_gadget_id_list;
                          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) )
                            __asan_report_store8(v2 + 256, v85);
                          *(std::vector<unsigned int>::const_iterator *)(v2 + 256) = std::vector<unsigned int>::begin(__for_range_2);
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = 0;
                          if ( *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) )
                            __asan_report_store8(v2 + 288, v85);
                          *(std::vector<unsigned int>::const_iterator *)(v2 + 288) = std::vector<unsigned int>::end(__for_range_2);
                          while ( 1 )
                          {
                            v88 = (char *)(v2 + 288);
                            if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 256),
                                    (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 288)) )
                              break;
                            *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
                            v89 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
                            v90 = (int *)v89;
                            if ( *(_BYTE *)(((unsigned __int64)v89 >> 3) + 0x7FFF8000) != 0
                              && (char)(((unsigned __int8)v89 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v89 >> 3)
                                                                                    + 0x7FFF8000) )
                            {
                              __asan_report_load4(v89);
                            }
                            v91 = *v90;
                            v92 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
                            if ( v92 != 0 && v92 <= 3 )
                            {
                              LOBYTE(v88) = v92 != 0;
                              __asan_report_store4(v2 + 32, v88);
                            }
                            *(_DWORD *)(v2 + 32) = v91;
                            if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                    &txt_config_mgr->gadget_config_mgr,
                                    *(unsigned int *)(v2 + 32)) )
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
                                4u,
                                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                "checkRogueDungeonWeightData",
                                1442);
                              v93 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 1856),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              v94 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                                      v93,
                                      (const char (*)[62])byte_1A98D2E0);
                              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                v94,
                                (const unsigned int *)(v2 + 32));
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1856));
                              *(_DWORD *)(((v2 + 1856) >> 3) + 0x7FFF8000) = -117901064;
                              ret = -1;
                            }
                            __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 256));
                          }
                          *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v2 + 256) >> 3) + 0x7FFF8000) = -8;
                          *(_BYTE *)(((v2 + 288) >> 3) + 0x7FFF8000) = -8;
                          if ( std::vector<unsigned int>::size(&config->byobu_gadget_list) == 2 )
                          {
                            if ( !std::vector<unsigned int>::empty(&config->byobu_count_range)
                              && std::vector<unsigned int>::size(&config->byobu_count_range) != 2 )
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
                                4u,
                                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                "checkRogueDungeonWeightData",
                                1456);
                              v98 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                      (common::milog::MiLogStream *const)(v2 + 1984),
                                      (const char (*)[16])"[CONFIG_ERROR] ");
                              common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                                v98,
                                (const char (*)[52])byte_1A98D3C0);
                              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1984));
                              *(_DWORD *)(((v2 + 1984) >> 3) + 0x7FFF8000) = -117901064;
                              ret = -1;
                            }
                            else
                            {
                              __for_range_3 = &config->byobu_gadget_list;
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = 0;
                              if ( *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) )
                                __asan_report_store8(v2 + 320, v88);
                              *(std::vector<unsigned int>::const_iterator *)(v2 + 320) = std::vector<unsigned int>::begin(__for_range_3);
                              *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = 0;
                              if ( *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) )
                                __asan_report_store8(v2 + 352, v88);
                              *(std::vector<unsigned int>::const_iterator *)(v2 + 352) = std::vector<unsigned int>::end(__for_range_3);
                              while ( 1 )
                              {
                                p_point_config_map = v2 + 352;
                                if ( !__gnu_cxx::operator!=<unsigned int const*,std::vector<unsigned int>>(
                                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 320),
                                        (const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *)(v2 + 352)) )
                                  break;
                                *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = 4;
                                v100 = (unsigned int *)__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator*((const __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 320));
                                v101 = (int *)v100;
                                if ( *(_BYTE *)(((unsigned __int64)v100 >> 3) + 0x7FFF8000) != 0
                                  && (char)(((unsigned __int8)v100 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v100 >> 3)
                                                                                         + 0x7FFF8000) )
                                {
                                  __asan_report_load4(v100);
                                }
                                v102 = *v101;
                                v103 = *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000);
                                if ( v103 != 0 && v103 <= 3 )
                                {
                                  LOBYTE(p_point_config_map) = v103 != 0;
                                  __asan_report_store4(v2 + 48, p_point_config_map);
                                }
                                *(_DWORD *)(v2 + 48) = v102;
                                if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(
                                        &txt_config_mgr->gadget_config_mgr,
                                        *(unsigned int *)(v2 + 48)) )
                                {
                                  *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2048) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2079) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2048, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2048),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                    "checkRogueDungeonWeightData",
                                    1464);
                                  v104 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v2 + 2048),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  v105 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                           v104,
                                           (const char (*)[59])byte_1A98D420);
                                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v105,
                                    (const unsigned int *)(v2 + 48));
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2048));
                                  *(_DWORD *)(((v2 + 2048) >> 3) + 0x7FFF8000) = -117901064;
                                  ret = -1;
                                }
                                __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::operator++((__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v2 + 320));
                              }
                              *(_BYTE *)(((v2 + 48) >> 3) + 0x7FFF8000) = -8;
                              *(_BYTE *)(((v2 + 320) >> 3) + 0x7FFF8000) = -8;
                              *(_BYTE *)(((v2 + 352) >> 3) + 0x7FFF8000) = -8;
                              if ( *(_BYTE *)(((unsigned __int64)&config->byobu_group_id >> 3) + 0x7FFF8000) != 0
                                && *(_BYTE *)(((unsigned __int64)&config->byobu_group_id >> 3) + 0x7FFF8000) <= 3 )
                              {
                                __asan_report_load4(&config->byobu_group_id);
                              }
                              if ( !config->byobu_group_id )
                                goto LABEL_191;
                              byobu_group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(
                                                                lua_config_mgr,
                                                                config->byobu_group_id);
                              if ( byobu_group_script_config_ptr )
                              {
                                v109 = ((v2 + 576) >> 3) + 2147450880;
                                *(_WORD *)v109 = 0;
                                *(_BYTE *)(v109 + 2) = 0;
                                p_point_config_map = (__int64)&byobu_group_script_config_ptr->point_config_map;
                                if ( *(char *)(((v2 + 576) >> 3) + 0x7FFF8000) < 0
                                  || *(_BYTE *)(((v2 + 599) >> 3) + 0x7FFF8000) != 0
                                  && (char)((v2 + 87) & 7) >= *(_BYTE *)(((v2 + 599) >> 3) + 0x7FFF8000) )
                                {
                                  p_point_config_map = 24LL;
                                  __asan_report_store_n(v2 + 576, 24LL);
                                }
                                common::tools::MiscUtils::getAllMapKeys<std::unordered_map<unsigned int,PointScriptConfig>>(
                                  (std::vector<unsigned int> *)(v2 + 576),
                                  (const std::unordered_map<unsigned int,PointScriptConfig> *)p_point_config_map);
                                if ( std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 576)) )
                                {
                                  if ( (std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v2 + 576)) & 1) != 0 )
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
                                      4u,
                                      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                      "checkRogueDungeonWeightData",
                                      1487);
                                    v113 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v2 + 2240),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    v114 = common::milog::MiLogStream::operator<<<char [77],(char *[77])0>(
                                             v113,
                                             (const char (*)[77])byte_1A98D560);
                                    p_point_config_map = (__int64)&config->byobu_group_id;
                                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v114,
                                      &config->byobu_group_id);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2240));
                                    *(_DWORD *)(((v2 + 2240) >> 3) + 0x7FFF8000) = -117901064;
                                    ret = -1;
                                    v112 = 0;
                                  }
                                  else
                                  {
                                    v112 = 1;
                                  }
                                }
                                else
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
                                    4u,
                                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                    "checkRogueDungeonWeightData",
                                    1481);
                                  v110 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v2 + 2176),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  v111 = common::milog::MiLogStream::operator<<<char [68],(char *[68])0>(
                                           v110,
                                           (const char (*)[68])byte_1A98D4E0);
                                  p_point_config_map = (__int64)&config->byobu_group_id;
                                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                    v111,
                                    &config->byobu_group_id);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2176));
                                  *(_DWORD *)(((v2 + 2176) >> 3) + 0x7FFF8000) = -117901064;
                                  ret = -1;
                                  v112 = 0;
                                }
                                std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v2 + 576));
                                v108 = v112 == 1;
                              }
                              else
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
                                  4u,
                                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                  "checkRogueDungeonWeightData",
                                  1474);
                                v106 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                         (common::milog::MiLogStream *const)(v2 + 2112),
                                         (const char (*)[16])"[CONFIG_ERROR] ");
                                v107 = common::milog::MiLogStream::operator<<<char [63],(char *[63])0>(
                                         v106,
                                         (const char (*)[63])byte_1A98D480);
                                p_point_config_map = (__int64)&config->byobu_group_id;
                                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                  v107,
                                  &config->byobu_group_id);
                                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2112));
                                *(_DWORD *)(((v2 + 2112) >> 3) + 0x7FFF8000) = -117901064;
                                ret = -1;
                                v108 = 0;
                              }
                              v115 = ((v2 + 576) >> 3) + 2147450880;
                              *(_WORD *)v115 = -1800;
                              *(_BYTE *)(v115 + 2) = -8;
                              if ( v108 )
                              {
LABEL_191:
                                if ( !std::vector<unsigned int>::empty(&config->guard_count_range)
                                  && std::vector<unsigned int>::size(&config->guard_count_range) != 2 )
                                {
                                  *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = 0;
                                  if ( *(char *)(((v2 + 2304) >> 3) + 0x7FFF8000) < 0
                                    || *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) != 0
                                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2335) >> 3) + 0x7FFF8000) )
                                  {
                                    __asan_report_store_n(v2 + 2304, 32LL);
                                  }
                                  common::milog::MiLogStream::create(
                                    (common::milog::MiLogStream *)(v2 + 2304),
                                    &common::milog::MiLogDefault::default_log_obj_,
                                    4u,
                                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                    "checkRogueDungeonWeightData",
                                    1496);
                                  v117 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                           (common::milog::MiLogStream *const)(v2 + 2304),
                                           (const char (*)[16])"[CONFIG_ERROR] ");
                                  common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                                    v117,
                                    (const char (*)[58])byte_1A98D5E0);
                                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2304));
                                  *(_DWORD *)(((v2 + 2304) >> 3) + 0x7FFF8000) = -117901064;
                                  ret = -1;
                                }
                                else
                                {
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = 0;
                                  p_dungeon_monster_pool_map = &this->dungeon_monster_pool_map_;
                                  if ( *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) )
                                    __asan_report_store8(v2 + 416, p_point_config_map);
                                  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::iterator *)(v2 + 416) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::end(p_dungeon_monster_pool_map);
                                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = 0;
                                  v119 = &this->dungeon_monster_pool_map_;
                                  p_dungeon_id = &config->dungeon_id;
                                  v121 = *(unsigned __int8 *)(((v2 + 384) >> 3) + 0x7FFF8000);
                                  if ( (_BYTE)v121 )
                                    __asan_report_store8(v2 + 384, v121);
                                  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::iterator *)(v2 + 384) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::find(v119, p_dungeon_id);
                                  v122 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false>(
                                           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v2 + 384),
                                           (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v2 + 416));
                                  *(_BYTE *)(((v2 + 384) >> 3) + 0x7FFF8000) = -8;
                                  *(_BYTE *)(((v2 + 416) >> 3) + 0x7FFF8000) = -8;
                                  if ( v122 )
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
                                      4u,
                                      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                      "checkRogueDungeonWeightData",
                                      1503);
                                    v123 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                             (common::milog::MiLogStream *const)(v2 + 2368),
                                             (const char (*)[16])"[CONFIG_ERROR] ");
                                    v124 = common::milog::MiLogStream::operator<<<char [67],(char *[67])0>(
                                             v123,
                                             (const char (*)[67])byte_1A98D640);
                                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                      v124,
                                      &config->dungeon_id);
                                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2368));
                                    *(_DWORD *)(((v2 + 2368) >> 3) + 0x7FFF8000) = -117901064;
                                    ret = -1;
                                  }
                                  else
                                  {
                                    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = 0;
                                    p_dungeon_cell_config_id_map = &this->dungeon_cell_config_id_map_;
                                    if ( *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) )
                                      __asan_report_store8(v2 + 480, v2 + 416);
                                    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 480) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(p_dungeon_cell_config_id_map);
                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = 0;
                                    v126 = &this->dungeon_cell_config_id_map_;
                                    v127 = &config->dungeon_id;
                                    v128 = *(unsigned __int8 *)(((v2 + 448) >> 3) + 0x7FFF8000);
                                    if ( (_BYTE)v128 )
                                      __asan_report_store8(v2 + 448, v128);
                                    *(std::unordered_map<unsigned int,std::set<unsigned int>>::iterator *)(v2 + 448) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(v126, v127);
                                    v129 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
                                             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 448),
                                             (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v2 + 480));
                                    *(_BYTE *)(((v2 + 448) >> 3) + 0x7FFF8000) = -8;
                                    *(_BYTE *)(((v2 + 480) >> 3) + 0x7FFF8000) = -8;
                                    if ( v129 )
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
                                        4u,
                                        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                        "checkRogueDungeonWeightData",
                                        1509);
                                      v130 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                               (common::milog::MiLogStream *const)(v2 + 2432),
                                               (const char (*)[16])"[CONFIG_ERROR] ");
                                      v131 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                                               v130,
                                               (const char (*)[59])byte_1A98D6C0);
                                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                        v131,
                                        &config->dungeon_id);
                                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2432));
                                      *(_DWORD *)(((v2 + 2432) >> 3) + 0x7FFF8000) = -117901064;
                                      ret = -1;
                                    }
                                    else
                                    {
                                      if ( *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3) + 0x7FFF8000) != 0
                                        && (char)((((_BYTE)config + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&config->revise_level_id >> 3)
                                                                                              + 0x7FFF8000) )
                                      {
                                        __asan_report_load4(&config->revise_level_id);
                                      }
                                      if ( config->revise_level_id
                                        && !data::ReviseLevelGrowExcelConfigMgrBase::findReviseLevelGrowExcelConfig(
                                              &txt_config_mgr->revise_level_grow_config_mgr,
                                              config->revise_level_id) )
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
                                          4u,
                                          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                                          "checkRogueDungeonWeightData",
                                          1515);
                                        v133 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                                 (common::milog::MiLogStream *const)(v2 + 2496),
                                                 (const char (*)[16])"[CONFIG_ERROR] ");
                                        v134 = common::milog::MiLogStream::operator<<<char [64],(char *[64])0>(
                                                 v133,
                                                 (const char (*)[64])byte_1A98D720);
                                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                                          v134,
                                          &config->revise_level_id);
                                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2496));
                                        *(_DWORD *)(((v2 + 2496) >> 3) + 0x7FFF8000) = -117901064;
                                        ret = -1;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                          else
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
                              4u,
                              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                              "checkRogueDungeonWeightData",
                              1450);
                            v95 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                    (common::milog::MiLogStream *const)(v2 + 1920),
                                    (const char (*)[16])"[CONFIG_ERROR] ");
                            v96 = common::milog::MiLogStream::operator<<<char [66],(char *[66])0>(
                                    v95,
                                    (const char (*)[66])byte_1A98D340);
                            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v96, config_id);
                            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1920));
                            *(_DWORD *)(((v2 + 1920) >> 3) + 0x7FFF8000) = -117901064;
                            ret = -1;
                          }
                        }
                        else
                        {
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = 0;
                          if ( *(char *)(((v2 + 1792) >> 3) + 0x7FFF8000) < 0
                            || *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) != 0
                            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1823) >> 3) + 0x7FFF8000) )
                          {
                            __asan_report_store_n(v2 + 1792, 32LL);
                          }
                          common::milog::MiLogStream::create(
                            (common::milog::MiLogStream *)(v2 + 1792),
                            &common::milog::MiLogDefault::default_log_obj_,
                            4u,
                            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                            "checkRogueDungeonWeightData",
                            1434);
                          v86 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                  (common::milog::MiLogStream *const)(v2 + 1792),
                                  (const char (*)[16])"[CONFIG_ERROR] ");
                          v87 = common::milog::MiLogStream::operator<<<char [103],(char *[103])0>(
                                  v86,
                                  (const char (*)[103])byte_1A98D240);
                          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v87, config_id);
                          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1792));
                          *(_DWORD *)(((v2 + 1792) >> 3) + 0x7FFF8000) = -117901064;
                          ret = -1;
                        }
                      }
                      else
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
                          4u,
                          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                          "checkRogueDungeonWeightData",
                          1428);
                        v79 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                                (common::milog::MiLogStream *const)(v2 + 1728),
                                (const char (*)[16])"[CONFIG_ERROR] ");
                        v80 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                                v79,
                                (const char (*)[65])byte_1A98D1C0);
                        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v80, config_id);
                        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1728));
                        *(_DWORD *)(((v2 + 1728) >> 3) + 0x7FFF8000) = -117901064;
                        ret = -1;
                      }
                    }
                    else
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
                        4u,
                        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                        "checkRogueDungeonWeightData",
                        1422);
                      v72 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                              (common::milog::MiLogStream *const)(v2 + 1664),
                              (const char (*)[16])"[CONFIG_ERROR] ");
                      v73 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                              v72,
                              (const char (*)[76])byte_1A98D140);
                      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v73, config_id);
                      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1664));
                      *(_DWORD *)(((v2 + 1664) >> 3) + 0x7FFF8000) = -117901064;
                      ret = -1;
                    }
                  }
                  else
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
                      4u,
                      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                      "checkRogueDungeonWeightData",
                      1416);
                    v68 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                            (common::milog::MiLogStream *const)(v2 + 1600),
                            (const char (*)[16])"[CONFIG_ERROR] ");
                    v69 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                            v68,
                            (const char (*)[61])byte_1A98D0E0);
                    v70 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v69, config_id);
                    v71 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(
                            v70,
                            (const char (*)[11])" group_id:");
                    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                      v71,
                      &config->breakages_group_id);
                    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1600));
                    *(_DWORD *)(((v2 + 1600) >> 3) + 0x7FFF8000) = -117901064;
                    ret = -1;
                  }
                }
                else
                {
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = 0;
                  if ( *(char *)(((v2 + 1536) >> 3) + 0x7FFF8000) < 0
                    || *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) != 0
                    && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1567) >> 3) + 0x7FFF8000) )
                  {
                    __asan_report_store_n(v2 + 1536, 32LL);
                  }
                  common::milog::MiLogStream::create(
                    (common::milog::MiLogStream *)(v2 + 1536),
                    &common::milog::MiLogDefault::default_log_obj_,
                    4u,
                    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                    "checkRogueDungeonWeightData",
                    1408);
                  v66 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                          (common::milog::MiLogStream *const)(v2 + 1536),
                          (const char (*)[16])"[CONFIG_ERROR] ");
                  v67 = common::milog::MiLogStream::operator<<<char [103],(char *[103])0>(
                          v66,
                          (const char (*)[103])byte_1A98D040);
                  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v67, config_id);
                  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1536));
                  *(_DWORD *)(((v2 + 1536) >> 3) + 0x7FFF8000) = -117901064;
                  ret = -1;
                }
              }
              else
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
                  4u,
                  "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                  "checkRogueDungeonWeightData",
                  1402);
                v61 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                        (common::milog::MiLogStream *const)(v2 + 1472),
                        (const char (*)[16])"[CONFIG_ERROR] ");
                v62 = common::milog::MiLogStream::operator<<<char [65],(char *[65])0>(
                        v61,
                        (const char (*)[65])byte_1A98CFC0);
                common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v62, config_id);
                common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1472));
                *(_DWORD *)(((v2 + 1472) >> 3) + 0x7FFF8000) = -117901064;
                ret = -1;
              }
            }
            else
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
                4u,
                "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
                "checkRogueDungeonWeightData",
                1396);
              v54 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                      (common::milog::MiLogStream *const)(v2 + 1408),
                      (const char (*)[16])"[CONFIG_ERROR] ");
              v55 = common::milog::MiLogStream::operator<<<char [76],(char *[76])0>(
                      v54,
                      (const char (*)[76])byte_1A98CF40);
              common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v55, config_id);
              common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1408));
              *(_DWORD *)(((v2 + 1408) >> 3) + 0x7FFF8000) = -117901064;
              ret = -1;
            }
          }
          else
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
              4u,
              "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
              "checkRogueDungeonWeightData",
              1390);
            v50 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                    (common::milog::MiLogStream *const)(v2 + 1344),
                    (const char (*)[16])"[CONFIG_ERROR] ");
            v51 = common::milog::MiLogStream::operator<<<char [61],(char *[61])0>(
                    v50,
                    (const char (*)[61])byte_1A98CEA0);
            v52 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v51, config_id);
            v53 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v52, (const char (*)[11])" group_id:");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v53, &config->blast_bucket_group_id);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1344));
            *(_DWORD *)(((v2 + 1344) >> 3) + 0x7FFF8000) = -117901064;
            ret = -1;
          }
        }
        else
        {
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v2 + 1280) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) != 0
            && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 1311) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v2 + 1280, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v2 + 1280),
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "checkRogueDungeonWeightData",
            1382);
          v48 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                  (common::milog::MiLogStream *const)(v2 + 1280),
                  (const char (*)[16])"[CONFIG_ERROR] ");
          v49 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(v48, (const char (*)[52])byte_1A98CE40);
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v49, config_id);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1280));
          *(_DWORD *)(((v2 + 1280) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1375);
        v45 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 1216),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v46 = common::milog::MiLogStream::operator<<<char [81],(char *[81])0>(v45, (const char (*)[81])byte_1A98CDC0);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v46, config_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1216));
        *(_DWORD *)(((v2 + 1216) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueDungeonWeightData",
        1369);
      v40 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v2 + 1152),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v41 = common::milog::MiLogStream::operator<<<char [56],(char *[56])0>(v40, (const char (*)[56])byte_1A98CD20);
      v42 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v41, &config->stage);
      v43 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v42, (const char (*)[13])", config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v43, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 1152));
      *(_DWORD *)(((v2 + 1152) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RoguelikeDungeonWeightExcelConfig>,false,false> *const)(v2 + 192));
  }
  *(_BYTE *)(((v2 + 192) >> 3) + 0x7FFF8000) = -8;
  *(_BYTE *)(((v2 + 224) >> 3) + 0x7FFF8000) = -8;
  __for_range_4 = &this->dungeon_refresh_cost_map;
  *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 512) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 512, v37);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 512) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::begin(__for_range_4);
  *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) = 0;
  if ( *(_BYTE *)(((v2 + 544) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 544, v37);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::iterator *)(v2 + 544) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(__for_range_4);
  while ( std::__detail::operator!=<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 512),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 544)) )
  {
    v151 = std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 512));
    dungeon_id_1 = std::get<0ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v151);
    cost_pair = (std::tuple_element<1,const std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > >::type *)std::get<1ul,unsigned int const,std::pair<unsigned int,unsigned int>>(v151);
    v135 = &txt_config_mgr->dungeon_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)dungeon_id_1 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dungeon_id_1 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dungeon_id_1 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(dungeon_id_1);
    }
    if ( data::DungeonExcelConfigMgrBase::findDungeonExcelConfig(v135, *dungeon_id_1) )
    {
      p_item_config_mgr = &txt_config_mgr->item_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)cost_pair & 7) + 3) >= *(_BYTE *)(((unsigned __int64)cost_pair >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(cost_pair);
      }
      if ( ItemExcelConfigMgr::findItemConfig(p_item_config_mgr, cost_pair->first) )
      {
        if ( *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)cost_pair + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cost_pair->second >> 3)
                                                                  + 0x7FFF8000) )
        {
          __asan_report_load4(&cost_pair->second);
        }
        if ( !cost_pair->second )
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
            4u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "checkRogueDungeonWeightData",
            1536);
          v141 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                   (common::milog::MiLogStream *const)(v2 + 2688),
                   (const char (*)[16])"[CONFIG_ERROR] ");
          v142 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
                   v141,
                   (const char (*)[59])"[ROGUELIKE] refresh card cost item count zero, dungeon_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v142, dungeon_id_1);
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2688));
          *(_DWORD *)(((v2 + 2688) >> 3) + 0x7FFF8000) = -117901064;
          ret = -1;
        }
      }
      else
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueDungeonWeightData",
          1530);
        v139 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                 (common::milog::MiLogStream *const)(v2 + 2624),
                 (const char (*)[16])"[CONFIG_ERROR] ");
        v140 = common::milog::MiLogStream::operator<<<char [58],(char *[58])0>(
                 v139,
                 (const char (*)[58])"[ROGUELIKE] refresh card cost item not found, dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v140, dungeon_id_1);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2624));
        *(_DWORD *)(((v2 + 2624) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
    {
      *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v2 + 2560) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) != 0
        && (char)((v2 - 64 + 95) & 7) >= *(_BYTE *)(((v2 + 2591) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v2 + 2560, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v2 + 2560),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueDungeonWeightData",
        1524);
      v136 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
               (common::milog::MiLogStream *const)(v2 + 2560),
               (const char (*)[16])"[CONFIG_ERROR] ");
      v137 = common::milog::MiLogStream::operator<<<char [59],(char *[59])0>(
               v136,
               (const char (*)[59])"[ROGUELIKE] findDungeonExcelConfig dungeon_id, dungeon_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v137, dungeon_id_1);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 2560));
      *(_DWORD *)(((v2 + 2560) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 512));
  }
  if ( v169 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8150) = 0LL;
    memset(
      (void *)((unsigned __int64)(v4 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v4 + 2147450880 - (((_DWORD)v4 + 2147450888) & 0xFFFFFFF8) + 344) & 0xFFFFFFF8) >> 3));
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    __asan_stack_free_6(v2, 2752LL, v169);
  }
  return ret;
};

// Line 1545: range 000000001283C610-000000001283CC40
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteRogueGadgetData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r15d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  data::RogueGadgetExcelConfig **v6; // r8
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *p_gadget_type_config_map; // rcx
  std::pair<std::_Rb_tree_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >,bool> v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  int v11; // eax
  data::RogueCreateGadgetType *p_gadget_type; // rsi
  uint32_t gadget_state; // r14d
  data::RogueGadgetStateType *p_state; // rsi
  std::map<data::RogueGadgetStateType,unsigned int>::mapped_type *v15; // rax
  uint32_t *v16; // rdx
  char v17; // cl
  int32_t result; // eax
  data::RogueGadgetExcelConfigMap *__for_range; // [rsp+28h] [rbp-168h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false,false>::reference __in; // [rsp+30h] [rbp-160h]
  std::tuple_element<1,std::pair<unsigned int const,data::RogueGadgetExcelConfig> >::type *config; // [rsp+40h] [rbp-150h]
  std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::mapped_type *gadget_state_map; // [rsp+48h] [rbp-148h]
  std::vector<data::RogueGadgetStateConfig> *__for_range_0; // [rsp+50h] [rbp-140h]
  const data::RogueGadgetStateConfig *state_config; // [rsp+58h] [rbp-138h]
  char v25[304]; // [rsp+60h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v25;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 8 16 __for_begin:1546 64 8 14 __for_end:1546 96 8 9 <unknown> 128 8 16 __for_begin:1554 160"
                        " 8 14 __for_end:1554 192 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteRogueGadgetData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -218959360;
  v5[536862727] = -202116109;
  __for_range = &this->rogue_gadget_excel_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetExcelConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueGadgetExcelConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetExcelConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueGadgetExcelConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false> *)(v3 + 64)) )
    {
      v11 = 1;
      goto LABEL_33;
    }
    __in = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::RogueGadgetExcelConfig>(__in);
    config = std::get<1ul,unsigned int const,data::RogueGadgetExcelConfig>(__in);
    p_gadget_type_config_map = &this->gadget_type_config_map_;
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 96, v3 + 64);
    *(_QWORD *)(v3 + 96) = config;
    v8 = std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::emplace<data::RogueCreateGadgetType&,data::RogueGadgetExcelConfig *>(
           p_gadget_type_config_map,
           &config->gadget_type,
           (data::RogueGadgetExcelConfig **)(v3 + 96),
           (data::RogueCreateGadgetType *)p_gadget_type_config_map,
           v6);
    *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
    if ( !v8.second )
      break;
    p_gadget_type = &config->gadget_type;
    gadget_state_map = std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::operator[](
                         &this->gagdet_type_state_val_map_,
                         &config->gadget_type);
    __for_range_0 = &config->gadget_state_config_list;
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, p_gadget_type);
    *(std::vector<data::RogueGadgetStateConfig>::iterator *)(v3 + 128) = std::vector<data::RogueGadgetStateConfig>::begin(__for_range_0);
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, p_gadget_type);
    *(std::vector<data::RogueGadgetStateConfig>::iterator *)(v3 + 160) = std::vector<data::RogueGadgetStateConfig>::end(__for_range_0);
    while ( __gnu_cxx::operator!=<data::RogueGadgetStateConfig *,std::vector<data::RogueGadgetStateConfig>>(
              (const __gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig*,std::vector<data::RogueGadgetStateConfig> > *)(v3 + 128),
              (const __gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig*,std::vector<data::RogueGadgetStateConfig> > *)(v3 + 160)) )
    {
      state_config = __gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig *,std::vector<data::RogueGadgetStateConfig>>::operator*((const __gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig*,std::vector<data::RogueGadgetStateConfig> > *const)(v3 + 128));
      if ( *(_BYTE *)(((unsigned __int64)&state_config->state >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&state_config->state >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&state_config->state);
      }
      if ( state_config->state )
      {
        if ( *(_BYTE *)(((unsigned __int64)&state_config->gadget_state >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)state_config + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&state_config->gadget_state >> 3)
                                                                      + 0x7FFF8000) )
        {
          __asan_report_load4(&state_config->gadget_state);
        }
        gadget_state = state_config->gadget_state;
        p_state = &state_config->state;
        v15 = std::map<data::RogueGadgetStateType,unsigned int>::operator[](gadget_state_map, &state_config->state);
        v16 = v15;
        v17 = *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000);
        if ( v17 != 0 && (char)(((unsigned __int8)v15 & 7) + 3) >= v17 )
        {
          LOBYTE(p_state) = v17 != 0;
          __asan_report_store4(v15, p_state);
        }
        *v16 = gadget_state;
      }
      __gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig *,std::vector<data::RogueGadgetStateConfig>>::operator++((__gnu_cxx::__normal_iterator<data::RogueGadgetStateConfig*,std::vector<data::RogueGadgetStateConfig> > *const)(v3 + 128));
    }
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetExcelConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "rewriteRogueGadgetData",
    1550);
  v9 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 192),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v10 = common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(v9, (const char (*)[34])byte_1A98D920);
  common::milog::MiLogStream::operator<<<data::RogueCreateGadgetType,(data::RogueCreateGadgetType*)0>(
    v10,
    &config->gadget_type);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 192));
  v2 = -1;
  v11 = 0;
LABEL_33:
  if ( v11 == 1 )
    v2 = 0;
  result = v2;
  if ( v25 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8010) = 0LL;
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

// Line 1567: range 000000001283CC42-000000001283D234
int32_t __cdecl ActivityRogueExcelConfigMgr::checkRogueGadgetData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::type *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rdx
  GadgetExcelConfigMgr *p_gadget_config_mgr; // rdi
  __int64 v11; // rax
  char v12; // dl
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rcx
  int32_t result; // eax
  int32_t ret; // [rsp+14h] [rbp-13Ch]
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *__for_range; // [rsp+18h] [rbp-138h]
  std::tuple_element<0,std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::type *type; // [rsp+20h] [rbp-130h]
  std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::type *config_ptr; // [rsp+28h] [rbp-128h]
  char v20[288]; // [rsp+30h] [rbp-120h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(256LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 8 16 __for_begin:1569 64 8 14 __for_end:1569 96 16 9 <unknown> 128 32 9 <unknown> 192 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::checkRogueGadgetData;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -218959360;
  v4[536862723] = -219021312;
  v4[536862725] = -218959118;
  v4[536862727] = -202116109;
  ret = 0;
  __for_range = &this->gadget_type_config_map_;
  if ( *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 32, txt_config_mgr);
  *(std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*>::iterator *)(v2 + 32) = std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::begin(__for_range);
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, txt_config_mgr);
  *(std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*>::iterator *)(v2 + 64) = std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::end(__for_range);
  while ( std::operator!=(
            (const std::_Rb_tree_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::_Self *)(v2 + 32),
            (const std::_Rb_tree_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::_Self *)(v2 + 64)) )
  {
    *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) = 0;
    v5 = (unsigned __int64)std::_Rb_tree_iterator<std::pair<data::RogueCreateGadgetType const,data::RogueGadgetExcelConfig *>>::operator*((const std::_Rb_tree_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> > *const)(v2 + 32));
    if ( *(_WORD *)(((v2 + 96) >> 3) + 0x7FFF8000) )
      v5 = __asan_report_store16();
    if ( *(_WORD *)((v5 >> 3) + 0x7FFF8000) )
      v5 = __asan_report_load16(v5);
    v6 = *(_QWORD *)(v5 + 8);
    *(_QWORD *)(v2 + 96) = *(_QWORD *)v5;
    *(_QWORD *)(v2 + 104) = v6;
    type = std::get<0ul,data::RogueCreateGadgetType const,data::RogueGadgetExcelConfig *>((const std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *)(v2 + 96));
    v7 = (std::tuple_element<1,const std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::type *)std::get<1ul,data::RogueCreateGadgetType const,data::RogueGadgetExcelConfig *>((const std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *)(v2 + 96));
    config_ptr = v7;
    if ( *(_BYTE *)(((unsigned __int64)v7 >> 3) + 0x7FFF8000) )
      __asan_report_load8(v7);
    if ( *config_ptr )
    {
      p_gadget_config_mgr = &txt_config_mgr->gadget_config_mgr;
      if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
      {
        p_gadget_config_mgr = (GadgetExcelConfigMgr *)config_ptr;
        __asan_report_load8(config_ptr);
      }
      v11 = (__int64)*config_ptr;
      v12 = *(_BYTE *)(((unsigned __int64)&(*config_ptr)->gadget_id >> 3) + 0x7FFF8000);
      if ( v12 != 0 && v12 <= 3 )
      {
        p_gadget_config_mgr = (GadgetExcelConfigMgr *)&(*config_ptr)->gadget_id;
        __asan_report_load4(p_gadget_config_mgr);
      }
      if ( !data::GadgetExcelConfigMgrBase::findGadgetExcelConfig(p_gadget_config_mgr, *(unsigned int *)(v11 + 16)) )
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
          4u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "checkRogueGadgetData",
          1579);
        v13 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                (common::milog::MiLogStream *const)(v2 + 192),
                (const char (*)[16])"[CONFIG_ERROR] ");
        v14 = common::milog::MiLogStream::operator<<<char [51],(char *[51])0>(v13, (const char (*)[51])byte_1A98DAA0);
        if ( *(_BYTE *)(((unsigned __int64)config_ptr >> 3) + 0x7FFF8000) )
          __asan_report_load8(config_ptr);
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, &(*config_ptr)->gadget_id);
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 192));
        *(_DWORD *)(((v2 + 192) >> 3) + 0x7FFF8000) = -117901064;
        ret = -1;
      }
    }
    else
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
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkRogueGadgetData",
        1573);
      v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v2 + 128),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v9 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(v8, (const char (*)[44])byte_1A98DA40);
      common::milog::MiLogStream::operator<<<data::RogueCreateGadgetType,(data::RogueCreateGadgetType*)0>(v9, type);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      *(_DWORD *)(((v2 + 128) >> 3) + 0x7FFF8000) = -117901064;
      ret = -1;
    }
    std::_Rb_tree_iterator<std::pair<data::RogueCreateGadgetType const,data::RogueGadgetExcelConfig *>>::operator++((std::_Rb_tree_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> > *const)(v2 + 32));
  }
  result = ret;
  if ( v20 == (char *)v2 )
  {
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v2 = 1172321806LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v2 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1588: range 000000001283D236-000000001283D58D
int32_t __cdecl ActivityRogueExcelConfigMgr::rewriteGadgetRotData(
        ActivityRogueExcelConfigMgr *const this,
        TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  const unsigned int *v6; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> >,bool> v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  int v10; // eax
  int32_t result; // eax
  data::RogueGadgetRotConfigMap *__for_range; // [rsp+10h] [rbp-F0h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false,false>::reference v13; // [rsp+18h] [rbp-E8h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RogueGadgetRotConfig> >::type *config; // [rsp+28h] [rbp-D8h]
  char v15[208]; // [rsp+30h] [rbp-D0h] BYREF

  v3 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 32 8 16 __for_begin:1589 64 8 14 __for_end:1589 96 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::rewriteGadgetRotData;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -202116109;
  __for_range = &this->rogue_gadget_rot_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetRotConfig>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,data::RogueGadgetRotConfig>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,data::RogueGadgetRotConfig>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,data::RogueGadgetRotConfig>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false> *)(v3 + 64)) )
    {
      v10 = 1;
      goto LABEL_16;
    }
    v13 = std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false,false> *const)(v3 + 32));
    std::get<0ul,unsigned int const,data::RogueGadgetRotConfig>(v13);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RogueGadgetRotConfig> >::type *)std::get<1ul,unsigned int const,data::RogueGadgetRotConfig>(v13);
    v7 = std::map<data::RogueGadgetDirType,unsigned int>::emplace<data::RogueGadgetDirType const&,unsigned int const&>(
           &this->door_dir_rotation_map_,
           &config->dir,
           &config->rotation,
           &config->dir,
           v6);
    if ( !v7.second )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,data::RogueGadgetRotConfig>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "rewriteGadgetRotData",
    1593);
  v8 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
         (common::milog::MiLogStream *const)(v3 + 96),
         (const char (*)[16])"[CONFIG_ERROR] ");
  v9 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(v8, (const char (*)[26])byte_1A98DBA0);
  common::milog::MiLogStream::operator<<<data::RogueGadgetDirType,(data::RogueGadgetDirType*)0>(v9, &config->dir);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
  v2 = -1;
  v10 = 0;
LABEL_16:
  if ( v10 == 1 )
    v2 = 0;
  result = v2;
  if ( v15 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1601: range 000000001283D58E-000000001283D5A0
int32_t __cdecl ActivityRogueExcelConfigMgr::checkGadgetRotData(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  return 0;
};

// Line 1606: range 000000001283D5A2-000000001283E236
int32_t __cdecl ActivityRogueExcelConfigMgr::checkGadgetWidgetConfig(
        ActivityRogueExcelConfigMgr *const this,
        const TxtConfigMgr *txt_config_mgr)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rdx
  int v8; // eax
  ActivityRogueExcelConfigMgr *v9; // rcx
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rdx
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rdx
  std::unordered_map<unsigned int,PointScriptConfig>::size_type v16; // r15
  std::vector<unsigned int>::const_reference v17; // rax
  unsigned int *v18; // rdx
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rdx
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  common::milog::MiLogStream *v23; // rax
  common::milog::MiLogStream *v24; // rdx
  int32_t result; // eax
  LuaConfigMgr *lua_config_mgr; // [rsp+28h] [rbp-288h]
  std::unordered_map<unsigned int,unsigned int> *__for_range; // [rsp+30h] [rbp-280h]
  std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::reference v28; // [rsp+38h] [rbp-278h]
  std::tuple_element<0,std::pair<unsigned int const,unsigned int> >::type *dungeon_id; // [rsp+40h] [rbp-270h]
  std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *config_id; // [rsp+48h] [rbp-268h]
  data::RogueGadgetWeightExcelConfig *weight_config_ptr; // [rsp+50h] [rbp-260h]
  const GroupScriptConfig *trap_group_script_config_ptr; // [rsp+58h] [rbp-258h]
  char v33[592]; // [rsp+60h] [rbp-250h] BYREF

  v3 = (unsigned __int64)v33;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_4(544LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "9 32 8 16 __for_begin:1608 64 8 14 __for_end:1608 96 32 9 <unknown> 160 32 9 <unknown> 224 32 9 "
                        "<unknown> 288 32 9 <unknown> 352 32 9 <unknown> 416 32 9 <unknown> 480 32 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::checkGadgetWidgetConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -218959360;
  v5[536862724] = -218959118;
  v5[536862726] = -218959118;
  v5[536862728] = -218959118;
  v5[536862730] = -218959118;
  v5[536862732] = -218959118;
  v5[536862734] = -218959118;
  v5[536862736] = -202116109;
  lua_config_mgr = &TxtConfigMgr::getConfig(txt_config_mgr)->lua_config_mgr;
  __for_range = &this->dungeon_id_2_gadget_weight_config_map;
  if ( *(_BYTE *)(((v3 + 32) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 32, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 32) = std::unordered_map<unsigned int,unsigned int>::begin(__for_range);
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, txt_config_mgr);
  *(std::unordered_map<unsigned int,unsigned int>::iterator *)(v3 + 64) = std::unordered_map<unsigned int,unsigned int>::end(__for_range);
  while ( 1 )
  {
    if ( !std::__detail::operator!=<std::pair<unsigned int const,unsigned int>,false>(
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 32),
            (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v3 + 64)) )
    {
      v8 = 1;
      goto LABEL_48;
    }
    v28 = std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator*((const std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
    dungeon_id = std::get<0ul,unsigned int const,unsigned int>(v28);
    config_id = (std::tuple_element<1,const std::pair<unsigned int const,unsigned int> >::type *)std::get<1ul,unsigned int const,unsigned int>(v28);
    if ( !common::tools::MiscUtils::isContains<std::unordered_map<unsigned int,std::set<unsigned int>>,unsigned int>(
            &this->dungeon_cell_config_id_map_,
            dungeon_id) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1612);
      v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
             (common::milog::MiLogStream *const)(v3 + 96),
             (const char (*)[16])"[CONFIG_ERROR] ");
      v7 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v6, (const char (*)[42])byte_1A98DCE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, dungeon_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 96));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    v9 = this;
    if ( *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)config_id & 7) + 3) >= *(_BYTE *)(((unsigned __int64)config_id >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(config_id);
    }
    weight_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueGadgetWeightExcelConfig(v9, *config_id);
    if ( !weight_config_ptr )
    {
      if ( *(char *)(((v3 + 160) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 65) & 7) >= *(_BYTE *)(((v3 + 191) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 160, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 160),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1618);
      v10 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 160),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v11 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              v10,
              (const char (*)[26])"[ROGUE] ERROR, config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 160));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&weight_config_ptr->trap_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weight_config_ptr->trap_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weight_config_ptr->trap_group_id);
    }
    trap_group_script_config_ptr = LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, weight_config_ptr->trap_group_id);
    if ( !trap_group_script_config_ptr )
    {
      if ( *(char *)(((v3 + 224) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 - 32 + 31) & 7) >= *(_BYTE *)(((v3 + 255) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 224, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 224),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1624);
      v12 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 224),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v13 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(v12, (const char (*)[42])byte_1A98DD80);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, &weight_config_ptr->trap_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 224));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    if ( std::vector<unsigned int>::size(&weight_config_ptr->trap_num_range) != 2 )
    {
      if ( *(char *)(((v3 + 288) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 63) & 7) >= *(_BYTE *)(((v3 + 319) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 288, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 288),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1629);
      v14 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 288),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v15 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(v14, (const char (*)[49])byte_1A98DDE0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v15, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 288));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    v16 = std::unordered_map<unsigned int,PointScriptConfig>::size(&trap_group_script_config_ptr->point_config_map);
    v17 = std::vector<unsigned int>::operator[](&weight_config_ptr->trap_num_range, 1uLL);
    v18 = (unsigned int *)v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    if ( v16 < *v18 )
    {
      if ( *(char *)(((v3 + 352) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) != 0
        && (char)((v3 + 127) & 7) >= *(_BYTE *)(((v3 + 383) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v3 + 352, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v3 + 352),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1634);
      v19 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 352),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v20 = common::milog::MiLogStream::operator<<<char [69],(char *[69])0>(v19, (const char (*)[69])byte_1A98DE40);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, config_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 352));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    if ( *(_BYTE *)(((unsigned __int64)&weight_config_ptr->ball_group_id >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&weight_config_ptr->ball_group_id >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&weight_config_ptr->ball_group_id);
    }
    if ( !LuaConfigMgr::findGroupScriptConfig(lua_config_mgr, weight_config_ptr->ball_group_id) )
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
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "checkGadgetWidgetConfig",
        1639);
      v21 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
              (common::milog::MiLogStream *const)(v3 + 416),
              (const char (*)[16])"[CONFIG_ERROR] ");
      v22 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(v21, (const char (*)[39])byte_1A98DEC0);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, &weight_config_ptr->ball_group_id);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 416));
      v2 = -1;
      v8 = 0;
      goto LABEL_48;
    }
    if ( std::vector<unsigned int>::size(&weight_config_ptr->ball_num_range) != 2 )
      break;
    std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator++((std::__detail::_Node_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v3 + 32));
  }
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
    "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
    "checkGadgetWidgetConfig",
    1644);
  v23 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
          (common::milog::MiLogStream *const)(v3 + 480),
          (const char (*)[16])"[CONFIG_ERROR] ");
  v24 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(v23, (const char (*)[46])byte_1A98DF20);
  common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, config_id);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 480));
  v2 = -1;
  v8 = 0;
LABEL_48:
  if ( v8 == 1 )
    v2 = 0;
  result = v2;
  if ( v33 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8008) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8018) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8020) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8028) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8030) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8038) = 0;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = 0;
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
    *(_DWORD *)((v3 >> 3) + 0x7FFF8040) = -168430091;
  }
  return result;
};

// Line 1652: range 000000001283E238-000000001283E4BF
std::vector<unsigned int> *__cdecl ActivityRogueExcelConfigMgr::getDefaultUnlockRuneVec(
        std::vector<unsigned int> *retstr,
        const ActivityRogueExcelConfigMgr *const this)
{
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false> *v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  bool *p_is_default_unlock; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  data::RoguelikeRuneExcelConfigMap *__for_range; // [rsp+10h] [rbp-A0h]
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false>::reference v10; // [rsp+18h] [rbp-98h]
  std::tuple_element<0,std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *id; // [rsp+20h] [rbp-90h]
  std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *config; // [rsp+28h] [rbp-88h]
  char v13[128]; // [rsp+30h] [rbp-80h] BYREF

  v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false> *)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(96LL);
    if ( v3 )
      v2 = (std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false> *)v3;
  }
  v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>::__node_type *)1102416563;
  v2[1]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>::__node_type *)"2 32 8 16 __for_begin:1654 64 8 14 __for_end:1654";
  v2[2]._M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>::__node_type *)ActivityRogueExcelConfigMgr::getDefaultUnlockRuneVec;
  v4 = (_DWORD *)((unsigned __int64)v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -218959360;
  v4[536862722] = -202116352;
  std::vector<unsigned int>::vector(retstr);
  __for_range = &this->roguelike_rune_excel_config_map;
  if ( *(_BYTE *)(((unsigned __int64)&v2[4] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[4], this);
  v2[4]._M_cur = std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::begin(__for_range)._M_cur;
  if ( *(_BYTE *)(((unsigned __int64)&v2[8] >> 3) + 0x7FFF8000) )
    __asan_report_store8(&v2[8], this);
  v2[8]._M_cur = std::unordered_map<unsigned int,data::RoguelikeRuneExcelConfig>::end(__for_range)._M_cur;
  while ( std::__detail::operator!=<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>(v2 + 4, v2 + 8) )
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false>::operator*(v2 + 4);
    id = std::get<0ul,unsigned int const,data::RoguelikeRuneExcelConfig>(v10);
    config = (std::tuple_element<1,const std::pair<unsigned int const,data::RoguelikeRuneExcelConfig> >::type *)std::get<1ul,unsigned int const,data::RoguelikeRuneExcelConfig>(v10);
    p_is_default_unlock = &config->is_default_unlock;
    v6 = ((_BYTE)config + 12) & 7;
    v7 = (*(_BYTE *)(((unsigned __int64)p_is_default_unlock >> 3) + 0x7FFF8000) != 0) & (unsigned __int8)((char)v6 >= *(_BYTE *)(((unsigned __int64)p_is_default_unlock >> 3) + 0x7FFF8000));
    if ( (_BYTE)v7 )
      __asan_report_load1(p_is_default_unlock, v6, v7);
    if ( config->is_default_unlock )
      std::vector<unsigned int>::push_back(retstr, id);
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false,false>::operator++(v2 + 4);
  }
  if ( v13 == (char *)v2 )
  {
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    v2->_M_cur = (std::__detail::_Node_iterator_base<std::pair<unsigned int const,data::RoguelikeRuneExcelConfig>,false>::__node_type *)1172321806;
    *(_QWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)(((unsigned __int64)v2 >> 3) + 0x7FFF8008) = -168430091;
  }
  return retstr;
};

// Line 1665: range 000000001283E4C0-000000001283EE5B
__int64 __fastcall ActivityRogueExcelConfigMgr::randomDungeonIdByStageAndLevel(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 stage_id,
        uint32_t level,
        unsigned __int64 dungeon_id,
        unsigned __int64 dungeon_weight_config_id)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > > *p_dungeon_stage_level_map; // rdx
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > > *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,false,true>::pointer v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,false,true>::pointer v19; // rax
  common::milog::MiLogStream *v20; // rax
  common::milog::MiLogStream *v21; // rax
  common::milog::MiLogStream *v22; // rax
  const ActivityRogueExcelConfigMgr *v23; // rdx
  common::milog::MiLogStream *v24; // rax
  __int64 v25; // rsi
  uint32_t v26; // ecx
  char v27; // dl
  uint32_t v28; // ecx
  char v29; // dl
  const data::RoguelikeDungeonWeightExcelConfig *dungeon_weight_config_ptr; // [rsp+28h] [rbp-1E8h]
  char v34[480]; // [rsp+30h] [rbp-1E0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_3(448LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "10 48 4 19 rand_config_id:1678 64 4 13 stage_id:1664 80 4 10 level:1664 96 8 21 stage_level_pair"
                        ":1666 128 8 9 iter:1667 160 8 9 <unknown> 192 32 9 <unknown> 256 32 9 <unknown> 320 32 9 <unknow"
                        "n> 384 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueExcelConfigMgr::randomDungeonIdByStageAndLevel;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556943;
  v7[536862722] = -234556924;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862727] = -218959118;
  v7[536862729] = -218959118;
  v7[536862731] = -218959118;
  v7[536862733] = -202116109;
  *(_DWORD *)(v5 + 64) = stage_id;
  *(_DWORD *)(v5 + 80) = level;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, stage_id);
  *(std::pair<unsigned int,unsigned int> *)(v5 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v5 + 64),
                                                         (unsigned int *)(v5 + 80));
  p_dungeon_stage_level_map = &this->dungeon_stage_level_map_;
  if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 128, v5 + 80);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > >::const_iterator *)(v5 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<unsigned int,unsigned int>>>>::find(p_dungeon_stage_level_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > >::key_type *)(v5 + 96));
  v9 = &this->dungeon_stage_level_map_;
  if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 160, v5 + 96);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> > > >::const_iterator *)(v5 + 160) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<unsigned int,unsigned int>>>>::end(v9);
  v10 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>>,true>(
          (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,true> *)(v5 + 128),
          (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,true> *)(v5 + 160));
  *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 192) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 64 + 31) & 7) >= *(_BYTE *)(((v5 + 223) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 192, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 192),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "randomDungeonIdByStageAndLevel",
      1670);
    v11 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
            (common::milog::MiLogStream *const)(v5 + 192),
            (const char (*)[49])"[ROGUE] stage level dungeon not found, stage_id:");
    v12 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 64));
    v13 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v12, (const char (*)[11])" level_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v13, (const unsigned int *)(v5 + 80));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 192));
    result = 0xFFFFFFFFLL;
  }
  else
  {
    v15 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,false,true> *const)(v5 + 128));
    if ( std::map<unsigned int,unsigned int>::empty(&v15->second) )
    {
      *(_DWORD *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 256) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 64 + 95) & 7) >= *(_BYTE *)(((v5 + 287) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 256, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 256),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "randomDungeonIdByStageAndLevel",
        1675);
      v16 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v5 + 256),
              (const char (*)[36])"[ROGUE] weight map empty, stage_id:");
      v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v5 + 64));
      v18 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v17, (const char (*)[11])" level_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v5 + 80));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 256));
      result = 0xFFFFFFFFLL;
    }
    else
    {
      *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) = 4;
      if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_store4(v5 + 48, v5 + 160);
      *(_DWORD *)(v5 + 48) = 0;
      v19 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::map<unsigned int,unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<unsigned int,unsigned int> >,false,true> *const)(v5 + 128));
      if ( common::tools::RandomUtils::weightSelectOne<unsigned int,unsigned int>(
             &v19->second,
             (unsigned int *)(v5 + 48),
             0) )
      {
        *(_DWORD *)(((v5 + 320) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 320) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 351) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 320, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 320),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "randomDungeonIdByStageAndLevel",
          1681);
        v20 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
                (common::milog::MiLogStream *const)(v5 + 320),
                (const char (*)[42])"[ROGUE] weightSelectOne failed, stage_id:");
        v21 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                v20,
                (const unsigned int *)(v5 + 64));
        v22 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v21, (const char (*)[11])" level_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v22, (const unsigned int *)(v5 + 80));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 320));
        result = 0xFFFFFFFFLL;
      }
      else
      {
        v23 = this;
        if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
          __asan_report_load4(v5 + 48);
        dungeon_weight_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeDungeonWeightExcelConfig(
                                      v23,
                                      *(unsigned int *)(v5 + 48));
        if ( dungeon_weight_config_ptr )
        {
          v25 = (((_BYTE)dungeon_weight_config_ptr + 20) & 7u) + 3;
          if ( *(_BYTE *)(((unsigned __int64)&dungeon_weight_config_ptr->dungeon_id >> 3) + 0x7FFF8000) != 0
            && (char)((((_BYTE)dungeon_weight_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&dungeon_weight_config_ptr->dungeon_id >> 3)
                                                                                     + 0x7FFF8000) )
          {
            __asan_report_load4(&dungeon_weight_config_ptr->dungeon_id);
          }
          v26 = dungeon_weight_config_ptr->dungeon_id;
          v27 = *(_BYTE *)((dungeon_id >> 3) + 0x7FFF8000);
          if ( v27 != 0 && (char)((dungeon_id & 7) + 3) >= v27 )
          {
            LOBYTE(v25) = v27 != 0;
            __asan_report_store4(dungeon_id, v25);
          }
          *(_DWORD *)dungeon_id = v26;
          if ( *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v5 + 48) >> 3) + 0x7FFF8000) <= 3 )
            __asan_report_load4(v5 + 48);
          v28 = *(_DWORD *)(v5 + 48);
          v29 = *(_BYTE *)((dungeon_weight_config_id >> 3) + 0x7FFF8000);
          if ( v29 != 0 && (char)((dungeon_weight_config_id & 7) + 3) >= v29 )
          {
            LOBYTE(v25) = v29 != 0;
            __asan_report_store4(dungeon_weight_config_id, v25);
          }
          *(_DWORD *)dungeon_weight_config_id = v28;
          result = 0LL;
        }
        else
        {
          *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 384, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 384),
            &common::milog::MiLogDefault::default_log_obj_,
            3u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "randomDungeonIdByStageAndLevel",
            1687);
          v24 = common::milog::MiLogStream::operator<<<char [62],(char *[62])0>(
                  (common::milog::MiLogStream *const)(v5 + 384),
                  (const char (*)[62])"[ROGUE] dungeon_weight_config_ptr is nullptr, rand_config_id:");
          common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v24, (const unsigned int *)(v5 + 48));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
          result = 0xFFFFFFFFLL;
        }
      }
    }
  }
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF801C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8024) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF802C) = 0;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1696: range 000000001283EE5C-000000001283F0A8
std::vector<unsigned int> *__fastcall ActivityRogueExcelConfigMgr::findDungeonSequenceVec(
        std::vector<unsigned int> *retstr,
        std::vector<unsigned int> *this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *p_dungeon_sequence_map; // rdx
  const std::unordered_map<unsigned int,std::vector<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false>::pointer v9; // rax
  const ActivityRogueExcelConfigMgr *thisa; // [rsp+10h] [rbp-B0h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  thisa = (const ActivityRogueExcelConfigMgr *)this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:1695 64 8 9 iter:1698 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findDungeonSequenceVec;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( !(_BYTE)`guard variable for'ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)::empty_vec
    && __cxa_guard_acquire(&`guard variable for'ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)::empty_vec) )
  {
    std::vector<unsigned int>::vector(&ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)const::empty_vec);
    __cxa_guard_release(&`guard variable for'ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)::empty_vec);
    this = &ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)const::empty_vec;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::vector<unsigned int>::~vector,
      &ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)const::empty_vec,
      &_dso_handle);
  }
  p_dungeon_sequence_map = &thisa->dungeon_sequence_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::vector<unsigned int>>::find(
                                                                                               p_dungeon_sequence_map,
                                                                                               (const std::unordered_map<unsigned int,std::vector<unsigned int>>::key_type *)(v3 + 48));
  v7 = &thisa->dungeon_sequence_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::vector<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::vector<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::vector<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::vector<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::vector<unsigned int>::vector(
      retstr,
      &ActivityRogueExcelConfigMgr::findDungeonSequenceVec(unsigned int)const::empty_vec);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::vector<unsigned int> >,false,false> *const)(v3 + 64));
    std::vector<unsigned int>::vector(retstr, &v9->second);
  }
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
  return retstr;
};

// Line 1707: range 000000001283F0AA-000000001283F2F6
std::set<unsigned int> *__fastcall ActivityRogueExcelConfigMgr::findDungeonCellSet(
        std::set<unsigned int> *retstr,
        std::set<unsigned int> *this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::set<unsigned int>> *p_dungeon_cell_config_id_map; // rdx
  const std::unordered_map<unsigned int,std::set<unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false>::pointer v9; // rax
  const ActivityRogueExcelConfigMgr *thisa; // [rsp+10h] [rbp-B0h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  thisa = (const ActivityRogueExcelConfigMgr *)this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:1706 64 8 9 iter:1709 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findDungeonCellSet;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( !(_BYTE)`guard variable for'ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)::empty_set
    && __cxa_guard_acquire(&`guard variable for'ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)::empty_set) )
  {
    std::set<unsigned int>::set(&ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)const::empty_set);
    __cxa_guard_release(&`guard variable for'ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)::empty_set);
    this = &ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)const::empty_set;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::set<unsigned int>::~set,
      &ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)const::empty_set,
      &_dso_handle);
  }
  p_dungeon_cell_config_id_map = &thisa->dungeon_cell_config_id_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::set<unsigned int>>::find(
                                                                                            p_dungeon_cell_config_id_map,
                                                                                            (const std::unordered_map<unsigned int,std::set<unsigned int>>::key_type *)(v3 + 48));
  v7 = &thisa->dungeon_cell_config_id_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::set<unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::set<unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::set<unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::set<unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::set<unsigned int>::set(retstr, &ActivityRogueExcelConfigMgr::findDungeonCellSet(unsigned int)const::empty_set);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::set<unsigned int> >,false,false> *const)(v3 + 64));
    std::set<unsigned int>::set(retstr, &v9->second);
  }
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
  return retstr;
};

// Line 1718: range 000000001283F2F8-000000001283F563
__int64 __fastcall ActivityRogueExcelConfigMgr::findCellConfigIdByDungeonIdAndCellId(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id,
        uint32_t cell_id)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *p_dungeon_cell_pair_config_id_map; // rdx
  std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > > *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true>::pointer v10; // rdx
  unsigned int *p_second; // rax
  char v13[192]; // [rsp+10h] [rbp-C0h] BYREF

  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(160LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "5 32 4 15 dungeon_id:1717 48 4 12 cell_id:1717 64 8 25 dungeon_cell_id_pair:1719 96 8 9 iter:172"
                        "0 128 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findCellConfigIdByDungeonIdAndCellId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -202116352;
  *(_DWORD *)(v3 + 32) = dungeon_id;
  *(_DWORD *)(v3 + 48) = cell_id;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, dungeon_id);
  *(std::pair<unsigned int,unsigned int> *)(v3 + 64) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v3 + 32),
                                                         (unsigned int *)(v3 + 48));
  p_dungeon_cell_pair_config_id_map = &this->dungeon_cell_pair_config_id_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 96) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::find(p_dungeon_cell_pair_config_id_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::key_type *)(v3 + 64));
  v7 = &this->dungeon_cell_pair_config_id_map_;
  if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 128, v3 + 64);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int> > >::const_iterator *)(v3 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,unsigned int,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,unsigned int>>>::end(v7);
  v8 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 96),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,true> *)(v3 + 128));
  *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    v10 = std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,unsigned int>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,unsigned int>,false,true> *const)(v3 + 96));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = v10->second;
  }
  if ( v13 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v3 >> 3) + 0x7FFF8010) = -168430091;
  }
  return result;
};

// Line 1729: range 000000001283F564-000000001283F91F
__int64 __fastcall ActivityRogueExcelConfigMgr::findCellWeightByDungeonIdAndCellId(
        const ActivityRogueExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t cell_id,
        data::RogueCellType cell_type)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rax
  _DWORD *v6; // r13
  unsigned int CellConfigIdByDungeonIdAndCellId; // eax
  __int64 result; // rax
  const ActivityRogueExcelConfigMgr *v9; // rcx
  int v10; // eax
  common::milog::MiLogStream *v11; // rax
  const data::RogueDungeonCellExcelConfig *cell_config_ptr; // [rsp+30h] [rbp-B0h]
  const data::RogueCellWeightExcelConfig *weight_config_ptr; // [rsp+38h] [rbp-A8h]
  char v16[160]; // [rsp+40h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 48 4 14 cell_type:1728 64 32 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueExcelConfigMgr::findCellWeightByDungeonIdAndCellId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862723] = -202116109;
  *(_DWORD *)(v4 + 48) = cell_type;
  CellConfigIdByDungeonIdAndCellId = ActivityRogueExcelConfigMgr::findCellConfigIdByDungeonIdAndCellId(
                                       this,
                                       dungeon_id,
                                       cell_id);
  cell_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(
                      this,
                      CellConfigIdByDungeonIdAndCellId);
  if ( !cell_config_ptr )
  {
    result = 0LL;
    goto LABEL_27;
  }
  v9 = this;
  if ( *(_BYTE *)(((unsigned __int64)&cell_config_ptr->weight_id >> 3) + 0x7FFF8000) != 0
    && (char)((((_BYTE)cell_config_ptr + 100) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&cell_config_ptr->weight_id >> 3)
                                                                    + 0x7FFF8000) )
  {
    __asan_report_load4(&cell_config_ptr->weight_id);
  }
  weight_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueCellWeightExcelConfig(
                        v9,
                        cell_config_ptr->weight_id);
  if ( !weight_config_ptr )
  {
    result = 0LL;
    goto LABEL_27;
  }
  v10 = *(_DWORD *)(v4 + 48);
  if ( v10 == 5 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&weight_config_ptr->spring_weight >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)weight_config_ptr + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config_ptr->spring_weight >> 3)
                                                                       + 0x7FFF8000) )
    {
      __asan_report_load4(&weight_config_ptr->spring_weight);
    }
    result = weight_config_ptr->spring_weight;
  }
  else
  {
    if ( v10 > 5 )
    {
LABEL_24:
      if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 95) & 7) >= *(_BYTE *)(((v4 + 95) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v4 + 64, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v4 + 64),
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "findCellWeightByDungeonIdAndCellId",
        1756);
      v11 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
              (common::milog::MiLogStream *const)(v4 + 64),
              (const char (*)[36])"not supported cell type, cell_type:");
      common::milog::MiLogStream::operator<<<data::RogueCellType,(data::RogueCellType*)0>(
        v11,
        (const data::RogueCellType *)(v4 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v4 + 64));
      result = 0LL;
      goto LABEL_27;
    }
    if ( v10 == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&weight_config_ptr->store_weight >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&weight_config_ptr->store_weight >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&weight_config_ptr->store_weight);
      }
      result = weight_config_ptr->store_weight;
    }
    else
    {
      if ( v10 != 3 )
        goto LABEL_24;
      if ( *(_BYTE *)(((unsigned __int64)&weight_config_ptr->elite_weight >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)weight_config_ptr + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&weight_config_ptr->elite_weight >> 3)
                                                                         + 0x7FFF8000) )
      {
        __asan_report_load4(&weight_config_ptr->elite_weight);
      }
      result = weight_config_ptr->elite_weight;
    }
  }
LABEL_27:
  if ( v16 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF800C) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1764: range 000000001283F920-000000001283FB6D
__int64 __fastcall ActivityRogueExcelConfigMgr::getRuneDefaultUseCount(
        const ActivityRogueExcelConfigMgr *const this,
        uint32_t rune_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::RoguelikeRuneExcelConfig *config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 rune_id:1763 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::getRuneDefaultUseCount;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = rune_id;
  config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeRuneExcelConfig(this, *(unsigned int *)(v2 + 48));
  if ( config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&config_ptr->default_use_count >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&config_ptr->default_use_count >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&config_ptr->default_use_count);
    }
    result = config_ptr->default_use_count;
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
      3u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "getRuneDefaultUseCount",
      1768);
    v5 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[36])"findRoguelikeRuneExcelConfig failed");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 1775: range 000000001283FB6E-000000001283FDBB
__int64 __fastcall ActivityRogueExcelConfigMgr::getRoguelikeCardType(
        const ActivityRogueExcelConfigMgr *const this,
        uint32_t card_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  _DWORD *v4; // r13
  common::milog::MiLogStream *v5; // rax
  __int64 result; // rax
  const data::RoguelikeCardExcelConfig *card_config_ptr; // [rsp+18h] [rbp-A8h]
  char v8[160]; // [rsp+20h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v8;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "2 48 4 12 card_id:1774 64 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::getRoguelikeCardType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862723] = -202116109;
  *(_DWORD *)(v2 + 48) = card_id;
  card_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRoguelikeCardExcelConfig(
                      this,
                      *(unsigned int *)(v2 + 48));
  if ( card_config_ptr )
  {
    if ( *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&card_config_ptr->type >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&card_config_ptr->type);
    }
    result = (unsigned int)card_config_ptr->type;
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
      3u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "getRoguelikeCardType",
      1779);
    v5 = common::milog::MiLogStream::operator<<<char [46],(char *[46])0>(
           (common::milog::MiLogStream *const)(v2 + 64),
           (const char (*)[46])"findRoguelikeCardExcelConfig failed, card_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v5, (const unsigned int *)(v2 + 48));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 64));
    result = 0LL;
  }
  if ( v8 == (char *)v2 )
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

// Line 1786: range 000000001283FDBC-000000001283FF9E
const data::RogueGadgetExcelConfig *__fastcall ActivityRogueExcelConfigMgr::findGadgetConfigByType(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 type)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *p_gadget_type_config_map; // rdx
  std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> *v6; // rdx
  bool v7; // al
  const data::RogueGadgetExcelConfig *result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::pointer v9; // rax
  char v10[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v10;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 9 type:1785 64 8 9 iter:1787 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::findGadgetConfigByType;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = type;
  p_gadget_type_config_map = &this->gadget_type_config_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, type);
  *(std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*>::const_iterator *)(v2 + 64) = std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::find(p_gadget_type_config_map, (const std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*>::key_type *)(v2 + 48));
  v6 = &this->gadget_type_config_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*>::const_iterator *)(v2 + 96) = std::map<data::RogueCreateGadgetType,data::RogueGadgetExcelConfig *>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,data::RogueGadgetExcelConfig *>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,data::RogueGadgetExcelConfig*> > *const)(v2 + 64));
    if ( *(_BYTE *)(((unsigned __int64)&v9->second >> 3) + 0x7FFF8000) )
      __asan_report_load8(&v9->second);
    result = v9->second;
  }
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

// Line 1796: range 000000001283FFA0-000000001284019B
__int64 __fastcall ActivityRogueExcelConfigMgr::findGadgetRotByDir(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dir)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::map<data::RogueGadgetDirType,unsigned int> *p_door_dir_rotation_map; // rdx
  std::map<data::RogueGadgetDirType,unsigned int> *v6; // rdx
  bool v7; // al
  __int64 result; // rax
  std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> >::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 8 dir:1795 64 8 9 iter:1797 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::findGadgetRotByDir;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dir;
  p_door_dir_rotation_map = &this->door_dir_rotation_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dir);
  *(std::map<data::RogueGadgetDirType,unsigned int>::const_iterator *)(v2 + 64) = std::map<data::RogueGadgetDirType,unsigned int>::find(
                                                                                    p_door_dir_rotation_map,
                                                                                    (const std::map<data::RogueGadgetDirType,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->door_dir_rotation_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::map<data::RogueGadgetDirType,unsigned int>::const_iterator *)(v2 + 96) = std::map<data::RogueGadgetDirType,unsigned int>::end(v6);
  v7 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> >::_Self *)(v2 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> >::_Self *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::_Rb_tree_const_iterator<std::pair<data::RogueGadgetDirType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetDirType,unsigned int> > *const)(v2 + 64));
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

// Line 1806: range 000000001284019C-00000000128401D7
const data::RogueDungeonCellExcelConfig *__cdecl ActivityRogueExcelConfigMgr::findDungeonCellConfigByDungeonIdAndCellId(
        const ActivityRogueExcelConfigMgr *const this,
        uint32_t dungeon_id,
        uint32_t cell_id)
{
  unsigned int CellConfigIdByDungeonIdAndCellId; // eax

  CellConfigIdByDungeonIdAndCellId = ActivityRogueExcelConfigMgr::findCellConfigIdByDungeonIdAndCellId(
                                       this,
                                       dungeon_id,
                                       cell_id);
  return data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(this, CellConfigIdByDungeonIdAndCellId);
};

// Line 1811: range 00000000128401D8-00000000128408A3
int32_t __cdecl ActivityRogueExcelConfigMgr::getCellsDir(
        const ActivityRogueExcelConfigMgr *const this,
        const std::vector<unsigned int> *lcell_coord,
        const std::vector<unsigned int> *rcell_coord,
        data::RogueGadgetDirType *dir)
{
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v6; // rax
  int *v7; // rdx
  int v8; // ebx
  std::vector<unsigned int>::const_reference v9; // rax
  _DWORD *v10; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v11; // rax
  unsigned int *v12; // rdx
  unsigned int v13; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v14; // rax
  unsigned int *v15; // rdx
  char v16; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v17; // rax
  int *v18; // rdx
  int v19; // ebx
  std::vector<unsigned int>::const_reference v20; // rax
  _DWORD *v21; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v22; // rax
  unsigned int *v23; // rdx
  unsigned int v24; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v25; // rax
  unsigned int *v26; // rdx
  char v27; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v28; // rax
  unsigned int *v29; // rdx
  unsigned int v30; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v31; // rax
  unsigned int *v32; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v33; // rax
  int *v34; // rdx
  int v35; // ebx
  std::vector<unsigned int>::const_reference v36; // rax
  _DWORD *v37; // rdx
  char v38; // al
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v39; // rax
  unsigned int *v40; // rdx
  unsigned int v41; // ebx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v42; // rax
  unsigned int *v43; // rdx
  __gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *v44; // rax
  int *v45; // rdx
  int v46; // ebx
  std::vector<unsigned int>::const_reference v47; // rax
  _DWORD *v48; // rdx
  char v49; // al

  if ( std::vector<unsigned int>::size(lcell_coord) != 2 || std::vector<unsigned int>::size(rcell_coord) != 2 )
    return -1;
  v6 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                             rcell_coord,
                                                                                             1uLL);
  v7 = (int *)v6;
  if ( *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v6 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v6 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v6);
  }
  v8 = *v7;
  v9 = std::vector<unsigned int>::operator[](lcell_coord, 1uLL);
  v10 = v9;
  if ( *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v9 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v9 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v9);
  }
  if ( v8 != *v10 )
    goto LABEL_18;
  v11 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                              rcell_coord,
                                                                                              0LL);
  v12 = v11;
  if ( *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v11 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v11 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v11);
  }
  v13 = *v12;
  v14 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                              lcell_coord,
                                                                                              0LL);
  v15 = v14;
  if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
    && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
  {
    __asan_report_load4(v14);
  }
  if ( v13 > *v15 )
    v16 = 1;
  else
LABEL_18:
    v16 = 0;
  if ( v16 )
  {
    if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(dir, ((unsigned __int8)dir & 7u) + 3);
    }
    *dir = ROGUE_GADGET_ROT_RIGHT;
    return 0;
  }
  else
  {
    v17 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                rcell_coord,
                                                                                                1uLL);
    v18 = (int *)v17;
    if ( *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v17 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v17 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v17);
    }
    v19 = *v18;
    v20 = std::vector<unsigned int>::operator[](lcell_coord, 1uLL);
    v21 = v20;
    if ( *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v20 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v20 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v20);
    }
    if ( v19 != *v21 )
      goto LABEL_34;
    v22 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                rcell_coord,
                                                                                                0LL);
    v23 = v22;
    if ( *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v22 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v22 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v22);
    }
    v24 = *v23;
    v25 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                lcell_coord,
                                                                                                0LL);
    v26 = v25;
    if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(v25);
    }
    if ( v24 < *v26 )
      v27 = 1;
    else
LABEL_34:
      v27 = 0;
    if ( v27 )
    {
      if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(dir, ((unsigned __int8)dir & 7u) + 3);
      }
      *dir = ROGUE_GADGET_ROT_LEFT;
      return 0;
    }
    else
    {
      v28 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  rcell_coord,
                                                                                                  1uLL);
      v29 = v28;
      if ( *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v28 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v28 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v28);
      }
      v30 = *v29;
      v31 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  lcell_coord,
                                                                                                  1uLL);
      v32 = v31;
      if ( *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v31 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v31 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v31);
      }
      if ( v30 >= *v32 )
        goto LABEL_50;
      v33 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                  rcell_coord,
                                                                                                  0LL);
      v34 = (int *)v33;
      if ( *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v33 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v33 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v33);
      }
      v35 = *v34;
      v36 = std::vector<unsigned int>::operator[](lcell_coord, 0LL);
      v37 = v36;
      if ( *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v36 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v36 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v36);
      }
      if ( v35 == *v37 )
        v38 = 1;
      else
LABEL_50:
        v38 = 0;
      if ( v38 )
      {
        if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
        {
          __asan_report_store4(dir, ((unsigned __int8)dir & 7u) + 3);
        }
        *dir = ROGUE_GADGET_ROT_UP;
        return 0;
      }
      else
      {
        v39 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    rcell_coord,
                                                                                                    1uLL);
        v40 = v39;
        if ( *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v39 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v39 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v39);
        }
        v41 = *v40;
        v42 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    lcell_coord,
                                                                                                    1uLL);
        v43 = v42;
        if ( *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v42 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v42 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v42);
        }
        if ( v41 <= *v43 )
          goto LABEL_66;
        v44 = (__gnu_cxx::__alloc_traits<std::allocator<unsigned int>,unsigned int>::value_type *)std::vector<unsigned int>::operator[](
                                                                                                    rcell_coord,
                                                                                                    0LL);
        v45 = (int *)v44;
        if ( *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v44 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v44 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v44);
        }
        v46 = *v45;
        v47 = std::vector<unsigned int>::operator[](lcell_coord, 0LL);
        v48 = v47;
        if ( *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v47 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v47 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v47);
        }
        if ( v46 == *v48 )
          v49 = 1;
        else
LABEL_66:
          v49 = 0;
        if ( v49 )
        {
          if ( *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)dir & 7) + 3) >= *(_BYTE *)(((unsigned __int64)dir >> 3) + 0x7FFF8000) )
          {
            __asan_report_store4(dir, ((unsigned __int8)dir & 7u) + 3);
          }
          *dir = ROGUE_GADGET_ROT_DOWN;
          return 0;
        }
        else
        {
          return -1;
        }
      }
    }
  }
};

// Line 1844: range 00000000128408A4-0000000012840C2D
RogueCellAdjMap *__fastcall ActivityRogueExcelConfigMgr::findCellAjdMap(
        RogueCellAdjMap *retstr,
        RogueCellAdjMap *this,
        uint32_t dungeon_id,
        uint32_t cell_id)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  const std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>> *p_cell_adj_dir_map; // rdx
  const std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>> *v8; // rdx
  bool v9; // al
  std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> *p_second; // rdx
  std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> *v11; // rdx
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::RogueGadgetDirType,unsigned int> > >::pointer v13; // rax
  const ActivityRogueExcelConfigMgr *thisa; // [rsp+10h] [rbp-F0h]
  char v18[224]; // [rsp+20h] [rbp-E0h] BYREF

  thisa = (const ActivityRogueExcelConfigMgr *)this;
  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(192LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "6 32 4 15 dungeon_id:1843 48 4 12 cell_id:1843 64 8 15 outer_iter:1846 96 8 9 <unknown> 128 8 14"
                        " cell_iter:1851 160 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueExcelConfigMgr::findCellAjdMap;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556924;
  v6[536862722] = -218959360;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -202116352;
  *(_DWORD *)(v4 + 32) = dungeon_id;
  *(_DWORD *)(v4 + 48) = cell_id;
  if ( !(_BYTE)`guard variable for'ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)::empty_map
    && __cxa_guard_acquire(&`guard variable for'ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)::empty_map) )
  {
    std::map<data::RogueGadgetDirType,unsigned int>::map(&ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)const::empty_map);
    __cxa_guard_release(&`guard variable for'ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)::empty_map);
    this = &ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)const::empty_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<data::RogueGadgetDirType,unsigned int>::~map,
      &ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)const::empty_map,
      &_dso_handle);
  }
  p_cell_adj_dir_map = &thisa->cell_adj_dir_map_;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, this);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::find(p_cell_adj_dir_map, (const std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::key_type *)(v4 + 32));
  v8 = &thisa->cell_adj_dir_map_;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 32);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> >,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> >,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
    goto LABEL_12;
  *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) = 0;
  p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> >,false,false> *const)(v4 + 64))->second;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 96);
  *(std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::const_iterator *)(v4 + 128) = std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::find(p_second, (const std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::key_type *)(v4 + 48));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = 0;
  v11 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>> >,false,false> *const)(v4 + 64))->second;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v4 + 48);
  *(std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::const_iterator *)(v4 + 160) = std::map<unsigned int,std::map<data::RogueGadgetDirType,unsigned int>>::end(v11);
  v12 = std::operator==(
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::RogueGadgetDirType,unsigned int> > >::_Self *)(v4 + 128),
          (const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::RogueGadgetDirType,unsigned int> > >::_Self *)(v4 + 160));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v12 )
  {
LABEL_12:
    std::map<data::RogueGadgetDirType,unsigned int>::map(
      retstr,
      &ActivityRogueExcelConfigMgr::findCellAjdMap(unsigned int,unsigned int)const::empty_map);
  }
  else
  {
    v13 = std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::RogueGadgetDirType,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::map<data::RogueGadgetDirType,unsigned int> > > *const)(v4 + 128));
    std::map<data::RogueGadgetDirType,unsigned int>::map(retstr, &v13->second);
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return retstr;
};

// Line 1860: range 0000000012840C2E-000000001284124C
Vector3 __cdecl ActivityRogueExcelConfigMgr::getCellDoorPosition(
        const ActivityRogueExcelConfigMgr *const this,
        const std::vector<float> *cell_center_pos,
        uint32_t offset,
        data::RogueGadgetDirType dir)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  float v7; // xmm1_4
  __int64 v8; // xmm0_8
  __int64 v11; // [rsp+44h] [rbp-8Ch]
  float v12; // [rsp+4Ch] [rbp-84h]
  char v13[128]; // [rsp+50h] [rbp-80h] BYREF
  Vector3 result; // 0:xmm0_8.8,8:xmm1_4.4

  v4 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(96LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "2 32 12 9 <unknown> 64 12 8 pos:1865";
  *(_QWORD *)(v4 + 16) = ActivityRogueExcelConfigMgr::getCellDoorPosition;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -219020288;
  v6[536862722] = -202177536;
  if ( std::vector<float>::size(cell_center_pos) != 3 )
  {
    Vector3::Vector3((Vector3 *const)(v4 + 32), 0.0, 0.0, 0.0);
    if ( *(char *)(((v4 + 32) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 43) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 43) & 7) >= *(_BYTE *)(((v4 + 43) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4 + 32, 12LL);
    }
    v11 = *(_QWORD *)(v4 + 32);
    v12 = *(float *)(v4 + 40);
    goto LABEL_37;
  }
  Vector3::Vector3((Vector3 *const)(v4 + 64), cell_center_pos);
  if ( dir == ROGUE_GADGET_ROT_RIGHT )
  {
    if ( *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) <= 3 )
      __asan_report_load4(v4 + 72);
    *(float *)(v4 + 72) = (float)(int)offset + *(float *)(v4 + 72);
    if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
      && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
    {
      __asan_report_load_n(v4 + 64, 12LL);
    }
    v11 = *(_QWORD *)(v4 + 64);
    v12 = *(float *)(v4 + 72);
  }
  else
  {
    if ( dir > ROGUE_GADGET_ROT_RIGHT )
    {
LABEL_34:
      if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4 + 64, 12LL);
      }
      v11 = *(_QWORD *)(v4 + 64);
      v12 = *(float *)(v4 + 72);
      goto LABEL_37;
    }
    if ( dir == ROGUE_GADGET_ROT_LEFT )
    {
      if ( *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 72) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 72);
      *(float *)(v4 + 72) = *(float *)(v4 + 72) - (float)(int)offset;
      if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4 + 64, 12LL);
      }
      v11 = *(_QWORD *)(v4 + 64);
      v12 = *(float *)(v4 + 72);
    }
    else if ( dir )
    {
      if ( dir != ROGUE_GADGET_ROT_DOWN )
        goto LABEL_34;
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      *(float *)(v4 + 64) = (float)(int)offset + *(float *)(v4 + 64);
      if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4 + 64, 12LL);
      }
      v11 = *(_QWORD *)(v4 + 64);
      v12 = *(float *)(v4 + 72);
    }
    else
    {
      if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) != 0 && *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) <= 3 )
        __asan_report_load4(v4 + 64);
      *(float *)(v4 + 64) = *(float *)(v4 + 64) - (float)(int)offset;
      if ( *(char *)(((v4 + 64) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) != 0
        && (char)((v4 + 75) & 7) >= *(_BYTE *)(((v4 + 75) >> 3) + 0x7FFF8000) )
      {
        __asan_report_load_n(v4 + 64, 12LL);
      }
      v11 = *(_QWORD *)(v4 + 64);
      v12 = *(float *)(v4 + 72);
    }
  }
LABEL_37:
  v7 = v12;
  if ( v13 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = 0;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_DWORD *)((v4 >> 3) + 0x7FFF8008) = -168430091;
  }
  v8 = v11;
  result.x = *(float *)&v8;
  result.y = *((float *)&v8 + 1);
  result.z = v7;
  return result;
};

// Line 1894: range 000000001284124E-0000000012841575
__int64 __fastcall ActivityRogueExcelConfigMgr::findGadgetStateByStateType(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 gadget_type,
        data::RogueGadgetStateType state_type)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>> *p_gagdet_type_state_val_map; // rdx
  std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>> *v7; // rdx
  bool v8; // al
  __int64 result; // rax
  std::map<data::RogueGadgetStateType,unsigned int> *p_second; // rdx
  std::map<data::RogueGadgetStateType,unsigned int> *v11; // rdx
  bool v12; // al
  std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetStateType,unsigned int> >::pointer v13; // rdx
  unsigned int *v14; // rax
  char v16[224]; // [rsp+10h] [rbp-E0h] BYREF

  v3 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(192LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 32 4 16 gadget_type:1893 48 4 15 state_type:1893 64 8 16 gadget_iter:1895 96 8 9 <unknown> 128"
                        " 8 15 state_iter:1900 160 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findGadgetStateByStateType;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = -218959360;
  v5[536862723] = -218959360;
  v5[536862724] = -218959360;
  v5[536862725] = -202116352;
  *(_DWORD *)(v3 + 32) = gadget_type;
  *(_DWORD *)(v3 + 48) = state_type;
  p_gagdet_type_state_val_map = &this->gagdet_type_state_val_map_;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, gadget_type);
  *(std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::const_iterator *)(v3 + 64) = std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::find(p_gagdet_type_state_val_map, (const std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::key_type *)(v3 + 32));
  v7 = &this->gagdet_type_state_val_map_;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 32);
  *(std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::const_iterator *)(v3 + 96) = std::map<data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int>>::end(v7);
  v8 = std::operator==(
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int> > >::_Self *)(v3 + 64),
         (const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int> > >::_Self *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,std::map<data::RogueGadgetStateType,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 128, v3 + 96);
    *(std::map<data::RogueGadgetStateType,unsigned int>::const_iterator *)(v3 + 128) = std::map<data::RogueGadgetStateType,unsigned int>::find(
                                                                                         p_second,
                                                                                         (const std::map<data::RogueGadgetStateType,unsigned int>::key_type *)(v3 + 48));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = 0;
    v11 = &std::_Rb_tree_const_iterator<std::pair<data::RogueCreateGadgetType const,std::map<data::RogueGadgetStateType,unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueCreateGadgetType,std::map<data::RogueGadgetStateType,unsigned int> > > *const)(v3 + 64))->second;
    if ( *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v3 + 160, v3 + 48);
    *(std::map<data::RogueGadgetStateType,unsigned int>::const_iterator *)(v3 + 160) = std::map<data::RogueGadgetStateType,unsigned int>::end(v11);
    v12 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetStateType,unsigned int> >::_Self *)(v3 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetStateType,unsigned int> >::_Self *)(v3 + 160));
    *(_BYTE *)(((v3 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 0LL;
    }
    else
    {
      v13 = std::_Rb_tree_const_iterator<std::pair<data::RogueGadgetStateType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueGadgetStateType,unsigned int> > *const)(v3 + 128));
      v14 = &v13->second;
      if ( *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v14 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v14 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v14);
      }
      result = v13->second;
    }
  }
  if ( v16 == (char *)v3 )
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

// Line 1909: range 0000000012841576-0000000012841787
const data::RogueDungeonCellExcelConfig *__fastcall ActivityRogueExcelConfigMgr::findCellConfigByGroupId(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 group_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_group_id_2_cell_config_id_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::RogueDungeonCellExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 13 group_id:1908 64 8 9 iter:1910 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::findCellConfigByGroupId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = group_id;
  p_group_id_2_cell_config_id_map = &this->group_id_2_cell_config_id_map_;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, group_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_group_id_2_cell_config_id_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->group_id_2_cell_config_id_map_;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(this, v9->second);
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

// Line 1920: range 0000000012841878-00000000128424DB
__int64 __fastcall ActivityRogueExcelConfigMgr::randomMontserPool(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id,
        data::RogueMonsterPoolDifficultyType diff,
        unsigned __int64 pool_id,
        const std::unordered_set<unsigned int> *used_monster_pool_id_set)
{
  unsigned __int64 v5; // r13
  __int64 v6; // rax
  _DWORD *v7; // r12
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>> *p_dungeon_monster_pool_map; // rdx
  std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>> *v9; // rdx
  bool v10; // al
  common::milog::MiLogStream *v11; // rax
  unsigned int v12; // r14d
  std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> *p_second; // rdx
  std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> *v14; // rdx
  bool v15; // al
  common::milog::MiLogStream *v16; // rax
  unsigned __int64 v17; // rax
  std::vector<unsigned int> *v18; // rsi
  common::milog::MiLogStream *v19; // rax
  unsigned int *M_current; // r15
  unsigned int *v21; // rcx
  std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,std::vector<unsigned int> > >::pointer v22; // rax
  int v23; // eax
  __int64 v24; // rsi
  std::vector<unsigned int>::reference v25; // rax
  uint32_t *v26; // rdx
  uint32_t v27; // ecx
  char v28; // dl
  __int64 result; // rax
  unsigned int idx; // [rsp+3Ch] [rbp-2B4h]
  char v34[688]; // [rsp+40h] [rbp-2B0h] BYREF

  v5 = (unsigned __int64)v34;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v6 = __asan_stack_malloc_4(640LL);
    if ( v6 )
      v5 = v6;
  }
  *(_QWORD *)v5 = 1102416563LL;
  *(_QWORD *)(v5 + 8) = "15 32 4 15 dungeon_id:1919 48 4 9 diff:1919 64 8 17 dungeon_iter:1921 96 8 9 <unknown> 128 8 19 "
                        "diff_type_iter:1927 160 8 9 <unknown> 192 8 9 <unknown> 224 8 9 <unknown> 256 8 9 <unknown> 288 "
                        "8 9 <unknown> 320 24 13 pool_vec:1934 384 32 9 <unknown> 448 32 9 <unknown> 512 32 9 <unknown> 5"
                        "76 32 9 <unknown>";
  *(_QWORD *)(v5 + 16) = ActivityRogueExcelConfigMgr::randomMontserPool;
  v7 = (_DWORD *)(v5 >> 3);
  v7[536862720] = -235802127;
  v7[536862721] = -234556924;
  v7[536862722] = -218959360;
  v7[536862723] = -218959360;
  v7[536862724] = -218959360;
  v7[536862725] = -218959360;
  v7[536862726] = -218959360;
  v7[536862727] = -218959360;
  v7[536862728] = -218959360;
  v7[536862729] = -218959360;
  v7[536862730] = -234881024;
  v7[536862731] = -218959118;
  v7[536862733] = -218959118;
  v7[536862735] = -218959118;
  v7[536862737] = -218959118;
  v7[536862739] = -202116109;
  *(_DWORD *)(v5 + 32) = dungeon_id;
  *(_DWORD *)(v5 + 48) = diff;
  p_dungeon_monster_pool_map = &this->dungeon_monster_pool_map_;
  if ( *(_BYTE *)(((v5 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::const_iterator *)(v5 + 64) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::find(p_dungeon_monster_pool_map, (const std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::key_type *)(v5 + 32));
  v9 = &this->dungeon_monster_pool_map_;
  if ( *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v5 + 96, v5 + 32);
  *(std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::const_iterator *)(v5 + 96) = std::unordered_map<unsigned int,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>::end(v9);
  v10 = std::__detail::operator==<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v5 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false> *)(v5 + 96));
  *(_BYTE *)(((v5 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v10 )
  {
    *(_DWORD *)(((v5 + 384) >> 3) + 0x7FFF8000) = 0;
    if ( *(char *)(((v5 + 384) >> 3) + 0x7FFF8000) < 0
      || *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) != 0
      && (char)((v5 - 97) & 7) >= *(_BYTE *)(((v5 + 415) >> 3) + 0x7FFF8000) )
    {
      __asan_report_store_n(v5 + 384, 32LL);
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)(v5 + 384),
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
      "randomMontserPool",
      1924);
    v11 = common::milog::MiLogStream::operator<<<char [42],(char *[42])0>(
            (common::milog::MiLogStream *const)(v5 + 384),
            (const char (*)[42])"[ROGUE] dungeon_id not found, dungeon_id:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v11, (const unsigned int *)(v5 + 32));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 384));
    v12 = -1;
  }
  else
  {
    *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false,false> *const)(v5 + 64))->second;
    if ( *(_BYTE *)(((v5 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 128, v5 + 96);
    *(std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::const_iterator *)(v5 + 128) = std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::find(p_second, (const std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::key_type *)(v5 + 48));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = 0;
    v14 = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>> >,false,false> *const)(v5 + 64))->second;
    if ( *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v5 + 160, v5 + 48);
    *(std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::const_iterator *)(v5 + 160) = std::map<data::RogueMonsterPoolDifficultyType,std::vector<unsigned int>>::end(v14);
    v15 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,std::vector<unsigned int> > >::_Self *)(v5 + 128),
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,std::vector<unsigned int> > >::_Self *)(v5 + 160));
    *(_BYTE *)(((v5 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v15 )
    {
      *(_DWORD *)(((v5 + 448) >> 3) + 0x7FFF8000) = 0;
      if ( *(char *)(((v5 + 448) >> 3) + 0x7FFF8000) < 0
        || *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) != 0
        && (char)((v5 - 33) & 7) >= *(_BYTE *)(((v5 + 479) >> 3) + 0x7FFF8000) )
      {
        __asan_report_store_n(v5 + 448, 32LL);
      }
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)(v5 + 448),
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "randomMontserPool",
        1930);
      v16 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
              (common::milog::MiLogStream *const)(v5 + 448),
              (const char (*)[30])"[ROGUE] diff not found, diff:");
      common::milog::MiLogStream::operator<<<data::RogueMonsterPoolDifficultyType,(data::RogueMonsterPoolDifficultyType*)0>(
        v16,
        (const data::RogueMonsterPoolDifficultyType *)(v5 + 48));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 448));
      v12 = -1;
    }
    else
    {
      v17 = ((v5 + 320) >> 3) + 2147450880;
      *(_WORD *)v17 = 0;
      *(_BYTE *)(v17 + 2) = 0;
      v18 = &std::_Rb_tree_const_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,std::vector<unsigned int> > > *const)(v5 + 128))->second;
      std::vector<unsigned int>::vector((std::vector<unsigned int> *const)(v5 + 320), v18);
      if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 320)) )
      {
        *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = 0;
        if ( *(char *)(((v5 + 512) >> 3) + 0x7FFF8000) < 0
          || *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) != 0
          && (char)((v5 + 31) & 7) >= *(_BYTE *)(((v5 + 543) >> 3) + 0x7FFF8000) )
        {
          __asan_report_store_n(v5 + 512, 32LL);
        }
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)(v5 + 512),
          &common::milog::MiLogDefault::default_log_obj_,
          3u,
          "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
          "randomMontserPool",
          1937);
        v19 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
                (common::milog::MiLogStream *const)(v5 + 512),
                (const char (*)[38])"[ROGUE] pool_vec is empty dungeon_id:");
        common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v19, (const unsigned int *)(v5 + 32));
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 512));
        *(_DWORD *)(((v5 + 512) >> 3) + 0x7FFF8000) = -117901064;
        v12 = -1;
      }
      else
      {
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = 0;
        if ( *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 224, v18);
        *(std::vector<unsigned int>::iterator *)(v5 + 224) = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 320));
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 288),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 224));
        *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = 0;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = 0;
        M_current = std::vector<unsigned int>::end((std::vector<unsigned int> *const)(v5 + 320))._M_current;
        v21 = std::vector<unsigned int>::begin((std::vector<unsigned int> *const)(v5 + 320))._M_current;
        if ( *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) )
          __asan_report_store8(v5 + 192, v5 + 224);
        *(__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 192) = std::remove_if<__gnu_cxx::__normal_iterator<unsigned int *,std::vector<unsigned int>>,ActivityRogueExcelConfigMgr::randomMontserPool(unsigned int,data::RogueMonsterPoolDifficultyType,unsigned int &,std::unordered_set<unsigned int> const&)::{lambda(unsigned int)#1}>(
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)v21,
                                                                                                  (__gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> >)M_current,
                                                                                                  (ActivityRogueExcelConfigMgr::randomMontserPool::<lambda(uint32_t)>)used_monster_pool_id_set);
        __gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int>>::__normal_iterator<unsigned int *>(
          (__gnu_cxx::__normal_iterator<unsigned int const*,std::vector<unsigned int> > *const)(v5 + 256),
          (const __gnu_cxx::__normal_iterator<unsigned int*,std::vector<unsigned int> > *)(v5 + 192));
        if ( *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v5 + 256);
        if ( *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) )
          __asan_report_load8(v5 + 288);
        std::vector<unsigned int>::erase(
          (std::vector<unsigned int> *const)(v5 + 320),
          *(std::vector<unsigned int>::const_iterator *)(v5 + 256),
          *(std::vector<unsigned int>::const_iterator *)(v5 + 288));
        *(_BYTE *)(((v5 + 256) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 192) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 288) >> 3) + 0x7FFF8000) = -8;
        *(_BYTE *)(((v5 + 224) >> 3) + 0x7FFF8000) = -8;
        if ( std::vector<unsigned int>::empty((const std::vector<unsigned int> *const)(v5 + 320)) )
        {
          *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = 0;
          if ( *(char *)(((v5 + 576) >> 3) + 0x7FFF8000) < 0
            || *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) != 0
            && (char)((v5 + 95) & 7) >= *(_BYTE *)(((v5 + 607) >> 3) + 0x7FFF8000) )
          {
            __asan_report_store_n(v5 + 576, 32LL);
          }
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)(v5 + 576),
            &common::milog::MiLogDefault::default_log_obj_,
            1u,
            "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
            "randomMontserPool",
            1945);
          common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
            (common::milog::MiLogStream *const)(v5 + 576),
            (const char (*)[26])"[ROGUE] all pool is used!");
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v5 + 576));
          *(_DWORD *)(((v5 + 576) >> 3) + 0x7FFF8000) = -117901064;
          v22 = std::_Rb_tree_const_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,std::vector<unsigned int>>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,std::vector<unsigned int> > > *const)(v5 + 128));
          std::vector<unsigned int>::operator=((std::vector<unsigned int> *const)(v5 + 320), &v22->second);
        }
        v23 = std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 320));
        idx = common::tools::RandomUtils::rand<unsigned int>(0, v23 - 1);
        if ( idx < std::vector<unsigned int>::size((const std::vector<unsigned int> *const)(v5 + 320)) )
        {
          v24 = idx;
          v25 = std::vector<unsigned int>::operator[]((std::vector<unsigned int> *const)(v5 + 320), idx);
          v26 = v25;
          if ( *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) != 0
            && (char)(((unsigned __int8)v25 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v25 >> 3) + 0x7FFF8000) )
          {
            __asan_report_load4(v25);
          }
          v27 = *v26;
          v28 = *(_BYTE *)((pool_id >> 3) + 0x7FFF8000);
          if ( v28 != 0 && (char)((pool_id & 7) + 3) >= v28 )
          {
            LOBYTE(v24) = v28 != 0;
            __asan_report_store4(pool_id, v24);
          }
          *(_DWORD *)pool_id = v27;
          v12 = 0;
        }
        else
        {
          v12 = -1;
        }
      }
      std::vector<unsigned int>::~vector((std::vector<unsigned int> *const)(v5 + 320));
    }
  }
  result = v12;
  if ( v34 == (char *)v5 )
  {
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF8034) = 0;
    *(_QWORD *)((v5 >> 3) + 0x7FFF803C) = 0LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8044) = 0LL;
    *(_DWORD *)((v5 >> 3) + 0x7FFF804C) = 0;
  }
  else
  {
    *(_QWORD *)v5 = 1172321806LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8020) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8028) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8030) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8038) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8040) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v5 >> 3) + 0x7FFF8048) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1941: range 0000000012841788-0000000012841877
bool __fastcall ActivityRogueExcelConfigMgr::randomMontserPool(unsigned int,data::RogueMonsterPoolDifficultyType,unsigned int &,std::unordered_set<unsigned int> const&)const::{lambda(unsigned int)#1}::operator()(
        unsigned __int64 __closure,
        uint32_t pool_id)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  char *v4; // rdx
  unsigned __int64 v5; // r12
  bool result; // al
  char v7[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v7;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  v4 = (char *)(v2 + 64);
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 12 pool_id:1941";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::randomMontserPool(unsigned int,data::RogueMonsterPoolDifficultyType,unsigned int &,std::unordered_set<unsigned int> const&)const::{lambda(unsigned int)#1}::operator();
  v5 = v2 >> 3;
  *(_DWORD *)(v5 + 2147450880) = -235802127;
  *(_DWORD *)(v5 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = pool_id;
  if ( *(_BYTE *)((__closure >> 3) + 0x7FFF8000) )
    __asan_report_load8(__closure);
  result = common::tools::MiscUtils::isContains<std::unordered_set<unsigned int> const,unsigned int>(
             *(const std::unordered_set<unsigned int> **)__closure,
             (const unsigned int *)v4 - 8);
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

// Line 1958: range 00000000128424DC-0000000012842899
const data::RogueTokenExcelConfig *__fastcall ActivityRogueExcelConfigMgr::findTokenConfigByStageIdAndLevel(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 stage_id,
        uint32_t level,
        data::RogueMonsterPoolDifficultyType diff_type)
{
  unsigned __int64 v4; // r13
  __int64 v5; // rax
  _DWORD *v6; // r12
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > > *p_stage_level_token_map; // rdx
  std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > > *v8; // rdx
  bool v9; // al
  const data::RogueTokenExcelConfig *result; // rax
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int> *p_second; // rdx
  std::map<data::RogueMonsterPoolDifficultyType,unsigned int> *v12; // rdx
  bool v13; // al
  std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,unsigned int> >::pointer v14; // rdx
  unsigned int *v15; // rax
  char v18[288]; // [rsp+30h] [rbp-120h] BYREF

  v4 = (unsigned __int64)v18;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_2(256LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "8 48 4 13 stage_id:1957 64 4 10 level:1957 80 4 14 diff_type:1957 96 8 21 stage_level_pair:1959 "
                        "128 8 9 iter:1960 160 8 9 <unknown> 192 8 14 diff_iter:1965 224 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueExcelConfigMgr::findTokenConfigByStageIdAndLevel;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -234556924;
  v6[536862723] = -218959360;
  v6[536862724] = -218959360;
  v6[536862725] = -218959360;
  v6[536862726] = -218959360;
  v6[536862727] = -202116352;
  *(_DWORD *)(v4 + 48) = stage_id;
  *(_DWORD *)(v4 + 64) = level;
  *(_DWORD *)(v4 + 80) = diff_type;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, stage_id);
  *(std::pair<unsigned int,unsigned int> *)(v4 + 96) = std::make_pair<unsigned int &,unsigned int &>(
                                                         (unsigned int *)(v4 + 48),
                                                         (unsigned int *)(v4 + 64));
  p_stage_level_token_map = &this->stage_level_token_map_;
  if ( *(_BYTE *)(((v4 + 128) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 128, v4 + 64);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > >::const_iterator *)(v4 + 128) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>>>::find(p_stage_level_token_map, (const std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > >::key_type *)(v4 + 96));
  v8 = &this->stage_level_token_map_;
  if ( *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 160, v4 + 96);
  *(std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int> >,std::equal_to<std::pair<unsigned int,unsigned int> >,std::allocator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> > > >::const_iterator *)(v4 + 160) = std::unordered_map<std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>,boost::hash<std::pair<unsigned int,unsigned int>>,std::equal_to<std::pair<unsigned int,unsigned int>>,std::allocator<std::pair<std::pair<unsigned int,unsigned int> const,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>>>::end(v8);
  v9 = std::__detail::operator==<std::pair<std::pair const<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>,true>(
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> >,true> *)(v4 + 128),
         (const std::__detail::_Node_iterator_base<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> >,true> *)(v4 + 160));
  *(_BYTE *)(((v4 + 160) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> >,false,true> *const)(v4 + 128))->second;
    if ( *(_BYTE *)(((v4 + 192) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 192, v4 + 160);
    *(std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::const_iterator *)(v4 + 192) = std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::find(
                                                                                                   p_second,
                                                                                                   (const std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::key_type *)(v4 + 80));
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = 0;
    v12 = &std::__detail::_Node_const_iterator<std::pair<std::pair const<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int>>,false,true>::operator->((const std::__detail::_Node_const_iterator<std::pair<const std::pair<unsigned int,unsigned int>,std::map<data::RogueMonsterPoolDifficultyType,unsigned int> >,false,true> *const)(v4 + 128))->second;
    if ( *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v4 + 224, v4 + 80);
    *(std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::const_iterator *)(v4 + 224) = std::map<data::RogueMonsterPoolDifficultyType,unsigned int>::end(v12);
    v13 = std::operator==(
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,unsigned int> >::_Self *)(v4 + 192),
            (const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,unsigned int> >::_Self *)(v4 + 224));
    *(_BYTE *)(((v4 + 224) >> 3) + 0x7FFF8000) = -8;
    if ( v13 )
    {
      result = 0LL;
    }
    else
    {
      v14 = std::_Rb_tree_const_iterator<std::pair<data::RogueMonsterPoolDifficultyType const,unsigned int>>::operator->((const std::_Rb_tree_const_iterator<std::pair<const data::RogueMonsterPoolDifficultyType,unsigned int> > *const)(v4 + 192));
      v15 = &v14->second;
      if ( *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v15 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v15 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v15);
      }
      result = data::ActivityRogueExcelConfigMgrBase::findRogueTokenExcelConfig(this, v14->second);
    }
  }
  if ( v18 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8010) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8018) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 1975: range 000000001284289A-0000000012842C2E
__int64 __fastcall ActivityRogueExcelConfigMgr::getCellCardDepotId(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id,
        int cell_type,
        data::RogueMonsterPoolDifficultyType diff_type)
{
  unsigned __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // r13
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *p_dungeon_cell_depot_map; // rdx
  std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord> *v8; // rdx
  bool v9; // al
  __int64 result; // rax
  RoguelikeDungeonCellDepotRecord *record; // [rsp+28h] [rbp-A8h]
  char v14[160]; // [rsp+30h] [rbp-A0h] BYREF

  v4 = (unsigned __int64)v14;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v5 = __asan_stack_malloc_1(128LL);
    if ( v5 )
      v4 = v5;
  }
  *(_QWORD *)v4 = 1102416563LL;
  *(_QWORD *)(v4 + 8) = "3 48 4 15 dungeon_id:1974 64 8 9 iter:1976 96 8 9 <unknown>";
  *(_QWORD *)(v4 + 16) = ActivityRogueExcelConfigMgr::getCellCardDepotId;
  v6 = (_DWORD *)(v4 >> 3);
  v6[536862720] = -235802127;
  v6[536862721] = -234556943;
  v6[536862722] = -218959360;
  v6[536862723] = -202116352;
  *(_DWORD *)(v4 + 48) = dungeon_id;
  p_dungeon_cell_depot_map = &this->dungeon_cell_depot_map;
  if ( *(_BYTE *)(((v4 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::const_iterator *)(v4 + 64) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::find(
                                                                                                     p_dungeon_cell_depot_map,
                                                                                                     (const std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::key_type *)(v4 + 48));
  v8 = &this->dungeon_cell_depot_map;
  if ( *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v4 + 96, v4 + 48);
  *(std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::const_iterator *)(v4 + 96) = std::unordered_map<unsigned int,RoguelikeDungeonCellDepotRecord>::end(v8);
  v9 = std::__detail::operator==<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v4 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false> *)(v4 + 96));
  *(_BYTE *)(((v4 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v9 )
  {
    result = 0LL;
    goto LABEL_34;
  }
  record = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,RoguelikeDungeonCellDepotRecord>,false,false> *const)(v4 + 64))->second;
  if ( cell_type == 6 )
  {
    if ( *(_BYTE *)(((unsigned __int64)&record->boss_card_pool_id >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)record + 16) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->boss_card_pool_id >> 3)
                                                            + 0x7FFF8000) )
    {
      __asan_report_load4(&record->boss_card_pool_id);
    }
    result = record->boss_card_pool_id;
  }
  else
  {
    if ( cell_type > 6 )
      goto LABEL_33;
    if ( cell_type == 4 )
    {
      if ( *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)record & 7) + 3) >= *(_BYTE *)(((unsigned __int64)record >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(record);
      }
      result = record->normal_card_pool_id;
      goto LABEL_34;
    }
    if ( cell_type > 4 )
    {
LABEL_33:
      result = 0LL;
      goto LABEL_34;
    }
    if ( cell_type == 2 )
    {
      if ( *(_BYTE *)(((unsigned __int64)&record->shop_card_pool_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)record + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->shop_card_pool_id >> 3)
                                                              + 0x7FFF8000) )
      {
        __asan_report_load4(&record->shop_card_pool_id);
      }
      result = record->shop_card_pool_id;
    }
    else
    {
      if ( cell_type != 3 )
        goto LABEL_33;
      if ( diff_type == ROGUE_MONSTER_DIFFICULTY_ELITE_HARD )
      {
        if ( *(_BYTE *)(((unsigned __int64)&record->elite_hard_card_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)record + 8) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->elite_hard_card_pool_id >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&record->elite_hard_card_pool_id);
        }
        result = record->elite_hard_card_pool_id;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&record->elite_card_pool_id >> 3) + 0x7FFF8000) != 0
          && (char)((((_BYTE)record + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&record->elite_card_pool_id >> 3)
                                                               + 0x7FFF8000) )
        {
          __asan_report_load4(&record->elite_card_pool_id);
        }
        result = record->elite_card_pool_id;
      }
    }
  }
LABEL_34:
  if ( v14 == (char *)v4 )
  {
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0LL;
  }
  else
  {
    *(_QWORD *)v4 = 1172321806LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8000) = 0xF5F5F5F5F5F5F5F5LL;
    *(_QWORD *)((v4 >> 3) + 0x7FFF8008) = 0xF5F5F5F5F5F5F5F5LL;
  }
  return result;
};

// Line 2016: range 0000000012842C30-0000000012842DF1
const std::pair<unsigned int,unsigned int> *__fastcall ActivityRogueExcelConfigMgr::getRoguelikeDungeonCurseDataPair(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *p_dungeon_curse_depot_prob_map; // rdx
  std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>> *v6; // rdx
  bool v7; // al
  const std::pair<unsigned int,unsigned int> *result; // rax
  char v9[160]; // [rsp+10h] [rbp-A0h] BYREF

  v2 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:2015 64 8 9 iter:2017 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::getRoguelikeDungeonCurseDataPair;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_curse_depot_prob_map = &this->dungeon_curse_depot_prob_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::find(p_dungeon_curse_depot_prob_map, (const std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::key_type *)(v2 + 48));
  v6 = &this->dungeon_curse_depot_prob_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::pair<unsigned int,unsigned int>>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
    result = 0LL;
  else
    result = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> >,false,false> *const)(v2 + 64))->second;
  if ( v9 == (char *)v2 )
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

// Line 2029: range 0000000012842DF2-000000001284313C
__int64 __fastcall ActivityRogueExcelConfigMgr::getRoguelikeShikigamiGroupMaxLevel(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 shikigami_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *p_shikigami_level_cost_map; // rdx
  std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>> *v6; // rdx
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false>::pointer v7; // rax
  bool v8; // dl
  __int64 result; // rax
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *p_second; // rdx
  std::map<unsigned int,std::pair<unsigned int,unsigned int>> *v11; // rsi
  bool v12; // al
  std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > >::pointer v13; // rax
  unsigned int *p_first; // rdx
  char v15[240]; // [rsp+10h] [rbp-F0h] BYREF

  v2 = (unsigned __int64)v15;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 48 4 17 shikigami_id:2028 64 8 9 iter:2030 96 8 9 <unknown> 128 8 15 level_iter:2035 160 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::getRoguelikeShikigamiGroupMaxLevel;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862724] = -218959360;
  v4[536862725] = -202116352;
  *(_DWORD *)(v2 + 48) = shikigami_id;
  p_shikigami_level_cost_map = &this->shikigami_level_cost_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, shikigami_id);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::find(p_shikigami_level_cost_map, (const std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::key_type *)(v2 + 48));
  v6 = &this->shikigami_level_cost_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>::end(v6);
  v8 = 1;
  if ( !std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false>(
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 64),
          (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false> *)(v2 + 96)) )
  {
    v7 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64));
    if ( !std::map<unsigned int,std::pair<unsigned int,unsigned int>>::empty(&v7->second) )
      v8 = 0;
  }
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) = 0;
    p_second = &std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64))->second;
    if ( *(_BYTE *)(((v2 + 128) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 128, v2 + 96);
    v11 = p_second;
    std::map<unsigned int,std::pair<unsigned int,unsigned int>>::crbegin((const std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v2 + 128));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = 0;
    std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,std::pair<unsigned int,unsigned int>> >,false,false> *const)(v2 + 64));
    if ( *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) )
      __asan_report_store8(v2 + 160, v11);
    std::map<unsigned int,std::pair<unsigned int,unsigned int>>::rend((const std::map<unsigned int,std::pair<unsigned int,unsigned int>> *const)(v2 + 160));
    v12 = std::operator==<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>>(
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *)(v2 + 128),
            (const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *)(v2 + 160));
    *(_BYTE *)(((v2 + 160) >> 3) + 0x7FFF8000) = -8;
    if ( v12 )
    {
      result = 0LL;
    }
    else
    {
      v13 = std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int>>>>::operator->((const std::reverse_iterator<std::_Rb_tree_const_iterator<std::pair<unsigned int const,std::pair<unsigned int,unsigned int> > > > *const)(v2 + 128));
      p_first = (unsigned int *)&v13->first;
      if ( *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)v13 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v13 >> 3) + 0x7FFF8000) )
      {
        __asan_report_load4(v13);
      }
      result = *p_first;
    }
  }
  if ( v15 == (char *)v2 )
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

// Line 2044: range 000000001284313E-000000001284334F
const data::RogueGadgetWeightExcelConfig *__fastcall ActivityRogueExcelConfigMgr::findGadgetWeightConfigByDungeonId(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r12
  __int64 v3; // rax
  _DWORD *v4; // r13
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_id_2_gadget_weight_config_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  bool v7; // al
  const data::RogueGadgetWeightExcelConfig *result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v9; // rdx
  unsigned int *p_second; // rax
  char v11[176]; // [rsp+10h] [rbp-B0h] BYREF

  v2 = (unsigned __int64)v11;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_1(128LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "3 48 4 15 dungeon_id:2043 64 8 9 iter:2045 96 8 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::findGadgetWeightConfigByDungeonId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556943;
  v4[536862722] = -218959360;
  v4[536862723] = -202116352;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_id_2_gadget_weight_config_map = &this->dungeon_id_2_gadget_weight_config_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_id_2_gadget_weight_config_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_id_2_gadget_weight_config_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v7 )
  {
    result = 0LL;
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v9->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    result = data::ActivityRogueExcelConfigMgrBase::findRogueGadgetWeightExcelConfig(this, v9->second);
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

// Line 2054: range 0000000012843350-000000001284359C
std::map<unsigned int,unsigned int> *__fastcall ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(
        std::map<unsigned int,unsigned int> *retstr,
        std::map<unsigned int,unsigned int> *this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_dungeon_trap_gadget_weight_map; // rdx
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::pointer v9; // rax
  const ActivityRogueExcelConfigMgr *thisa; // [rsp+10h] [rbp-B0h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  thisa = (const ActivityRogueExcelConfigMgr *)this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:2053 64 8 9 iter:2056 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( !(_BYTE)`guard variable for'ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)::empty_map
    && __cxa_guard_acquire(&`guard variable for'ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)::empty_map) )
  {
    std::map<unsigned int,unsigned int>::map(&ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)const::empty_map);
    __cxa_guard_release(&`guard variable for'ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)::empty_map);
    this = &ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)const::empty_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<unsigned int,unsigned int>::~map,
      &ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)const::empty_map,
      &_dso_handle);
  }
  p_dungeon_trap_gadget_weight_map = &thisa->dungeon_trap_gadget_weight_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_dungeon_trap_gadget_weight_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  v7 = &thisa->dungeon_trap_gadget_weight_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::map<unsigned int,unsigned int>::map(
      retstr,
      &ActivityRogueExcelConfigMgr::findTrapWeightMapByDungeonId(unsigned int)const::empty_map);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64));
    std::map<unsigned int,unsigned int>::map(retstr, &v9->second);
  }
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
  return retstr;
};

// Line 2065: range 000000001284359E-00000000128437EA
std::map<unsigned int,unsigned int> *__fastcall ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(
        std::map<unsigned int,unsigned int> *retstr,
        std::map<unsigned int,unsigned int> *this,
        uint32_t dungeon_id)
{
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *p_dungeon_ball_gadget_weight_map; // rdx
  const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>> *v7; // rdx
  bool v8; // al
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false>::pointer v9; // rax
  const ActivityRogueExcelConfigMgr *thisa; // [rsp+10h] [rbp-B0h]
  char v13[160]; // [rsp+20h] [rbp-A0h] BYREF

  thisa = (const ActivityRogueExcelConfigMgr *)this;
  v3 = (unsigned __int64)v13;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(128LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "3 48 4 15 dungeon_id:2064 64 8 9 iter:2067 96 8 9 <unknown>";
  *(_QWORD *)(v3 + 16) = ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -218959360;
  v5[536862723] = -202116352;
  *(_DWORD *)(v3 + 48) = dungeon_id;
  if ( !(_BYTE)`guard variable for'ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)::empty_map
    && __cxa_guard_acquire(&`guard variable for'ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)::empty_map) )
  {
    std::map<unsigned int,unsigned int>::map(&ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)const::empty_map);
    __cxa_guard_release(&`guard variable for'ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)::empty_map);
    this = &ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)const::empty_map;
    __cxa_atexit(
      (void (__fastcall *)(void *))std::map<unsigned int,unsigned int>::~map,
      &ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)const::empty_map,
      &_dso_handle);
  }
  p_dungeon_ball_gadget_weight_map = &thisa->dungeon_ball_gadget_weight_map;
  if ( *(_BYTE *)(((v3 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 64, this);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 64) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::find(p_dungeon_ball_gadget_weight_map, (const std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::key_type *)(v3 + 48));
  v7 = &thisa->dungeon_ball_gadget_weight_map;
  if ( *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v3 + 96, v3 + 48);
  *(std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::const_iterator *)(v3 + 96) = std::unordered_map<unsigned int,std::map<unsigned int,unsigned int>>::end(v7);
  v8 = std::__detail::operator==<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false> *)(v3 + 96));
  *(_BYTE *)(((v3 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    std::map<unsigned int,unsigned int>::map(
      retstr,
      &ActivityRogueExcelConfigMgr::findBallWeightMapByDungeonId(unsigned int)const::empty_map);
  }
  else
  {
    v9 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int>>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,std::map<unsigned int,unsigned int> >,false,false> *const)(v3 + 64));
    std::map<unsigned int,unsigned int>::map(retstr, &v9->second);
  }
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
  return retstr;
};

// Line 2076: range 00000000128437EC-0000000012843BD8
__int64 __fastcall ActivityRogueExcelConfigMgr::findDungeonInitCellId(
        const ActivityRogueExcelConfigMgr *const this,
        __int64 dungeon_id)
{
  unsigned __int64 v2; // r13
  __int64 v3; // rax
  _DWORD *v4; // r12
  std::unordered_map<unsigned int,unsigned int> *p_dungeon_init_cell_map; // rdx
  std::unordered_map<unsigned int,unsigned int> *v6; // rdx
  char *v7; // rsi
  bool v8; // al
  __int64 result; // rax
  std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::pointer v10; // rdx
  unsigned int *p_second; // rax
  unsigned int second; // ecx
  char v13; // al
  common::milog::MiLogStream *v14; // rax
  const data::RogueDungeonCellExcelConfig *cell_config_ptr; // [rsp+18h] [rbp-E8h]
  char v16[224]; // [rsp+20h] [rbp-E0h] BYREF

  v2 = (unsigned __int64)v16;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_2(192LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "5 32 4 19 cell_config_id:2082 48 4 15 dungeon_id:2075 64 8 9 iter:2077 96 8 9 <unknown> 128 32 9 <unknown>";
  *(_QWORD *)(v2 + 16) = ActivityRogueExcelConfigMgr::findDungeonInitCellId;
  v4 = (_DWORD *)(v2 >> 3);
  v4[536862720] = -235802127;
  v4[536862721] = -234556924;
  v4[536862722] = -218959360;
  v4[536862723] = -218959360;
  v4[536862725] = -202116109;
  *(_DWORD *)(v2 + 48) = dungeon_id;
  p_dungeon_init_cell_map = &this->dungeon_init_cell_map;
  if ( *(_BYTE *)(((v2 + 64) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 64, dungeon_id);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 64) = std::unordered_map<unsigned int,unsigned int>::find(
                                                                                  p_dungeon_init_cell_map,
                                                                                  (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 48));
  v6 = &this->dungeon_init_cell_map;
  if ( *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) )
    __asan_report_store8(v2 + 96, v2 + 48);
  *(std::unordered_map<unsigned int,unsigned int>::const_iterator *)(v2 + 96) = std::unordered_map<unsigned int,unsigned int>::end(v6);
  v7 = (char *)(v2 + 96);
  v8 = std::__detail::operator==<std::pair<unsigned int const,unsigned int>,false>(
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 64),
         (const std::__detail::_Node_iterator_base<std::pair<unsigned int const,unsigned int>,false> *)(v2 + 96));
  *(_BYTE *)(((v2 + 96) >> 3) + 0x7FFF8000) = -8;
  if ( v8 )
  {
    result = 0LL;
  }
  else
  {
    *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000) = 4;
    v10 = std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false>::operator->((const std::__detail::_Node_const_iterator<std::pair<unsigned int const,unsigned int>,false,false> *const)(v2 + 64));
    p_second = &v10->second;
    if ( *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)p_second & 7) + 3) >= *(_BYTE *)(((unsigned __int64)p_second >> 3) + 0x7FFF8000) )
    {
      __asan_report_load4(p_second);
    }
    second = v10->second;
    v13 = *(_BYTE *)(((v2 + 32) >> 3) + 0x7FFF8000);
    if ( v13 != 0 && v13 <= 3 )
    {
      LOBYTE(v7) = v13 != 0;
      __asan_report_store4(v2 + 32, v7);
    }
    *(_DWORD *)(v2 + 32) = second;
    cell_config_ptr = data::ActivityRogueExcelConfigMgrBase::findRogueDungeonCellExcelConfig(
                        this,
                        *(unsigned int *)(v2 + 32));
    if ( cell_config_ptr )
    {
      if ( *(_BYTE *)(((unsigned __int64)&cell_config_ptr->cell_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&cell_config_ptr->cell_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_load4(&cell_config_ptr->cell_id);
      }
      result = cell_config_ptr->cell_id;
    }
    else
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
        4u,
        "./src/txt_data_manual/ActivityRogueExcelConfig.cpp",
        "findDungeonInitCellId",
        2086);
      v14 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
              (common::milog::MiLogStream *const)(v2 + 128),
              (const char (*)[52])"[ROGUE] cell_config_ptr is nullptr, cell_config_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v2 + 32));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v2 + 128));
      result = 0LL;
    }
  }
  if ( v16 == (char *)v2 )
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
