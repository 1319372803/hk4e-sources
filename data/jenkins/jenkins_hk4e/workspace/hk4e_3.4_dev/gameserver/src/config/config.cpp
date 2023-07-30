// File: /data/jenkins/jenkins_hk4e/workspace/hk4e_3.4_dev/gameserver/src/config/config.cpp

// Line 32: range 0000000015580156-0000000015580427
int32_t __cdecl Config::loadConfig(
        Config *const this,
        const std::string *config_file_name,
        ConfigBasePtr *p_prev_config_ptr)
{
  bool v4; // bl
  common::milog::MiLogStream *v5; // rax
  const std::vector<std::string> *v6; // rax
  std::shared_ptr<ConfigBase> __r; // [rsp+20h] [rbp-40h] BYREF
  common::milog::MiLogStream v8; // [rsp+30h] [rbp-30h] BYREF

  if ( Config::loadSystemConfig(this, config_file_name) )
  {
    common::milog::MiLogStream::create(
      &v8,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadConfig",
      35);
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(&v8, (const char (*)[24])"loadSystemConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v8);
    return -1;
  }
  else
  {
    std::dynamic_pointer_cast<Config,ConfigBase>(&__r);
    v4 = Config::loadDesignConfig(this, (ConfigPtr *)&__r) != 0;
    std::shared_ptr<Config>::~shared_ptr((std::shared_ptr<Config> *const)&__r);
    if ( v4 )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        40);
      v5 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v8, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v5, (const char (*)[24])"loadDesignConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else if ( Config::assembleSystemConfig(this) )
    {
      common::milog::MiLogStream::create(
        &v8,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadConfig",
        45);
      common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
        &v8,
        (const char (*)[28])"assembleSystemConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v8);
      return -1;
    }
    else
    {
      v6 = SensitiveWordExcelConfigMgr::getSensitiveWordVec[abi:cxx11](&this->design_config.txt_config_mgr.sensitive_word_config_mgr);
      common::tools::WordFilter::init(&this->word_filter, v6);
      if ( FeatureSwitchMgr::refresh(
             &this->feature_switch_mgr,
             &this->design_config.db_config_mgr.db_local_config_mgr.feature_switch_off_config_mgr) )
      {
        common::milog::MiLogStream::create(
          &v8,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadConfig",
          54);
        common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
          &v8,
          (const char (*)[34])"feature_switch_mgr refresh failed");
        common::milog::MiLogStream::~MiLogStream(&v8);
        return -1;
      }
      else
      {
        return 0;
      }
    }
  }
};

// Line 62: range 0000000015580428-0000000015580442
uint32_t __cdecl Config::getAppId(const Config *const this)
{
  GameserverApp *v1; // rax

  v1 = Singleton<GameserverApp>::instance();
  return AppBase::getAppId((AppBase *const)v1);
};

// Line 68: range 0000000015580444-0000000015590113
int32_t __cdecl Config::loadSystemConfig(Config *const this, const std::string *config_file_name)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  ConfigBasePtr v6; // rdx
  common::milog::MiLogStream *v7; // rax
  unsigned int v8; // edx
  bool v9; // cl
  bool v10; // cl
  const char *v11; // rax
  bool v12; // cl
  bool v13; // cl
  bool v14; // cl
  bool v15; // cl
  bool v16; // cl
  bool v17; // cl
  common::milog::MiLogStream *v18; // rcx
  bool v19; // cl
  common::milog::MiLogStream *v20; // rcx
  bool v21; // al
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v22; // rax
  common::milog::MiLogStream *v24; // rax
  common::milog::MiLogStream *v25; // rax
  common::milog::MiLogStream *v26; // rax
  unsigned int *v27; // rax
  uint32_t *v28; // rdx
  std::_Rb_tree_const_iterator<unsigned int>::reference v29; // rax
  _DWORD *v30; // rdx
  common::milog::MiLogStream *v31; // rax
  common::milog::MiLogStream *v32; // rax
  common::milog::MiLogStream *v33; // rax
  char *v34; // rax
  unsigned int v35; // edx
  unsigned int v36; // ecx
  __int64 error_scene_entity_limit_num; // rcx
  unsigned int v38; // edx
  __m128i v39; // xmm0
  float v40; // ecx
  __m128i v41; // xmm0
  float v42; // edx
  __m128i v43; // xmm0
  float v44; // ecx
  __m128i v45; // xmm0
  float v46; // edx
  bool v47; // cl
  _BOOL4 is_anti_cheat_damage_check_open; // ecx
  double anti_cheat_max_damage; // xmm3_8
  double anti_cheat_max_damage_extra; // xmm2_8
  double anti_cheat_max_damage_percentage_ratio; // xmm1_8
  double anti_cheat_max_damage_percentage; // xmm0_8
  unsigned int v53; // edx
  bool v54; // cl
  unsigned int v55; // edx
  unsigned int v56; // ecx
  bool v57; // dl
  bool v58; // cl
  bool v59; // cl
  bool v60; // cl
  bool v61; // cl
  bool v62; // cl
  bool v63; // cl
  unsigned int v64; // edx
  bool v65; // cl
  unsigned int v66; // edx
  _BOOL8 is_forbid_special_vision_type_control_group_load; // r8
  bool *is_forbid_special_region_trigger_group_load; // rdi
  _BOOL8 is_ignore_mutual_replace_check; // rsi
  _BOOL8 is_home_group_load_forbid_async_load; // r9
  _BOOL4 is_delete_reload_pos_when_disconnect; // r10d
  bool v72; // cl
  unsigned int v73; // edx
  unsigned __int64 v74; // rax
  uint32_t v75; // eax
  common::tools::PTree *v76; // rax
  common::milog::MiLogStream *v77; // rax
  common::milog::MiLogStream *v78; // rax
  common::milog::MiLogStream *v79; // rax
  common::milog::MiLogStream *v80; // rcx
  unsigned int v81; // ecx
  unsigned int v82; // ecx
  unsigned int v83; // edx
  __int64 max_online_player; // rcx
  int v85; // edi
  uint32_t v86; // esi
  __int64 max_online_player_per_thread; // rcx
  unsigned int v88; // edx
  unsigned int v89; // ecx
  unsigned int v90; // ecx
  unsigned int v91; // edx
  unsigned int v92; // ecx
  unsigned int v93; // edx
  unsigned int v94; // ecx
  unsigned int v95; // edx
  unsigned int v96; // ecx
  unsigned int v97; // edx
  unsigned int v98; // ecx
  unsigned int v99; // edx
  unsigned int v100; // ecx
  unsigned int v101; // edx
  unsigned int v102; // ecx
  unsigned int v103; // edx
  unsigned int v104; // ecx
  unsigned int v105; // edx
  unsigned int v106; // ecx
  unsigned int v107; // edx
  unsigned int v108; // ecx
  unsigned int v109; // edx
  unsigned int v110; // ecx
  bool v111; // dl
  bool v112; // cl
  bool v113; // cl
  bool v114; // cl
  bool v115; // cl
  bool v116; // dl
  bool v117; // cl
  bool v118; // cl
  bool v119; // cl
  unsigned int v120; // edx
  unsigned int v121; // ecx
  unsigned int v122; // edx
  unsigned int v123; // ecx
  unsigned int v124; // edx
  bool v125; // cl
  unsigned int v126; // edx
  unsigned int v127; // ecx
  unsigned int v128; // edx
  unsigned int v129; // ecx
  common::milog::MiLogStream *v130; // rax
  common::milog::MiLogStream *v131; // rax
  common::milog::MiLogStream *v132; // rcx
  common::milog::MiLogStream *v133; // rax
  common::milog::MiLogStream *v134; // rax
  common::milog::MiLogStream *v135; // rax
  common::milog::MiLogStream *v136; // rax
  common::milog::MiLogStream *v137; // rax
  common::milog::MiLogStream *v138; // rax
  common::milog::MiLogStream *v139; // rax
  common::milog::MiLogStream *v140; // rax
  unsigned int v141; // edx
  common::milog::MiLogStream *v142; // rax
  common::milog::MiLogStream *v143; // rax
  common::milog::MiLogStream *v144; // rax
  common::milog::MiLogStream *v145; // rax
  common::milog::MiLogStream *v146; // rax
  common::milog::MiLogStream *v147; // rax
  common::milog::MiLogStream *v148; // rax
  common::milog::MiLogStream *v149; // rax
  common::milog::MiLogStream *v150; // rax
  common::milog::MiLogStream *v151; // rax
  common::milog::MiLogStream *v152; // rax
  common::milog::MiLogStream *v153; // rax
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
  common::milog::MiLogStream *v164; // rax
  common::milog::MiLogStream *v165; // rax
  common::milog::MiLogStream *v166; // rax
  common::milog::MiLogStream *v167; // rax
  common::milog::MiLogStream *v168; // rax
  common::milog::MiLogStream *v169; // rax
  common::milog::MiLogStream *v170; // rax
  common::milog::MiLogStream *v171; // rax
  common::milog::MiLogStream *v172; // rax
  common::milog::MiLogStream *v173; // rax
  common::milog::MiLogStream *v174; // rax
  common::milog::MiLogStream *v175; // rax
  common::milog::MiLogStream *v176; // rax
  common::milog::MiLogStream *v177; // rax
  common::milog::MiLogStream *v178; // rax
  common::milog::MiLogStream *v179; // rax
  common::milog::MiLogStream *v180; // rax
  common::milog::MiLogStream *v181; // rax
  common::milog::MiLogStream *v182; // rax
  common::milog::MiLogStream *v183; // rax
  common::milog::MiLogStream *v184; // rax
  common::milog::MiLogStream *v185; // rcx
  common::milog::MiLogStream *v186; // rax
  common::milog::MiLogStream *v187; // rcx
  common::milog::MiLogStream *v188; // rax
  common::milog::MiLogStream *v189; // rcx
  common::milog::MiLogStream *v190; // rax
  common::milog::MiLogStream *v191; // rcx
  common::milog::MiLogStream *v192; // rax
  common::milog::MiLogStream *v193; // rcx
  common::milog::MiLogStream *v194; // rax
  common::milog::MiLogStream *v195; // rcx
  common::milog::MiLogStream *v196; // rax
  common::milog::MiLogStream *v197; // rcx
  common::milog::MiLogStream *v198; // rax
  common::milog::MiLogStream *v199; // rax
  common::milog::MiLogStream *v200; // rax
  common::milog::MiLogStream *v201; // rax
  common::milog::MiLogStream *v202; // rax
  common::milog::MiLogStream *v203; // rax
  common::milog::MiLogStream *v204; // rax
  common::milog::MiLogStream *v205; // rax
  bool v206; // dl
  bool v207; // cl
  common::milog::MiLogStream *v208; // rcx
  common::milog::MiLogStream *v209; // rax
  common::milog::MiLogStream *v210; // rcx
  common::milog::MiLogStream *v211; // rax
  common::milog::MiLogStream *v212; // rax
  common::milog::MiLogStream *v213; // rax
  common::milog::MiLogStream *v214; // rax
  common::milog::MiLogStream *v215; // rax
  common::milog::MiLogStream *v216; // rax
  bool v217; // dl
  bool v218; // cl
  bool v219; // cl
  _BOOL4 is_enable_extra_white_list; // esi
  _BOOL8 is_output_control_can_alarm; // rcx
  bool v222; // dl
  common::milog::MiLogStream *v223; // rcx
  common::milog::MiLogStream *v224; // rax
  common::milog::MiLogStream *v225; // rax
  common::milog::MiLogStream *v226; // rax
  common::milog::MiLogStream *v227; // rax
  common::milog::MiLogStream *v228; // rax
  common::milog::MiLogStream *v229; // rax
  bool v230; // dl
  bool v231; // cl
  common::milog::MiLogStream *v232; // rax
  common::milog::MiLogStream *v233; // rax
  common::milog::MiLogStream *v234; // rax
  common::milog::MiLogStream *v235; // rax
  common::milog::MiLogStream *v236; // rax
  common::milog::MiLogStream *v237; // rax
  common::milog::MiLogStream *v238; // rcx
  common::milog::MiLogStream *v239; // rax
  common::milog::MiLogStream *v240; // rcx
  bool v241; // dl
  bool v242; // cl
  common::milog::MiLogStream *v243; // rax
  common::milog::MiLogStream *v244; // rax
  common::milog::MiLogStream *v245; // rax
  common::milog::MiLogStream *v246; // rax
  common::milog::MiLogStream *v247; // rax
  common::milog::MiLogStream *v248; // rax
  common::milog::MiLogStream *v249; // rcx
  common::milog::MiLogStream *v250; // rax
  common::milog::MiLogStream *v251; // rcx
  unsigned int v252; // edx
  unsigned int v253; // edx
  common::milog::MiLogStream *v254; // rax
  uint32_t v255; // ecx
  common::milog::MiLogStream *v256; // rax
  unsigned int v257; // ecx
  unsigned int v258; // ecx
  unsigned int v259; // ecx
  unsigned int v260; // ecx
  unsigned int v261; // ecx
  common::milog::MiLogStream *v262; // rax
  common::milog::MiLogStream *v263; // rax
  common::milog::MiLogStream *v264; // rax
  common::milog::MiLogStream *v265; // rax
  common::milog::MiLogStream *v266; // rax
  common::milog::MiLogStream *v267; // rax
  common::milog::MiLogStream *v268; // rax
  common::milog::MiLogStream *v269; // rax
  common::milog::MiLogStream *v270; // rax
  unsigned int v271; // ecx
  bool v272; // cl
  common::milog::MiLogStream *v273; // rax
  common::milog::MiLogStream *v274; // rax
  common::milog::MiLogStream *v275; // rcx
  bool v276; // dl
  bool v277; // cl
  bool v278; // cl
  unsigned int v279; // edx
  common::milog::MiLogStream *v280; // rcx
  common::milog::MiLogStream *v281; // rax
  common::milog::MiLogStream *v282; // rcx
  common::milog::MiLogStream *v283; // rax
  common::milog::MiLogStream *v284; // rcx
  common::milog::MiLogStream *v285; // rax
  common::milog::MiLogStream *v286; // rax
  common::milog::MiLogStream *v287; // rax
  common::milog::MiLogStream *v288; // rax
  common::milog::MiLogStream *v289; // rax
  common::milog::MiLogStream *v290; // rax
  common::milog::MiLogStream *v291; // rax
  common::milog::MiLogStream *v292; // rax
  common::milog::MiLogStream *v293; // rax
  common::milog::MiLogStream *v294; // rax
  bool v295; // dl
  unsigned int v296; // ecx
  common::milog::MiLogStream *v297; // rax
  common::milog::MiLogStream *v298; // rax
  common::milog::MiLogStream *v299; // rax
  common::milog::MiLogStream *v300; // rax
  common::milog::MiLogStream *v301; // rax
  common::milog::MiLogStream *v302; // rax
  common::milog::MiLogStream *v303; // rcx
  common::milog::MiLogStream *v304; // rax
  common::milog::MiLogStream *v305; // rax
  common::milog::MiLogStream *v306; // rax
  common::milog::MiLogStream *v307; // rax
  common::milog::MiLogStream *v308; // rax
  common::milog::MiLogStream *v309; // rax
  bool v310; // dl
  unsigned int v311; // ecx
  common::milog::MiLogStream *v312; // rax
  common::milog::MiLogStream *v313; // rax
  common::milog::MiLogStream *v314; // rax
  common::milog::MiLogStream *v315; // rax
  common::milog::MiLogStream *v316; // rax
  common::milog::MiLogStream *v317; // rax
  common::milog::MiLogStream *v318; // rcx
  common::milog::MiLogStream *v319; // rax
  common::milog::MiLogStream *v320; // rax
  common::milog::MiLogStream *v321; // rax
  common::milog::MiLogStream *v322; // rax
  common::milog::MiLogStream *v323; // rax
  common::milog::MiLogStream *v324; // rax
  common::milog::MiLogStream *v325; // rax
  common::milog::MiLogStream *v326; // rax
  bool v327; // dl
  unsigned int v328; // ecx
  common::milog::MiLogStream *v329; // rax
  common::milog::MiLogStream *v330; // rax
  common::milog::MiLogStream *v331; // rax
  common::milog::MiLogStream *v332; // rax
  common::milog::MiLogStream *v333; // rax
  common::milog::MiLogStream *v334; // rax
  common::milog::MiLogStream *v335; // rcx
  common::milog::MiLogStream *v336; // rax
  common::milog::MiLogStream *v337; // rax
  common::milog::MiLogStream *v338; // rax
  common::milog::MiLogStream *v339; // rax
  common::milog::MiLogStream *v340; // rax
  bool v341; // cl
  common::milog::MiLogStream *v343; // rax
  std::pair<std::_Rb_tree_const_iterator<unsigned int>,bool> v344; // rax
  common::milog::MiLogStream *v345; // rax
  common::milog::MiLogStream *v346; // rax
  common::milog::MiLogStream *v347; // rax
  common::milog::MiLogStream *v348; // rcx
  common::milog::MiLogStream *v349; // rax
  common::milog::MiLogStream *v350; // rax
  _BOOL4 is_audit; // [rsp+4h] [rbp-195Ch]
  bool v353; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v354; // [rsp+8h] [rbp-1958h]
  _BOOL4 is_internal_server; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v356; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v357; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v358; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v359; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v360; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v361; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v362; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v363; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v364; // [rsp+8h] [rbp-1958h]
  common::milog::MiLogStream *v365; // [rsp+8h] [rbp-1958h]
  common::milog::MiLogStream *v366; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v367; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v368; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v369; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v370; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v371; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v372; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v373; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v374; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v375; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v376; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v377; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v378; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v379; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v380; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v381; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v382; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v383; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v384; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v385; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v386; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v387; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v388; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v389; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v390; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v391; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v392; // [rsp+8h] [rbp-1958h]
  int v393; // [rsp+8h] [rbp-1958h]
  int v394; // [rsp+8h] [rbp-1958h]
  int v395; // [rsp+8h] [rbp-1958h]
  int v396; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v397; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v398; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v399; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v400; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v401; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v402; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v403; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v404; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v405; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v406; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v407; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v408; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v409; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v410; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v411; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v412; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v413; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v414; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v415; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v416; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v417; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v418; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v419; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v420; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v421; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v422; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v423; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v424; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v425; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v426; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v427; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v428; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v429; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v430; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v431; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v432; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v433; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v434; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v435; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v436; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v437; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v438; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v439; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v440; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v441; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v442; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v443; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v444; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v445; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v446; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v447; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v448; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v449; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v450; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v451; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v452; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v453; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v454; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v455; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v456; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v457; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v458; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v459; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v460; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v461; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v462; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v463; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v464; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v465; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v466; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v467; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v468; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v469; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v470; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v471; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v472; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v473; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v474; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v475; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v476; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v477; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v478; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v479; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v480; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v481; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v482; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v483; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v484; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v485; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v486; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v487; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v488; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v489; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v490; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v491; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v492; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v493; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v494; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v495; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v496; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v497; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v498; // [rsp+8h] [rbp-1958h]
  common::tools::PTree *v499; // [rsp+8h] [rbp-1958h]
  int v500; // [rsp+8h] [rbp-1958h]
  std::allocator<char> v502; // [rsp+28h] [rbp-1938h] BYREF
  std::allocator<char> __a; // [rsp+29h] [rbp-1937h] BYREF
  bool is_contains_self_app_id; // [rsp+2Ah] [rbp-1936h]
  bool force_open; // [rsp+2Bh] [rbp-1935h]
  uint32_t cmd_id; // [rsp+2Ch] [rbp-1934h]
  std::vector<std::string>::iterator __for_begin; // [rsp+30h] [rbp-1930h] BYREF
  std::vector<std::string>::iterator __for_end; // [rsp+38h] [rbp-1928h] BYREF
  std::vector<std::string> *__for_range; // [rsp+40h] [rbp-1920h]
  std::set<unsigned int> *__for_range_0; // [rsp+48h] [rbp-1918h]
  std::set<unsigned int> *__for_range_1; // [rsp+50h] [rbp-1910h]
  const std::string *cmd_short_name; // [rsp+58h] [rbp-1908h]
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range_2; // [rsp+60h] [rbp-1900h]
  std::pair<std::string,common::tools::PTree> *__in; // [rsp+68h] [rbp-18F8h]
  std::tuple_element<0,std::pair<std::string,common::tools::PTree> >::type *name; // [rsp+70h] [rbp-18F0h]
  std::tuple_element<1,std::pair<std::string,common::tools::PTree> >::type *app_pt; // [rsp+78h] [rbp-18E8h]
  std::vector<std::string> *__for_range_3; // [rsp+80h] [rbp-18E0h]
  const std::string *language_type_str; // [rsp+88h] [rbp-18D8h]
  std::string path; // [rsp+90h] [rbp-18D0h] BYREF
  std::string v520; // [rsp+B0h] [rbp-18B0h] BYREF
  std::string v521; // [rsp+D0h] [rbp-1890h] BYREF
  std::string v522; // [rsp+F0h] [rbp-1870h] BYREF
  std::string v523; // [rsp+110h] [rbp-1850h] BYREF
  std::string v524; // [rsp+130h] [rbp-1830h] BYREF
  std::string v525; // [rsp+150h] [rbp-1810h] BYREF
  std::string v526; // [rsp+170h] [rbp-17F0h] BYREF
  std::string v527; // [rsp+190h] [rbp-17D0h] BYREF
  std::string v528; // [rsp+1B0h] [rbp-17B0h] BYREF
  std::string v529; // [rsp+1D0h] [rbp-1790h] BYREF
  std::string v530; // [rsp+1F0h] [rbp-1770h] BYREF
  std::string v531; // [rsp+210h] [rbp-1750h] BYREF
  std::string v532; // [rsp+230h] [rbp-1730h] BYREF
  std::string v533; // [rsp+250h] [rbp-1710h] BYREF
  std::string v534; // [rsp+270h] [rbp-16F0h] BYREF
  std::string v535; // [rsp+290h] [rbp-16D0h] BYREF
  std::string v536; // [rsp+2B0h] [rbp-16B0h] BYREF
  std::string v537; // [rsp+2D0h] [rbp-1690h] BYREF
  std::string v538; // [rsp+2F0h] [rbp-1670h] BYREF
  std::string v539; // [rsp+310h] [rbp-1650h] BYREF
  std::string v540; // [rsp+330h] [rbp-1630h] BYREF
  std::string v541; // [rsp+350h] [rbp-1610h] BYREF
  std::string v542; // [rsp+370h] [rbp-15F0h] BYREF
  std::string v543; // [rsp+390h] [rbp-15D0h] BYREF
  std::string v544; // [rsp+3B0h] [rbp-15B0h] BYREF
  std::string v545; // [rsp+3D0h] [rbp-1590h] BYREF
  std::string v546; // [rsp+3F0h] [rbp-1570h] BYREF
  std::string v547; // [rsp+410h] [rbp-1550h] BYREF
  std::string v548; // [rsp+430h] [rbp-1530h] BYREF
  std::string v549; // [rsp+450h] [rbp-1510h] BYREF
  std::string v550; // [rsp+470h] [rbp-14F0h] BYREF
  std::string v551; // [rsp+490h] [rbp-14D0h] BYREF
  std::string v552; // [rsp+4B0h] [rbp-14B0h] BYREF
  std::string v553; // [rsp+4D0h] [rbp-1490h] BYREF
  std::string v554; // [rsp+4F0h] [rbp-1470h] BYREF
  std::string v555; // [rsp+510h] [rbp-1450h] BYREF
  std::string v556; // [rsp+530h] [rbp-1430h] BYREF
  std::string v557; // [rsp+550h] [rbp-1410h] BYREF
  std::string v558; // [rsp+570h] [rbp-13F0h] BYREF
  std::string v559; // [rsp+590h] [rbp-13D0h] BYREF
  std::string v560; // [rsp+5B0h] [rbp-13B0h] BYREF
  std::string v561; // [rsp+5D0h] [rbp-1390h] BYREF
  std::string v562; // [rsp+5F0h] [rbp-1370h] BYREF
  std::string v563; // [rsp+610h] [rbp-1350h] BYREF
  std::string v564; // [rsp+630h] [rbp-1330h] BYREF
  std::string v565; // [rsp+650h] [rbp-1310h] BYREF
  std::string v566; // [rsp+670h] [rbp-12F0h] BYREF
  std::string v567; // [rsp+690h] [rbp-12D0h] BYREF
  std::string v568; // [rsp+6B0h] [rbp-12B0h] BYREF
  std::string v569; // [rsp+6D0h] [rbp-1290h] BYREF
  std::string v570; // [rsp+6F0h] [rbp-1270h] BYREF
  std::string v571; // [rsp+710h] [rbp-1250h] BYREF
  std::string v572; // [rsp+730h] [rbp-1230h] BYREF
  std::string v573; // [rsp+750h] [rbp-1210h] BYREF
  std::string v574; // [rsp+770h] [rbp-11F0h] BYREF
  std::string v575; // [rsp+790h] [rbp-11D0h] BYREF
  std::string v576; // [rsp+7B0h] [rbp-11B0h] BYREF
  std::string v577; // [rsp+7D0h] [rbp-1190h] BYREF
  std::string v578; // [rsp+7F0h] [rbp-1170h] BYREF
  std::string v579; // [rsp+810h] [rbp-1150h] BYREF
  std::string v580; // [rsp+830h] [rbp-1130h] BYREF
  std::string v581; // [rsp+850h] [rbp-1110h] BYREF
  std::string v582; // [rsp+870h] [rbp-10F0h] BYREF
  std::string v583; // [rsp+890h] [rbp-10D0h] BYREF
  std::string v584; // [rsp+8B0h] [rbp-10B0h] BYREF
  std::string v585; // [rsp+8D0h] [rbp-1090h] BYREF
  std::string v586; // [rsp+8F0h] [rbp-1070h] BYREF
  std::string v587; // [rsp+910h] [rbp-1050h] BYREF
  std::string v588; // [rsp+930h] [rbp-1030h] BYREF
  std::string v589; // [rsp+950h] [rbp-1010h] BYREF
  std::string v590; // [rsp+970h] [rbp-FF0h] BYREF
  std::string v591; // [rsp+990h] [rbp-FD0h] BYREF
  std::string v592; // [rsp+9B0h] [rbp-FB0h] BYREF
  std::string v593; // [rsp+9D0h] [rbp-F90h] BYREF
  std::string v594; // [rsp+9F0h] [rbp-F70h] BYREF
  std::string v595; // [rsp+A10h] [rbp-F50h] BYREF
  std::string v596; // [rsp+A30h] [rbp-F30h] BYREF
  std::string v597; // [rsp+A50h] [rbp-F10h] BYREF
  std::string v598; // [rsp+A70h] [rbp-EF0h] BYREF
  std::string v599; // [rsp+A90h] [rbp-ED0h] BYREF
  std::string v600; // [rsp+AB0h] [rbp-EB0h] BYREF
  std::string v601; // [rsp+AD0h] [rbp-E90h] BYREF
  std::string v602; // [rsp+AF0h] [rbp-E70h] BYREF
  std::string v603; // [rsp+B10h] [rbp-E50h] BYREF
  std::string v604; // [rsp+B30h] [rbp-E30h] BYREF
  std::string v605; // [rsp+B50h] [rbp-E10h] BYREF
  std::string v606; // [rsp+B70h] [rbp-DF0h] BYREF
  std::string v607; // [rsp+B90h] [rbp-DD0h] BYREF
  std::string v608; // [rsp+BB0h] [rbp-DB0h] BYREF
  std::string v609; // [rsp+BD0h] [rbp-D90h] BYREF
  std::string v610; // [rsp+BF0h] [rbp-D70h] BYREF
  std::string v611; // [rsp+C10h] [rbp-D50h] BYREF
  std::string v612; // [rsp+C30h] [rbp-D30h] BYREF
  std::string v613; // [rsp+C50h] [rbp-D10h] BYREF
  std::string v614; // [rsp+C70h] [rbp-CF0h] BYREF
  std::string v615; // [rsp+C90h] [rbp-CD0h] BYREF
  std::string v616; // [rsp+CB0h] [rbp-CB0h] BYREF
  std::string v617; // [rsp+CD0h] [rbp-C90h] BYREF
  std::string v618; // [rsp+CF0h] [rbp-C70h] BYREF
  std::string v619; // [rsp+D10h] [rbp-C50h] BYREF
  std::string v620; // [rsp+D30h] [rbp-C30h] BYREF
  std::string v621; // [rsp+D50h] [rbp-C10h] BYREF
  std::string v622; // [rsp+D70h] [rbp-BF0h] BYREF
  std::string v623; // [rsp+D90h] [rbp-BD0h] BYREF
  std::string v624; // [rsp+DB0h] [rbp-BB0h] BYREF
  std::string v625; // [rsp+DD0h] [rbp-B90h] BYREF
  std::string v626; // [rsp+DF0h] [rbp-B70h] BYREF
  std::string v627; // [rsp+E10h] [rbp-B50h] BYREF
  std::string v628; // [rsp+E30h] [rbp-B30h] BYREF
  std::string v629; // [rsp+E50h] [rbp-B10h] BYREF
  std::string v630; // [rsp+E70h] [rbp-AF0h] BYREF
  std::string v631; // [rsp+E90h] [rbp-AD0h] BYREF
  std::string v632; // [rsp+EB0h] [rbp-AB0h] BYREF
  std::string v633; // [rsp+ED0h] [rbp-A90h] BYREF
  std::string v634; // [rsp+EF0h] [rbp-A70h] BYREF
  std::string v635; // [rsp+F10h] [rbp-A50h] BYREF
  std::string v636; // [rsp+F30h] [rbp-A30h] BYREF
  std::string v637; // [rsp+F50h] [rbp-A10h] BYREF
  std::string v638; // [rsp+F70h] [rbp-9F0h] BYREF
  std::string v639; // [rsp+F90h] [rbp-9D0h] BYREF
  std::string v640; // [rsp+FB0h] [rbp-9B0h] BYREF
  std::string v641; // [rsp+FD0h] [rbp-990h] BYREF
  std::string v642; // [rsp+FF0h] [rbp-970h] BYREF
  std::string v643; // [rsp+1010h] [rbp-950h] BYREF
  std::string v644; // [rsp+1030h] [rbp-930h] BYREF
  std::string v645; // [rsp+1050h] [rbp-910h] BYREF
  std::string v646; // [rsp+1070h] [rbp-8F0h] BYREF
  std::string v647; // [rsp+1090h] [rbp-8D0h] BYREF
  std::string v648; // [rsp+10B0h] [rbp-8B0h] BYREF
  std::string v649; // [rsp+10D0h] [rbp-890h] BYREF
  std::string v650; // [rsp+10F0h] [rbp-870h] BYREF
  std::string v651; // [rsp+1110h] [rbp-850h] BYREF
  std::string v652; // [rsp+1130h] [rbp-830h] BYREF
  std::string v653; // [rsp+1150h] [rbp-810h] BYREF
  std::string v654; // [rsp+1170h] [rbp-7F0h] BYREF
  std::string v655; // [rsp+1190h] [rbp-7D0h] BYREF
  std::string v656; // [rsp+11B0h] [rbp-7B0h] BYREF
  std::string v657; // [rsp+11D0h] [rbp-790h] BYREF
  std::string v658; // [rsp+11F0h] [rbp-770h] BYREF
  std::string v659; // [rsp+1210h] [rbp-750h] BYREF
  common::milog::MiLogStream v660; // [rsp+1230h] [rbp-730h] BYREF
  char v661[1808]; // [rsp+1250h] [rbp-710h] BYREF

  v3 = (unsigned __int64)v661;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_5(1760LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "50 32 4 19 lua_gc_interval:572 48 4 17 language_type:707 64 4 10 cmd_id:166 80 8 12 region_pt:83"
                        " 112 8 17 gameserver_pt:332 144 8 22 security_config_pt:498 176 16 13 version_pt:75 208 16 23 ps"
                        "4_recharge_card_pt:98 240 16 10 pt_opt:106 272 16 18 gm_talk_pt_opt:114 304 16 24 check_unexpect"
                        "ed_opt:125 336 16 26 simulation_open_pt_opt:133 368 16 27 entity_debug_log_pt_opt:141 400 16 22 "
                        "ip_port_log_pt_opt:149 432 16 36 high_freq_packet_log_open_pt_opt:156 464 16 20 scene_num_pt_opt"
                        ":190 496 16 19 modifier_pt_opt:199 528 16 28 anti_cheat_damage_pt_opt:211 560 16 16 group_pt_opt"
                        ":223 592 16 30 server_error_notify_pt_opt:243 624 16 15 view_pt_opt:249 656 16 44 activity_timer"
                        "_interval_rand_time_pt_opt:257 688 16 16 fight_pt_opt:279 720 16 20 coroutine_pt_opt:294 752 16 "
                        "15 save_pt_opt:351 784 16 37 client_data_version_ban_mp_pt_opt:381 816 16 38 client_data_version"
                        "_ban_gcg_pt_opt:386 848 16 18 ability_pt_opt:392 880 16 23 union_packet_pt_opt:400 912 16 25 cus"
                        "tom_dungeon_pt_opt:409 944 16 17 gcg_config_pt:427 976 16 19 word_filter_opt:475 1008 16 29 item"
                        "_output_config_pt_opt:506 1040 16 17 push_tags_opt:517 1072 16 19 tracking_io_opt:532 1104 16 23"
                        " adjust_tracking_opt:546 1136 16 25 lua_memory_report_opt:563 1168 16 32 lua_script_cache_map_nu"
                        "m_opt:577 1200 16 18 rate_limit_opt:593 1232 16 19 home_verify_opt:601 1264 16 27 nickname_sign_"
                        "audit_opt:625 1296 16 27 avatar_rename_audit_opt:645 1328 16 23 query_ip_region_opt:667 1360 16 "
                        "12 grid_opt:684 1392 16 27 new_language_config_opt:694 1424 24 25 language_type_str_vec:699 1488"
                        " 32 25 is_internal_server_str:87 1552 32 30 new_language_type_list_str:698 1616 32 14 app_id_str"
                        ":313 1680 48 29 packet_log_black_set_temp:163";
  *(_QWORD *)(v3 + 16) = Config::loadSystemConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556924;
  v5[536862722] = 61956;
  v5[536862722] = -234881024;
  v5[536862723] = 62194;
  v5[536862723] = -234881024;
  v5[536862724] = 62194;
  v5[536862724] = -234881024;
  v5[536862725] = 62194;
  v5[536862726] = 62194;
  v5[536862727] = 62194;
  v5[536862728] = 62194;
  v5[536862729] = 62194;
  v5[536862730] = 62194;
  v5[536862731] = 62194;
  v5[536862732] = 62194;
  v5[536862733] = 62194;
  v5[536862734] = 62194;
  v5[536862735] = 62194;
  v5[536862736] = 62194;
  v5[536862737] = 62194;
  v5[536862738] = 62194;
  v5[536862739] = 62194;
  v5[536862740] = 62194;
  v5[536862741] = 62194;
  v5[536862742] = 62194;
  v5[536862743] = 62194;
  v5[536862744] = 62194;
  v5[536862745] = 62194;
  v5[536862746] = 62194;
  v5[536862747] = 62194;
  v5[536862748] = 62194;
  v5[536862749] = 62194;
  v5[536862750] = 62194;
  v5[536862751] = 62194;
  v5[536862752] = 62194;
  v5[536862753] = 62194;
  v5[536862754] = 62194;
  v5[536862755] = 62194;
  v5[536862756] = 62194;
  v5[536862757] = 62194;
  v5[536862758] = 62194;
  v5[536862759] = 62194;
  v5[536862760] = 62194;
  v5[536862761] = 62194;
  v5[536862762] = 62194;
  v5[536862763] = 62194;
  v5[536862764] = 62194;
  v5[536862765] = -218959360;
  v5[536862766] = 62194;
  v5[536862767] = -219021312;
  v5[536862768] = 62194;
  v5[536862769] = -219021312;
  v5[536862770] = 62194;
  v5[536862771] = -219021312;
  v5[536862772] = 62194;
  v5[536862774] = -202116109;
  std::shared_ptr<ConfigBase>::shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 1392), 0LL);
  v6._M_ptr = (std::__shared_ptr<ConfigBase,(__gnu_cxx::_Lock_policy)2>::element_type *)(v3 + 1392);
  v353 = ConfigBase::loadConfig(this, config_file_name, v6) != 0;
  std::shared_ptr<ConfigBase>::~shared_ptr((std::shared_ptr<ConfigBase> *const)(v3 + 1392));
  if ( v353 )
  {
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      71);
    v7 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
           &v660,
           (const char (*)[36])"ConfigBase::loadConfig failed,file:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, config_file_name);
    common::milog::MiLogStream::~MiLogStream(&v660);
    v2 = -1;
    goto LABEL_556;
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.BuildVersion", &__a);
  common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
  std::string::~string(&v660);
  std::allocator<char>::~allocator(&__a);
  if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 176)) )
  {
    v354 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 176));
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.value", &__a);
    v8 = common::tools::PTree::get<unsigned int>(v354, &path, 0);
    if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->xml_config_version);
    }
    this->xml_config_version = v8;
    std::string::~string(&path);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      79);
    if ( *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->xml_config_version >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->xml_config_version);
    }
    common::milog::MiLogStream::operator()(&v660, "load xml_config_version=%u", this->xml_config_version);
    common::milog::MiLogStream::~MiLogStream(&v660);
  }
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.RegionConf", &__a);
  common::tools::PTree::getChild(&this->pt, (const std::string *)&v660);
  std::string::~string(&v660);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "<xmlattr>.is_audit", &__a);
  v9 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 80), (const std::string *)&v660);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
  {
    __asan_report_store1(&this->is_audit);
  }
  this->is_audit = v9;
  std::string::~string(&v660);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "<xmlattr>.is_internal_server", &__a);
  common::tools::PTree::getValue(
    (std::string *)(v3 + 1488),
    (const common::tools::PTree *const)(v3 + 80),
    (const std::string *)&v660);
  std::string::~string(&v660);
  std::allocator<char>::~allocator(&__a);
  if ( !(unsigned __int8)std::string::empty(v3 + 1488) )
  {
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "<xmlattr>.is_internal_server", &__a);
    v10 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v3 + 80), (const std::string *)&v660);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_internal_server);
    }
    this->is_internal_server = v10;
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      94);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_internal_server >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_internal_server);
    }
    is_internal_server = this->is_internal_server;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_audit);
    }
    is_audit = this->is_audit;
    v11 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(
      &v660,
      "load region_name=%s, is_audit=%d, is_internal_server=%d",
      v11,
      is_audit,
      is_internal_server);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.PS4RechargeCard", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 208)) )
    {
      v356 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 208));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v520, "<xmlattr>.open", &__a);
      v12 = common::tools::PTree::get<bool>(v356, &v520, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_ps4_recharge_card);
      }
      this->is_ps4_recharge_card = v12;
      std::string::~string(&v520);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        102);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ps4_recharge_card >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ps4_recharge_card);
      }
      common::milog::MiLogStream::operator()(&v660, "load is_ps4_recharge_card, open=%d", this->is_ps4_recharge_card);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.AbilityHash", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 240)) )
    {
      v357 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 240));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v521, "<xmlattr>.open", &__a);
      v13 = common::tools::PTree::get<bool>(v357, &v521, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_ability_use_hash);
      }
      this->is_ability_use_hash = v13;
      std::string::~string(&v521);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        110);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 44) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ability_use_hash >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ability_use_hash);
      }
      common::milog::MiLogStream::operator()(&v660, "load AbilityHash, open=%u", this->is_ability_use_hash);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.GmTalk", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 272)) )
    {
      v358 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 272));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v522, "<xmlattr>.open", &__a);
      v14 = common::tools::PTree::get<bool>(v358, &v522, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_gm_talk_open);
      }
      this->is_gm_talk_open = v14;
      std::string::~string(&v522);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        118);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 45) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gm_talk_open >> 3) + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_gm_talk_open);
      }
      common::milog::MiLogStream::operator()(&v660, "load GmTalk, open=%u", this->is_gm_talk_open);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        122);
      common::milog::MiLogStream::operator<<<char [34],(char *[34])0>(
        &v660,
        (const char (*)[34])"getChildOptional Root.GmTalk fail");
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.CheckUnexpectedPos", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 304)) )
    {
      v359 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 304));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v523, "<xmlattr>.open", &__a);
      v15 = common::tools::PTree::get<bool>(v359, &v523, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 46) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_check_unexpected_pos);
      }
      this->is_check_unexpected_pos = v15;
      std::string::~string(&v523);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      130);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 46) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_check_unexpected_pos >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_check_unexpected_pos);
    }
    common::milog::MiLogStream::operator()(&v660, "is_check_unexpected_pos=%u", this->is_check_unexpected_pos);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.SimulationOpen", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 336)) )
    {
      v360 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 336));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v524, "<xmlattr>.open", &__a);
      v16 = common::tools::PTree::get<bool>(v360, &v524, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_simulation_open);
      }
      this->is_simulation_open = v16;
      std::string::~string(&v524);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        137);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 53) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_simulation_open >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_simulation_open);
      }
      common::milog::MiLogStream::operator()(&v660, "load SimulationOpen, open=%u", this->is_simulation_open);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.EntityDebugLog", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 368)) )
    {
      v361 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 368));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v525, "<xmlattr>.open", &__a);
      v17 = common::tools::PTree::get<bool>(v361, &v525, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 54) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_print_entity_debug_log);
      }
      this->is_print_entity_debug_log = v17;
      std::string::~string(&v525);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        145);
      v18 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v660,
              (const char (*)[26])"load EntityDebugLog open:");
      if ( *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 54) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_print_entity_debug_log >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_print_entity_debug_log);
      }
      common::milog::MiLogStream::operator<<(v18, this->is_print_entity_debug_log);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.IpPortLogReport", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 400)) )
    {
      v362 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 400));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v526, "<xmlattr>.open", &__a);
      v19 = common::tools::PTree::get<bool>(v362, &v526, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_ip_port_log_report);
      }
      this->is_ip_port_log_report = v19;
      std::string::~string(&v526);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        153);
      v20 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
              &v660,
              (const char (*)[27])"load IpPortLogReport open:");
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 55) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ip_port_log_report >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->is_ip_port_log_report);
      }
      common::milog::MiLogStream::operator<<(v20, this->is_ip_port_log_report);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.HighFreqPacketLog", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 432)) )
    {
      v363 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 432));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v527, "<xmlattr>.open", &__a);
      v21 = common::tools::PTree::get<bool>(v363, &v527, 0);
      std::atomic<bool>::operator=(&Config::is_high_freq_packet_log_open, v21);
      std::string::~string(&v527);
      std::allocator<char>::~allocator(&__a);
      v364 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 432));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v660, byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v528, "<xmlattr>.packet_log_black_list", &v502);
      common::tools::PTree::get<std::string>((std::string *)(v3 + 1552), v364, &v528, (std::string *)&v660);
      std::string::~string(&v528);
      std::allocator<char>::~allocator(&v502);
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 1424));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v660, " ", &__a);
      common::tools::StringUtils::split(
        (const std::string *)(v3 + 1552),
        (const std::string *)&v660,
        (std::vector<std::string> *)(v3 + 1424),
        1);
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      std::set<unsigned int>::set((std::set<unsigned int> *const)(v3 + 1680));
      __for_range = (std::vector<std::string> *)(v3 + 1424);
      __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 1424))._M_current;
      __for_end._M_current = std::vector<std::string>::end(__for_range)._M_current;
      while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
      {
        cmd_short_name = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
        std::operator+<char>((std::string *)(v3 + 1616), "proto.", cmd_short_name);
        *(_DWORD *)(v3 + 64) = ProtoUtils::getCmdId((const std::string *)(v3 + 1616));
        std::string::~string((void *)(v3 + 1616));
        if ( !*(_DWORD *)(v3 + 64)
          || (v22 = std::set<unsigned int>::insert(
                      (std::set<unsigned int> *const)(v3 + 1680),
                      (const std::set<unsigned int>::value_type *)(v3 + 64)),
              !v22.second) )
        {
          common::milog::MiLogStream::create(
            &v660,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadSystemConfig",
            169);
          v24 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
                  &v660,
                  (const char (*)[40])"packet log black insert failed, cmd_id:");
          v25 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                  v24,
                  (const unsigned int *)(v3 + 64));
          v26 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v25, (const char (*)[11])" cmd_name:");
          common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v26, cmd_short_name);
          common::milog::MiLogStream::~MiLogStream(&v660);
        }
        __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
      }
      __for_range_0 = (std::set<unsigned int> *)(v3 + 1680);
      __for_begin._M_current = (std::string *)std::set<unsigned int>::begin((const std::set<unsigned int> *const)(v3 + 1680))._M_node;
      __for_end._M_current = (std::string *)std::set<unsigned int>::end(__for_range_0)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      {
        v27 = (unsigned int *)std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        v28 = v27;
        if ( *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v27 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v27 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v27);
        }
        cmd_id = *v28;
        std::bitset<30000ul>::set(&Config::packet_log_black_bs, cmd_id, 1);
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
      __for_range_1 = &this->packet_log_black_set;
      __for_begin._M_current = (std::string *)std::set<unsigned int>::begin(&this->packet_log_black_set)._M_node;
      __for_end._M_current = (std::string *)std::set<unsigned int>::end(__for_range_1)._M_node;
      while ( std::operator!=(
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_begin,
                (const std::_Rb_tree_const_iterator<unsigned int>::_Self *)&__for_end) )
      {
        v29 = std::_Rb_tree_const_iterator<unsigned int>::operator*((const std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
        v30 = v29;
        if ( *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) != 0
          && (char)(((unsigned __int8)v29 & 7) + 3) >= *(_BYTE *)(((unsigned __int64)v29 >> 3) + 0x7FFF8000) )
        {
          __asan_report_load4(v29);
        }
        *(_DWORD *)(v3 + 64) = *v30;
        if ( !common::tools::MiscUtils::isContains<std::set<unsigned int>,unsigned int>(
                (std::set<unsigned int> *)(v3 + 1680),
                (const unsigned int *)(v3 + 64)) )
          std::bitset<30000ul>::reset(&Config::packet_log_black_bs, *(unsigned int *)(v3 + 64));
        std::_Rb_tree_const_iterator<unsigned int>::operator++((std::_Rb_tree_const_iterator<unsigned int> *const)&__for_begin);
      }
      std::set<unsigned int>::operator=(&this->packet_log_black_set, (const std::set<unsigned int> *)(v3 + 1680));
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        184);
      v365 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
               &v660,
               (const char (*)[27])"packet_log_black_bs count:");
      __for_begin._M_current = (std::string *)std::bitset<30000ul>::count(&Config::packet_log_black_bs);
      v31 = common::milog::MiLogStream::operator<<<unsigned long,(unsigned long *)0>(
              v365,
              (const unsigned __int64 *)&__for_begin);
      v32 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v31, (const char (*)[12])" black_set:");
      v33 = common::milog::MiLogStream::operator<<<unsigned int>(v32, &this->packet_log_black_set);
      v366 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               v33,
               (const char (*)[24])" HighFreqPacketLogOpen:");
      if ( std::atomic<bool>::operator bool(&Config::is_high_freq_packet_log_open) )
        v34 = "true";
      else
        v34 = "false";
      __for_end._M_current = (std::string *)v34;
      common::milog::MiLogStream::operator<<<char const*,(char const**)0>(v366, (const char *const *)&__for_end);
      common::milog::MiLogStream::~MiLogStream(&v660);
      std::set<unsigned int>::~set((std::set<unsigned int> *const)(v3 + 1680));
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 1424));
      std::string::~string((void *)(v3 + 1552));
    }
    if ( *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->warn_scene_entity_limit_num);
    }
    this->warn_scene_entity_limit_num = 20000;
    if ( *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->error_scene_entity_limit_num);
    }
    this->error_scene_entity_limit_num = 50000;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.SceneEntityNumLimit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 464)) )
    {
      v367 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 464));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v529, "<xmlattr>.warn_num", &__a);
      v35 = common::tools::PTree::get<unsigned int>(v367, &v529, 0x4E20u);
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->warn_scene_entity_limit_num);
      }
      this->warn_scene_entity_limit_num = v35;
      std::string::~string(&v529);
      std::allocator<char>::~allocator(&__a);
      v368 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 464));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v530, "<xmlattr>.error_num", &__a);
      v36 = common::tools::PTree::get<unsigned int>(v368, &v530, 0xC350u);
      if ( *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->error_scene_entity_limit_num);
      }
      this->error_scene_entity_limit_num = v36;
      std::string::~string(&v530);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      196);
    if ( *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->error_scene_entity_limit_num >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->error_scene_entity_limit_num);
    }
    error_scene_entity_limit_num = this->error_scene_entity_limit_num;
    if ( *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->warn_scene_entity_limit_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->warn_scene_entity_limit_num);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load SceneNumLimit, warn_scene_entity_limit_num=%u, error_scene_entity_limit_num=%u",
      this->warn_scene_entity_limit_num,
      error_scene_entity_limit_num);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->modifier_id_error_num);
    }
    this->modifier_id_error_num = 2000;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.ModifierIdLimit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 496)) )
    {
      v369 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 496));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v531, "<xmlattr>.error_num", &__a);
      v38 = common::tools::PTree::get<unsigned int>(v369, &v531, 0x7D0u);
      if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->modifier_id_error_num);
      }
      this->modifier_id_error_num = v38;
      std::string::~string(&v531);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      204);
    if ( *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->modifier_id_error_num >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->modifier_id_error_num);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load ModifierIdLimit, modifier_id_error_num=%u",
      this->modifier_id_error_num);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->anti_cheat_max_damage_percentage);
    }
    this->anti_cheat_max_damage_percentage = 100.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->anti_cheat_max_damage_percentage_ratio);
    }
    this->anti_cheat_max_damage_percentage_ratio = 100.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->anti_cheat_max_damage_extra);
    }
    this->anti_cheat_max_damage_extra = 100000.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->anti_cheat_max_damage);
    }
    this->anti_cheat_max_damage = 100000000.0;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_store1(&this->is_anti_cheat_damage_check_open);
    }
    this->is_anti_cheat_damage_check_open = 0;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.AntiCheatDamage", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 528)) )
    {
      v370 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v532, "<xmlattr>.max_damage_percentage", &__a);
      v39 = (__m128i)0x42C80000u;
      *(float *)v39.m128i_i32 = common::tools::PTree::get<float>(v370, &v532, 100.0);
      v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v39));
      if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->anti_cheat_max_damage_percentage);
      }
      this->anti_cheat_max_damage_percentage = v40;
      std::string::~string(&v532);
      std::allocator<char>::~allocator(&__a);
      v371 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v533, "<xmlattr>.max_damage_percentage_ratio", &__a);
      v41 = (__m128i)0x42C80000u;
      *(float *)v41.m128i_i32 = common::tools::PTree::get<float>(v371, &v533, 100.0);
      v42 = COERCE_FLOAT(_mm_cvtsi128_si32(v41));
      if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->anti_cheat_max_damage_percentage_ratio);
      }
      this->anti_cheat_max_damage_percentage_ratio = v42;
      std::string::~string(&v533);
      std::allocator<char>::~allocator(&__a);
      v372 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v534, "<xmlattr>.max_damage_extra", &__a);
      v43 = (__m128i)0x47C35000u;
      *(float *)v43.m128i_i32 = common::tools::PTree::get<float>(v372, &v534, 100000.0);
      v44 = COERCE_FLOAT(_mm_cvtsi128_si32(v43));
      if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->anti_cheat_max_damage_extra);
      }
      this->anti_cheat_max_damage_extra = v44;
      std::string::~string(&v534);
      std::allocator<char>::~allocator(&__a);
      v373 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v535, "<xmlattr>.max_damage", &__a);
      v45 = (__m128i)0x4B189680u;
      *(float *)v45.m128i_i32 = common::tools::PTree::get<float>(v373, &v535, 10000000.0);
      v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v45));
      if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->anti_cheat_max_damage);
      }
      this->anti_cheat_max_damage = v46;
      std::string::~string(&v535);
      std::allocator<char>::~allocator(&__a);
      v374 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v536, "<xmlattr>.is_open", &__a);
      v47 = common::tools::PTree::get<bool>(v374, &v536, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_anti_cheat_damage_check_open);
      }
      this->is_anti_cheat_damage_check_open = v47;
      std::string::~string(&v536);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      220);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_anti_cheat_damage_check_open >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_anti_cheat_damage_check_open);
    }
    is_anti_cheat_damage_check_open = this->is_anti_cheat_damage_check_open;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->anti_cheat_max_damage);
    }
    anti_cheat_max_damage = this->anti_cheat_max_damage;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_extra >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->anti_cheat_max_damage_extra);
    }
    anti_cheat_max_damage_extra = this->anti_cheat_max_damage_extra;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage_ratio >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&this->anti_cheat_max_damage_percentage_ratio);
    }
    anti_cheat_max_damage_percentage_ratio = this->anti_cheat_max_damage_percentage_ratio;
    if ( *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this + 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->anti_cheat_max_damage_percentage >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_load4(&this->anti_cheat_max_damage_percentage);
    }
    anti_cheat_max_damage_percentage = this->anti_cheat_max_damage_percentage;
    common::milog::MiLogStream::operator()(
      &v660,
      "load AntiCheatDamage, anti_cheat_max_damage_percentage=%f, anti_cheat_max_damage_percentage_ratio=%f, anti_cheat_m"
      "ax_damage_extra=%f, anti_cheat_damage=%f, is_open=%u",
      anti_cheat_max_damage_percentage,
      anti_cheat_max_damage_percentage_ratio,
      anti_cheat_max_damage_extra,
      anti_cheat_max_damage,
      is_anti_cheat_damage_check_open);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.GroupLimit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 560)) )
    {
      v375 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v537, "<xmlattr>.max_unload_time_us", &__a);
      v53 = common::tools::PTree::get<unsigned int>(v375, &v537, 0x3E8u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->max_group_unload_time_us);
      }
      this->max_group_unload_time_us = v53;
      std::string::~string(&v537);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) <= 3 )
      {
        anti_cheat_max_damage_percentage = __asan_report_load4(&this->max_group_unload_time_us);
      }
      if ( this->max_group_unload_time_us <= 0x3E7 )
      {
        common::milog::MiLogStream::create(
          &v660,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadSystemConfig",
          229);
        common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
          &v660,
          (const char (*)[32])"max_group_unload_time_us < 1000");
        common::milog::MiLogStream::~MiLogStream(&v660);
      }
      v376 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v538, "<xmlattr>.forbid_find_unregister_group", &__a);
      v54 = common::tools::PTree::get<bool>(v376, &v538, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_forbid_find_unregister_group);
      }
      this->is_forbid_find_unregister_group = v54;
      std::string::~string(&v538);
      std::allocator<char>::~allocator(&__a);
      v377 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v539, "<xmlattr>.unload_invalid_groups_interval", &__a);
      v55 = common::tools::PTree::get<unsigned int>(v377, &v539, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->unload_invalid_groups_interval);
      }
      this->unload_invalid_groups_interval = v55;
      std::string::~string(&v539);
      std::allocator<char>::~allocator(&__a);
      v378 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v540, "<xmlattr>.unload_invalid_groups_threshold", &__a);
      v56 = common::tools::PTree::get<unsigned int>(v378, &v540, 0xFAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_threshold >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->unload_invalid_groups_threshold >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->unload_invalid_groups_threshold);
      }
      this->unload_invalid_groups_threshold = v56;
      std::string::~string(&v540);
      std::allocator<char>::~allocator(&__a);
      v379 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v541, "<xmlattr>.delete_reload_pos_when_disconnect", &__a);
      v57 = common::tools::PTree::get<bool>(v379, &v541, 0);
      if ( *(char *)(((unsigned __int64)&this->is_delete_reload_pos_when_disconnect >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_delete_reload_pos_when_disconnect);
      this->is_delete_reload_pos_when_disconnect = v57;
      std::string::~string(&v541);
      std::allocator<char>::~allocator(&__a);
      v380 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v542, "<xmlattr>.home_group_load_forbid_async_load", &__a);
      v58 = common::tools::PTree::get<bool>(v380, &v542, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_home_group_load_forbid_async_load);
      }
      this->is_home_group_load_forbid_async_load = v58;
      std::string::~string(&v542);
      std::allocator<char>::~allocator(&__a);
      v381 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v543, "<xmlattr>.ignore_mutual_replace_check", &__a);
      v59 = common::tools::PTree::get<bool>(v381, &v543, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_ignore_mutual_replace_check);
      }
      this->is_ignore_mutual_replace_check = v59;
      std::string::~string(&v543);
      std::allocator<char>::~allocator(&__a);
      v382 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v544, "<xmlattr>.forbid_special_region_trigger_group_load", &__a);
      v60 = common::tools::PTree::get<bool>(v382, &v544, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_forbid_special_region_trigger_group_load);
      }
      this->is_forbid_special_region_trigger_group_load = v60;
      std::string::~string(&v544);
      std::allocator<char>::~allocator(&__a);
      v383 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        &v545,
        "<xmlattr>.forbid_special_vision_type_control_group_load",
        &__a);
      v61 = common::tools::PTree::get<bool>(v383, &v545, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_forbid_special_vision_type_control_group_load);
      }
      this->is_forbid_special_vision_type_control_group_load = v61;
      std::string::~string(&v545);
      std::allocator<char>::~allocator(&__a);
      v384 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v546, "<xmlattr>.group_bin_lazy_parse", &__a);
      v62 = common::tools::PTree::get<bool>(v384, &v546, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_group_bin_lazy_parse);
      }
      this->is_group_bin_lazy_parse = v62;
      std::string::~string(&v546);
      std::allocator<char>::~allocator(&__a);
      v385 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v547, "<xmlattr>.use_old_flow_group_refresh", &__a);
      v63 = common::tools::PTree::get<bool>(v385, &v547, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_use_old_flow_group_refresh);
      }
      this->is_use_old_flow_group_refresh = v63;
      std::string::~string(&v547);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.ServerErrorNotify", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 592)) )
    {
      v386 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 592));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v548, "<xmlattr>.rate_limit", &__a);
      v64 = common::tools::PTree::get<unsigned int>(v386, &v548, 3u);
      if ( *(_BYTE *)(((unsigned __int64)&this->server_error_notify_rate_limit >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->server_error_notify_rate_limit >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->server_error_notify_rate_limit);
      }
      this->server_error_notify_rate_limit = v64;
      std::string::~string(&v548);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.VisionConf", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 624)) )
    {
      v387 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 624));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v549, "<xmlattr>.is_delete_in_sight_when_appear", &__a);
      v65 = common::tools::PTree::get<bool>(v387, &v549, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_delete_in_sight_when_appear);
      }
      this->is_delete_in_sight_when_appear = v65;
      std::string::~string(&v549);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      254);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 85) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_delete_in_sight_when_appear >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_delete_in_sight_when_appear);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load vision conf, is_delete_in_sight_when_appear:%u",
      this->is_delete_in_sight_when_appear);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v660,
      "Root.ActivityTimerIntervalRandTime",
      &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 656)) )
    {
      v388 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 656));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v550, "<xmlattr>.value", &__a);
      v66 = common::tools::PTree::get<unsigned int>(v388, &v550, 0x1Eu);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->activity_timer_interval_rand_time);
      }
      this->activity_timer_interval_rand_time = v66;
      std::string::~string(&v550);
      std::allocator<char>::~allocator(&__a);
      if ( *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) <= 3 )
      {
        anti_cheat_max_damage_percentage = __asan_report_load4(&this->activity_timer_interval_rand_time);
      }
      if ( this->activity_timer_interval_rand_time > 0x3E7 )
      {
        common::milog::MiLogStream::create(
          &v660,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadSystemConfig",
          265);
        common::milog::MiLogStream::operator()(
          &v660,
          "activity_timer_interval_rand_time: %u. Maybe wrong value?",
          this->activity_timer_interval_rand_time);
        common::milog::MiLogStream::~MiLogStream(&v660);
      }
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      268);
    if ( *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->activity_timer_interval_rand_time >> 3) + 0x7FFF8000) <= 3 )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->activity_timer_interval_rand_time);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "activity_timer_interval_rand_time: %u",
      this->activity_timer_interval_rand_time);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_group_unload_time_us >> 3) + 0x7FFF8000) <= 3 )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->max_group_unload_time_us);
    }
    this->max_group_unload_time_us *= 20;
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      274);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 76) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_vision_type_control_group_load >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_forbid_special_vision_type_control_group_load);
    }
    is_forbid_special_vision_type_control_group_load = this->is_forbid_special_vision_type_control_group_load;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 75) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_special_region_trigger_group_load >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_forbid_special_region_trigger_group_load);
    }
    is_forbid_special_region_trigger_group_load = (bool *)this->is_forbid_special_region_trigger_group_load;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 74) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_ignore_mutual_replace_check >> 3)
                                                        + 0x7FFF8000) )
    {
      is_forbid_special_region_trigger_group_load = &this->is_ignore_mutual_replace_check;
      __asan_report_load1(&this->is_ignore_mutual_replace_check);
    }
    is_ignore_mutual_replace_check = this->is_ignore_mutual_replace_check;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 73) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_home_group_load_forbid_async_load >> 3)
                                                        + 0x7FFF8000) )
    {
      is_forbid_special_region_trigger_group_load = &this->is_home_group_load_forbid_async_load;
      __asan_report_load1(&this->is_home_group_load_forbid_async_load);
    }
    is_home_group_load_forbid_async_load = this->is_home_group_load_forbid_async_load;
    if ( *(char *)(((unsigned __int64)&this->is_delete_reload_pos_when_disconnect >> 3) + 0x7FFF8000) < 0 )
    {
      is_forbid_special_region_trigger_group_load = &this->is_delete_reload_pos_when_disconnect;
      __asan_report_load1(&this->is_delete_reload_pos_when_disconnect);
    }
    is_delete_reload_pos_when_disconnect = this->is_delete_reload_pos_when_disconnect;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 60) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_forbid_find_unregister_group >> 3)
                                                        + 0x7FFF8000) )
    {
      is_forbid_special_region_trigger_group_load = &this->is_forbid_find_unregister_group;
      __asan_report_load1(&this->is_forbid_find_unregister_group);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load GroupLimit, max_group_unload_time_us=%u, forbid_find_unregister=%d, delete_reload_pos_when_disconnect=%d, hom"
      "e_group_load_forbid_async_load=%d, ignore_mutual_replace_check=%d, forbid_special_region_trigger_group_load=%d, fo"
      "rbid_special_vision_type_control_group_load=%d",
      this->max_group_unload_time_us,
      this->is_forbid_find_unregister_group,
      is_delete_reload_pos_when_disconnect,
      is_home_group_load_forbid_async_load,
      is_ignore_mutual_replace_check,
      is_forbid_special_region_trigger_group_load,
      is_forbid_special_vision_type_control_group_load);
    common::milog::MiLogStream::~MiLogStream(&v660);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      276);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 77) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_group_bin_lazy_parse >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_group_bin_lazy_parse);
    }
    common::milog::MiLogStream::operator()(&v660, "is_group_bin_lazy_parse=%d", this->is_group_bin_lazy_parse);
    common::milog::MiLogStream::~MiLogStream(&v660);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      277);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 78) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_use_old_flow_group_refresh >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_use_old_flow_group_refresh);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "is_use_old_flow_group_refresh=%d",
      this->is_use_old_flow_group_refresh);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.FightConf", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 688)) )
    {
      v389 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 688));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v551, "<xmlattr>.is_abyss_kill_limbo_monster", &__a);
      v72 = common::tools::PTree::get<bool>(v389, &v551, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_abyss_kill_limbo_monster);
      }
      this->is_abyss_kill_limbo_monster = v72;
      std::string::~string(&v551);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      284);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 68) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_abyss_kill_limbo_monster >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_abyss_kill_limbo_monster);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load fight conf, is_abyss_kill_limbo_monster:%u",
      this->is_abyss_kill_limbo_monster);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( Config::loadOutputControlMonitorConfig(this, &this->pt) )
    {
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        289);
      common::milog::MiLogStream::operator()(
        &v660,
        "loadOutputControlMonitorConfig failed",
        anti_cheat_max_damage_percentage);
      common::milog::MiLogStream::~MiLogStream(&v660);
      v2 = -1;
LABEL_554:
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 688));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 656));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 624));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 592));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 560));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 528));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 496));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 464));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 432));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 400));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 368));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 336));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 304));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 272));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 240));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 208));
      goto LABEL_555;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.Coroutine", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 720)) )
    {
      v390 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 720));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "<xmlattr>.timeout", &__a);
      v73 = common::tools::PTree::get<unsigned int>(v390, (const std::string *)&v660);
      if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->coroutine_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->coroutine_timeout);
      }
      this->coroutine_timeout = v73;
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      v391 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 720));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v552, "<xmlattr>.force_open", &__a);
      force_open = common::tools::PTree::get<bool>(v391, &v552, 0);
      std::string::~string(&v552);
      std::allocator<char>::~allocator(&__a);
      if ( !force_open )
      {
        v392 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 720));
        std::allocator<char>::allocator(&__a);
        std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "CoroutineAppList", &__a);
        common::tools::PTree::getChildOptional(v392, (const std::string *)&v660);
        std::string::~string(&v660);
        std::allocator<char>::~allocator(&__a);
        if ( !std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1392)) )
          goto LABEL_244;
        if ( *(_BYTE *)(((unsigned __int64)this >> 3) + 0x7FFF8000) )
          __asan_report_load8(this);
        v74 = (unsigned __int64)(this->_vptr_ConfigBase + 3);
        if ( *(_BYTE *)((v74 >> 3) + 0x7FFF8000) )
          v74 = __asan_report_load8(this->_vptr_ConfigBase + 3);
        v75 = (*(__int64 (__fastcall **)(Config *const, double))v74)(this, anti_cheat_max_damage_percentage);
        common::tools::AppIdUtils::getAppIdStr[abi:cxx11]((std::string *)(v3 + 1552), v75);
        is_contains_self_app_id = 0;
        v76 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1392));
        common::tools::PTree::getAllChild[abi:cxx11](
          (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 1424),
          v76);
        __for_range_2 = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 1424);
        __for_begin._M_current = (std::string *)std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 1424))._M_node;
        __for_end._M_current = (std::string *)std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range_2)._M_node;
        while ( std::operator!=(
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)&__for_begin,
                  (const std::_List_iterator<std::pair<std::string,common::tools::PTree> >::_Self *)&__for_end) )
        {
          __in = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*((const std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)&__for_begin);
          name = std::get<0ul,std::string,common::tools::PTree>(__in);
          app_pt = std::get<1ul,std::string,common::tools::PTree>(__in);
          if ( std::operator!=<char>(name, off_2580D780) )
          {
            common::milog::MiLogStream::create(
              &v660,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadSystemConfig",
              310);
            v77 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(
                    &v660,
                    (const char (*)[17])"invalid pt name:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v77, name);
            common::milog::MiLogStream::~MiLogStream(&v660);
            v2 = -1;
            v393 = 0;
            goto LABEL_237;
          }
          std::allocator<char>::allocator(&__a);
          std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "<xmlattr>.app_id", &__a);
          common::tools::PTree::get<std::string>((std::string *)(v3 + 1616), app_pt, (const std::string *)&v660);
          std::string::~string(&v660);
          std::allocator<char>::~allocator(&__a);
          if ( std::operator==<char>((const std::string *)(v3 + 1552), (const std::string *)(v3 + 1616)) )
          {
            is_contains_self_app_id = 1;
            v394 = 0;
          }
          else
          {
            v394 = 1;
          }
          std::string::~string((void *)(v3 + 1616));
          if ( v394 != 1 )
            break;
          std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++((std::_List_iterator<std::pair<std::string,common::tools::PTree> > *const)&__for_begin);
        }
        v393 = 1;
LABEL_237:
        std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 1424));
        if ( v393 == 1 )
        {
          if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3) + 0x7FFF8000) != 0
            && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3)
                                                              + 0x7FFF8000) )
          {
            __asan_report_store1(&this->coroutine_disabled);
          }
          this->coroutine_disabled = is_contains_self_app_id;
          v395 = 1;
        }
        else
        {
          v395 = 0;
        }
        std::string::~string((void *)(v3 + 1552));
        if ( v395 == 1 )
LABEL_244:
          v396 = 1;
        else
          v396 = 0;
        std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1392));
        if ( v396 != 1 )
          goto LABEL_553;
      }
      else
      {
        if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3) + 0x7FFF8000) != 0
          && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3)
                                                            + 0x7FFF8000) )
        {
          __asan_report_store1(&this->coroutine_disabled);
        }
        this->coroutine_disabled = 1;
      }
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        327);
      v78 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
              &v660,
              (const char (*)[26])"load coroutine, time_out=");
      v79 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v78, &this->coroutine_timeout);
      v80 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v79, (const char (*)[11])" disabled=");
      if ( *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 52) & 7) >= *(_BYTE *)(((unsigned __int64)&this->coroutine_disabled >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->coroutine_disabled);
      }
      common::milog::MiLogStream::operator<<(v80, this->coroutine_disabled);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.ServiceList.Gameserver", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v553, "<xmlattr>.warn_online_player", &__a);
    v81 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v553, 0x50u);
    if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3)
                                                          + 0x7FFF8000) )
    {
      __asan_report_store4(&this->warn_online_player);
    }
    this->warn_online_player = v81;
    std::string::~string(&v553);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v554, "<xmlattr>.thread_num", &__a);
    v82 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v554, 1u);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->thread_num);
    }
    this->thread_num = v82;
    std::string::~string(&v554);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v555, "<xmlattr>.max_online_player", &__a);
    v83 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v555, 0x64u);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->max_online_player);
    }
    this->max_online_player = v83;
    std::string::~string(&v555);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      336);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) <= 3 )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->max_online_player);
    }
    max_online_player = this->max_online_player;
    if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3)
                                                          + 0x7FFF8000) )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->warn_online_player);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load warn_online_player: %u max_online_player: %u",
      this->warn_online_player,
      max_online_player);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->thread_num >> 3) + 0x7FFF8000) )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->thread_num);
    }
    if ( this->thread_num )
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 76) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player >> 3)
                                                            + 0x7FFF8000) )
      {
        anti_cheat_max_damage_percentage = __asan_report_load4(&this->warn_online_player);
      }
      v85 = this->warn_online_player / this->thread_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3)
                                                            + 0x7FFF8000) )
      {
        v85 = (_DWORD)this + 188;
        __asan_report_store4(&this->warn_online_player_per_thread);
      }
      this->warn_online_player_per_thread = v85;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_online_player >> 3) + 0x7FFF8000) <= 3 )
      {
        anti_cheat_max_damage_percentage = __asan_report_load4(&this->max_online_player);
      }
      v86 = this->max_online_player / this->thread_num;
      if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->max_online_player_per_thread);
      }
      this->max_online_player_per_thread = v86;
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      342);
    if ( *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->max_online_player_per_thread >> 3) + 0x7FFF8000) <= 3 )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->max_online_player_per_thread);
    }
    max_online_player_per_thread = this->max_online_player_per_thread;
    if ( *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 68) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->warn_online_player_per_thread >> 3)
                                                          + 0x7FFF8000) )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->warn_online_player_per_thread);
    }
    common::milog::MiLogStream::operator()(
      &v660,
      "load warn_online_player_per_thread: %u max_online_player_per_thread: %u",
      this->warn_online_player_per_thread,
      max_online_player_per_thread);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v556, "<xmlattr>.time_wait_reconnect", &__a);
    v88 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v556, 0x78u);
    if ( *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->time_wait_reconnect);
    }
    this->time_wait_reconnect = v88;
    std::string::~string(&v556);
    std::allocator<char>::~allocator(&__a);
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      346);
    if ( *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->time_wait_reconnect >> 3) + 0x7FFF8000) <= 3 )
    {
      anti_cheat_max_damage_percentage = __asan_report_load4(&this->time_wait_reconnect);
    }
    common::milog::MiLogStream::operator()(&v660, "load time_wait_reconnect: %u", this->time_wait_reconnect);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v557, "<xmlattr>.session_timeout", &__a);
    v89 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v557, 0x78u);
    if ( *(_BYTE *)(((unsigned __int64)&this->session_timeout >> 3) + 0x7FFF8000) != 0
      && (char)((((_BYTE)this - 60) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->session_timeout >> 3) + 0x7FFF8000) )
    {
      __asan_report_store4(&this->session_timeout);
    }
    this->session_timeout = v89;
    std::string::~string(&v557);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Save", &__a);
    common::tools::PTree::getChildOptional((const common::tools::PTree *const)(v3 + 112), (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 752)) )
    {
      v397 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v558, "<xmlattr>.max_save_time_interval", &__a);
      v90 = common::tools::PTree::get<unsigned int>(v397, &v558, 0x78u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_save_time_interval >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_save_time_interval >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_save_time_interval);
      }
      this->max_save_time_interval = v90;
      std::string::~string(&v558);
      std::allocator<char>::~allocator(&__a);
      v398 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v559, "<xmlattr>.timer_save_time_interval", &__a);
      v91 = common::tools::PTree::get<unsigned int>(v398, &v559, 0x3Cu);
      if ( *(_BYTE *)(((unsigned __int64)&this->timer_save_time_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->timer_save_time_interval);
      }
      this->timer_save_time_interval = v91;
      std::string::~string(&v559);
      std::allocator<char>::~allocator(&__a);
      v399 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v560, "<xmlattr>.home_max_save_time_interval", &__a);
      v92 = common::tools::PTree::get<unsigned int>(v399, &v560, 0x1A4u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_max_save_time_interval >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 44) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_max_save_time_interval >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_max_save_time_interval);
      }
      this->home_max_save_time_interval = v92;
      std::string::~string(&v560);
      std::allocator<char>::~allocator(&__a);
      v400 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v561, "<xmlattr>.home_timer_save_time_interval", &__a);
      v93 = common::tools::PTree::get<unsigned int>(v400, &v561, 0x12Cu);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_timer_save_time_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_timer_save_time_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->home_timer_save_time_interval);
      }
      this->home_timer_save_time_interval = v93;
      std::string::~string(&v561);
      std::allocator<char>::~allocator(&__a);
      v401 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v562, "<xmlattr>.allow_send_save_proto_cost_time_ms", &__a);
      v94 = common::tools::PTree::get<unsigned int>(v401, &v562, 0x64u);
      if ( *(_BYTE *)(((unsigned __int64)&this->allow_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->allow_send_save_proto_cost_time_ms >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->allow_send_save_proto_cost_time_ms);
      }
      this->allow_send_save_proto_cost_time_ms = v94;
      std::string::~string(&v562);
      std::allocator<char>::~allocator(&__a);
      v402 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v563, "<xmlattr>.hard_limit_send_save_proto_cost_time_ms", &__a);
      v95 = common::tools::PTree::get<unsigned int>(v402, &v563, 0x1F4u);
      if ( *(_BYTE *)(((unsigned __int64)&this->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->hard_limit_send_save_proto_cost_time_ms >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->hard_limit_send_save_proto_cost_time_ms);
      }
      this->hard_limit_send_save_proto_cost_time_ms = v95;
      std::string::~string(&v563);
      std::allocator<char>::~allocator(&__a);
      v403 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v564, "<xmlattr>.normal_save_check_interval", &__a);
      v96 = common::tools::PTree::get<unsigned int>(v403, &v564, 0x14u);
      if ( *(_BYTE *)(((unsigned __int64)&this->normal_save_check_interval >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->normal_save_check_interval >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->normal_save_check_interval);
      }
      this->normal_save_check_interval = v96;
      std::string::~string(&v564);
      std::allocator<char>::~allocator(&__a);
      v404 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v565, "<xmlattr>.shutdown_save_check_interval", &__a);
      v97 = common::tools::PTree::get<unsigned int>(v404, &v565, 3u);
      if ( *(_BYTE *)(((unsigned __int64)&this->shutdown_save_check_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->shutdown_save_check_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->shutdown_save_check_interval);
      }
      this->shutdown_save_check_interval = v97;
      std::string::~string(&v565);
      std::allocator<char>::~allocator(&__a);
      v405 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v566, "<xmlattr>.player_save_timeout_after_send_proto", &__a);
      v98 = common::tools::PTree::get<unsigned int>(v405, &v566, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_after_send_proto >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->player_save_timeout_after_send_proto);
      }
      this->player_save_timeout_after_send_proto = v98;
      std::string::~string(&v566);
      std::allocator<char>::~allocator(&__a);
      v406 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v567, "<xmlattr>.player_save_timeout_max_cooldown_expo", &__a);
      v99 = common::tools::PTree::get<unsigned int>(v406, &v567, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->player_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->player_save_timeout_max_cooldown_expo);
      }
      this->player_save_timeout_max_cooldown_expo = v99;
      std::string::~string(&v567);
      std::allocator<char>::~allocator(&__a);
      v407 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v568, "<xmlattr>.home_save_timeout_after_send_proto", &__a);
      v100 = common::tools::PTree::get<unsigned int>(v407, &v568, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_after_send_proto >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_after_send_proto >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_save_timeout_after_send_proto);
      }
      this->home_save_timeout_after_send_proto = v100;
      std::string::~string(&v568);
      std::allocator<char>::~allocator(&__a);
      v408 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v569, "<xmlattr>.home_save_timeout_max_cooldown_expo", &__a);
      v101 = common::tools::PTree::get<unsigned int>(v408, &v569, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_save_timeout_max_cooldown_expo >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->home_save_timeout_max_cooldown_expo);
      }
      this->home_save_timeout_max_cooldown_expo = v101;
      std::string::~string(&v569);
      std::allocator<char>::~allocator(&__a);
      v409 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v570, "<xmlattr>.home_no_player_destroy_time", &__a);
      v102 = common::tools::PTree::get<unsigned int>(v409, &v570, 0x258u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_no_player_destroy_time >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->home_no_player_destroy_time >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store4(&this->home_no_player_destroy_time);
      }
      this->home_no_player_destroy_time = v102;
      std::string::~string(&v570);
      std::allocator<char>::~allocator(&__a);
      v410 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v571, "<xmlattr>.warn_bin_len", &__a);
      v103 = common::tools::PTree::get<unsigned int>(v410, &v571, 0x249F0u);
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_bin_len >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->warn_bin_len >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->warn_bin_len);
      }
      this->warn_bin_len = v103;
      std::string::~string(&v571);
      std::allocator<char>::~allocator(&__a);
      v411 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v572, "<xmlattr>.max_bin_len", &__a);
      v104 = common::tools::PTree::get<unsigned int>(v411, &v572, 0x2BF20u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_bin_len >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_bin_len >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_bin_len);
      }
      this->max_bin_len = v104;
      std::string::~string(&v572);
      std::allocator<char>::~allocator(&__a);
      v412 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v573, "<xmlattr>.warn_block_bin_len", &__a);
      v105 = common::tools::PTree::get<unsigned int>(v412, &v573, 0x3D090u);
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_block_bin_len >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->warn_block_bin_len >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->warn_block_bin_len);
      }
      this->warn_block_bin_len = v105;
      std::string::~string(&v573);
      std::allocator<char>::~allocator(&__a);
      v413 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v574, "<xmlattr>.max_block_bin_len", &__a);
      v106 = common::tools::PTree::get<unsigned int>(v413, &v574, 0x4E200u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_block_bin_len >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 12) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_block_bin_len >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_block_bin_len);
      }
      this->max_block_bin_len = v106;
      std::string::~string(&v574);
      std::allocator<char>::~allocator(&__a);
      v414 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v575, "<xmlattr>.warn_sum_bin_len", &__a);
      v107 = common::tools::PTree::get<unsigned int>(v414, &v575, 0x61A80u);
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_sum_bin_len >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->warn_sum_bin_len >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->warn_sum_bin_len);
      }
      this->warn_sum_bin_len = v107;
      std::string::~string(&v575);
      std::allocator<char>::~allocator(&__a);
      v415 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v576, "<xmlattr>.max_sum_bin_len", &__a);
      v108 = common::tools::PTree::get<unsigned int>(v415, &v576, 0x75300u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_sum_bin_len >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 20) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_sum_bin_len >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_sum_bin_len);
      }
      this->max_sum_bin_len = v108;
      std::string::~string(&v576);
      std::allocator<char>::~allocator(&__a);
      v416 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v577, "<xmlattr>.warn_home_bin_len", &__a);
      v109 = common::tools::PTree::get<unsigned int>(v416, &v577, 0x249F0u);
      if ( *(_BYTE *)(((unsigned __int64)&this->warn_home_bin_len >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->warn_home_bin_len >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->warn_home_bin_len);
      }
      this->warn_home_bin_len = v109;
      std::string::~string(&v577);
      std::allocator<char>::~allocator(&__a);
      v417 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v578, "<xmlattr>.max_home_bin_len", &__a);
      v110 = common::tools::PTree::get<unsigned int>(v417, &v578, 0x2BF20u);
      if ( *(_BYTE *)(((unsigned __int64)&this->max_home_bin_len >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 28) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->max_home_bin_len >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->max_home_bin_len);
      }
      this->max_home_bin_len = v110;
      std::string::~string(&v578);
      std::allocator<char>::~allocator(&__a);
      v418 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v579, "<xmlattr>.player_save_when_gacha", &__a);
      v111 = common::tools::PTree::get<bool>(v418, &v579, 1);
      if ( *(char *)(((unsigned __int64)&this->is_player_save_when_gacha >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_player_save_when_gacha);
      this->is_player_save_when_gacha = v111;
      std::string::~string(&v579);
      std::allocator<char>::~allocator(&__a);
      v419 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v580, "<xmlattr>.player_save_when_recharge", &__a);
      v112 = common::tools::PTree::get<bool>(v419, &v580, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_player_save_when_recharge);
      }
      this->is_player_save_when_recharge = v112;
      std::string::~string(&v580);
      std::allocator<char>::~allocator(&__a);
      v420 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v581, "<xmlattr>.is_async_save", &__a);
      v113 = common::tools::PTree::get<bool>(v420, &v581, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 34) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_async_save);
      }
      this->is_async_save = v113;
      std::string::~string(&v581);
      std::allocator<char>::~allocator(&__a);
      v421 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 752));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v582, "<xmlattr>.is_gacha_player_save_check_item_type", &__a);
      v114 = common::tools::PTree::get<bool>(v421, &v582, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_gacha_player_save_check_item_type);
      }
      this->is_gacha_player_save_check_item_type = v114;
      std::string::~string(&v582);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v660,
      "Root.ClientDataVersionNotLatestBanMp",
      &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 784)) )
    {
      v422 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 784));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v583, "<xmlattr>.open", &__a);
      v115 = common::tools::PTree::get<bool>(v422, &v583, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_mp >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 79) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_mp >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_client_data_version_not_latest_ban_mp);
      }
      this->is_client_data_version_not_latest_ban_mp = v115;
      std::string::~string(&v583);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(
      (std::string *const)&v660,
      "Root.ClientDataVersionNotLatestBanGCG",
      &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 816)) )
    {
      v423 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 816));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v584, "<xmlattr>.open", &__a);
      v116 = common::tools::PTree::get<bool>(v423, &v584, 1);
      if ( *(char *)(((unsigned __int64)&this->is_client_data_version_not_latest_ban_gcg >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_client_data_version_not_latest_ban_gcg);
      this->is_client_data_version_not_latest_ban_gcg = v116;
      std::string::~string(&v584);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.AbilityConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 848)) )
    {
      v424 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 848));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v585, "<xmlattr>.is_find_entity_same_scene_with_dead", &__a);
      v117 = common::tools::PTree::get<bool>(v424, &v585, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_find_entity_same_scene_with_dead);
      }
      this->is_find_entity_same_scene_with_dead = v117;
      std::string::~string(&v585);
      std::allocator<char>::~allocator(&__a);
      v425 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 848));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v586, "<xmlattr>.is_entity_id_circle_kick_out", &__a);
      v118 = common::tools::PTree::get<bool>(v425, &v586, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_entity_id_circle_kick_out);
      }
      this->is_entity_id_circle_kick_out = v118;
      std::string::~string(&v586);
      std::allocator<char>::~allocator(&__a);
      v426 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 848));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v587, "<xmlattr>.is_client_anticheat_report_open", &__a);
      v119 = common::tools::PTree::get<bool>(v426, &v587, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_client_anticheat_report_open);
      }
      this->is_client_anticheat_report_open = v119;
      std::string::~string(&v587);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.UnionPacket", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 880)) )
    {
      v427 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 880));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v588, "<xmlattr>.max_freq", &__a);
      v120 = common::tools::PTree::get<unsigned int>(v427, &v588, 0x1F40u);
      if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_max_freq >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->union_packet_max_freq >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->union_packet_max_freq);
      }
      this->union_packet_max_freq = v120;
      std::string::~string(&v588);
      std::allocator<char>::~allocator(&__a);
      v428 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 880));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v589, "<xmlattr>.union_notify_max_freq", &__a);
      v121 = common::tools::PTree::get<unsigned int>(v428, &v589, 0xC8u);
      if ( *(_BYTE *)(((unsigned __int64)&this->union_notify_max_freq >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_notify_max_freq >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&this->union_notify_max_freq);
      }
      this->union_notify_max_freq = v121;
      std::string::~string(&v589);
      std::allocator<char>::~allocator(&__a);
      v429 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 880));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v590, "<xmlattr>.combat_notify_max_freq", &__a);
      v122 = common::tools::PTree::get<unsigned int>(v429, &v590, 0x5DCu);
      if ( *(_BYTE *)(((unsigned __int64)&this->combat_notify_max_freq >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->combat_notify_max_freq >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->combat_notify_max_freq);
      }
      this->combat_notify_max_freq = v122;
      std::string::~string(&v590);
      std::allocator<char>::~allocator(&__a);
      v430 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 880));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v591, "<xmlattr>.union_packet_kick_cheat_count", &__a);
      v123 = common::tools::PTree::get<unsigned int>(v430, &v591, 0xAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->union_packet_kick_cheat_count >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 108) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->union_packet_kick_cheat_count >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&this->union_packet_kick_cheat_count);
      }
      this->union_packet_kick_cheat_count = v123;
      std::string::~string(&v591);
      std::allocator<char>::~allocator(&__a);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.CustomDungeon", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 912)) )
    {
      v431 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v592, "<xmlattr>.cache_timeout", &__a);
      v124 = common::tools::PTree::get<unsigned int>(v431, &v592, 0x3Cu);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_cache_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_cache_timeout);
      }
      this->custom_dungeon_cache_timeout = v124;
      std::string::~string(&v592);
      std::allocator<char>::~allocator(&__a);
      v432 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v593, "<xmlattr>.enable_layout_check", &__a);
      v125 = common::tools::PTree::get<bool>(v432, &v593, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3)
                                                           + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_enable_custom_dungeon_layout_check);
      }
      this->is_enable_custom_dungeon_layout_check = v125;
      std::string::~string(&v593);
      std::allocator<char>::~allocator(&__a);
      v433 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v594, "<xmlattr>.min_enter_interval", &__a);
      v126 = common::tools::PTree::get<unsigned int>(v433, &v594, 1u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_enter_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_min_enter_interval);
      }
      this->custom_dungeon_min_enter_interval = v126;
      std::string::~string(&v594);
      std::allocator<char>::~allocator(&__a);
      v434 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v595, "<xmlattr>.min_recommend_interval", &__a);
      v127 = common::tools::PTree::get<unsigned int>(v434, &v595, 1u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_recommend_interval >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 92) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_recommend_interval >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_min_recommend_interval);
      }
      this->custom_dungeon_min_recommend_interval = v127;
      std::string::~string(&v595);
      std::allocator<char>::~allocator(&__a);
      v435 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v596, "<xmlattr>.min_social_interval", &__a);
      v128 = common::tools::PTree::get<unsigned int>(v435, &v596, 1u);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_min_social_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->custom_dungeon_min_social_interval);
      }
      this->custom_dungeon_min_social_interval = v128;
      std::string::~string(&v596);
      std::allocator<char>::~allocator(&__a);
      v436 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v597, "<xmlattr>.store_cache_timeout", &__a);
      v129 = common::tools::PTree::get<unsigned int>(v436, &v597, 0x3Cu);
      if ( *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_store_cache_timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->custom_dungeon_store_cache_timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->custom_dungeon_store_cache_timeout);
      }
      this->custom_dungeon_store_cache_timeout = v129;
      std::string::~string(&v597);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      419);
    v130 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             &v660,
             (const char (*)[35])"load custom dungeon cache_timeout:");
    v131 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v130,
             &this->custom_dungeon_cache_timeout);
    v132 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v131, (const char (*)[16])", check layout:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 100) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_custom_dungeon_layout_check >> 3)
                                                         + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_enable_custom_dungeon_layout_check);
    }
    v133 = common::milog::MiLogStream::operator<<(v132, this->is_enable_custom_dungeon_layout_check);
    v134 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v133,
             (const char (*)[22])", min_enter_interval:");
    v135 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v134,
             &this->custom_dungeon_min_enter_interval);
    v136 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v135,
             (const char (*)[26])", min_recommend_interval:");
    v137 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v136,
             &this->custom_dungeon_min_recommend_interval);
    v138 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v137,
             (const char (*)[23])", min_social_interval:");
    v139 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v138,
             &this->custom_dungeon_min_social_interval);
    v140 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
             v139,
             (const char (*)[23])", store cache_timeout:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v140,
      &this->custom_dungeon_store_cache_timeout);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.GCGConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 944)) )
    {
      v437 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 944));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v598, "<xmlattr>.gcg_game_create_timeout", &__a);
      v141 = common::tools::PTree::get<unsigned int>(v437, &v598, 0xAu);
      if ( *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->gcg_game_create_timeout >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->gcg_game_create_timeout);
      }
      this->gcg_game_create_timeout = v141;
      std::string::~string(&v598);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        431);
      v142 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               &v660,
               (const char (*)[30])"load gcg_game_create_timeout:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v142, &this->gcg_game_create_timeout);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      435);
    v143 = common::milog::MiLogStream::operator<<<char [47],(char *[47])0>(
             &v660,
             (const char (*)[47])"load save time config, max_save_time_interval:");
    v144 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v143, &this->max_save_time_interval);
    v145 = common::milog::MiLogStream::operator<<<char [28],(char *[28])0>(
             v144,
             (const char (*)[28])", timer_save_time_interval:");
    v146 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v145, &this->timer_save_time_interval);
    v147 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v146,
             (const char (*)[26])", home_max_save_interval:");
    v148 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v147,
             &this->home_max_save_time_interval);
    v149 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             v148,
             (const char (*)[33])", home_timer_save_time_interval:");
    v150 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v149,
             &this->home_timer_save_time_interval);
    v151 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v150,
             (const char (*)[38])", allow_send_save_proto_cost_time_ms:");
    v152 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v151,
             &this->allow_send_save_proto_cost_time_ms);
    v153 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
             v152,
             (const char (*)[43])", hard_limit_send_save_proto_cost_time_ms:");
    v154 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v153,
             &this->hard_limit_send_save_proto_cost_time_ms);
    v155 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
             v154,
             (const char (*)[30])", normal_save_check_interval:");
    v156 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v155,
             &this->normal_save_check_interval);
    v157 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v156,
             (const char (*)[32])", shutdown_save_check_interval:");
    v158 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v157,
             &this->shutdown_save_check_interval);
    v159 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             v158,
             (const char (*)[40])", player_save_timeout_after_send_proto:");
    v160 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v159,
             &this->player_save_timeout_after_send_proto);
    v161 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             v160,
             (const char (*)[41])", player_save_timeout_max_cooldown_expo:");
    v162 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v161,
             &this->player_save_timeout_max_cooldown_expo);
    v163 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             v162,
             (const char (*)[38])", home_save_timeout_after_send_proto:");
    v164 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v163,
             &this->home_save_timeout_after_send_proto);
    v165 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v164,
             (const char (*)[39])", home_save_timeout_max_cooldown_expo:");
    v166 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v165,
             &this->home_save_timeout_max_cooldown_expo);
    v167 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
             v166,
             (const char (*)[31])", home_no_player_destroy_time:");
    v168 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v167,
             &this->home_no_player_destroy_time);
    v169 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v168, (const char (*)[16])", warn_bin_len:");
    v170 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v169, &this->warn_bin_len);
    v171 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v170, (const char (*)[15])", max_bin_len:");
    v172 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v171, &this->max_bin_len);
    v173 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
             v172,
             (const char (*)[22])", warn_block_bin_len:");
    v174 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v173, &this->warn_block_bin_len);
    v175 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v174,
             (const char (*)[21])", max_block_bin_len:");
    v176 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v175, &this->max_block_bin_len);
    v177 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v176,
             (const char (*)[20])", warn_sum_bin_len:");
    v178 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v177, &this->warn_sum_bin_len);
    v179 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
             v178,
             (const char (*)[19])", max_sum_bin_len:");
    v180 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v179, &this->max_sum_bin_len);
    v181 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
             v180,
             (const char (*)[21])", warn_home_bin_len:");
    v182 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v181, &this->warn_home_bin_len);
    v183 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v182,
             (const char (*)[20])", max_home_bin_len:");
    v184 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v183, &this->max_home_bin_len);
    v185 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v184,
             (const char (*)[29])", is_player_save_when_gacha:");
    if ( *(char *)(((unsigned __int64)&this->is_player_save_when_gacha >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_player_save_when_gacha);
    v186 = common::milog::MiLogStream::operator<<(v185, this->is_player_save_when_gacha);
    v187 = common::milog::MiLogStream::operator<<<char [32],(char *[32])0>(
             v186,
             (const char (*)[32])", is_player_save_when_recharge:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 33) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_player_save_when_recharge >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_player_save_when_recharge);
    }
    v188 = common::milog::MiLogStream::operator<<(v187, this->is_player_save_when_recharge);
    v189 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v188, (const char (*)[17])", is_async_save:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 34) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_async_save >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_async_save);
    }
    v190 = common::milog::MiLogStream::operator<<(v189, this->is_async_save);
    v191 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
             v190,
             (const char (*)[40])", is_gacha_player_save_check_item_type:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 35) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_gacha_player_save_check_item_type >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_gacha_player_save_check_item_type);
    }
    v192 = common::milog::MiLogStream::operator<<(v191, this->is_gacha_player_save_check_item_type);
    v193 = common::milog::MiLogStream::operator<<<char [39],(char *[39])0>(
             v192,
             (const char (*)[39])", is_find_entity_same_scene_with_dead:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 81) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_find_entity_same_scene_with_dead >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_find_entity_same_scene_with_dead);
    }
    v194 = common::milog::MiLogStream::operator<<(v193, this->is_find_entity_same_scene_with_dead);
    v195 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             v194,
             (const char (*)[35])", is_is_entity_id_circle_kick_out:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 82) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_entity_id_circle_kick_out >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_entity_id_circle_kick_out);
    }
    v196 = common::milog::MiLogStream::operator<<(v195, this->is_entity_id_circle_kick_out);
    v197 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
             v196,
             (const char (*)[35])", is_client_anticheat_report_open:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 83) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_client_anticheat_report_open >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_client_anticheat_report_open);
    }
    v198 = common::milog::MiLogStream::operator<<(v197, this->is_client_anticheat_report_open);
    v199 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v198,
             (const char (*)[25])", union_packet_max_freq:");
    v200 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v199, &this->union_packet_max_freq);
    v201 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
             v200,
             (const char (*)[25])", union_notify_max_freq:");
    v202 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v201, &this->union_notify_max_freq);
    v203 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v202,
             (const char (*)[26])", combat_notify_max_freq:");
    v204 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v203, &this->combat_notify_max_freq);
    v205 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             v204,
             (const char (*)[33])", union_packet_kick_cheat_count:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v205, &this->union_packet_kick_cheat_count);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( Config::loadVisionConfig(this, &this->pt) )
    {
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        471);
      common::milog::MiLogStream::operator()(&v660, "loadVisionConfig failed", anti_cheat_max_damage_percentage);
      common::milog::MiLogStream::~MiLogStream(&v660);
      v2 = -1;
LABEL_552:
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 944));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 912));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 880));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 848));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 816));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 784));
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 752));
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 112));
LABEL_553:
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 720));
      goto LABEL_554;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "WordFilter", &__a);
    common::tools::PTree::getChildOptional((const common::tools::PTree *const)(v3 + 112), (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 976)) )
    {
      v438 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 976));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v599, "<xmlattr>.is_use_remote", &__a);
      v206 = common::tools::PTree::get<bool>(v438, &v599, 0);
      if ( *(char *)(((unsigned __int64)&this->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_word_filter_use_remote);
      this->is_word_filter_use_remote = v206;
      std::string::~string(&v599);
      std::allocator<char>::~allocator(&__a);
      v439 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 976));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v600, "<xmlattr>.is_ssl", &__a);
      v207 = common::tools::PTree::get<bool>(v439, &v600, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3)
                                                         + 0x7FFF8000) )
      {
        __asan_report_store1(&this->remote_word_filter_is_ssl);
      }
      this->remote_word_filter_is_ssl = v207;
      std::string::~string(&v600);
      std::allocator<char>::~allocator(&__a);
      v440 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 976));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v601, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v440, &v601, (std::string *)(v3 + 1616));
      std::string::operator=(&this->remote_word_filter_host, &v660);
      std::string::~string(&v660);
      std::string::~string(&v601);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v441 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 976));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v602, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v441, &v602, (std::string *)(v3 + 1616));
      std::string::operator=(&this->remote_word_filter_port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v602);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v442 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 976));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v603, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v442, &v603, (std::string *)(v3 + 1616));
      std::string::operator=(&this->remote_word_filter_uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v603);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      484);
    v208 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
             &v660,
             (const char (*)[52])"load word_filter config, is_word_filter_use_remote:");
    if ( *(char *)(((unsigned __int64)&this->is_word_filter_use_remote >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_word_filter_use_remote);
    v209 = common::milog::MiLogStream::operator<<(v208, this->is_word_filter_use_remote);
    v210 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
             v209,
             (const char (*)[29])", remote_word_filter_is_ssl:");
    if ( *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 9) & 7) >= *(_BYTE *)(((unsigned __int64)&this->remote_word_filter_is_ssl >> 3)
                                                       + 0x7FFF8000) )
    {
      __asan_report_load1(&this->remote_word_filter_is_ssl);
    }
    v211 = common::milog::MiLogStream::operator<<(v210, this->remote_word_filter_is_ssl);
    v212 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             v211,
             (const char (*)[27])", remote_word_filter_host:");
    v213 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v212, &this->remote_word_filter_host);
    v214 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             v213,
             (const char (*)[27])", remote_word_filter_port:");
    v215 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v214, &this->remote_word_filter_port);
    v216 = common::milog::MiLogStream::operator<<<char [26],(char *[26])0>(
             v215,
             (const char (*)[26])", remote_word_filter_uri:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v216, &this->remote_word_filter_uri);
    common::milog::MiLogStream::~MiLogStream(&v660);
    if ( Config::loadItemLimitConfig(this, &this->pt) )
    {
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        493);
      common::milog::MiLogStream::operator()(&v660, "loadItemLimitConfig failed", anti_cheat_max_damage_percentage);
      common::milog::MiLogStream::~MiLogStream(&v660);
      v2 = -1;
LABEL_551:
      std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 976));
      goto LABEL_552;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.SecurityConfig", &__a);
    common::tools::PTree::getChild(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( SecurityUtils::loadSecurityConfig((const common::tools::PTree *)(v3 + 144), &this->security_config) )
    {
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        501);
      common::milog::MiLogStream::operator()(&v660, "loadSecurityConfig fails", anti_cheat_max_damage_percentage);
      common::milog::MiLogStream::~MiLogStream(&v660);
      v2 = -1;
LABEL_550:
      common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 144));
      goto LABEL_551;
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.ItemOutputConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1008)) )
    {
      v443 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1008));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v604, "<xmlattr>.is_output_limit_can_alarm", &__a);
      v217 = common::tools::PTree::get<bool>(v443, &v604, 1);
      if ( *(char *)(((unsigned __int64)&this->is_output_limit_can_alarm >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_output_limit_can_alarm);
      this->is_output_limit_can_alarm = v217;
      std::string::~string(&v604);
      std::allocator<char>::~allocator(&__a);
      v444 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1008));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v605, "<xmlattr>.is_output_control_can_alarm", &__a);
      v218 = common::tools::PTree::get<bool>(v444, &v605, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_output_control_can_alarm);
      }
      this->is_output_control_can_alarm = v218;
      std::string::~string(&v605);
      std::allocator<char>::~allocator(&__a);
      v445 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1008));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v606, "<xmlattr>.is_enable_extra_white_list", &__a);
      v219 = common::tools::PTree::get<bool>(v445, &v606, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 86) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_enable_extra_white_list);
      }
      this->is_enable_extra_white_list = v219;
      std::string::~string(&v606);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      513);
    if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 86) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_enable_extra_white_list);
    }
    is_enable_extra_white_list = this->is_enable_extra_white_list;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 87) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_output_control_can_alarm >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_output_control_can_alarm);
    }
    is_output_control_can_alarm = this->is_output_control_can_alarm;
    if ( *(char *)(((unsigned __int64)&this->is_output_limit_can_alarm >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_output_limit_can_alarm);
    common::milog::MiLogStream::operator()(
      &v660,
      "load ItemOutputConfig, is_output_limit_can_alarm=%u is_output_control_can_alarm=%u is_enable_extra_white_list=%u",
      this->is_output_limit_can_alarm,
      is_output_control_can_alarm,
      is_enable_extra_white_list);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "PushTags", &__a);
    common::tools::PTree::getChildOptional((const common::tools::PTree *const)(v3 + 112), (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1040)) )
    {
      v446 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1040));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v607, "<xmlattr>.is_ssl", &__a);
      v222 = common::tools::PTree::get<bool>(v446, &v607, 0);
      if ( *(char *)(((unsigned __int64)&this->push_tags_is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->push_tags_is_ssl);
      this->push_tags_is_ssl = v222;
      std::string::~string(&v607);
      std::allocator<char>::~allocator(&__a);
      v447 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1040));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v608, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v447, &v608, (std::string *)(v3 + 1616));
      std::string::operator=(&this->push_tags_host, &v660);
      std::string::~string(&v660);
      std::string::~string(&v608);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v448 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1040));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v609, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v448, &v609, (std::string *)(v3 + 1616));
      std::string::operator=(&this->push_tags_port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v609);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v449 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1040));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v610, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v449, &v610, (std::string *)(v3 + 1616));
      std::string::operator=(&this->push_tags_uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v610);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      526);
    v223 = common::milog::MiLogStream::operator<<<char [41],(char *[41])0>(
             &v660,
             (const char (*)[41])"load push_tags config, push_tags_is_ssl:");
    if ( *(char *)(((unsigned __int64)&this->push_tags_is_ssl >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->push_tags_is_ssl);
    v224 = common::milog::MiLogStream::operator<<(v223, this->push_tags_is_ssl);
    v225 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             v224,
             (const char (*)[18])", push_tags_host:");
    v226 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v225, &this->push_tags_host);
    v227 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             v226,
             (const char (*)[18])", push_tags_port:");
    v228 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v227, &this->push_tags_port);
    v229 = common::milog::MiLogStream::operator<<<char [17],(char *[17])0>(v228, (const char (*)[17])", push_tags_uri:");
    common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v229, &this->push_tags_uri);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.TrackingIOConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1072)) )
    {
      v450 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1072));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v611, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v450, &v611, (std::string *)(v3 + 1616));
      std::string::operator=(&this->tracking_io_config, &v660);
      std::string::~string(&v660);
      std::string::~string(&v611);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v451 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1072));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v612, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v451, &v612, (std::string *)(v3 + 1616));
      std::string::operator=(&this->tracking_io_config.port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v612);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v452 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1072));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v613, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v452, &v613, (std::string *)(v3 + 1616));
      std::string::operator=(&this->tracking_io_config.uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v613);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v453 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1072));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v614, "<xmlattr>.is_ssl", &__a);
      v230 = common::tools::PTree::get<bool>(v453, &v614, 0);
      if ( *(char *)(((unsigned __int64)&this->tracking_io_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->tracking_io_config.is_ssl);
      this->tracking_io_config.is_ssl = v230;
      std::string::~string(&v614);
      std::allocator<char>::~allocator(&__a);
      v454 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1072));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v615, "<xmlattr>.is_enable", &__a);
      v231 = common::tools::PTree::get<bool>(v454, &v615, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->tracking_io_config.is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tracking_io_config.is_enable >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->tracking_io_config.is_enable);
      }
      this->tracking_io_config.is_enable = v231;
      std::string::~string(&v615);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        541);
      v232 = common::milog::MiLogStream::operator<<<char [25],(char *[25])0>(
               &v660,
               (const char (*)[25])"load tracking_io_config:");
      v233 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v232, &this->tracking_io_config.host);
      v234 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v233, (const char (*)[2])" ");
      v235 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v234, &this->tracking_io_config.port);
      v236 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v235, (const char (*)[2])" ");
      v237 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v236, &this->tracking_io_config.uri);
      v238 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v237, (const char (*)[2])" ");
      if ( *(char *)(((unsigned __int64)&this->tracking_io_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->tracking_io_config.is_ssl);
      v239 = common::milog::MiLogStream::operator<<(v238, this->tracking_io_config.is_ssl);
      v240 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v239, (const char (*)[2])" ");
      if ( *(_BYTE *)(((unsigned __int64)&this->tracking_io_config.is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 89) & 7) >= *(_BYTE *)(((unsigned __int64)&this->tracking_io_config.is_enable >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->tracking_io_config.is_enable);
      }
      common::milog::MiLogStream::operator<<(v240, this->tracking_io_config.is_enable);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.AdjustTrackingConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1104)) )
    {
      v455 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1104));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v616, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v455, &v616, (std::string *)(v3 + 1616));
      std::string::operator=(&this->adjust_tracking_config, &v660);
      std::string::~string(&v660);
      std::string::~string(&v616);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v456 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1104));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v617, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v456, &v617, (std::string *)(v3 + 1616));
      std::string::operator=(&this->adjust_tracking_config.port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v617);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v457 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1104));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v618, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v457, &v618, (std::string *)(v3 + 1616));
      std::string::operator=(&this->adjust_tracking_config.uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v618);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v458 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1104));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v619, "<xmlattr>.is_ssl", &__a);
      v241 = common::tools::PTree::get<bool>(v458, &v619, 0);
      if ( *(char *)(((unsigned __int64)&this->adjust_tracking_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->adjust_tracking_config.is_ssl);
      this->adjust_tracking_config.is_ssl = v241;
      std::string::~string(&v619);
      std::allocator<char>::~allocator(&__a);
      v459 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1104));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v620, "<xmlattr>.is_enable", &__a);
      v242 = common::tools::PTree::get<bool>(v459, &v620, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->adjust_tracking_config.is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 63) & 7) >= *(_BYTE *)(((unsigned __int64)&this->adjust_tracking_config.is_enable >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->adjust_tracking_config.is_enable);
      }
      this->adjust_tracking_config.is_enable = v242;
      std::string::~string(&v620);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        555);
      v243 = common::milog::MiLogStream::operator<<<char [29],(char *[29])0>(
               &v660,
               (const char (*)[29])"load adjust_tracking_config:");
      v244 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v243,
               &this->adjust_tracking_config.host);
      v245 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v244, (const char (*)[2])" ");
      v246 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v245,
               &this->adjust_tracking_config.port);
      v247 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v246, (const char (*)[2])" ");
      v248 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v247,
               &this->adjust_tracking_config.uri);
      v249 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v248, (const char (*)[2])" ");
      if ( *(char *)(((unsigned __int64)&this->adjust_tracking_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->adjust_tracking_config.is_ssl);
      v250 = common::milog::MiLogStream::operator<<(v249, this->adjust_tracking_config.is_ssl);
      v251 = common::milog::MiLogStream::operator<<<char [2],(char *[2])0>(v250, (const char (*)[2])" ");
      if ( *(_BYTE *)(((unsigned __int64)&this->adjust_tracking_config.is_enable >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this - 63) & 7) >= *(_BYTE *)(((unsigned __int64)&this->adjust_tracking_config.is_enable >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->adjust_tracking_config.is_enable);
      }
      common::milog::MiLogStream::operator<<(v251, this->adjust_tracking_config.is_enable);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v621, "<xmlattr>.brief_data_upload_interval", &__a);
    v252 = common::tools::PTree::get<unsigned int>((const common::tools::PTree *const)(v3 + 112), &v621, 0x12Cu);
    if ( *(_BYTE *)(((unsigned __int64)&this->brief_data_upload_interval >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&this->brief_data_upload_interval >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_store4(&this->brief_data_upload_interval);
    }
    this->brief_data_upload_interval = v252;
    std::string::~string(&v621);
    std::allocator<char>::~allocator(&__a);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.LuaMemoryReport", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1136)) )
    {
      v460 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1136));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v622, "<xmlattr>.lua_memory_report_interval", &__a);
      v253 = common::tools::PTree::get<unsigned int>(v460, &v622, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->lua_memory_report_interval >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->lua_memory_report_interval >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->lua_memory_report_interval);
      }
      this->lua_memory_report_interval = v253;
      std::string::~string(&v622);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      568);
    v254 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
             &v660,
             (const char (*)[44])"LuaMemoryReport lua_memory_report_interval:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v254, &this->lua_memory_report_interval);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&v623, "<xmlattr>.lua_gc_interval", &__a);
    *(_DWORD *)(v3 + 32) = common::tools::PTree::get<unsigned int>(
                             (const common::tools::PTree *const)(v3 + 112),
                             &v623,
                             0x78u);
    std::string::~string(&v623);
    std::allocator<char>::~allocator(&__a);
    v255 = *(_DWORD *)(v3 + 32);
    if ( *(_BYTE *)(((unsigned __int64)&LuaScriptMgr::gc_interval >> 3) + 0x7FFF8000) != 0
      && (char)(((unsigned __int8)&LuaScriptMgr::gc_interval & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&LuaScriptMgr::gc_interval >> 3)
                                                                                   + 0x7FFF8000) )
    {
      __asan_report_store4(&LuaScriptMgr::gc_interval);
    }
    LuaScriptMgr::gc_interval = v255;
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      574);
    v256 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             &v660,
             (const char (*)[24])"config lua_gc_interval:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v256, (const unsigned int *)(v3 + 32));
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.LuaScriptCacheNumLimit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1168)) )
    {
      v461 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1168));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v624, "<xmlattr>.warn_num", &__a);
      v257 = common::tools::PTree::get<unsigned int>(v461, &v624, 0x3E8u);
      if ( *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_warn_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)LuaScriptMgr::lua_script_cache_map_warn_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_warn_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(LuaScriptMgr::lua_script_cache_map_warn_num);
      }
      LuaScriptMgr::lua_script_cache_map_warn_num[0] = v257;
      std::string::~string(&v624);
      std::allocator<char>::~allocator(&__a);
      v462 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1168));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v625, "<xmlattr>.error_num", &__a);
      v258 = common::tools::PTree::get<unsigned int>(v462, &v625, 0x7D0u);
      if ( *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_error_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)LuaScriptMgr::lua_script_cache_map_error_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_error_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(LuaScriptMgr::lua_script_cache_map_error_num);
      }
      LuaScriptMgr::lua_script_cache_map_error_num[0] = v258;
      std::string::~string(&v625);
      std::allocator<char>::~allocator(&__a);
      v463 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1168));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v626, "<xmlattr>.clear_num", &__a);
      v259 = common::tools::PTree::get<unsigned int>(v463, &v626, 0x1F4u);
      if ( *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_clear_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)LuaScriptMgr::lua_script_cache_map_clear_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_clear_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(LuaScriptMgr::lua_script_cache_map_clear_num);
      }
      LuaScriptMgr::lua_script_cache_map_clear_num[0] = v259;
      std::string::~string(&v626);
      std::allocator<char>::~allocator(&__a);
      v464 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1168));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v627, "<xmlattr>.clear_time", &__a);
      v260 = common::tools::PTree::get<unsigned int>(v464, &v627, 0x12Cu);
      if ( *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_clear_time >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)LuaScriptMgr::lua_script_cache_map_clear_time & 7) + 3) >= *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_clear_time >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(LuaScriptMgr::lua_script_cache_map_clear_time);
      }
      LuaScriptMgr::lua_script_cache_map_clear_time[0] = v260;
      std::string::~string(&v627);
      std::allocator<char>::~allocator(&__a);
      v465 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1168));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v628, "<xmlattr>.start_clear_num", &__a);
      v261 = common::tools::PTree::get<unsigned int>(v465, &v628, 0x64u);
      if ( *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_start_clear_num >> 3) + 0x7FFF8000) != 0
        && (char)(((unsigned __int8)LuaScriptMgr::lua_script_cache_map_start_clear_num & 7) + 3) >= *(_BYTE *)(((unsigned __int64)LuaScriptMgr::lua_script_cache_map_start_clear_num >> 3) + 0x7FFF8000) )
      {
        __asan_report_store4(LuaScriptMgr::lua_script_cache_map_start_clear_num);
      }
      LuaScriptMgr::lua_script_cache_map_start_clear_num[0] = v261;
      std::string::~string(&v628);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      586);
    v262 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
             &v660,
             (const char (*)[33])"LuaScriptCacheNumLimit warn_num:");
    v263 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v262,
             LuaScriptMgr::lua_script_cache_map_warn_num);
    v264 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v263, (const char (*)[12])" error_num:");
    v265 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v264,
             LuaScriptMgr::lua_script_cache_map_error_num);
    v266 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v265, (const char (*)[12])" clear_num:");
    v267 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v266,
             LuaScriptMgr::lua_script_cache_map_clear_num);
    v268 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v267, (const char (*)[13])" clear_time:");
    v269 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
             v268,
             LuaScriptMgr::lua_script_cache_map_clear_time);
    v270 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             v269,
             (const char (*)[18])" start_clear_num:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
      v270,
      LuaScriptMgr::lua_script_cache_map_start_clear_num);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.RateLimit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1200)) )
    {
      v466 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1200));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v629, "<xmlattr>.login", &__a);
      v271 = common::tools::PTree::get<unsigned int>(v466, &v629, 0x64u);
      if ( *(_BYTE *)(((unsigned __int64)&this->rate_limit_login >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 52) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->rate_limit_login >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->rate_limit_login);
      }
      this->rate_limit_login = v271;
      std::string::~string(&v629);
      std::allocator<char>::~allocator(&__a);
      v467 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1200));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v630, "<xmlattr>.is_cal_login_load", &__a);
      v272 = common::tools::PTree::get<unsigned int>(v467, &v630, 1u) != 0;
      if ( *(char *)(((unsigned __int64)&this->is_cal_login_load >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->is_cal_login_load);
      this->is_cal_login_load = v272;
      std::string::~string(&v630);
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      599);
    v273 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
             &v660,
             (const char (*)[18])"rate_limit_login:");
    v274 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v273, &this->rate_limit_login);
    v275 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
             v274,
             (const char (*)[20])" is_cal_login_load:");
    if ( *(char *)(((unsigned __int64)&this->is_cal_login_load >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_cal_login_load);
    common::milog::MiLogStream::operator<<(v275, this->is_cal_login_load);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.HomeVerify", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1232)) )
    {
      v468 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v631, "<xmlattr>.is_enable", &__a);
      v276 = common::tools::PTree::get<bool>(v468, &v631, 0);
      if ( *(char *)(((unsigned __int64)&this->home_verify_is_enable_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->home_verify_is_enable_);
      this->home_verify_is_enable_ = v276;
      std::string::~string(&v631);
      std::allocator<char>::~allocator(&__a);
      v469 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v632, "<xmlattr>.is_ssl", &__a);
      v277 = common::tools::PTree::get<bool>(v469, &v632, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->home_verify_is_ssl_);
      }
      this->home_verify_is_ssl_ = v277;
      std::string::~string(&v632);
      std::allocator<char>::~allocator(&__a);
      v470 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v633, "<xmlattr>.is_detail_log", &__a);
      v278 = common::tools::PTree::get<bool>(v470, &v633, 0);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->home_verify_is_detail_log_);
      }
      this->home_verify_is_detail_log_ = v278;
      std::string::~string(&v633);
      std::allocator<char>::~allocator(&__a);
      v471 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v634, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v471, &v634, (std::string *)(v3 + 1616));
      std::string::operator=(&this->home_verify_host_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v634);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v472 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v635, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v472, &v635, (std::string *)(v3 + 1616));
      std::string::operator=(&this->home_verify_port_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v635);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v473 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v636, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v473, &v636, (std::string *)(v3 + 1616));
      std::string::operator=(&this->home_verify_uri_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v636);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v474 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v637, "<xmlattr>.token", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v474, &v637, (std::string *)(v3 + 1616));
      std::string::operator=(&this->home_verify_token_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v637);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v475 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1232));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v638, "<xmlattr>.timeout", &__a);
      v279 = common::tools::PTree::get<unsigned int>(v475, &v638, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_timeout_ >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->home_verify_timeout_ >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->home_verify_timeout_);
      }
      this->home_verify_timeout_ = v279;
      std::string::~string(&v638);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        615);
      v280 = common::milog::MiLogStream::operator<<<char [49],(char *[49])0>(
               &v660,
               (const char (*)[49])"load home_verify config, home_verify_is_enable_:");
      if ( *(char *)(((unsigned __int64)&this->home_verify_is_enable_ >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->home_verify_is_enable_);
      v281 = common::milog::MiLogStream::operator<<(v280, this->home_verify_is_enable_);
      v282 = common::milog::MiLogStream::operator<<<char [23],(char *[23])0>(
               v281,
               (const char (*)[23])", home_verify_is_ssl_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 28) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_ssl_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->home_verify_is_ssl_);
      }
      v283 = common::milog::MiLogStream::operator<<(v282, this->home_verify_is_ssl_);
      v284 = common::milog::MiLogStream::operator<<<char [30],(char *[30])0>(
               v283,
               (const char (*)[30])", home_verify_is_detail_log_:");
      if ( *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 29) & 7) >= *(_BYTE *)(((unsigned __int64)&this->home_verify_is_detail_log_ >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_load1(&this->home_verify_is_detail_log_);
      }
      v285 = common::milog::MiLogStream::operator<<(v284, this->home_verify_is_detail_log_);
      v286 = common::milog::MiLogStream::operator<<<char [22],(char *[22])0>(
               v285,
               (const char (*)[22])", home_verify_token_:");
      v287 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v286, &this->home_verify_token_);
      v288 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v287,
               (const char (*)[21])", home_verify_host_:");
      v289 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v288, &this->home_verify_host_);
      v290 = common::milog::MiLogStream::operator<<<char [21],(char *[21])0>(
               v289,
               (const char (*)[21])", home_verify_port_:");
      v291 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v290, &this->home_verify_port_);
      v292 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
               v291,
               (const char (*)[20])", home_verify_uri_:");
      v293 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v292, &this->home_verify_uri_);
      v294 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
               v293,
               (const char (*)[24])", home_verify_timeout_:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v294, &this->home_verify_timeout_);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.NicknameSignAudit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1264)) )
    {
      v476 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v639, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v476, &v639, (std::string *)(v3 + 1616));
      std::string::operator=(&this->nickname_sign_audit_config_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v639);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v477 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v640, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v477, &v640, (std::string *)(v3 + 1616));
      std::string::operator=(&this->nickname_sign_audit_config_.port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v640);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v478 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v641, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v478, &v641, (std::string *)(v3 + 1616));
      std::string::operator=(&this->nickname_sign_audit_config_.uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v641);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v479 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v642, "<xmlattr>.is_ssl", &__a);
      v295 = common::tools::PTree::get<bool>(v479, &v642, 0);
      if ( *(char *)(((unsigned __int64)&this->nickname_sign_audit_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->nickname_sign_audit_config_.is_ssl);
      this->nickname_sign_audit_config_.is_ssl = v295;
      std::string::~string(&v642);
      std::allocator<char>::~allocator(&__a);
      v480 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v643, "<xmlattr>.timeout", &__a);
      v296 = common::tools::PTree::get<unsigned int>(v480, &v643, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->nickname_sign_audit_config_.timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 36) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->nickname_sign_audit_config_.timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->nickname_sign_audit_config_.timeout);
      }
      this->nickname_sign_audit_config_.timeout = v296;
      std::string::~string(&v643);
      std::allocator<char>::~allocator(&__a);
      v481 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v644, "<xmlattr>.language", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v481, &v644, (std::string *)(v3 + 1616));
      std::string::operator=(&this->nickname_sign_audit_config_.language, &v660);
      std::string::~string(&v660);
      std::string::~string(&v644);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v482 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1264));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v645, "<xmlattr>.queue_key", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v482, &v645, (std::string *)(v3 + 1616));
      std::string::operator=(&this->nickname_sign_audit_config_.queue_key, &v660);
      std::string::~string(&v660);
      std::string::~string(&v645);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        636);
      v297 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v660,
               (const char (*)[40])" load nickname_sign_audit config, host:");
      v298 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v297,
               &this->nickname_sign_audit_config_.host);
      v299 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v298, (const char (*)[8])", port:");
      v300 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v299,
               &this->nickname_sign_audit_config_.port);
      v301 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v300, (const char (*)[7])", uri:");
      v302 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v301,
               &this->nickname_sign_audit_config_.uri);
      v303 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v302, (const char (*)[10])", is_ssl:");
      if ( *(char *)(((unsigned __int64)&this->nickname_sign_audit_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->nickname_sign_audit_config_.is_ssl);
      v304 = common::milog::MiLogStream::operator<<(v303, this->nickname_sign_audit_config_.is_ssl);
      v305 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v304, (const char (*)[11])", timeout:");
      v306 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v305,
               &this->nickname_sign_audit_config_.timeout);
      v307 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v306, (const char (*)[12])", language:");
      v308 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v307,
               &this->nickname_sign_audit_config_.language);
      v309 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v308, (const char (*)[13])", queue_key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v309,
        &this->nickname_sign_audit_config_.queue_key);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.AvatarRenameAudit", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1296)) )
    {
      v483 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v646, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v483, &v646, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v646);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v484 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v647, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v484, &v647, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_.port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v647);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v485 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v648, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v485, &v648, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_.uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v648);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v486 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v649, "<xmlattr>.is_ssl", &__a);
      v310 = common::tools::PTree::get<bool>(v486, &v649, 0);
      if ( *(char *)(((unsigned __int64)&this->avatar_rename_audit_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->avatar_rename_audit_config_.is_ssl);
      this->avatar_rename_audit_config_.is_ssl = v310;
      std::string::~string(&v649);
      std::allocator<char>::~allocator(&__a);
      v487 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v650, "<xmlattr>.timeout", &__a);
      v311 = common::tools::PTree::get<unsigned int>(v487, &v650, 5u);
      if ( *(_BYTE *)(((unsigned __int64)&this->avatar_rename_audit_config_.timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this - 116) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->avatar_rename_audit_config_.timeout >> 3)
                                                             + 0x7FFF8000) )
      {
        __asan_report_store4(&this->avatar_rename_audit_config_.timeout);
      }
      this->avatar_rename_audit_config_.timeout = v311;
      std::string::~string(&v650);
      std::allocator<char>::~allocator(&__a);
      v488 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v651, "<xmlattr>.language", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v488, &v651, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_.language, &v660);
      std::string::~string(&v660);
      std::string::~string(&v651);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v489 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v652, "<xmlattr>.quest_queue_key", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v489, &v652, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_.quest_queue_key, &v660);
      std::string::~string(&v660);
      std::string::~string(&v652);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v490 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1296));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v653, "<xmlattr>.item_queue_key", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v490, &v653, (std::string *)(v3 + 1616));
      std::string::operator=(&this->avatar_rename_audit_config_.item_queue_key, &v660);
      std::string::~string(&v660);
      std::string::~string(&v653);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        657);
      v312 = common::milog::MiLogStream::operator<<<char [40],(char *[40])0>(
               &v660,
               (const char (*)[40])" load avatar_rename_audit config, host:");
      v313 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v312,
               &this->avatar_rename_audit_config_.host);
      v314 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v313, (const char (*)[8])", port:");
      v315 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v314,
               &this->avatar_rename_audit_config_.port);
      v316 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v315, (const char (*)[7])", uri:");
      v317 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v316,
               &this->avatar_rename_audit_config_.uri);
      v318 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v317, (const char (*)[10])", is_ssl:");
      if ( *(char *)(((unsigned __int64)&this->avatar_rename_audit_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->avatar_rename_audit_config_.is_ssl);
      v319 = common::milog::MiLogStream::operator<<(v318, this->avatar_rename_audit_config_.is_ssl);
      v320 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v319, (const char (*)[11])", timeout:");
      v321 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
               v320,
               &this->avatar_rename_audit_config_.timeout);
      v322 = common::milog::MiLogStream::operator<<<char [12],(char *[12])0>(v321, (const char (*)[12])", language:");
      v323 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v322,
               &this->avatar_rename_audit_config_.language);
      v324 = common::milog::MiLogStream::operator<<<char [19],(char *[19])0>(
               v323,
               (const char (*)[19])", quest_queue_key:");
      v325 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v324,
               &this->avatar_rename_audit_config_.quest_queue_key);
      v326 = common::milog::MiLogStream::operator<<<char [18],(char *[18])0>(
               v325,
               (const char (*)[18])", item_queue_key:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
        v326,
        &this->avatar_rename_audit_config_.item_queue_key);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.QueryIpRegion", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1328)) )
    {
      v491 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1328));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v654, "<xmlattr>.host", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v491, &v654, (std::string *)(v3 + 1616));
      std::string::operator=(&this->query_ip_region_config_, &v660);
      std::string::~string(&v660);
      std::string::~string(&v654);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v492 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1328));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v655, "<xmlattr>.port", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v492, &v655, (std::string *)(v3 + 1616));
      std::string::operator=(&this->query_ip_region_config_.port, &v660);
      std::string::~string(&v660);
      std::string::~string(&v655);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v493 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1328));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1616), byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(&v656, "<xmlattr>.uri", &v502);
      common::tools::PTree::get<std::string>((std::string *)&v660, v493, &v656, (std::string *)(v3 + 1616));
      std::string::operator=(&this->query_ip_region_config_.uri, &v660);
      std::string::~string(&v660);
      std::string::~string(&v656);
      std::allocator<char>::~allocator(&v502);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&__a);
      v494 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1328));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v657, "<xmlattr>.is_ssl", &__a);
      v327 = common::tools::PTree::get<bool>(v494, &v657, 0);
      if ( *(char *)(((unsigned __int64)&this->query_ip_region_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_store1(&this->query_ip_region_config_.is_ssl);
      this->query_ip_region_config_.is_ssl = v327;
      std::string::~string(&v657);
      std::allocator<char>::~allocator(&__a);
      v495 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1328));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v658, "<xmlattr>.timeout", &__a);
      v328 = common::tools::PTree::get<unsigned int>(v495, &v658, 1u);
      if ( *(_BYTE *)(((unsigned __int64)&this->query_ip_region_config_.timeout >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)this + 84) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&this->query_ip_region_config_.timeout >> 3)
                                                            + 0x7FFF8000) )
      {
        __asan_report_store4(&this->query_ip_region_config_.timeout);
      }
      this->query_ip_region_config_.timeout = v328;
      std::string::~string(&v658);
      std::allocator<char>::~allocator(&__a);
      common::milog::MiLogStream::create(
        &v660,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "loadSystemConfig",
        676);
      v329 = common::milog::MiLogStream::operator<<<char [36],(char *[36])0>(
               &v660,
               (const char (*)[36])" load query_ip_region config, host:");
      v330 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v329,
               &this->query_ip_region_config_.host);
      v331 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(v330, (const char (*)[8])", port:");
      v332 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v331,
               &this->query_ip_region_config_.port);
      v333 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v332, (const char (*)[7])", uri:");
      v334 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
               v333,
               &this->query_ip_region_config_.uri);
      v335 = common::milog::MiLogStream::operator<<<char [10],(char *[10])0>(v334, (const char (*)[10])", is_ssl:");
      if ( *(char *)(((unsigned __int64)&this->query_ip_region_config_.is_ssl >> 3) + 0x7FFF8000) < 0 )
        __asan_report_load1(&this->query_ip_region_config_.is_ssl);
      v336 = common::milog::MiLogStream::operator<<(v335, this->query_ip_region_config_.is_ssl);
      v337 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(v336, (const char (*)[11])", timeout:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
        v337,
        &this->query_ip_region_config_.timeout);
      common::milog::MiLogStream::~MiLogStream(&v660);
    }
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.Grid", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1360)) )
    {
      v496 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1360));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&v659, "<xmlattr>.is_destory", &__a);
      Config::grid_config.is_destory = common::tools::PTree::get<bool>(v496, &v659, 1);
      std::string::~string(&v659);
      std::allocator<char>::~allocator(&__a);
      v497 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1360));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)(v3 + 1552), "<xmlattr>.is_use_pool", &__a);
      Config::grid_config.is_use_pool = common::tools::PTree::get<bool>(v497, (const std::string *)(v3 + 1552), 1);
      std::string::~string((void *)(v3 + 1552));
      std::allocator<char>::~allocator(&__a);
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      690);
    v338 = common::milog::MiLogStream::operator<<<char [27],(char *[27])0>(
             &v660,
             (const char (*)[27])"load grid opt, is_destory:");
    v339 = common::milog::MiLogStream::operator<<(v338, Config::grid_config.is_destory);
    v340 = common::milog::MiLogStream::operator<<<char [14],(char *[14])0>(v339, (const char (*)[14])" is_use_pool:");
    common::milog::MiLogStream::operator<<(v340, Config::grid_config.is_use_pool);
    common::milog::MiLogStream::~MiLogStream(&v660);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>((std::string *const)&v660, "Root.NewLanguageConfig", &__a);
    common::tools::PTree::getChildOptional(&this->pt, (const std::string *)&v660);
    std::string::~string(&v660);
    std::allocator<char>::~allocator(&__a);
    if ( std::optional<common::tools::PTree>::has_value((const std::optional<common::tools::PTree> *const)(v3 + 1392)) )
    {
      v498 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1392));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)&v660,
        "<xmlattr>.is_enable_setting_new_language",
        &__a);
      v341 = common::tools::PTree::get<bool>(v498, (const std::string *)&v660, 1);
      if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 69) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_enable_setting_new_language);
      }
      this->is_enable_setting_new_language = v341;
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      v499 = std::optional<common::tools::PTree>::operator->((std::optional<common::tools::PTree> *const)(v3 + 1392));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v660, byte_257A0640, &__a);
      std::allocator<char>::allocator(&v502);
      std::string::basic_string<std::allocator<char>>(
        (std::string *const)(v3 + 1616),
        "<xmlattr>.new_language_type_list",
        &v502);
      common::tools::PTree::get<std::string>(
        (std::string *)(v3 + 1552),
        v499,
        (const std::string *)(v3 + 1616),
        (std::string *)&v660);
      std::string::~string((void *)(v3 + 1616));
      std::allocator<char>::~allocator(&v502);
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      std::vector<std::string>::vector((std::vector<std::string> *const)(v3 + 1424));
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>((std::string *const)&v660, " ", &__a);
      LOBYTE(v499) = common::tools::StringUtils::split(
                       (const std::string *)(v3 + 1552),
                       (const std::string *)&v660,
                       (std::vector<std::string> *)(v3 + 1424),
                       0) != 0;
      std::string::~string(&v660);
      std::allocator<char>::~allocator(&__a);
      if ( (_BYTE)v499 )
      {
        common::milog::MiLogStream::create(
          &v660,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadSystemConfig",
          702);
        common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
          &v660,
          (const char (*)[38])"split new_language_type_list_str fail");
        common::milog::MiLogStream::~MiLogStream(&v660);
        v2 = -1;
        v500 = 0;
      }
      else
      {
        __for_range_3 = (std::vector<std::string> *)(v3 + 1424);
        __for_begin._M_current = std::vector<std::string>::begin((std::vector<std::string> *const)(v3 + 1424))._M_current;
        __for_end._M_current = std::vector<std::string>::end(__for_range_3)._M_current;
        while ( __gnu_cxx::operator!=<std::string *,std::vector<std::string>>(&__for_begin, &__for_end) )
        {
          language_type_str = __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator*(&__for_begin);
          *(_DWORD *)(v3 + 48) = 0;
          if ( !proto::LanguageType_Parse(language_type_str, (proto::LanguageType *)(v3 + 48)) || !*(_DWORD *)(v3 + 48) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)(v3 + 1616),
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadSystemConfig",
              711);
            v343 = common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
                     (common::milog::MiLogStream *const)(v3 + 1616),
                     (const char (*)[31])"parse fail, language_type_str:");
            common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v343, language_type_str);
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)(v3 + 1616));
            v2 = -1;
LABEL_539:
            v500 = 0;
            goto LABEL_541;
          }
          *(_DWORD *)(v3 + 64) = *(_DWORD *)(v3 + 48);
          v344 = std::set<unsigned int>::insert(
                   &this->new_language_type_set,
                   (std::set<unsigned int>::value_type *)(v3 + 64));
          if ( !v344.second )
          {
            common::milog::MiLogStream::create(
              &v660,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadSystemConfig",
              716);
            v345 = common::milog::MiLogStream::operator<<<char [44],(char *[44])0>(
                     &v660,
                     (const char (*)[44])"duplicate language_type, language_type_str:");
            v346 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v345, language_type_str);
            v347 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(
                     v346,
                     (const char (*)[16])" language_type:");
            common::milog::MiLogStream::operator<<<proto::LanguageType,(proto::LanguageType*)0>(
              v347,
              (const proto::LanguageType *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream(&v660);
            v2 = -1;
            goto LABEL_539;
          }
          __gnu_cxx::__normal_iterator<std::string *,std::vector<std::string>>::operator++(&__for_begin);
        }
        v500 = 1;
      }
LABEL_541:
      std::vector<std::string>::~vector((std::vector<std::string> *const)(v3 + 1424));
      std::string::~string((void *)(v3 + 1552));
      if ( v500 != 1 )
        goto LABEL_549;
    }
    else
    {
      if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3) + 0x7FFF8000) != 0
        && (((unsigned __int8)this + 69) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3)
                                                          + 0x7FFF8000) )
      {
        __asan_report_store1(&this->is_enable_setting_new_language);
      }
      this->is_enable_setting_new_language = 1;
      *(_DWORD *)(v3 + 64) = 14;
      std::set<unsigned int>::insert(&this->new_language_type_set, (std::set<unsigned int>::value_type *)(v3 + 64));
      *(_DWORD *)(v3 + 64) = 15;
      std::set<unsigned int>::insert(&this->new_language_type_set, (std::set<unsigned int>::value_type *)(v3 + 64));
    }
    common::milog::MiLogStream::create(
      &v660,
      &common::milog::MiLogDefault::default_log_obj_,
      2u,
      "./src/config/config.cpp",
      "loadSystemConfig",
      728);
    v348 = common::milog::MiLogStream::operator<<<char [50],(char *[50])0>(
             &v660,
             (const char (*)[50])"NewLanguageConfig is_enable_setting_new_language:");
    if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this + 69) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_setting_new_language >> 3)
                                                        + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_enable_setting_new_language);
    }
    v349 = common::milog::MiLogStream::operator<<(v348, this->is_enable_setting_new_language);
    v350 = common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
             v349,
             (const char (*)[24])" new_language_type_set:");
    common::milog::MiLogStream::operator<<<unsigned int>(v350, &this->new_language_type_set);
    common::milog::MiLogStream::~MiLogStream(&v660);
    v2 = 0;
LABEL_549:
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1392));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1360));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1328));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1296));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1264));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1232));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1200));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1168));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1136));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1104));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1072));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1040));
    std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 1008));
    goto LABEL_550;
  }
  common::milog::MiLogStream::create(
    &v660,
    &common::milog::MiLogDefault::default_log_obj_,
    4u,
    "./src/config/config.cpp",
    "loadSystemConfig",
    90);
  common::milog::MiLogStream::operator<<<char [31],(char *[31])0>(
    &v660,
    (const char (*)[31])"is_internal_server is empty!!!");
  common::milog::MiLogStream::~MiLogStream(&v660);
  v2 = -1;
LABEL_555:
  std::string::~string((void *)(v3 + 1488));
  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 80));
  std::optional<common::tools::PTree>::~optional((std::optional<common::tools::PTree> *const)(v3 + 176));
LABEL_556:
  if ( v661 == (char *)v3 )
  {
    *(_QWORD *)((v3 >> 3) + 0x7FFF8000) = 0LL;
    *(_QWORD *)((v3 >> 3) + 0x7FFF80CC) = 0LL;
    memset(
      (void *)((unsigned __int64)(v5 + 536862722) & 0xFFFFFFFFFFFFFFF8LL),
      0,
      8LL * ((((_DWORD)v5 + 2147450880 - (((_DWORD)v5 + 2147450888) & 0xFFFFFFF8) + 212) & 0xFFFFFFF8) >> 3));
    *(_DWORD *)((v3 >> 3) + 0x7FFF80D8) = 0;
  }
  else
  {
    *(_QWORD *)v3 = 1172321806LL;
    __asan_stack_free_5(v3, 1760LL, v661);
  }
  return v2;
};

// Line 734: range 0000000015590114-0000000015590A81
int32_t __cdecl Config::loadVisionConfig(Config *const this, const common::tools::PTree *root)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r13
  __int64 v4; // rax
  _DWORD *v5; // r12
  common::tools::PTree *p_second; // r15
  const char *v7; // rax
  const char *v8; // rax
  int v9; // r15d
  common::tools::PTree *v10; // r15
  common::tools::PTree *v11; // r15
  common::milog::MiLogStream *v12; // rax
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-179h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+28h] [rbp-178h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+30h] [rbp-170h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+38h] [rbp-168h]
  const std::pair<std::string,common::tools::PTree> *pt; // [rsp+40h] [rbp-160h]
  std::string child_name; // [rsp+50h] [rbp-150h] BYREF
  char v24[304]; // [rsp+70h] [rbp-130h] BYREF

  v3 = (unsigned __int64)v24;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_2(256LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "6 48 4 14 level_type:749 64 4 16 vision_range:755 80 4 14 grid_width:756 96 8 18 vision_list_pt:"
                        "735 128 24 11 pt_list:745 192 32 13 level_str:748";
  *(_QWORD *)(v3 + 16) = Config::loadVisionConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -234556943;
  v5[536862722] = -234556924;
  v5[536862723] = -218959360;
  v5[536862724] = -234881024;
  v5[536862725] = -218959118;
  v5[536862727] = -202116109;
  common::tools::PTree::PTree((common::tools::PTree *const)(v3 + 96));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.VisionList", &__a);
  common::tools::PTree::getChild(root, &child_name);
  common::tools::PTree::operator=((common::tools::PTree *const)(v3 + 96), (common::tools::PTree *)&__for_end);
  common::tools::PTree::~PTree((common::tools::PTree *const)&__for_end);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  common::tools::PTree::getAllChild[abi:cxx11](
    (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128),
    (const common::tools::PTree *const)(v3 + 96));
  __for_range = (std::list<std::pair<std::string,common::tools::PTree>> *)(v3 + 128);
  __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128))._M_node;
  __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
    p_second = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.level", &__a);
    common::tools::PTree::get<std::string>((std::string *)(v3 + 192), p_second, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v7 = (const char *)std::string::c_str(v3 + 192);
    if ( data::enumStrToVal(v7, (data::VisionLevelType *)(v3 + 48)) )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadVisionConfig",
        752);
      v8 = (const char *)std::string::c_str(v3 + 192);
      common::milog::MiLogStream::operator()(
        (common::milog::MiLogStream *const)&child_name,
        "%s enumStrToVal failed",
        v8);
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v2 = -1;
      v9 = 0;
    }
    else
    {
      v10 = &pt->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.vision_range", &__a);
      *(_DWORD *)(v3 + 64) = common::tools::PTree::get<unsigned int>(v10, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
      v11 = &pt->second;
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.grid_width", &__a);
      *(_DWORD *)(v3 + 80) = common::tools::PTree::get<unsigned int>(v11, &child_name);
      std::string::~string(&child_name);
      std::allocator<char>::~allocator(&__a);
      if ( *(_DWORD *)(v3 + 64) && *(_DWORD *)(v3 + 80) )
      {
        if ( *(_DWORD *)(v3 + 80) * (*(_DWORD *)(v3 + 64) / *(_DWORD *)(v3 + 80)) == *(_DWORD *)(v3 + 64) )
        {
          if ( 0x3E8u % *(_DWORD *)(v3 + 80) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadVisionConfig",
              769);
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)&child_name,
              "least_common_multiple_of_grid_width / grid_width: %u divide not exactly!",
              *(unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v2 = -1;
            v9 = 0;
          }
          else if ( HK4EDesignConfig::rewriteVisionConfig(
                      &this->design_config,
                      *(data::VisionLevelType *)(v3 + 48),
                      *(_DWORD *)(v3 + 80),
                      *(_DWORD *)(v3 + 64)) )
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              4u,
              "./src/config/config.cpp",
              "loadVisionConfig",
              774);
            common::milog::MiLogStream::operator()(
              (common::milog::MiLogStream *const)&child_name,
              "rewriteVisionConfig fail. level_type: %d",
              *(unsigned int *)(v3 + 48));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v2 = -1;
            v9 = 0;
          }
          else
          {
            common::milog::MiLogStream::create(
              (common::milog::MiLogStream *)&child_name,
              &common::milog::MiLogDefault::default_log_obj_,
              1u,
              "./src/config/config.cpp",
              "loadVisionConfig",
              777);
            v12 = common::milog::MiLogStream::operator<<<char [8],(char *[8])0>(
                    (common::milog::MiLogStream *const)&child_name,
                    (const char (*)[8])"level: ");
            v13 = common::milog::MiLogStream::operator<<<data::VisionLevelType,(data::VisionLevelType*)0>(
                    v12,
                    (const data::VisionLevelType *)(v3 + 48));
            v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" range: ");
            v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(
                    v14,
                    (const unsigned int *)(v3 + 64));
            v16 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v15, (const char (*)[9])" width: ");
            common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 80));
            common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
            v9 = 1;
          }
        }
        else
        {
          common::milog::MiLogStream::create(
            (common::milog::MiLogStream *)&child_name,
            &common::milog::MiLogDefault::default_log_obj_,
            4u,
            "./src/config/config.cpp",
            "loadVisionConfig",
            764);
          common::milog::MiLogStream::operator()(
            (common::milog::MiLogStream *const)&child_name,
            "sight_range: %u / grid_width: %u divide not exactly!",
            *(unsigned int *)(v3 + 64),
            *(unsigned int *)(v3 + 80));
          common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
          v2 = -1;
          v9 = 0;
        }
      }
      else
      {
        common::milog::MiLogStream::create(
          (common::milog::MiLogStream *)&child_name,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadVisionConfig",
          759);
        common::milog::MiLogStream::operator()(
          (common::milog::MiLogStream *const)&child_name,
          "vision_range or grid_width is 0!");
        common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
        v2 = -1;
        v9 = 0;
      }
    }
    std::string::~string((void *)(v3 + 192));
    if ( v9 != 1 )
      goto LABEL_21;
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
  }
  v2 = 0;
LABEL_21:
  std::list<std::pair<std::string,common::tools::PTree>>::~list((std::list<std::pair<std::string,common::tools::PTree>> *const)(v3 + 128));
  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 96));
  result = v2;
  if ( v24 == (char *)v3 )
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

// Line 784: range 0000000015590A82-0000000015590D54
std::string *__cdecl Config::findRegionGameBiz[abi:cxx11](std::string *retstr, const Config *const this)
{
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v2; // rax
  common::milog::MiLogStream *v3; // rax
  common::milog::MiLogStream *v4; // rax
  std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::element_type *v5; // rax
  common::milog::MiLogStream *v6; // rax
  std::allocator<char> __a; // [rsp+1Fh] [rbp-51h] BYREF
  const data::DbRegionConfig *region_config_ptr; // [rsp+20h] [rbp-50h]
  const data::DbAreaConfig *area_config_ptr; // [rsp+28h] [rbp-48h]
  std::shared_ptr<Config> v11; // [rsp+30h] [rbp-40h] BYREF
  common::milog::MiLogStream v12; // [rsp+40h] [rbp-30h] BYREF

  ServiceBox::findService<GameserverService>();
  GameserverService::getConfig((GameserverService *const)&v11);
  v2 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                        &v2->design_config.db_config_mgr.db_deploy_config_mgr,
                        &this->region_name);
  std::shared_ptr<Config>::~shared_ptr(&v11);
  if ( region_config_ptr )
  {
    ServiceBox::findService<GameserverService>();
    GameserverService::getConfig((GameserverService *const)&v11);
    v5 = std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)&v11);
    area_config_ptr = DbDeployConfigMgr::findDbAreaConfig(
                        &v5->design_config.db_config_mgr.db_deploy_config_mgr,
                        &region_config_ptr->area_type);
    std::shared_ptr<Config>::~shared_ptr(&v11);
    if ( area_config_ptr )
    {
      std::string::basic_string(retstr, &area_config_ptr->business);
    }
    else
    {
      common::milog::MiLogStream::create(
        &v12,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "findRegionGameBiz",
        794);
      v6 = common::milog::MiLogStream::operator<<<char [38],(char *[38])0>(
             &v12,
             (const char (*)[38])"area_config not found. area_type_str:");
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v6, &region_config_ptr->area_type);
      common::milog::MiLogStream::~MiLogStream(&v12);
      std::allocator<char>::allocator(&__a);
      std::string::basic_string<std::allocator<char>>(retstr, byte_257A0640, &__a);
      std::allocator<char>::~allocator(&__a);
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v12,
      &common::milog::MiLogDefault::default_log_obj_,
      3u,
      "./src/config/config.cpp",
      "findRegionGameBiz",
      788);
    v3 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(
           &v12,
           (const char (*)[20])"findDbRegionConfig ");
    v4 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v3, &this->region_name);
    common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v4, (const char (*)[7])" fails");
    common::milog::MiLogStream::~MiLogStream(&v12);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(retstr, byte_257A0640, &__a);
    std::allocator<char>::~allocator(&__a);
  }
  return retstr;
};

// Line 801: range 0000000015590D56-0000000015590D7E
uint32_t __cdecl Config::findVisionRange(const Config *const this, data::VisionLevelType type)
{
  return HK4EDesignConfig::findVisionRange(&this->design_config, type);
};

// Line 806: range 0000000015590D80-0000000015590DA8
uint32_t __cdecl Config::findGridWidth(const Config *const this, data::VisionLevelType type)
{
  return HK4EDesignConfig::findGridWidth(&this->design_config, type);
};

// Line 812: range 0000000015590DAA-0000000015591476
int32_t __cdecl Config::loadDesignConfig(Config *const this, ConfigPtr *p_prev_config_ptr)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  bool v5; // r13
  common::milog::MiLogStream *v6; // rax
  int32_t result; // eax
  HK4EDesignConfig *p_design_config; // rcx
  bool is_readlink; // r13
  bool v10; // r13
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v13; // rax
  const char *v15; // rax
  HK4EDesignConfig *prev_design_config_ptr; // [rsp+18h] [rbp-B8h]
  std::shared_ptr<ScriptLib> __r; // [rsp+20h] [rbp-B0h] BYREF
  std::shared_ptr<ScriptLibBase> p_script_lib_ptr; // [rsp+30h] [rbp-A0h] BYREF
  common::milog::MiLogStream v19; // [rsp+40h] [rbp-90h] BYREF
  char v20[112]; // [rsp+60h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v20;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 17 config_option:813";
  *(_QWORD *)(v2 + 16) = Config::loadDesignConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  Flag<ConfigOption>::Flag((Flag<ConfigOption> *const)(v2 + 32), create_mesh, load_rebate);
  if ( *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3) + 0x7FFF8000) != 0
    && (((unsigned __int8)this - 86) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_enable_extra_white_list >> 3)
                                                      + 0x7FFF8000) )
  {
    __asan_report_load1(&this->is_enable_extra_white_list);
  }
  if ( this->is_enable_extra_white_list )
    Flag<ConfigOption>::setOption((Flag<ConfigOption> *const)(v2 + 32), enable_extra_white_list);
  common::tools::perf::make_shared<ScriptLib>();
  std::shared_ptr<ScriptLibBase>::shared_ptr<ScriptLib,void>(&p_script_lib_ptr, &__r);
  v5 = HK4EDesignConfig::init(&this->design_config, &p_script_lib_ptr, (const Flag<ConfigOption> *)(v2 + 32)) != 0;
  std::shared_ptr<ScriptLibBase>::~shared_ptr(&p_script_lib_ptr);
  std::shared_ptr<ScriptLib>::~shared_ptr(&__r);
  if ( v5 )
  {
    common::milog::MiLogStream::create(
      &v19,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "loadDesignConfig",
      820);
    v6 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"[CONFIG_ERROR] ");
    common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(v6, (const char (*)[24])"initDesignConfig failed");
    common::milog::MiLogStream::~MiLogStream(&v19);
    result = -1;
  }
  else
  {
    HK4EDesignConfig::setItemOutputLimitMap(&this->design_config, &this->item_output_limit_map);
    HK4EDesignConfig::setRegionName(&this->design_config, &this->region_name);
    p_design_config = &this->design_config;
    if ( *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) != 0
      && (((unsigned __int8)this - 84) & 7) >= *(_BYTE *)(((unsigned __int64)&this->is_audit >> 3) + 0x7FFF8000) )
    {
      __asan_report_load1(&this->is_audit);
    }
    HK4EDesignConfig::setIsAudit(p_design_config, this->is_audit);
    if ( *(char *)(((unsigned __int64)&this->design_config.is_do_lua_static_check >> 3) + 0x7FFF8000) < 0 )
      __asan_report_store1(&this->design_config.is_do_lua_static_check);
    this->design_config.is_do_lua_static_check = 0;
    prev_design_config_ptr = 0LL;
    if ( std::operator!=<Config>(0LL, p_prev_config_ptr) )
      prev_design_config_ptr = &std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false>::operator->((const std::__shared_ptr_access<Config,(__gnu_cxx::_Lock_policy)2,false,false> *const)p_prev_config_ptr)->design_config;
    if ( *(char *)(((unsigned __int64)&this->is_readlink >> 3) + 0x7FFF8000) < 0 )
      __asan_report_load1(&this->is_readlink);
    is_readlink = this->is_readlink;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::shared_ptr(
      (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr,
      &ResourceBox::mysql_mgr_ptr);
    v10 = HK4EDesignConfig::loadDesignConfig(
            &this->design_config,
            (std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *)&p_script_lib_ptr,
            prev_design_config_ptr,
            is_readlink) != 0;
    std::shared_ptr<common::midb::MySqlMgrT<std::mutex>>::~shared_ptr((std::shared_ptr<common::midb::MySqlMgrT<std::mutex> > *const)&p_script_lib_ptr);
    if ( v10 )
    {
      common::milog::MiLogStream::create(
        &v19,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "loadDesignConfig",
        837);
      v11 = common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(&v19, (const char (*)[16])"[CONFIG_ERROR] ");
      common::milog::MiLogStream::operator<<<char [24],(char *[24])0>(
        v11,
        (const char (*)[24])"loadDesignConfig failed");
      common::milog::MiLogStream::~MiLogStream(&v19);
      result = -1;
    }
    else
    {
      if ( (unsigned __int8)std::string::empty(&this->region_name) != 1
        && !DbDeployConfigMgr::findDbRegionConfig(
              &this->design_config.db_config_mgr.db_deploy_config_mgr,
              &this->region_name) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadDesignConfig",
          843);
        v13 = common::milog::MiLogStream::operator<<<char [52],(char *[52])0>(
                &v19,
                (const char (*)[52])"db_config_mgr findDbRegionConfig failed for region:");
        common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v13, &this->region_name);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      if ( (unsigned __int8)std::string::empty(&this->region_name) != 1
        && DbDeployConfigMgr::findRegionIdByRegionName(
             &this->design_config.db_config_mgr.db_deploy_config_mgr,
             &this->region_name,
             &this->region_id) )
      {
        common::milog::MiLogStream::create(
          &v19,
          &common::milog::MiLogDefault::default_log_obj_,
          4u,
          "./src/config/config.cpp",
          "loadDesignConfig",
          849);
        v15 = (const char *)std::string::c_str(&this->region_name);
        common::milog::MiLogStream::operator()(&v19, "load %s region_id failed", v15);
        common::milog::MiLogStream::~MiLogStream(&v19);
      }
      result = 0;
    }
  }
  if ( v20 == (char *)v2 )
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

// Line 856: range 0000000015591478-00000000155917C9
int32_t __cdecl Config::assembleSystemConfig(Config *const this)
{
  const char *v1; // rax
  DbDeployConfigMgr *p_db_deploy_config_mgr; // rcx
  const char *v4; // rax
  common::milog::MiLogStream *v5; // rax
  uint32_t app_id; // ecx
  common::milog::MiLogStream *v7; // rax
  const data::DbRegionConfig *region_config_ptr; // [rsp+10h] [rbp-40h]
  const data::DbSdkConfig *sdk_config_ptr; // [rsp+18h] [rbp-38h]
  common::milog::MiLogStream v10; // [rsp+20h] [rbp-30h] BYREF

  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                        &this->design_config.db_config_mgr.db_deploy_config_mgr,
                        &this->region_name);
  if ( region_config_ptr )
  {
    p_db_deploy_config_mgr = &this->design_config.db_config_mgr.db_deploy_config_mgr;
    if ( *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) != 0
      && *(_BYTE *)(((unsigned __int64)&region_config_ptr->sdk_env >> 3) + 0x7FFF8000) <= 3 )
    {
      __asan_report_load4(&region_config_ptr->sdk_env);
    }
    sdk_config_ptr = DbDeployConfigMgr::findSdkConfig(p_db_deploy_config_mgr, region_config_ptr->sdk_env);
    if ( sdk_config_ptr )
    {
      std::string::operator=(&this->push_tags_app_secret, &sdk_config_ptr->account_key);
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "assembleSystemConfig",
        872);
      v5 = common::milog::MiLogStream::operator<<<char [48],(char *[48])0>(&v10, (const char (*)[48])off_25811720);
      common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v5, &this->push_tags_app_secret);
      common::milog::MiLogStream::~MiLogStream(&v10);
      if ( *(_BYTE *)(((unsigned __int64)&sdk_config_ptr->app_id >> 3) + 0x7FFF8000) != 0
        && (char)((((_BYTE)sdk_config_ptr + 4) & 7) + 3) >= *(_BYTE *)(((unsigned __int64)&sdk_config_ptr->app_id >> 3)
                                                                     + 0x7FFF8000) )
      {
        __asan_report_load4(&sdk_config_ptr->app_id);
      }
      app_id = sdk_config_ptr->app_id;
      if ( *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) != 0
        && *(_BYTE *)(((unsigned __int64)&this->app_id >> 3) + 0x7FFF8000) <= 3 )
      {
        __asan_report_store4(&this->app_id);
      }
      this->app_id = app_id;
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        2u,
        "./src/config/config.cpp",
        "assembleSystemConfig",
        875);
      v7 = common::milog::MiLogStream::operator<<<char [20],(char *[20])0>(&v10, (const char (*)[20])off_25811780);
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v7, &this->app_id);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return 0;
    }
    else
    {
      common::milog::MiLogStream::create(
        &v10,
        &common::milog::MiLogDefault::default_log_obj_,
        4u,
        "./src/config/config.cpp",
        "assembleSystemConfig",
        867);
      v4 = (const char *)std::string::c_str(&this->region_name);
      common::milog::MiLogStream::operator()(&v10, "findSdkConfig fails, region_name: %s", v4);
      common::milog::MiLogStream::~MiLogStream(&v10);
      return -1;
    }
  }
  else
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      4u,
      "./src/config/config.cpp",
      "assembleSystemConfig",
      860);
    v1 = (const char *)std::string::c_str(&this->region_name);
    common::milog::MiLogStream::operator()(&v10, "findDbRegionConfig %s fails", v1);
    common::milog::MiLogStream::~MiLogStream(&v10);
    return -1;
  }
};

// Line 881: range 00000000155917CA-0000000015591A5D
void __cdecl Config::onReloadConfig(Config *const this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rax
  _DWORD *v3; // r12
  GameserverService *v4; // r14
  GameserverService *v5; // r14
  std::allocator<char> __a; // [rsp+1Fh] [rbp-C1h] BYREF
  std::shared_ptr<proto::ReloadConfigNotify> p_proto_ptr; // [rsp+20h] [rbp-C0h] BYREF
  std::string remote_ip; // [rsp+30h] [rbp-B0h] BYREF
  char v9[144]; // [rsp+50h] [rbp-90h] BYREF

  v1 = (unsigned __int64)v9;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v2 = __asan_stack_malloc_1(96LL);
    if ( v2 )
      v1 = v2;
  }
  *(_QWORD *)v1 = 1102416563LL;
  *(_QWORD *)(v1 + 8) = "2 32 16 21 reload_notify_ptr:889 64 16 14 notify_ptr:896";
  *(_QWORD *)(v1 + 16) = Config::onReloadConfig;
  v3 = (_DWORD *)(v1 >> 3);
  v3[536862720] = -235802127;
  v3[536862721] = -219021312;
  v3[536862722] = -202178560;
  if ( ServiceBox::findService<GameserverService>() )
  {
    common::tools::perf::make_shared<proto::ReloadConfigNotify>();
    v4 = ServiceBox::findService<GameserverService>();
    std::shared_ptr<proto::ReloadConfigNotify>::shared_ptr(
      &p_proto_ptr,
      (const std::shared_ptr<proto::ReloadConfigNotify> *)(v1 + 32));
    GameserverService::broadcastToAllThread<proto::ReloadConfigNotify>(v4, &p_proto_ptr);
    std::shared_ptr<proto::ReloadConfigNotify>::~shared_ptr(&p_proto_ptr);
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&remote_ip, byte_257A0640, &__a);
    LOBYTE(v4) = Config::isStopServerConfig(this, &remote_ip);
    std::string::~string(&remote_ip);
    std::allocator<char>::~allocator(&__a);
    if ( (_BYTE)v4 )
    {
      common::tools::perf::make_shared<proto::StopServerConfigNotify>();
      v5 = ServiceBox::findService<GameserverService>();
      std::shared_ptr<proto::StopServerConfigNotify>::shared_ptr(
        (std::shared_ptr<proto::StopServerConfigNotify> *const)&p_proto_ptr,
        (const std::shared_ptr<proto::StopServerConfigNotify> *)(v1 + 64));
      GameserverService::broadcastToAllThread<proto::StopServerConfigNotify>(
        v5,
        (std::shared_ptr<proto::StopServerConfigNotify> *)&p_proto_ptr);
      std::shared_ptr<proto::StopServerConfigNotify>::~shared_ptr((std::shared_ptr<proto::StopServerConfigNotify> *const)&p_proto_ptr);
      std::shared_ptr<proto::StopServerConfigNotify>::~shared_ptr((std::shared_ptr<proto::StopServerConfigNotify> *const)(v1 + 64));
    }
    std::shared_ptr<proto::ReloadConfigNotify>::~shared_ptr((std::shared_ptr<proto::ReloadConfigNotify> *const)(v1 + 32));
  }
  if ( v9 == (char *)v1 )
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

// Line 902: range 0000000015591A5E-0000000015591C00
bool __cdecl Config::isStopServerConfig(const Config *const this, const std::string *remote_ip)
{
  bool result; // al
  common::milog::MiLogStream *v4; // rdx
  common::milog::MiLogStream *v5; // rax
  const google::protobuf::Timestamp *v6; // rax
  const google::protobuf::Timestamp *v7; // rax
  uint32_t now; // [rsp+1Ch] [rbp-54h]
  const data::DbRegionConfig *region_config_ptr; // [rsp+30h] [rbp-40h]
  common::milog::MiLogStream v10; // [rsp+40h] [rbp-30h] BYREF

  region_config_ptr = DbDeployConfigMgr::findDbRegionConfig(
                        &this->design_config.db_config_mgr.db_deploy_config_mgr,
                        &this->region_name);
  if ( !region_config_ptr )
    return 0;
  if ( (unsigned __int8)std::string::empty(remote_ip) != 1
    && (DbDeployConfigMgr::isLoginWhiteIp(&this->design_config.db_config_mgr.db_deploy_config_mgr, remote_ip)
     || data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
          &this->design_config.db_config_mgr.db_local_config_mgr.stop_server_login_white_ip_config_mgr,
          remote_ip)) )
  {
    common::milog::MiLogStream::create(
      &v10,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "isStopServerConfig",
      915);
    v4 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v10, (const char (*)[11])"remote_ip:");
    v5 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v4, remote_ip);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v5, (const char (*)[16])" login white ip");
    common::milog::MiLogStream::~MiLogStream(&v10);
    return 0;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    v6 = proto::StopServerConfig::begin_time(&region_config_ptr->stop_server_config);
    result = 0;
    if ( google::protobuf::Timestamp::seconds(v6) < now )
    {
      v7 = proto::StopServerConfig::end_time(&region_config_ptr->stop_server_config);
      if ( now < google::protobuf::Timestamp::seconds(v7) )
        return 1;
    }
  }
  return result;
};

// Line 925: range 0000000015591C02-0000000015591DAD
bool __cdecl Config::isStopVersionConfig(
        const Config *const this,
        const std::string *version,
        uint32_t channel_id,
        uint32_t sub_channel_id,
        const std::string *remote_ip)
{
  bool result; // al
  common::milog::MiLogStream *v7; // rdx
  common::milog::MiLogStream *v8; // rax
  const google::protobuf::Timestamp *v9; // rax
  const google::protobuf::Timestamp *v10; // rax
  uint32_t now; // [rsp+2Ch] [rbp-54h]
  const data::DbClientChannelIdConfig *client_channel_id_config_ptr; // [rsp+40h] [rbp-40h]
  common::milog::MiLogStream v14; // [rsp+50h] [rbp-30h] BYREF

  client_channel_id_config_ptr = DbDeployConfigMgr::findDbClientChannelIdConfig(
                                   &this->design_config.db_config_mgr.db_deploy_config_mgr,
                                   version,
                                   channel_id,
                                   sub_channel_id);
  if ( !client_channel_id_config_ptr )
    return 0;
  if ( (unsigned __int8)std::string::empty(remote_ip) != 1
    && (DbDeployConfigMgr::isLoginWhiteIp(&this->design_config.db_config_mgr.db_deploy_config_mgr, remote_ip)
     || data::DbStopServerLoginWhiteIpConfigMgr::isIpInWhiteList(
          &this->design_config.db_config_mgr.db_local_config_mgr.stop_server_login_white_ip_config_mgr,
          remote_ip)) )
  {
    common::milog::MiLogStream::create(
      &v14,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "isStopVersionConfig",
      938);
    v7 = common::milog::MiLogStream::operator<<<char [11],(char *[11])0>(&v14, (const char (*)[11])"remote_ip:");
    v8 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(v7, remote_ip);
    common::milog::MiLogStream::operator<<<char [16],(char *[16])0>(v8, (const char (*)[16])" login white ip");
    common::milog::MiLogStream::~MiLogStream(&v14);
    return 0;
  }
  else
  {
    now = common::tools::TimeUtils::getNow();
    v9 = proto::StopServerConfig::begin_time(&client_channel_id_config_ptr->stop_server_config);
    result = 0;
    if ( google::protobuf::Timestamp::seconds(v9) < now )
    {
      v10 = proto::StopServerConfig::end_time(&client_channel_id_config_ptr->stop_server_config);
      if ( now < google::protobuf::Timestamp::seconds(v10) )
        return 1;
    }
  }
  return result;
};

// Line 948: range 0000000015591DAE-00000000155925ED
int32_t __cdecl Config::loadItemLimitConfig(Config *const this, const common::tools::PTree *root)
{
  int32_t v2; // r14d
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  _DWORD *v5; // r13
  common::tools::PTree *p_second; // r15
  common::tools::PTree *v7; // r15
  common::tools::PTree *v8; // r15
  common::tools::PTree *v9; // r15
  ItemOutputLimitConfig *v10; // r8
  std::pair<std::_Rb_tree_iterator<std::pair<unsigned int const,ItemOutputLimitConfig> >,bool> v11; // rax
  common::milog::MiLogStream *v12; // rax
  int v13; // r15d
  common::milog::MiLogStream *v14; // rax
  common::milog::MiLogStream *v15; // rax
  common::milog::MiLogStream *v16; // rax
  common::milog::MiLogStream *v17; // rax
  common::milog::MiLogStream *v18; // rax
  common::milog::MiLogStream *v19; // rax
  common::milog::MiLogStream *v20; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-F9h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_begin; // [rsp+28h] [rbp-F8h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>>::iterator __for_end; // [rsp+30h] [rbp-F0h] BYREF
  std::list<std::pair<std::string,common::tools::PTree>> *__for_range; // [rsp+38h] [rbp-E8h]
  const std::pair<std::string,common::tools::PTree> *pt; // [rsp+40h] [rbp-E0h]
  std::list<std::pair<std::string,common::tools::PTree>> v27; // [rsp+50h] [rbp-D0h] BYREF
  std::string child_name; // [rsp+70h] [rbp-B0h] BYREF
  char v29[144]; // [rsp+90h] [rbp-90h] BYREF

  v3 = (unsigned __int64)v29;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v4 = __asan_stack_malloc_1(96LL);
    if ( v4 )
      v3 = v4;
  }
  *(_QWORD *)v3 = 1102416563LL;
  *(_QWORD *)(v3 + 8) = "2 32 8 24 item_output_limit_pt:949 64 16 28 item_output_limit_config:956";
  *(_QWORD *)(v3 + 16) = Config::loadItemLimitConfig;
  v5 = (_DWORD *)(v3 >> 3);
  v5[536862720] = -235802127;
  v5[536862721] = -218959360;
  v5[536862722] = -202178560;
  common::tools::PTree::PTree((common::tools::PTree *const)(v3 + 32));
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.ItemOutputLimit", &__a);
  common::tools::PTree::getChild(root, &child_name);
  common::tools::PTree::operator=((common::tools::PTree *const)(v3 + 32), (common::tools::PTree *)&__for_end);
  common::tools::PTree::~PTree((common::tools::PTree *const)&__for_end);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::map<unsigned int,ItemOutputLimitConfig>::clear(&this->item_output_limit_map);
  common::tools::PTree::getAllChild[abi:cxx11](&v27, (const common::tools::PTree *const)(v3 + 32));
  __for_range = &v27;
  __for_begin._M_node = std::list<std::pair<std::string,common::tools::PTree>>::begin(&v27)._M_node;
  __for_end._M_node = std::list<std::pair<std::string,common::tools::PTree>>::end(__for_range)._M_node;
  while ( std::operator!=(&__for_begin, &__for_end) )
  {
    pt = std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator*(&__for_begin);
    *(_DWORD *)(v3 + 64) = 0;
    *(_DWORD *)(v3 + 68) = 0;
    *(_DWORD *)(v3 + 72) = 0;
    *(_DWORD *)(v3 + 76) = 0;
    p_second = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.item_id", &__a);
    *(_DWORD *)(v3 + 64) = common::tools::PTree::get<unsigned int>(p_second, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v7 = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.reward_limit", &__a);
    *(_DWORD *)(v3 + 68) = common::tools::PTree::get<unsigned int>(v7, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v8 = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.drop_limit", &__a);
    *(_DWORD *)(v3 + 72) = common::tools::PTree::get<unsigned int>(v8, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v9 = &pt->second;
    std::allocator<char>::allocator(&__a);
    std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.mail_limit", &__a);
    *(_DWORD *)(v3 + 76) = common::tools::PTree::get<unsigned int>(v9, &child_name);
    std::string::~string(&child_name);
    std::allocator<char>::~allocator(&__a);
    v11 = std::map<unsigned int,ItemOutputLimitConfig>::emplace<unsigned int &,ItemOutputLimitConfig&>(
            &this->item_output_limit_map,
            (unsigned int *)(v3 + 64),
            (ItemOutputLimitConfig *)(v3 + 64),
            (unsigned int *)&this->item_output_limit_map,
            v10);
    if ( !v11.second )
    {
      common::milog::MiLogStream::create(
        (common::milog::MiLogStream *)&child_name,
        &common::milog::MiLogDefault::default_log_obj_,
        3u,
        "./src/config/config.cpp",
        "loadItemLimitConfig",
        963);
      v12 = common::milog::MiLogStream::operator<<<char [43],(char *[43])0>(
              (common::milog::MiLogStream *const)&child_name,
              (const char (*)[43])"duplicate item_output_limit node, item_id:");
      common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v12, (const unsigned int *)(v3 + 64));
      common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
      v2 = -1;
      v13 = 0;
      goto LABEL_10;
    }
    common::milog::MiLogStream::create(
      (common::milog::MiLogStream *)&child_name,
      &common::milog::MiLogDefault::default_log_obj_,
      1u,
      "./src/config/config.cpp",
      "loadItemLimitConfig",
      966);
    v14 = common::milog::MiLogStream::operator<<<char [33],(char *[33])0>(
            (common::milog::MiLogStream *const)&child_name,
            (const char (*)[33])"load item_output_limit, item_id:");
    v15 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v14, (const unsigned int *)(v3 + 64));
    v16 = common::milog::MiLogStream::operator<<<char [15],(char *[15])0>(v15, (const char (*)[15])" reward_limit:");
    v17 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v16, (const unsigned int *)(v3 + 68));
    v18 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v17, (const char (*)[13])" drop_limit:");
    v19 = common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v18, (const unsigned int *)(v3 + 72));
    v20 = common::milog::MiLogStream::operator<<<char [13],(char *[13])0>(v19, (const char (*)[13])" mail_limit:");
    common::milog::MiLogStream::operator<<<unsigned int,(unsigned int *)0>(v20, (const unsigned int *)(v3 + 76));
    common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
    std::_List_iterator<std::pair<std::string,common::tools::PTree>>::operator++(&__for_begin);
  }
  v13 = 1;
LABEL_10:
  std::list<std::pair<std::string,common::tools::PTree>>::~list(&v27);
  if ( v13 == 1 )
    v2 = 0;
  common::tools::PTree::~PTree((common::tools::PTree *const)(v3 + 32));
  result = v2;
  if ( v29 == (char *)v3 )
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

// Line 983: range 00000000155925EE-0000000015592D85
int32_t __cdecl Config::loadOutputControlMonitorConfig(Config *const this, const common::tools::PTree *root)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r13
  bool v5; // dl
  common::milog::MiLogStream *v6; // rax
  common::milog::MiLogStream *v7; // rax
  common::milog::MiLogStream *v8; // rax
  common::milog::MiLogStream *v9; // rax
  common::milog::MiLogStream *v10; // rax
  common::milog::MiLogStream *v11; // rax
  common::milog::MiLogStream *v12; // rcx
  common::milog::MiLogStream *v13; // rax
  common::milog::MiLogStream *v14; // rax
  int32_t result; // eax
  std::allocator<char> __a; // [rsp+27h] [rbp-119h] BYREF
  std::string v17; // [rsp+30h] [rbp-110h] BYREF
  std::string v18; // [rsp+50h] [rbp-F0h] BYREF
  std::string v19; // [rsp+70h] [rbp-D0h] BYREF
  std::string path; // [rsp+90h] [rbp-B0h] BYREF
  std::string child_name; // [rsp+B0h] [rbp-90h] BYREF
  char v22[112]; // [rsp+D0h] [rbp-70h] BYREF

  v2 = (unsigned __int64)v22;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 8 6 pt:986";
  *(_QWORD *)(v2 + 16) = Config::loadOutputControlMonitorConfig;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116352;
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "Root.OutputControlMonitor", &__a);
  common::tools::PTree::getChild(root, &child_name);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.host", &__a);
  common::tools::PTree::get<std::string>(&v17, (const common::tools::PTree *const)(v2 + 32), &child_name);
  std::string::operator=(&this->output_control_monitor_config, &v17);
  std::string::~string(&v17);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.port", &__a);
  common::tools::PTree::get<std::string>(&v18, (const common::tools::PTree *const)(v2 + 32), &child_name);
  std::string::operator=(&this->output_control_monitor_config.port, &v18);
  std::string::~string(&v18);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&child_name, "<xmlattr>.uri", &__a);
  common::tools::PTree::get<std::string>(&v19, (const common::tools::PTree *const)(v2 + 32), &child_name);
  std::string::operator=(&this->output_control_monitor_config.uri, &v19);
  std::string::~string(&v19);
  std::string::~string(&child_name);
  std::allocator<char>::~allocator(&__a);
  std::allocator<char>::allocator(&__a);
  std::string::basic_string<std::allocator<char>>(&path, "<xmlattr>.is_ssl", &__a);
  v5 = common::tools::PTree::get<bool>((const common::tools::PTree *const)(v2 + 32), &path, 0);
  if ( *(char *)(((unsigned __int64)&this->output_control_monitor_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_store1(&this->output_control_monitor_config.is_ssl);
  this->output_control_monitor_config.is_ssl = v5;
  std::string::~string(&path);
  std::allocator<char>::~allocator(&__a);
  if ( *(_BYTE *)(((unsigned __int64)&this->output_control_monitor_config.method >> 3) + 0x7FFF8000) != 0
    && *(_BYTE *)(((unsigned __int64)&this->output_control_monitor_config.method >> 3) + 0x7FFF8000) <= 3 )
  {
    __asan_report_store4(&this->output_control_monitor_config.method);
  }
  this->output_control_monitor_config.method = HTTP_POST;
  common::milog::MiLogStream::create(
    (common::milog::MiLogStream *)&child_name,
    &common::milog::MiLogDefault::default_log_obj_,
    1u,
    "./src/config/config.cpp",
    "loadOutputControlMonitorConfig",
    992);
  v6 = common::milog::MiLogStream::operator<<<char [35],(char *[35])0>(
         (common::milog::MiLogStream *const)&child_name,
         (const char (*)[35])"load output_control_monitor, host:");
  v7 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
         v6,
         &this->output_control_monitor_config.host);
  v8 = common::milog::MiLogStream::operator<<<char [7],(char *[7])0>(v7, (const char (*)[7])" port:");
  v9 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
         v8,
         &this->output_control_monitor_config.port);
  v10 = common::milog::MiLogStream::operator<<<char [6],(char *[6])0>(v9, (const char (*)[6])" uri:");
  v11 = common::milog::MiLogStream::operator<<<std::string,(std::string*)0>(
          v10,
          &this->output_control_monitor_config.uri);
  v12 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v11, (const char (*)[9])" is_ssl:");
  if ( *(char *)(((unsigned __int64)&this->output_control_monitor_config.is_ssl >> 3) + 0x7FFF8000) < 0 )
    __asan_report_load1(&this->output_control_monitor_config.is_ssl);
  v13 = common::milog::MiLogStream::operator<<(v12, this->output_control_monitor_config.is_ssl);
  v14 = common::milog::MiLogStream::operator<<<char [9],(char *[9])0>(v13, (const char (*)[9])" method:");
  common::milog::MiLogStream::operator<<<common::minet::http_client::HttpMethod,(common::minet::http_client::HttpMethod*)0>(
    v14,
    &this->output_control_monitor_config.method);
  common::milog::MiLogStream::~MiLogStream((common::milog::MiLogStream *const)&child_name);
  common::tools::PTree::~PTree((common::tools::PTree *const)(v2 + 32));
  result = 0;
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

// Line 1008: range 0000000015592D86-0000000015592E5C
uint32_t __fastcall Config::getSecurityPlatformTypeByPlatformType(const Config *const this, uint32_t platform_type)
{
  unsigned __int64 v2; // rbx
  __int64 v3; // rax
  unsigned __int64 v4; // r12
  uint32_t result; // eax
  char v6[96]; // [rsp+10h] [rbp-60h] BYREF

  v2 = (unsigned __int64)v6;
  if ( _asan_option_detect_stack_use_after_return )
  {
    v3 = __asan_stack_malloc_0(64LL);
    if ( v3 )
      v2 = v3;
  }
  *(_QWORD *)v2 = 1102416563LL;
  *(_QWORD *)(v2 + 8) = "1 32 4 18 platform_type:1007";
  *(_QWORD *)(v2 + 16) = Config::getSecurityPlatformTypeByPlatformType;
  v4 = v2 >> 3;
  *(_DWORD *)(v4 + 2147450880) = -235802127;
  *(_DWORD *)(v4 + 2147450884) = -202116348;
  *(_DWORD *)(v2 + 32) = platform_type;
  result = common::tools::MiscUtils::findMapWithDefaultValue<std::unordered_map<unsigned int,unsigned int>>(
             &this->security_config.safe_server_config.security_platform_map,
             (const std::unordered_map<unsigned int,unsigned int>::key_type *)(v2 + 32),
             0);
  if ( v6 == (char *)v2 )
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
